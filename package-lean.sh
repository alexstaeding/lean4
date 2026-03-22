#!/usr/bin/env bash
set -euo pipefail

LEAN_DIR="$(cd "$(dirname "$0")" && pwd)"
STAGE="${LEAN_DIR}/build/release/stage1"
WRAP="/tmp/lean-local-wrap"

echo "==> Lean source: $LEAN_DIR"
echo "==> Stage1 path: $STAGE"

echo "==> Cleaning $WRAP"
rm -rf "$WRAP"

echo "==> Creating directory structure"
mkdir -p "$WRAP/include/clang"
mkdir -p "$WRAP/lib/clang"

echo "==> Copying bin/"
cp -r "$STAGE/bin" "$WRAP/"

echo "==> Copying lib/"
cp -r "$STAGE/lib" "$WRAP/"

echo "==> Copying include/ (optional)"
cp -r "$STAGE/include" "$WRAP/" 2>/dev/null && echo "    include/ copied" || echo "    include/ not found, skipping"

echo "==> Contents of $WRAP:"
ls -la "$WRAP/"
echo "==> Dylibs:"
find "$WRAP/lib" -name "*.dylib" | sort

echo "==> Creating tarball at /tmp/lean-local.tar.zst"
cd /tmp
tar -cf - lean-local-wrap | zstd > /tmp/lean-local.tar.zst
echo "==> Done: $(du -sh /tmp/lean-local.tar.zst | cut -f1) written"

echo "==> Computing Nix hash"
nix hash file --sri /tmp/lean-local.tar.zst
