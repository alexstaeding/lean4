{
  description = "Lean development flake. Not intended for end users.";

  # We use channels so we're not affected by GitHub's rate limits
  inputs.nixpkgs.url = "https://channels.nixos.org/nixos-unstable/nixexprs.tar.xz";
  # old nixpkgs used for portable release with older glibc (2.27)
  inputs.nixpkgs-old.url = "https://channels.nixos.org/nixos-19.03/nixexprs.tar.xz";
  inputs.nixpkgs-old.flake = false;
  # old nixpkgs used for portable release with older glibc (2.26)
  inputs.nixpkgs-older.url = "https://channels.nixos.org/nixos-18.03/nixexprs.tar.xz";
  inputs.nixpkgs-older.flake = false;

  outputs =
    inputs:
    builtins.foldl' inputs.nixpkgs.lib.attrsets.recursiveUpdate { } (
      builtins.map
        (
          system:
          let
            pkgs = import inputs.nixpkgs { inherit system; };
            # An old nixpkgs for creating releases with an old glibc
            pkgsDist-old = import inputs.nixpkgs-older { inherit system; };
            # An old nixpkgs for creating releases with an old glibc
            pkgsDist-old-aarch = import inputs.nixpkgs-old {
              localSystem.config = "aarch64-unknown-linux-gnu";
            };

            llvmPackages = pkgs.llvmPackages_15;

            devShellWithDist =
              pkgsDist:
              pkgs.mkShell.override
                {
                  stdenv = pkgs.overrideCC pkgs.stdenv llvmPackages.clang;
                }
                (
                  {
                    buildInputs = with pkgs; [
                      cmake
                      gmp
                      libuv
                      ccache
                      pkg-config
                      llvmPackages.bintools # wrapped lld
                      llvmPackages.llvm # llvm-symbolizer for asan/lsan
                      gdb
                      tree # for CI
                    ];
                    # https://github.com/NixOS/nixpkgs/issues/60919
                    hardeningDisable = [ "all" ];
                    # more convenient `ctest` output
                    CTEST_OUTPUT_ON_FAILURE = 1;
                  }
                  // pkgs.lib.optionalAttrs pkgs.stdenv.isLinux {
                    GMP = (pkgsDist.gmp.override { withStatic = true; }).overrideAttrs (
                      attrs:
                      pkgs.lib.optionalAttrs (pkgs.stdenv.system == "aarch64-linux") {
                        # would need additional linking setup on Linux aarch64, we don't use it anywhere else either
                        hardeningDisable = [ "stackprotector" ];
                      }
                    );
                    LIBUV = pkgsDist.libuv.overrideAttrs (attrs: {
                      configureFlags = [ "--enable-static" ];
                      hardeningDisable = [ "stackprotector" ];
                      # Sync version with CMakeLists.txt
                      version = "1.48.0";
                      src = pkgs.fetchFromGitHub {
                        owner = "libuv";
                        repo = "libuv";
                        rev = "v1.48.0";
                        sha256 = "100nj16fg8922qg4m2hdjh62zv4p32wyrllsvqr659hdhjc03bsk";
                      };
                      doCheck = false;
                    });
                    GLIBC = pkgsDist.glibc;
                    GLIBC_DEV = pkgsDist.glibc.dev;
                    GCC_LIB = pkgsDist.gcc.cc.lib;
                    ZLIB = pkgsDist.zlib;
                    # for CI coredumps
                    GDB = pkgsDist.gdb;
                  }
                );
          in
          {
            devShells.${system} = {
              # The default development shell for working on lean itself
              default = devShellWithDist pkgs;
              oldGlibc = devShellWithDist pkgsDist-old;
              oldGlibcAArch = devShellWithDist pkgsDist-old-aarch;
            };
            # WASM build derivation
            packages.${system}.lean-wasm = pkgs.buildEmscriptenPackage (finalAttrs: {
              name = "lean-wasm";
              src = ./.;

              # gmp-emscripten = pkgs.stdenv.mkDerivation {
              #   name = "gmp-emscripten";

              #   src = pkgs.fetchurl {
              #     url = "https://gmplib.org/download/gmp/gmp-6.3.0.tar.xz";
              #     sha256 = "sha256-o8K4AgG4nmhhb0rTC8Zq7kknw85Q4zkpyoGdXENTiJg=";
              #   };

              #   nativeBuildInputs = [
              #     pkgs.emscripten
              #     pkgs.python3
              #     pkgs.pkg-config
              #   ];

              #   configurePhase = ''
              #     # Emscripten doesn't support assembly, disable it
              #     emconfigure ./configure \
              #       --prefix=$out \
              #       --host=wasm32-unknown-emscripten \
              #       --disable-shared \
              #       --enable-static \
              #       --disable-assembly \
              #       ac_cv_func_malloc_0_nonnull=yes \
              #       ac_cv_func_realloc_0_nonnull=yes \
              #       CFLAGS="-O2 -flto"
              #   '';

              #   buildPhase = ''
              #     emmake make -j$NIX_BUILD_CORES
              #   '';

              #   installPhase = ''
              #     make install
              #   '';

              #   doCheck = false;
              # };

              mimalloc = pkgs.stdenv.mkDerivation {
                name = "mimalloc-patched";
                src = pkgs.fetchFromGitHub {
                  owner = "microsoft";
                  repo = "mimalloc";
                  tag = "v2.2.3";
                  hash = "sha256-B0gngv16WFLBtrtG5NqA2m5e95bYVcQraeITcOX9A74=";
                };
                patches = [ ./patches/mimalloc-disable-tests.patch ];
                installPhase = ''
                  cp -r . $out
                '';
              };

              libuv = pkgs.stdenv.mkDerivation {
                name = "libuv-patched";
                src = pkgs.fetchFromGitHub {
                  owner = "libuv";
                  repo = "libuv";
                  tag = "v1.48.0";
                  hash = "sha256-U68BmIQNpmIy3prS7LkYl+wvDJQNikoeFiKh50yQFoA=";
                };
                patches = [ ./patches/libuv-fix.patch ];
                installPhase = ''
                  cp -r . $out
                '';
              };

              nativeBuildInputs = with pkgs; [
                cmake
                git
                python3
                cacert
                pkg-config
                # finalAttrs.gmp-emscripten
              ];

              buildInputs = with pkgs; [
                pkg-config
                cadical
              ];

              patches = [
                ./patches/mimalloc-src.patch
                ./patches/libuv-src.patch
              ];

              postPatch =
                let
                  pattern = "\${LEAN_BINARY_DIR}/../mimalloc/src/mimalloc";
                in
                ''
                  # Remove tests that fails in sandbox.
                  # It expects `sourceRoot` to be a git repository.
                  rm -rf src/lake/examples/git/
                  substituteInPlace CMakeLists.txt \
                    --replace-fail 'MIMALLOC-SRC' '${finalAttrs.mimalloc}'
                  substituteInPlace stage0/src/CMakeLists.txt src/CMakeLists.txt \
                    --replace-fail 'LIBUV-SRC' '${finalAttrs.libuv}'

                  for file in stage0/src/CMakeLists.txt stage0/src/runtime/CMakeLists.txt src/CMakeLists.txt src/runtime/CMakeLists.txt; do
                    substituteInPlace "$file" \
                      --replace-fail '${pattern}' '${finalAttrs.mimalloc}'
                  done

                  for file in \
                    stage0/src/lean.mk.in \
                    stage0/src/bin/leanmake \
                    stage0/src/bin/lean.in \
                    stage0/src/bin/leanc.in \
                    stage0/src/stdlib.make.in \
                  ; do
                    substituteInPlace "$file" \
                      --replace-fail '/usr/bin/env bash' '${pkgs.bash}/bin/bash'
                  done
                '';

              preConfigure = ''
                patchShebangs stage0/src/bin/ src/bin/


              '';
              # export CFLAGS="-I${pkgs.gmp.dev}/include -I${pkgs.libuv.dev}/include"
              # export CXXFLAGS="-I${pkgs.gmp.dev}/include -I${pkgs.libuv.dev}/include"
              # export LDFLAGS="-L${pkgs.gmp}/lib -L${pkgs.libuv}/lib"
              configurePhase = ''
                runHook preConfigure
                export EM_CACHE=$TMPDIR/emcache
                mkdir -p build-wasm
                cd build-wasm

                emcmake cmake .. \
                  -DUSE_GMP="off"

                runHook postConfigure
              '';

                  # -DGMP_INCLUDE_DIR="${finalAttrs.gmp-emscripten}/include" \
                  # -DGMP_INSTALL_PREFIX="${finalAttrs.gmp-emscripten}"
              buildPhase = ''
                # export EMCC_DEBUG=2
                runHook preBuild
                echo "Replacing1 in path $(pwd)"
                # find build-wasm/stage0 -type f \( -name "*.make" -o -name "Makefile" \) \
                #   -exec sed -i "s|/usr/bin/env|${pkgs.coreutils}/bin/env|g" {} \;
                emmake make -j$NIX_BUILD_CORES
                runHook postBuild
              '';

              installPhase = ''
                runHook preInstall
                make install
              '';

              meta = {
                description = "Lean theorem prover compiled to WebAssembly";
                platforms = pkgs.lib.platforms.unix;
              };
            });
          }
        )
        [
          "x86_64-linux"
          "aarch64-linux"
          "aarch64-darwin"
        ]
    );
}
