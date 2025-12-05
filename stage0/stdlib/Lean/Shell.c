// Lean compiler output
// Module: Lean.Shell
// Imports: import Lean.Elab.Frontend import Lean.Elab.ParseImportsFast import Lean.Server.Watchdog import Lean.Server.FileWorker import Lean.Compiler.IR.EmitC
#include <stdio.h>
#include <lean/lean.h>
#if defined(__clang__)
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wunused-label"
#elif defined(__GNUC__) && !defined(__CLANG__)
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-label"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#endif
#ifdef __cplusplus
extern "C" {
#endif
static lean_object* l___private_Lean_Shell_0__Lean_initFn___closed__5_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_;
static lean_object* l___private_Lean_Shell_0__Lean_versionHeader___closed__1;
static lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__2;
static lean_object* l___private_Lean_Shell_0__Lean_initFn___closed__13_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_;
uint8_t lean_internal_is_debug(lean_object*);
static lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__10;
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
static lean_object* l___private_Lean_Shell_0__Lean_shellMain___closed__12;
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_initLLVM___boxed(lean_object*);
static uint8_t l___private_Lean_Shell_0__Lean_shellMain___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_initFn_00___x40_Lean_Shell_1197438456____hygCtx___hyg_2____boxed(lean_object*);
static lean_object* l___private_Lean_Shell_0__Lean_initFn___closed__0_00___x40_Lean_Shell_1197438456____hygCtx___hyg_2_;
extern lean_object* l_Lean_githash;
LEAN_EXPORT lean_object* l_IO_println___at___00__private_Lean_Shell_0__Lean_displayHeader_spec__0(lean_object*);
static lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__29;
lean_object* lean_internal_set_max_heartbeat(size_t);
lean_object* lean_decode_lossy_utf8(lean_object*);
static lean_object* l___private_Lean_Shell_0__Lean_initFn___closed__2_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_ctorElim___redArg(lean_object*);
static lean_object* l___private_Lean_Shell_0__Lean_shellMain___closed__6;
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_shellMain___boxed__const__1;
static lean_object* l___private_Lean_Shell_0__Lean_initFn___closed__0_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_;
static lean_object* l___private_Lean_Shell_0__Lean_versionHeader___closed__2;
LEAN_EXPORT lean_object* l_IO_ofExcept___at___00__private_Lean_Shell_0__Lean_shellMain_spec__0___redArg___boxed(lean_object*, lean_object*);
static lean_object* l___private_Lean_Shell_0__Lean_initFn___closed__9_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_;
static lean_object* l___private_Lean_Shell_0__Lean_shellMain___closed__15;
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_initFn_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2____boxed(lean_object*);
static lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__5;
static lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__9;
static lean_object* l___private_Lean_Shell_0__Lean_shortVersionString___closed__5;
lean_object* l_Lean_Elab_printImports(lean_object*, lean_object*);
static lean_object* l___private_Lean_Shell_0__Lean_shortVersionString___closed__8;
static lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__40;
size_t lean_usize_mul(size_t, size_t);
static uint8_t l___private_Lean_Shell_0__Lean_shortVersionString___closed__2;
static lean_object* l___private_Lean_Shell_0__Lean_shortVersionString___closed__6;
lean_object* l_Lean_KVMap_find(lean_object*, lean_object*);
lean_object* l_IO_FS_Stream_lines(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_shellMain___boxed__const__2;
static lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__30;
lean_object* l_String_Slice_trimAscii(lean_object*);
static lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__21;
static lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__38;
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_Internal_getDefaultMaxHeartbeat___boxed(lean_object*);
LEAN_EXPORT lean_object* l_IO_println___at___00__private_Lean_Shell_0__Lean_displayHeader_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Shell_0__Lean_initFn_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2__spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_emitLLVM___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__3;
static lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__11;
static lean_object* l___private_Lean_Shell_0__Lean_shortVersionString___closed__9;
static lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__25;
static lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__26;
static lean_object* l___private_Lean_Shell_0__Lean_shellMain___closed__19;
static uint8_t l___private_Lean_Shell_0__Lean_shortVersionString___closed__7;
lean_object* l_Lean_moduleNameOfFileName(lean_object*, lean_object*);
static lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__8;
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_noConfusion___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lean_Shell_0__Lean_shellMain___closed__20;
uint8_t l_List_isEmpty___redArg(lean_object*);
LEAN_EXPORT lean_object* l_IO_eprintln___at___00__private_Lean_Shell_0__Lean_shellMain_spec__1(lean_object*);
static lean_object* l___private_Lean_Shell_0__Lean_shortVersionString___closed__1;
LEAN_EXPORT lean_object* l_IO_ofExcept___at___00__private_Lean_Shell_0__Lean_shellMain_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_displayHelp___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_Internal_getDefaultMaxMemory___boxed(lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Server_FileWorker_workerMain(lean_object*);
static lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__6;
static lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__23;
uint8_t l_String_Slice_beq(lean_object*, lean_object*);
static lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__13;
static lean_object* l___private_Lean_Shell_0__Lean_versionHeader___closed__0;
extern uint8_t l_Lean_version_isRelease;
lean_object* lean_string_utf8_byte_size(lean_object*);
lean_object* lean_string_push(lean_object*, uint32_t);
static lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__27;
static lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__16;
lean_object* lean_get_stdout();
LEAN_EXPORT lean_object* lean_display_header();
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_shellMain___boxed(lean_object**);
static lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__18;
size_t lean_usize_of_nat(lean_object*);
LEAN_EXPORT lean_object* l_IO_println___at___00__private_Lean_Shell_0__Lean_shellMain_spec__4(lean_object*);
static lean_object* l___private_Lean_Shell_0__Lean_versionHeader___closed__10;
static lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__20;
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_shellMain___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_decodeLossyUTF8___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_noConfusion(lean_object*, uint8_t, uint8_t, lean_object*);
static lean_object* l___private_Lean_Shell_0__Lean_shellMain___closed__8;
static lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__15;
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_maxMemory;
static lean_object* l___private_Lean_Shell_0__Lean_shellMain___closed__13;
static uint8_t l___private_Lean_Shell_0__Lean_displayHelp___closed__36;
LEAN_EXPORT lean_object* l_IO_print___at___00IO_println___at___00__private_Lean_Shell_0__Lean_displayHeader_spec__0_spec__0(lean_object*);
lean_object* l_IO_FS_Stream_readBinToEnd(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_initFn_00___x40_Lean_Shell_1197438456____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_watchdog_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_worker_elim(lean_object*, uint8_t, lean_object*, lean_object*);
static uint8_t l___private_Lean_Shell_0__Lean_versionHeader___closed__5;
lean_object* lean_emit_llvm(lean_object*, lean_object*, lean_object*);
lean_object* l_String_Slice_utf8ByteSize(lean_object*);
static lean_object* l___private_Lean_Shell_0__Lean_initFn___closed__3_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_;
static lean_object* l___private_Lean_Shell_0__Lean_shellMain___closed__5;
static lean_object* l___private_Lean_Shell_0__Lean_versionHeader___closed__4;
lean_object* l_Lean_Elab_printImportSrcs(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_displayHeader___boxed(lean_object*);
lean_object* l_Lean_Server_Watchdog_watchdogMain(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_shellMain___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_Internal_isDebug___boxed(lean_object*);
static lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__19;
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
static lean_object* l___private_Lean_Shell_0__Lean_versionHeader___closed__7;
static lean_object* l___private_Lean_Shell_0__Lean_initFn___closed__12_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_;
lean_object* lean_string_utf8_extract(lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__0;
static lean_object* l___private_Lean_Shell_0__Lean_initFn___closed__1_00___x40_Lean_Shell_1197438456____hygCtx___hyg_2_;
lean_object* lean_get_stdin();
static uint8_t l___private_Lean_Shell_0__Lean_displayHelp___closed__12;
lean_object* l_String_posOfAux(lean_object*, uint32_t, lean_object*, lean_object*);
lean_object* lean_get_stderr();
lean_object* lean_mk_io_user_error(lean_object*);
static lean_object* l___private_Lean_Shell_0__Lean_versionHeader___closed__6;
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_initFn_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_();
static lean_object* l___private_Lean_Shell_0__Lean_versionHeader___closed__9;
lean_object* lean_internal_get_default_max_heartbeat(lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_ctorIdx(uint8_t);
lean_object* lean_io_prim_handle_write(lean_object*, lean_object*);
static lean_object* l___private_Lean_Shell_0__Lean_initFn___closed__7_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_;
static lean_object* l___private_Lean_Shell_0__Lean_shellMain___closed__9;
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_Internal_getBuildType___boxed(lean_object*);
lean_object* lean_io_prim_handle_mk(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_IO_println___at___00__private_Lean_Shell_0__Lean_shellMain_spec__4___boxed(lean_object*, lean_object*);
static lean_object* l___private_Lean_Shell_0__Lean_initFn___closed__3_00___x40_Lean_Shell_1197438456____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_frontend_elim___redArg___boxed(lean_object*);
static lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__34;
lean_object* l_Lean_ModuleSetup_load(lean_object*);
lean_object* lean_internal_set_max_memory(size_t);
lean_object* lean_internal_get_build_type(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_Internal_hasAddressSanitizer___boxed(lean_object*);
static lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__7;
static lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__37;
static lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__17;
lean_object* lean_internal_get_default_max_memory(lean_object*);
static lean_object* l___private_Lean_Shell_0__Lean_initFn___closed__4_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_;
static lean_object* l___private_Lean_Shell_0__Lean_shellMain___closed__11;
lean_object* lean_register_option(lean_object*, lean_object*);
static lean_object* l___private_Lean_Shell_0__Lean_shellMain___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_runMain___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_frontend_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_displayCumulativeProfilingTimes___boxed(lean_object*);
static lean_object* l___private_Lean_Shell_0__Lean_shellMain___closed__14;
lean_object* l_Lean_Elab_runFrontend(lean_object*, lean_object*, lean_object*, lean_object*, uint32_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_IO_eprint___at___00IO_eprintln___at___00__private_Lean_Shell_0__Lean_shellMain_spec__1_spec__1___boxed(lean_object*, lean_object*);
static lean_object* l___private_Lean_Shell_0__Lean_shellMain___closed__16;
static lean_object* l___private_Lean_Shell_0__Lean_shellMain___closed__10;
static lean_object* l___private_Lean_Shell_0__Lean_shellMain___closed__7;
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_noConfusion___redArg___lam__0___boxed(lean_object*);
lean_object* l_Lean_getBuildDir();
static lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__35;
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_noConfusion___redArg___lam__0(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Shell_0__Lean_shellMain_spec__3(lean_object*, lean_object*);
static lean_object* l___private_Lean_Shell_0__Lean_shellMain___closed__17;
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Shell_0__Lean_initFn_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2__spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__4;
LEAN_EXPORT lean_object* lean_shell_main(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, uint32_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, uint8_t, uint8_t);
uint32_t lean_run_main(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_timeout;
lean_object* l_String_Slice_toString(lean_object*);
static lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__24;
static lean_object* l___private_Lean_Shell_0__Lean_shellMain___closed__3;
static lean_object* l___private_Lean_Shell_0__Lean_versionHeader___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_init_llvm();
static lean_object* l___private_Lean_Shell_0__Lean_initFn___closed__4_00___x40_Lean_Shell_1197438456____hygCtx___hyg_2_;
lean_object* lean_string_to_utf8(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_Internal_setMaxHeartbeat___boxed(lean_object*, lean_object*);
lean_object* lean_io_exit(uint8_t);
LEAN_EXPORT lean_object* lean_display_help(uint8_t);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_noConfusion___redArg___boxed(lean_object*, lean_object*);
static lean_object* l___private_Lean_Shell_0__Lean_initFn___closed__8_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_;
static lean_object* l___private_Lean_Shell_0__Lean_initFn___closed__10_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
extern lean_object* l_Lean_versionStringCore;
static lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__22;
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_Internal_isMultiThread___boxed(lean_object*);
lean_object* lean_array_mk(lean_object*);
static lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__28;
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_watchdog_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_worker_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_display_cumulative_profiling_times();
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_noConfusion___redArg(uint8_t, uint8_t);
uint8_t lean_internal_has_address_sanitizer(lean_object*);
static lean_object* l___private_Lean_Shell_0__Lean_shortVersionString___closed__0;
static lean_object* l___private_Lean_Shell_0__Lean_shortVersionString___closed__4;
static lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_worker_elim___redArg(lean_object*);
static lean_object* l___private_Lean_Shell_0__Lean_shellMain___closed__1;
static lean_object* l___private_Lean_Shell_0__Lean_initFn___closed__11_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_;
lean_object* l_Lean_Name_mkStr1(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_shortVersionString;
lean_object* l_IO_FS_Stream_putStrLn(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_eprintln___at___00__private_Lean_Shell_0__Lean_shellMain_spec__1___boxed(lean_object*, lean_object*);
static lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__33;
static lean_object* l___private_Lean_Shell_0__Lean_initFn___closed__2_00___x40_Lean_Shell_1197438456____hygCtx___hyg_2_;
lean_object* lean_string_append(lean_object*, lean_object*);
uint8_t lean_internal_is_multi_thread(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_watchdog_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_toCtorIdx(uint8_t);
static lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__32;
lean_object* l_Lean_profileitIOUnsafe___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_ofExcept___at___00__private_Lean_Shell_0__Lean_shellMain_spec__0(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Shell_0__Lean_shellMain_spec__3___boxed(lean_object*, lean_object*);
static lean_object* l___private_Lean_Shell_0__Lean_shellMain___closed__18;
LEAN_EXPORT lean_object* l_IO_ofExcept___at___00__private_Lean_Shell_0__Lean_shellMain_spec__0___redArg(lean_object*);
lean_object* l_IO_FS_readBinFile(lean_object*);
uint8_t lean_slice_memcmp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lean_Shell_0__Lean_initFn___closed__6_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_;
extern lean_object* l_System_Platform_target;
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_frontend_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_worker_elim___redArg___boxed(lean_object*);
static lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__14;
lean_object* l_Lean_getLibDir(lean_object*);
extern lean_object* l_Lean_version_specialDesc;
lean_object* l_Lean_printImportsJson(lean_object*);
static lean_object* l___private_Lean_Shell_0__Lean_shortVersionString___closed__3;
LEAN_EXPORT lean_object* l_IO_print___at___00IO_println___at___00__private_Lean_Shell_0__Lean_displayHeader_spec__0_spec__0___boxed(lean_object*, lean_object*);
static lean_object* l___private_Lean_Shell_0__Lean_shellMain___closed__4;
static lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__39;
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_toCtorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_IO_eprint___at___00IO_eprintln___at___00__private_Lean_Shell_0__Lean_shellMain_spec__1_spec__1(lean_object*);
static lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__31;
static uint8_t l___private_Lean_Shell_0__Lean_versionHeader___closed__8;
lean_object* l_Lean_IR_emitC(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_versionHeader;
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_watchdog_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_Internal_setMaxMemory___boxed(lean_object*, lean_object*);
static lean_object* l___private_Lean_Shell_0__Lean_initFn___closed__1_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_frontend_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_decodeLossyUTF8___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_decode_lossy_utf8(x_1);
lean_dec_ref(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_runMain___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint32_t x_5; lean_object* x_6; 
x_5 = lean_run_main(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
lean_dec_ref(x_1);
x_6 = lean_box_uint32(x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_initLLVM___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_init_llvm();
return x_2;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_emitLLVM___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_emit_llvm(x_1, x_2, x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_displayCumulativeProfilingTimes___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_display_cumulative_profiling_times();
return x_2;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_Internal_hasAddressSanitizer___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = lean_internal_has_address_sanitizer(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_Internal_isMultiThread___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = lean_internal_is_multi_thread(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_Internal_isDebug___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = lean_internal_is_debug(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_Internal_getBuildType___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_internal_get_build_type(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_Internal_getDefaultMaxMemory___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_box(0);
return x_2;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_Internal_setMaxMemory___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
size_t x_3; lean_object* x_4; 
x_3 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_4 = lean_internal_set_max_memory(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_Internal_getDefaultMaxHeartbeat___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_box(0);
return x_2;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_Internal_setMaxHeartbeat___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
size_t x_3; lean_object* x_4; 
x_3 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_4 = lean_internal_set_max_heartbeat(x_3);
return x_4;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_shortVersionString___closed__0() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_version_specialDesc;
return x_1;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_shortVersionString___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("", 0, 0);
return x_1;
}
}
static uint8_t _init_l___private_Lean_Shell_0__Lean_shortVersionString___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; uint8_t x_3; 
x_1 = l___private_Lean_Shell_0__Lean_shortVersionString___closed__1;
x_2 = l___private_Lean_Shell_0__Lean_shortVersionString___closed__0;
x_3 = lean_string_dec_eq(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_shortVersionString___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_versionStringCore;
return x_1;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_shortVersionString___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("-", 1, 1);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_shortVersionString___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___private_Lean_Shell_0__Lean_shortVersionString___closed__4;
x_2 = l___private_Lean_Shell_0__Lean_shortVersionString___closed__3;
x_3 = lean_string_append(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_shortVersionString___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___private_Lean_Shell_0__Lean_shortVersionString___closed__0;
x_2 = l___private_Lean_Shell_0__Lean_shortVersionString___closed__5;
x_3 = lean_string_append(x_2, x_1);
return x_3;
}
}
static uint8_t _init_l___private_Lean_Shell_0__Lean_shortVersionString___closed__7() {
_start:
{
uint8_t x_1; 
x_1 = l_Lean_version_isRelease;
return x_1;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_shortVersionString___closed__8() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("-pre", 4, 4);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_shortVersionString___closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___private_Lean_Shell_0__Lean_shortVersionString___closed__8;
x_2 = l___private_Lean_Shell_0__Lean_shortVersionString___closed__3;
x_3 = lean_string_append(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_shortVersionString() {
_start:
{
uint8_t x_1; 
x_1 = l___private_Lean_Shell_0__Lean_shortVersionString___closed__2;
if (x_1 == 0)
{
lean_object* x_2; 
x_2 = l___private_Lean_Shell_0__Lean_shortVersionString___closed__6;
return x_2;
}
else
{
uint8_t x_3; 
x_3 = l___private_Lean_Shell_0__Lean_shortVersionString___closed__7;
if (x_3 == 0)
{
lean_object* x_4; 
x_4 = l___private_Lean_Shell_0__Lean_shortVersionString___closed__9;
return x_4;
}
else
{
lean_object* x_5; 
x_5 = l___private_Lean_Shell_0__Lean_shortVersionString___closed__3;
return x_5;
}
}
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_versionHeader___closed__0() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Lean (version ", 14, 14);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_versionHeader___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked(", ", 2, 2);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_versionHeader___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_box(0);
x_2 = lean_internal_get_build_type(x_1);
return x_2;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_versionHeader___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked(")", 1, 1);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_versionHeader___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_githash;
return x_1;
}
}
static uint8_t _init_l___private_Lean_Shell_0__Lean_versionHeader___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; uint8_t x_3; 
x_1 = l___private_Lean_Shell_0__Lean_shortVersionString___closed__1;
x_2 = l___private_Lean_Shell_0__Lean_versionHeader___closed__4;
x_3 = lean_string_dec_eq(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_versionHeader___closed__6() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked(", commit ", 9, 9);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_versionHeader___closed__7() {
_start:
{
lean_object* x_1; 
x_1 = l_System_Platform_target;
return x_1;
}
}
static uint8_t _init_l___private_Lean_Shell_0__Lean_versionHeader___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; uint8_t x_3; 
x_1 = l___private_Lean_Shell_0__Lean_shortVersionString___closed__1;
x_2 = l___private_Lean_Shell_0__Lean_versionHeader___closed__7;
x_3 = lean_string_dec_eq(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_versionHeader___closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___private_Lean_Shell_0__Lean_versionHeader___closed__1;
x_2 = l___private_Lean_Shell_0__Lean_shortVersionString;
x_3 = lean_string_append(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_versionHeader___closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___private_Lean_Shell_0__Lean_versionHeader___closed__7;
x_2 = l___private_Lean_Shell_0__Lean_versionHeader___closed__9;
x_3 = lean_string_append(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_versionHeader() {
_start:
{
lean_object* x_1; lean_object* x_11; lean_object* x_18; uint8_t x_19; 
x_18 = l___private_Lean_Shell_0__Lean_shortVersionString;
x_19 = l___private_Lean_Shell_0__Lean_versionHeader___closed__8;
if (x_19 == 0)
{
lean_object* x_20; 
x_20 = l___private_Lean_Shell_0__Lean_versionHeader___closed__10;
x_11 = x_20;
goto block_17;
}
else
{
x_11 = x_18;
goto block_17;
}
block_10:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_2 = l___private_Lean_Shell_0__Lean_versionHeader___closed__0;
x_3 = lean_string_append(x_2, x_1);
lean_dec_ref(x_1);
x_4 = l___private_Lean_Shell_0__Lean_versionHeader___closed__1;
x_5 = lean_string_append(x_3, x_4);
x_6 = l___private_Lean_Shell_0__Lean_versionHeader___closed__2;
x_7 = lean_string_append(x_5, x_6);
x_8 = l___private_Lean_Shell_0__Lean_versionHeader___closed__3;
x_9 = lean_string_append(x_7, x_8);
return x_9;
}
block_17:
{
lean_object* x_12; uint8_t x_13; 
x_12 = l___private_Lean_Shell_0__Lean_versionHeader___closed__4;
x_13 = l___private_Lean_Shell_0__Lean_versionHeader___closed__5;
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = l___private_Lean_Shell_0__Lean_versionHeader___closed__6;
x_15 = lean_string_append(x_11, x_14);
x_16 = lean_string_append(x_15, x_12);
x_1 = x_16;
goto block_10;
}
else
{
x_1 = x_11;
goto block_10;
}
}
}
}
LEAN_EXPORT lean_object* l_IO_print___at___00IO_println___at___00__private_Lean_Shell_0__Lean_displayHeader_spec__0_spec__0(lean_object* x_1) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_get_stdout();
x_4 = lean_ctor_get(x_3, 4);
lean_inc_ref(x_4);
lean_dec_ref(x_3);
x_5 = lean_apply_2(x_4, x_1, lean_box(0));
return x_5;
}
}
LEAN_EXPORT lean_object* l_IO_println___at___00__private_Lean_Shell_0__Lean_displayHeader_spec__0(lean_object* x_1) {
_start:
{
uint32_t x_3; lean_object* x_4; lean_object* x_5; 
x_3 = 10;
x_4 = lean_string_push(x_1, x_3);
x_5 = l_IO_print___at___00IO_println___at___00__private_Lean_Shell_0__Lean_displayHeader_spec__0_spec__0(x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* lean_display_header() {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l___private_Lean_Shell_0__Lean_versionHeader;
x_3 = l_IO_println___at___00__private_Lean_Shell_0__Lean_displayHeader_spec__0(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_IO_print___at___00IO_println___at___00__private_Lean_Shell_0__Lean_displayHeader_spec__0_spec__0___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_IO_print___at___00IO_println___at___00__private_Lean_Shell_0__Lean_displayHeader_spec__0_spec__0(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_IO_println___at___00__private_Lean_Shell_0__Lean_displayHeader_spec__0___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_IO_println___at___00__private_Lean_Shell_0__Lean_displayHeader_spec__0(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_displayHeader___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_display_header();
return x_2;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_displayHelp___closed__0() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("      -D name=value      set a configuration option (see set_option command)", 76, 76);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_displayHelp___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("      --plugin=file      load and initialize Lean shared library for registering linters etc.", 93, 93);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_displayHelp___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("      --load-dynlib=file load shared library to make its symbols available to the interpreter", 93, 93);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_displayHelp___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("      --setup=file       JSON file with module setup data (supersedes the file's header)", 88, 88);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_displayHelp___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("      --json             report Lean output (e.g., messages) as JSON (one per line)", 83, 83);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_displayHelp___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("  -E  --error=kind       report Lean messages of kind as errors", 63, 63);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_displayHelp___closed__6() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("      --deps             just print dependencies of a Lean input", 64, 64);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_displayHelp___closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("      --src-deps         just print dependency sources of a Lean input", 70, 70);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_displayHelp___closed__8() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("      --print-prefix     print the installation prefix for Lean and exit", 72, 72);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_displayHelp___closed__9() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("      --print-libdir     print the installation directory for Lean's built-in libraries and exit", 96, 96);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_displayHelp___closed__10() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("      --profile          display elaboration/type checking time for each definition/theorem", 91, 91);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_displayHelp___closed__11() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("      --stats            display environment statistics", 55, 55);
return x_1;
}
}
static uint8_t _init_l___private_Lean_Shell_0__Lean_displayHelp___closed__12() {
_start:
{
lean_object* x_1; uint8_t x_2; 
x_1 = lean_box(0);
x_2 = lean_internal_is_debug(x_1);
return x_2;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_displayHelp___closed__13() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("      --debug=tag        enable assertions with the given tag", 61, 61);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_displayHelp___closed__14() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Miscellaneous", 13, 13);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_displayHelp___closed__15() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("  -h, --help             display this message", 45, 45);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_displayHelp___closed__16() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("      --features         display features compiler provides (eg. LLVM support)", 78, 78);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_displayHelp___closed__17() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("  -v, --version          display version information", 52, 52);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_displayHelp___closed__18() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("  -V, --short-version    display short version number", 53, 53);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_displayHelp___closed__19() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("  -g, --githash          display the git commit hash number used to build this binary", 85, 85);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_displayHelp___closed__20() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("      --run <file>       call the 'main' definition in the given file with the remaining arguments", 98, 98);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_displayHelp___closed__21() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("  -o, --o=oname          create olean file", 42, 42);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_displayHelp___closed__22() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("  -i, --i=iname          create ilean file", 42, 42);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_displayHelp___closed__23() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("  -c, --c=fname          name of the C output file", 50, 50);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_displayHelp___closed__24() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("  -b, --bc=fname         name of the LLVM bitcode file", 54, 54);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_displayHelp___closed__25() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("      --stdin            take input from stdin", 46, 46);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_displayHelp___closed__26() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("      --root=dir         set package root directory from which the module name\n", 79, 79);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_displayHelp___closed__27() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("                         of the input file is calculated\n", 57, 57);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_displayHelp___closed__28() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("                         (default: current working directory)\n", 62, 62);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_displayHelp___closed__29() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("  -t, --trust=num        trust level (default: max) 0 means do not trust any macro,\n", 84, 84);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_displayHelp___closed__30() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("                         and type check all imported modules\n", 61, 61);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_displayHelp___closed__31() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("  -q, --quiet            do not print verbose messages", 54, 54);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_displayHelp___closed__32() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("  -M, --memory=num       maximum amount of memory that should be used by Lean", 77, 77);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_displayHelp___closed__33() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("                         (in megabytes)", 39, 39);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_displayHelp___closed__34() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("  -T, --timeout=num      maximum number of memory allocations per task", 70, 70);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_displayHelp___closed__35() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("                         this is a deterministic way of interrupting long running tasks", 87, 87);
return x_1;
}
}
static uint8_t _init_l___private_Lean_Shell_0__Lean_displayHelp___closed__36() {
_start:
{
lean_object* x_1; uint8_t x_2; 
x_1 = lean_box(0);
x_2 = lean_internal_is_multi_thread(x_1);
return x_2;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_displayHelp___closed__37() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("  -j, --threads=num      number of threads used to process lean files", 69, 69);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_displayHelp___closed__38() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("  -s, --tstack=num       thread stack size in Kb", 48, 48);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_displayHelp___closed__39() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("      --server           start lean in server mode", 50, 50);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_displayHelp___closed__40() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("      --worker           start lean in server-worker mode", 57, 57);
return x_1;
}
}
LEAN_EXPORT lean_object* lean_display_help(uint8_t x_1) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_8; lean_object* x_9; lean_object* x_36; lean_object* x_37; 
if (x_1 == 0)
{
lean_object* x_94; 
x_94 = lean_get_stdout();
x_36 = x_94;
x_37 = lean_box(0);
goto block_93;
}
else
{
lean_object* x_95; 
x_95 = lean_get_stderr();
x_36 = x_95;
x_37 = lean_box(0);
goto block_93;
}
block_7:
{
lean_object* x_5; lean_object* x_6; 
x_5 = l___private_Lean_Shell_0__Lean_displayHelp___closed__0;
x_6 = l_IO_FS_Stream_putStrLn(x_3, x_5);
return x_6;
}
block_35:
{
lean_object* x_10; lean_object* x_11; 
x_10 = l___private_Lean_Shell_0__Lean_displayHelp___closed__1;
lean_inc_ref(x_8);
x_11 = l_IO_FS_Stream_putStrLn(x_8, x_10);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; lean_object* x_13; 
lean_dec_ref(x_11);
x_12 = l___private_Lean_Shell_0__Lean_displayHelp___closed__2;
lean_inc_ref(x_8);
x_13 = l_IO_FS_Stream_putStrLn(x_8, x_12);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; lean_object* x_15; 
lean_dec_ref(x_13);
x_14 = l___private_Lean_Shell_0__Lean_displayHelp___closed__3;
lean_inc_ref(x_8);
x_15 = l_IO_FS_Stream_putStrLn(x_8, x_14);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; lean_object* x_17; 
lean_dec_ref(x_15);
x_16 = l___private_Lean_Shell_0__Lean_displayHelp___closed__4;
lean_inc_ref(x_8);
x_17 = l_IO_FS_Stream_putStrLn(x_8, x_16);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; lean_object* x_19; 
lean_dec_ref(x_17);
x_18 = l___private_Lean_Shell_0__Lean_displayHelp___closed__5;
lean_inc_ref(x_8);
x_19 = l_IO_FS_Stream_putStrLn(x_8, x_18);
if (lean_obj_tag(x_19) == 0)
{
lean_object* x_20; lean_object* x_21; 
lean_dec_ref(x_19);
x_20 = l___private_Lean_Shell_0__Lean_displayHelp___closed__6;
lean_inc_ref(x_8);
x_21 = l_IO_FS_Stream_putStrLn(x_8, x_20);
if (lean_obj_tag(x_21) == 0)
{
lean_object* x_22; lean_object* x_23; 
lean_dec_ref(x_21);
x_22 = l___private_Lean_Shell_0__Lean_displayHelp___closed__7;
lean_inc_ref(x_8);
x_23 = l_IO_FS_Stream_putStrLn(x_8, x_22);
if (lean_obj_tag(x_23) == 0)
{
lean_object* x_24; lean_object* x_25; 
lean_dec_ref(x_23);
x_24 = l___private_Lean_Shell_0__Lean_displayHelp___closed__8;
lean_inc_ref(x_8);
x_25 = l_IO_FS_Stream_putStrLn(x_8, x_24);
if (lean_obj_tag(x_25) == 0)
{
lean_object* x_26; lean_object* x_27; 
lean_dec_ref(x_25);
x_26 = l___private_Lean_Shell_0__Lean_displayHelp___closed__9;
lean_inc_ref(x_8);
x_27 = l_IO_FS_Stream_putStrLn(x_8, x_26);
if (lean_obj_tag(x_27) == 0)
{
lean_object* x_28; lean_object* x_29; 
lean_dec_ref(x_27);
x_28 = l___private_Lean_Shell_0__Lean_displayHelp___closed__10;
lean_inc_ref(x_8);
x_29 = l_IO_FS_Stream_putStrLn(x_8, x_28);
if (lean_obj_tag(x_29) == 0)
{
lean_object* x_30; lean_object* x_31; 
lean_dec_ref(x_29);
x_30 = l___private_Lean_Shell_0__Lean_displayHelp___closed__11;
lean_inc_ref(x_8);
x_31 = l_IO_FS_Stream_putStrLn(x_8, x_30);
if (lean_obj_tag(x_31) == 0)
{
uint8_t x_32; 
lean_dec_ref(x_31);
x_32 = l___private_Lean_Shell_0__Lean_displayHelp___closed__12;
if (x_32 == 0)
{
x_3 = x_8;
x_4 = lean_box(0);
goto block_7;
}
else
{
lean_object* x_33; lean_object* x_34; 
x_33 = l___private_Lean_Shell_0__Lean_displayHelp___closed__13;
lean_inc_ref(x_8);
x_34 = l_IO_FS_Stream_putStrLn(x_8, x_33);
if (lean_obj_tag(x_34) == 0)
{
lean_dec_ref(x_34);
x_3 = x_8;
x_4 = lean_box(0);
goto block_7;
}
else
{
lean_dec_ref(x_8);
return x_34;
}
}
}
else
{
lean_dec_ref(x_8);
return x_31;
}
}
else
{
lean_dec_ref(x_8);
return x_29;
}
}
else
{
lean_dec_ref(x_8);
return x_27;
}
}
else
{
lean_dec_ref(x_8);
return x_25;
}
}
else
{
lean_dec_ref(x_8);
return x_23;
}
}
else
{
lean_dec_ref(x_8);
return x_21;
}
}
else
{
lean_dec_ref(x_8);
return x_19;
}
}
else
{
lean_dec_ref(x_8);
return x_17;
}
}
else
{
lean_dec_ref(x_8);
return x_15;
}
}
else
{
lean_dec_ref(x_8);
return x_13;
}
}
else
{
lean_dec_ref(x_8);
return x_11;
}
}
block_93:
{
lean_object* x_38; lean_object* x_39; 
x_38 = l___private_Lean_Shell_0__Lean_versionHeader;
lean_inc_ref(x_36);
x_39 = l_IO_FS_Stream_putStrLn(x_36, x_38);
if (lean_obj_tag(x_39) == 0)
{
lean_object* x_40; lean_object* x_41; 
lean_dec_ref(x_39);
x_40 = l___private_Lean_Shell_0__Lean_displayHelp___closed__14;
lean_inc_ref(x_36);
x_41 = l_IO_FS_Stream_putStrLn(x_36, x_40);
if (lean_obj_tag(x_41) == 0)
{
lean_object* x_42; lean_object* x_43; 
lean_dec_ref(x_41);
x_42 = l___private_Lean_Shell_0__Lean_displayHelp___closed__15;
lean_inc_ref(x_36);
x_43 = l_IO_FS_Stream_putStrLn(x_36, x_42);
if (lean_obj_tag(x_43) == 0)
{
lean_object* x_44; lean_object* x_45; 
lean_dec_ref(x_43);
x_44 = l___private_Lean_Shell_0__Lean_displayHelp___closed__16;
lean_inc_ref(x_36);
x_45 = l_IO_FS_Stream_putStrLn(x_36, x_44);
if (lean_obj_tag(x_45) == 0)
{
lean_object* x_46; lean_object* x_47; 
lean_dec_ref(x_45);
x_46 = l___private_Lean_Shell_0__Lean_displayHelp___closed__17;
lean_inc_ref(x_36);
x_47 = l_IO_FS_Stream_putStrLn(x_36, x_46);
if (lean_obj_tag(x_47) == 0)
{
lean_object* x_48; lean_object* x_49; 
lean_dec_ref(x_47);
x_48 = l___private_Lean_Shell_0__Lean_displayHelp___closed__18;
lean_inc_ref(x_36);
x_49 = l_IO_FS_Stream_putStrLn(x_36, x_48);
if (lean_obj_tag(x_49) == 0)
{
lean_object* x_50; lean_object* x_51; 
lean_dec_ref(x_49);
x_50 = l___private_Lean_Shell_0__Lean_displayHelp___closed__19;
lean_inc_ref(x_36);
x_51 = l_IO_FS_Stream_putStrLn(x_36, x_50);
if (lean_obj_tag(x_51) == 0)
{
lean_object* x_52; lean_object* x_53; 
lean_dec_ref(x_51);
x_52 = l___private_Lean_Shell_0__Lean_displayHelp___closed__20;
lean_inc_ref(x_36);
x_53 = l_IO_FS_Stream_putStrLn(x_36, x_52);
if (lean_obj_tag(x_53) == 0)
{
lean_object* x_54; lean_object* x_55; 
lean_dec_ref(x_53);
x_54 = l___private_Lean_Shell_0__Lean_displayHelp___closed__21;
lean_inc_ref(x_36);
x_55 = l_IO_FS_Stream_putStrLn(x_36, x_54);
if (lean_obj_tag(x_55) == 0)
{
lean_object* x_56; lean_object* x_57; 
lean_dec_ref(x_55);
x_56 = l___private_Lean_Shell_0__Lean_displayHelp___closed__22;
lean_inc_ref(x_36);
x_57 = l_IO_FS_Stream_putStrLn(x_36, x_56);
if (lean_obj_tag(x_57) == 0)
{
lean_object* x_58; lean_object* x_59; 
lean_dec_ref(x_57);
x_58 = l___private_Lean_Shell_0__Lean_displayHelp___closed__23;
lean_inc_ref(x_36);
x_59 = l_IO_FS_Stream_putStrLn(x_36, x_58);
if (lean_obj_tag(x_59) == 0)
{
lean_object* x_60; lean_object* x_61; 
lean_dec_ref(x_59);
x_60 = l___private_Lean_Shell_0__Lean_displayHelp___closed__24;
lean_inc_ref(x_36);
x_61 = l_IO_FS_Stream_putStrLn(x_36, x_60);
if (lean_obj_tag(x_61) == 0)
{
lean_object* x_62; lean_object* x_63; 
lean_dec_ref(x_61);
x_62 = l___private_Lean_Shell_0__Lean_displayHelp___closed__25;
lean_inc_ref(x_36);
x_63 = l_IO_FS_Stream_putStrLn(x_36, x_62);
if (lean_obj_tag(x_63) == 0)
{
lean_object* x_64; lean_object* x_65; 
lean_dec_ref(x_63);
x_64 = l___private_Lean_Shell_0__Lean_displayHelp___closed__26;
lean_inc_ref(x_36);
x_65 = l_IO_FS_Stream_putStrLn(x_36, x_64);
if (lean_obj_tag(x_65) == 0)
{
lean_object* x_66; lean_object* x_67; 
lean_dec_ref(x_65);
x_66 = l___private_Lean_Shell_0__Lean_displayHelp___closed__27;
lean_inc_ref(x_36);
x_67 = l_IO_FS_Stream_putStrLn(x_36, x_66);
if (lean_obj_tag(x_67) == 0)
{
lean_object* x_68; lean_object* x_69; 
lean_dec_ref(x_67);
x_68 = l___private_Lean_Shell_0__Lean_displayHelp___closed__28;
lean_inc_ref(x_36);
x_69 = l_IO_FS_Stream_putStrLn(x_36, x_68);
if (lean_obj_tag(x_69) == 0)
{
lean_object* x_70; lean_object* x_71; 
lean_dec_ref(x_69);
x_70 = l___private_Lean_Shell_0__Lean_displayHelp___closed__29;
lean_inc_ref(x_36);
x_71 = l_IO_FS_Stream_putStrLn(x_36, x_70);
if (lean_obj_tag(x_71) == 0)
{
lean_object* x_72; lean_object* x_73; 
lean_dec_ref(x_71);
x_72 = l___private_Lean_Shell_0__Lean_displayHelp___closed__30;
lean_inc_ref(x_36);
x_73 = l_IO_FS_Stream_putStrLn(x_36, x_72);
if (lean_obj_tag(x_73) == 0)
{
lean_object* x_74; lean_object* x_75; 
lean_dec_ref(x_73);
x_74 = l___private_Lean_Shell_0__Lean_displayHelp___closed__31;
lean_inc_ref(x_36);
x_75 = l_IO_FS_Stream_putStrLn(x_36, x_74);
if (lean_obj_tag(x_75) == 0)
{
lean_object* x_76; lean_object* x_77; 
lean_dec_ref(x_75);
x_76 = l___private_Lean_Shell_0__Lean_displayHelp___closed__32;
lean_inc_ref(x_36);
x_77 = l_IO_FS_Stream_putStrLn(x_36, x_76);
if (lean_obj_tag(x_77) == 0)
{
lean_object* x_78; lean_object* x_79; 
lean_dec_ref(x_77);
x_78 = l___private_Lean_Shell_0__Lean_displayHelp___closed__33;
lean_inc_ref(x_36);
x_79 = l_IO_FS_Stream_putStrLn(x_36, x_78);
if (lean_obj_tag(x_79) == 0)
{
lean_object* x_80; lean_object* x_81; 
lean_dec_ref(x_79);
x_80 = l___private_Lean_Shell_0__Lean_displayHelp___closed__34;
lean_inc_ref(x_36);
x_81 = l_IO_FS_Stream_putStrLn(x_36, x_80);
if (lean_obj_tag(x_81) == 0)
{
lean_object* x_82; lean_object* x_83; 
lean_dec_ref(x_81);
x_82 = l___private_Lean_Shell_0__Lean_displayHelp___closed__35;
lean_inc_ref(x_36);
x_83 = l_IO_FS_Stream_putStrLn(x_36, x_82);
if (lean_obj_tag(x_83) == 0)
{
uint8_t x_84; 
lean_dec_ref(x_83);
x_84 = l___private_Lean_Shell_0__Lean_displayHelp___closed__36;
if (x_84 == 0)
{
x_8 = x_36;
x_9 = lean_box(0);
goto block_35;
}
else
{
lean_object* x_85; lean_object* x_86; 
x_85 = l___private_Lean_Shell_0__Lean_displayHelp___closed__37;
lean_inc_ref(x_36);
x_86 = l_IO_FS_Stream_putStrLn(x_36, x_85);
if (lean_obj_tag(x_86) == 0)
{
lean_object* x_87; lean_object* x_88; 
lean_dec_ref(x_86);
x_87 = l___private_Lean_Shell_0__Lean_displayHelp___closed__38;
lean_inc_ref(x_36);
x_88 = l_IO_FS_Stream_putStrLn(x_36, x_87);
if (lean_obj_tag(x_88) == 0)
{
lean_object* x_89; lean_object* x_90; 
lean_dec_ref(x_88);
x_89 = l___private_Lean_Shell_0__Lean_displayHelp___closed__39;
lean_inc_ref(x_36);
x_90 = l_IO_FS_Stream_putStrLn(x_36, x_89);
if (lean_obj_tag(x_90) == 0)
{
lean_object* x_91; lean_object* x_92; 
lean_dec_ref(x_90);
x_91 = l___private_Lean_Shell_0__Lean_displayHelp___closed__40;
lean_inc_ref(x_36);
x_92 = l_IO_FS_Stream_putStrLn(x_36, x_91);
if (lean_obj_tag(x_92) == 0)
{
lean_dec_ref(x_92);
x_8 = x_36;
x_9 = lean_box(0);
goto block_35;
}
else
{
lean_dec_ref(x_36);
return x_92;
}
}
else
{
lean_dec_ref(x_36);
return x_90;
}
}
else
{
lean_dec_ref(x_36);
return x_88;
}
}
else
{
lean_dec_ref(x_36);
return x_86;
}
}
}
else
{
lean_dec_ref(x_36);
return x_83;
}
}
else
{
lean_dec_ref(x_36);
return x_81;
}
}
else
{
lean_dec_ref(x_36);
return x_79;
}
}
else
{
lean_dec_ref(x_36);
return x_77;
}
}
else
{
lean_dec_ref(x_36);
return x_75;
}
}
else
{
lean_dec_ref(x_36);
return x_73;
}
}
else
{
lean_dec_ref(x_36);
return x_71;
}
}
else
{
lean_dec_ref(x_36);
return x_69;
}
}
else
{
lean_dec_ref(x_36);
return x_67;
}
}
else
{
lean_dec_ref(x_36);
return x_65;
}
}
else
{
lean_dec_ref(x_36);
return x_63;
}
}
else
{
lean_dec_ref(x_36);
return x_61;
}
}
else
{
lean_dec_ref(x_36);
return x_59;
}
}
else
{
lean_dec_ref(x_36);
return x_57;
}
}
else
{
lean_dec_ref(x_36);
return x_55;
}
}
else
{
lean_dec_ref(x_36);
return x_53;
}
}
else
{
lean_dec_ref(x_36);
return x_51;
}
}
else
{
lean_dec_ref(x_36);
return x_49;
}
}
else
{
lean_dec_ref(x_36);
return x_47;
}
}
else
{
lean_dec_ref(x_36);
return x_45;
}
}
else
{
lean_dec_ref(x_36);
return x_43;
}
}
else
{
lean_dec_ref(x_36);
return x_41;
}
}
else
{
lean_dec_ref(x_36);
return x_39;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_displayHelp___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = lean_unbox(x_1);
x_4 = lean_display_help(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_ctorIdx(uint8_t x_1) {
_start:
{
switch (x_1) {
case 0:
{
lean_object* x_2; 
x_2 = lean_unsigned_to_nat(0u);
return x_2;
}
case 1:
{
lean_object* x_3; 
x_3 = lean_unsigned_to_nat(1u);
return x_3;
}
default: 
{
lean_object* x_4; 
x_4 = lean_unsigned_to_nat(2u);
return x_4;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_ctorIdx___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = lean_unbox(x_1);
x_3 = l___private_Lean_Shell_0__Lean_ShellComponent_ctorIdx(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_toCtorIdx(uint8_t x_1) {
_start:
{
lean_object* x_2; 
x_2 = l___private_Lean_Shell_0__Lean_ShellComponent_ctorIdx(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_toCtorIdx___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = lean_unbox(x_1);
x_3 = l___private_Lean_Shell_0__Lean_ShellComponent_toCtorIdx(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_ctorElim___redArg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_ctorElim(lean_object* x_1, lean_object* x_2, uint8_t x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_inc(x_5);
return x_5;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_ctorElim___redArg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l___private_Lean_Shell_0__Lean_ShellComponent_ctorElim___redArg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_ctorElim___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; lean_object* x_7; 
x_6 = lean_unbox(x_3);
x_7 = l___private_Lean_Shell_0__Lean_ShellComponent_ctorElim(x_1, x_2, x_6, x_4, x_5);
lean_dec(x_5);
lean_dec(x_2);
return x_7;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_frontend_elim___redArg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_frontend_elim(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_inc(x_4);
return x_4;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_frontend_elim___redArg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l___private_Lean_Shell_0__Lean_ShellComponent_frontend_elim___redArg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_frontend_elim___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = lean_unbox(x_2);
x_6 = l___private_Lean_Shell_0__Lean_ShellComponent_frontend_elim(x_1, x_5, x_3, x_4);
lean_dec(x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_watchdog_elim___redArg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_watchdog_elim(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_inc(x_4);
return x_4;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_watchdog_elim___redArg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l___private_Lean_Shell_0__Lean_ShellComponent_watchdog_elim___redArg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_watchdog_elim___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = lean_unbox(x_2);
x_6 = l___private_Lean_Shell_0__Lean_ShellComponent_watchdog_elim(x_1, x_5, x_3, x_4);
lean_dec(x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_worker_elim___redArg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_worker_elim(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_inc(x_4);
return x_4;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_worker_elim___redArg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l___private_Lean_Shell_0__Lean_ShellComponent_worker_elim___redArg(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_worker_elim___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = lean_unbox(x_2);
x_6 = l___private_Lean_Shell_0__Lean_ShellComponent_worker_elim(x_1, x_5, x_3, x_4);
lean_dec(x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_noConfusion___redArg___lam__0(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_noConfusion___redArg(uint8_t x_1, uint8_t x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; uint8_t x_5; lean_object* x_6; 
x_3 = l___private_Lean_Shell_0__Lean_ShellComponent_ctorIdx(x_1);
x_4 = l___private_Lean_Shell_0__Lean_ShellComponent_ctorIdx(x_2);
x_5 = lean_nat_dec_eq(x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
x_6 = lean_alloc_closure((void*)(l___private_Lean_Shell_0__Lean_ShellComponent_noConfusion___redArg___lam__0___boxed), 1, 0);
return x_6;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_noConfusion(lean_object* x_1, uint8_t x_2, uint8_t x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l___private_Lean_Shell_0__Lean_ShellComponent_noConfusion___redArg(x_2, x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_noConfusion___redArg___lam__0___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l___private_Lean_Shell_0__Lean_ShellComponent_noConfusion___redArg___lam__0(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_noConfusion___redArg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; uint8_t x_4; lean_object* x_5; 
x_3 = lean_unbox(x_1);
x_4 = lean_unbox(x_2);
x_5 = l___private_Lean_Shell_0__Lean_ShellComponent_noConfusion___redArg(x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_noConfusion___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; uint8_t x_6; lean_object* x_7; 
x_5 = lean_unbox(x_2);
x_6 = lean_unbox(x_3);
x_7 = l___private_Lean_Shell_0__Lean_ShellComponent_noConfusion(x_1, x_5, x_6, x_4);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Shell_0__Lean_initFn_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2__spec__0(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_5 = lean_ctor_get(x_2, 0);
x_6 = lean_ctor_get(x_2, 1);
x_7 = lean_ctor_get(x_2, 2);
lean_inc(x_5);
x_8 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_8, 0, x_5);
lean_inc_ref(x_7);
lean_inc_ref(x_6);
x_9 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_9, 0, x_3);
lean_ctor_set(x_9, 1, x_8);
lean_ctor_set(x_9, 2, x_6);
lean_ctor_set(x_9, 3, x_7);
lean_inc(x_1);
x_10 = lean_register_option(x_1, x_9);
if (lean_obj_tag(x_10) == 0)
{
uint8_t x_11; 
x_11 = !lean_is_exclusive(x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_ctor_get(x_10, 0);
lean_dec(x_12);
lean_inc(x_5);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_1);
lean_ctor_set(x_13, 1, x_5);
lean_ctor_set(x_10, 0, x_13);
return x_10;
}
else
{
lean_object* x_14; lean_object* x_15; 
lean_dec(x_10);
lean_inc(x_5);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_1);
lean_ctor_set(x_14, 1, x_5);
x_15 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_15, 0, x_14);
return x_15;
}
}
else
{
uint8_t x_16; 
lean_dec(x_1);
x_16 = !lean_is_exclusive(x_10);
if (x_16 == 0)
{
return x_10;
}
else
{
lean_object* x_17; lean_object* x_18; 
x_17 = lean_ctor_get(x_10, 0);
lean_inc(x_17);
lean_dec(x_10);
x_18 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_18, 0, x_17);
return x_18;
}
}
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_initFn___closed__0_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("max_memory", 10, 10);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_initFn___closed__1_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Shell_0__Lean_initFn___closed__0_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_;
x_2 = l_Lean_Name_mkStr1(x_1);
return x_2;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_initFn___closed__2_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_() {
_start:
{
lean_object* x_2;
x_2 = lean_box(1024*1024*1024);
return x_2;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_initFn___closed__3_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___private_Lean_Shell_0__Lean_shortVersionString___closed__1;
x_2 = l___private_Lean_Shell_0__Lean_initFn___closed__2_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_;
x_3 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
lean_ctor_set(x_3, 2, x_1);
return x_3;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_initFn___closed__4_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("_private", 8, 8);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_initFn___closed__5_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___private_Lean_Shell_0__Lean_initFn___closed__4_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_;
x_2 = lean_box(0);
x_3 = l_Lean_Name_str___override(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_initFn___closed__6_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Lean", 4, 4);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_initFn___closed__7_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___private_Lean_Shell_0__Lean_initFn___closed__6_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_;
x_2 = l___private_Lean_Shell_0__Lean_initFn___closed__5_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_;
x_3 = l_Lean_Name_str___override(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_initFn___closed__8_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Shell", 5, 5);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_initFn___closed__9_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___private_Lean_Shell_0__Lean_initFn___closed__8_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_;
x_2 = l___private_Lean_Shell_0__Lean_initFn___closed__7_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_;
x_3 = l_Lean_Name_str___override(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_initFn___closed__10_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = l___private_Lean_Shell_0__Lean_initFn___closed__9_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_;
x_3 = l_Lean_Name_num___override(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_initFn___closed__11_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___private_Lean_Shell_0__Lean_initFn___closed__6_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_;
x_2 = l___private_Lean_Shell_0__Lean_initFn___closed__10_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_;
x_3 = l_Lean_Name_str___override(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_initFn___closed__12_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("maxMemory", 9, 9);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_initFn___closed__13_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___private_Lean_Shell_0__Lean_initFn___closed__12_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_;
x_2 = l___private_Lean_Shell_0__Lean_initFn___closed__11_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_;
x_3 = l_Lean_Name_str___override(x_2, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_initFn_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_() {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l___private_Lean_Shell_0__Lean_initFn___closed__1_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_;
x_3 = l___private_Lean_Shell_0__Lean_initFn___closed__3_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_;
x_4 = l___private_Lean_Shell_0__Lean_initFn___closed__13_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_;
x_5 = l_Lean_Option_register___at___00__private_Lean_Shell_0__Lean_initFn_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2__spec__0(x_2, x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Shell_0__Lean_initFn_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2__spec__0___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_Option_register___at___00__private_Lean_Shell_0__Lean_initFn_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2__spec__0(x_1, x_2, x_3);
lean_dec_ref(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_initFn_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2____boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l___private_Lean_Shell_0__Lean_initFn_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_();
return x_2;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_initFn___closed__0_00___x40_Lean_Shell_1197438456____hygCtx___hyg_2_() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("timeout", 7, 7);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_initFn___closed__1_00___x40_Lean_Shell_1197438456____hygCtx___hyg_2_() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Shell_0__Lean_initFn___closed__0_00___x40_Lean_Shell_1197438456____hygCtx___hyg_2_;
x_2 = l_Lean_Name_mkStr1(x_1);
return x_2;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_initFn___closed__2_00___x40_Lean_Shell_1197438456____hygCtx___hyg_2_() {
_start:
{
lean_object* x_2;
x_2 = lean_box(0);
return x_2;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_initFn___closed__3_00___x40_Lean_Shell_1197438456____hygCtx___hyg_2_() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___private_Lean_Shell_0__Lean_shortVersionString___closed__1;
x_2 = l___private_Lean_Shell_0__Lean_initFn___closed__2_00___x40_Lean_Shell_1197438456____hygCtx___hyg_2_;
x_3 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
lean_ctor_set(x_3, 2, x_1);
return x_3;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_initFn___closed__4_00___x40_Lean_Shell_1197438456____hygCtx___hyg_2_() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___private_Lean_Shell_0__Lean_initFn___closed__0_00___x40_Lean_Shell_1197438456____hygCtx___hyg_2_;
x_2 = l___private_Lean_Shell_0__Lean_initFn___closed__11_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_;
x_3 = l_Lean_Name_str___override(x_2, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_initFn_00___x40_Lean_Shell_1197438456____hygCtx___hyg_2_() {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l___private_Lean_Shell_0__Lean_initFn___closed__1_00___x40_Lean_Shell_1197438456____hygCtx___hyg_2_;
x_3 = l___private_Lean_Shell_0__Lean_initFn___closed__3_00___x40_Lean_Shell_1197438456____hygCtx___hyg_2_;
x_4 = l___private_Lean_Shell_0__Lean_initFn___closed__4_00___x40_Lean_Shell_1197438456____hygCtx___hyg_2_;
x_5 = l_Lean_Option_register___at___00__private_Lean_Shell_0__Lean_initFn_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2__spec__0(x_2, x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_initFn_00___x40_Lean_Shell_1197438456____hygCtx___hyg_2____boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l___private_Lean_Shell_0__Lean_initFn_00___x40_Lean_Shell_1197438456____hygCtx___hyg_2_();
return x_2;
}
}
LEAN_EXPORT lean_object* l_IO_ofExcept___at___00__private_Lean_Shell_0__Lean_shellMain_spec__0___redArg(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_1);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_1, 0);
x_5 = lean_mk_io_user_error(x_4);
lean_ctor_set_tag(x_1, 1);
lean_ctor_set(x_1, 0, x_5);
return x_1;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_mk_io_user_error(x_6);
x_8 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_8, 0, x_7);
return x_8;
}
}
else
{
uint8_t x_9; 
x_9 = !lean_is_exclusive(x_1);
if (x_9 == 0)
{
lean_ctor_set_tag(x_1, 0);
return x_1;
}
else
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_ctor_get(x_1, 0);
lean_inc(x_10);
lean_dec(x_1);
x_11 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_11, 0, x_10);
return x_11;
}
}
}
}
LEAN_EXPORT lean_object* l_IO_ofExcept___at___00__private_Lean_Shell_0__Lean_shellMain_spec__0(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_4; 
x_4 = l_IO_ofExcept___at___00__private_Lean_Shell_0__Lean_shellMain_spec__0___redArg(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_IO_eprint___at___00IO_eprintln___at___00__private_Lean_Shell_0__Lean_shellMain_spec__1_spec__1(lean_object* x_1) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_get_stderr();
x_4 = lean_ctor_get(x_3, 4);
lean_inc_ref(x_4);
lean_dec_ref(x_3);
x_5 = lean_apply_2(x_4, x_1, lean_box(0));
return x_5;
}
}
LEAN_EXPORT lean_object* l_IO_eprintln___at___00__private_Lean_Shell_0__Lean_shellMain_spec__1(lean_object* x_1) {
_start:
{
uint32_t x_3; lean_object* x_4; lean_object* x_5; 
x_3 = 10;
x_4 = lean_string_push(x_1, x_3);
x_5 = l_IO_eprint___at___00IO_eprintln___at___00__private_Lean_Shell_0__Lean_shellMain_spec__1_spec__1(x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Shell_0__Lean_shellMain_spec__3(lean_object* x_1, lean_object* x_2) {
_start:
{
printf("[Lean Shell Spec 1]");
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
printf("[Lean Shell Spec 2]");
x_3 = lean_ctor_get(x_2, 0);
printf("[Lean Shell Spec 3]");
x_4 = lean_ctor_get(x_2, 1);
printf("[Lean Shell Spec 4]");
x_5 = l_Lean_KVMap_find(x_1, x_3);
printf("[Lean Shell Spec 5]");
if (lean_obj_tag(x_5) == 0)
{
printf("[Lean Shell Spec 7]");
lean_inc(x_4);
printf("[Lean Shell Spec 8]");
return x_4;
}
else
{
printf("[Lean Shell Spec 12]");
lean_object* x_6; 
printf("[Lean Shell Spec 13]");
x_6 = lean_ctor_get(x_5, 0);
printf("[Lean Shell Spec 14]");
lean_inc(x_6);
printf("[Lean Shell Spec 15]");
lean_dec_ref(x_5);
printf("[Lean Shell Spec 16]");
if (lean_obj_tag(x_6) == 3)
{
printf("[Lean Shell Spec 18]");
lean_object* x_7; 
printf("[Lean Shell Spec 19]");
x_7 = lean_ctor_get(x_6, 0);
printf("[Lean Shell Spec 20]");
lean_inc(x_7);
printf("[Lean Shell Spec 21]");
lean_dec_ref(x_6);
printf("[Lean Shell Spec 22]");
return x_7;
}
else
{
printf("[Lean Shell Spec 26]");
lean_dec(x_6);
printf("[Lean Shell Spec 27]");
lean_inc(x_4);
printf("[Lean Shell Spec 28]");
return x_4;
}
}
}
}
LEAN_EXPORT lean_object* l_IO_println___at___00__private_Lean_Shell_0__Lean_shellMain_spec__4(lean_object* x_1) {
_start:
{
uint32_t x_3; lean_object* x_4; lean_object* x_5; 
x_3 = 10;
x_4 = lean_string_push(x_1, x_3);
x_5 = l_IO_print___at___00IO_println___at___00__private_Lean_Shell_0__Lean_displayHeader_spec__0_spec__0(x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_shellMain___lam__0(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_4; 
x_4 = l_IO_ofExcept___at___00__private_Lean_Shell_0__Lean_shellMain_spec__0___redArg(x_1);
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
lean_dec_ref(x_4);
x_6 = lean_string_to_utf8(x_5);
lean_dec(x_5);
x_7 = lean_io_prim_handle_write(x_2, x_6);
lean_dec_ref(x_6);
return x_7;
}
else
{
uint8_t x_8; 
x_8 = !lean_is_exclusive(x_4);
if (x_8 == 0)
{
return x_4;
}
else
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_ctor_get(x_4, 0);
lean_inc(x_9);
lean_dec(x_4);
x_10 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_10, 0, x_9);
return x_10;
}
}
}
}
static uint8_t _init_l___private_Lean_Shell_0__Lean_shellMain___closed__0() {
_start:
{
lean_object* x_1; uint8_t x_2; 
x_1 = lean_box(0);
x_2 = lean_internal_has_address_sanitizer(x_1);
return x_2;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_shellMain___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("LLVM code generation", 20, 20);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_shellMain___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = lean_mk_empty_array_with_capacity(x_1);
return x_2;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_shellMain___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("C code generation", 17, 17);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_shellMain___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("failed to create '", 18, 18);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_shellMain___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("'", 1, 1);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_shellMain___closed__6() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("_stdin", 6, 6);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_shellMain___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Shell_0__Lean_shellMain___closed__6;
x_2 = l_Lean_Name_mkStr1(x_1);
return x_2;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_shellMain___closed__8() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("#lang", 5, 5);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_shellMain___closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Shell_0__Lean_shellMain___closed__8;
x_2 = lean_string_utf8_byte_size(x_1);
return x_2;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_shellMain___closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l___private_Lean_Shell_0__Lean_shellMain___closed__9;
x_2 = lean_unsigned_to_nat(0u);
x_3 = l___private_Lean_Shell_0__Lean_shellMain___closed__8;
x_4 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_4, 0, x_3);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_1);
return x_4;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_shellMain___closed__11() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Shell_0__Lean_shellMain___closed__10;
x_2 = l_String_Slice_utf8ByteSize(x_1);
return x_2;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_shellMain___closed__12() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("lean4", 5, 5);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_shellMain___closed__13() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Shell_0__Lean_shellMain___closed__12;
x_2 = lean_string_utf8_byte_size(x_1);
return x_2;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_shellMain___closed__14() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l___private_Lean_Shell_0__Lean_shellMain___closed__13;
x_2 = lean_unsigned_to_nat(0u);
x_3 = l___private_Lean_Shell_0__Lean_shellMain___closed__12;
x_4 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_4, 0, x_3);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_1);
return x_4;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_shellMain___closed__15() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("unknown language '", 18, 18);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_shellMain___closed__16() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("'\n", 2, 2);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_shellMain___closed__17() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Expected exactly one file name", 30, 30);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_shellMain___closed__18() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("<stdin>", 7, 7);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_shellMain___closed__19() {
_start:
{
lean_object* x_1; 
x_1 = lean_box(30000);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_shellMain___closed__20() {
_start:
{
lean_object* x_1; 
x_1 = lean_box(1024*1024*1024);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_shellMain___boxed__const__1() {
_start:
{
uint32_t x_1; lean_object* x_2; 
x_1 = 0;
x_2 = lean_box_uint32(x_1);
return x_2;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_shellMain___boxed__const__2() {
_start:
{
uint32_t x_1; lean_object* x_2; 
x_1 = 1;
x_2 = lean_box_uint32(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* lean_shell_main(lean_object* x_1, lean_object* x_2, uint8_t x_3, uint8_t x_4, uint8_t x_5, uint8_t x_6, uint8_t x_7, uint8_t x_8, uint8_t x_9, lean_object* x_10, uint32_t x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16, lean_object* x_17, uint8_t x_18, lean_object* x_19, uint8_t x_20, uint8_t x_21) {
_start:
{
printf("[Lean Shell Main] 1\n");
lean_object* x_23; lean_object* x_24; lean_object* x_35; lean_object* x_39; lean_object* x_40; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_181; lean_object* x_182; lean_object* x_183; lean_object* x_184; lean_object* x_243; lean_object* x_244; lean_object* x_245; lean_object* x_246; lean_object* x_251; lean_object* x_252; lean_object* x_253; lean_object* x_272; lean_object* x_273; lean_object* x_274; lean_object* x_292; lean_object* x_298; lean_object* x_309; 
printf("[Lean Shell Main] 2\n");
if (x_4 == 0)
{
printf("[Lean Shell Main] 4\n");
if (x_5 == 0)
{
printf("[Lean Shell Main] 6\n");
lean_object* x_319; lean_object* x_320; lean_object* x_321; uint8_t x_322; 
printf("[Lean Shell Main] 7\n");
x_319 = l___private_Lean_Shell_0__Lean_shellMain___closed__20;
printf("[Lean Shell Main] 8\n");
x_320 = lean_box(1024*1024*1024);
printf("[Lean Shell Main] 9\n");
x_321 = lean_unsigned_to_nat(0u);
printf("[Lean Shell Main] 10\n");
x_322 = lean_nat_dec_eq(x_320, x_321);
printf("[Lean Shell Main] 11\n");
if (x_322 == 0)
{
printf("[Lean Shell Main] 13\n");
size_t x_323; size_t x_324; size_t x_325; size_t x_326; lean_object* x_327; 
printf("[Lean Shell Main] 14\n");
x_323 = lean_usize_of_nat(x_320);
printf("[Lean Shell Main] 15\n");
lean_dec(x_320);
printf("[Lean Shell Main] 16\n");
x_324 = 1024;
printf("[Lean Shell Main] 17\n");
x_325 = lean_usize_mul(x_323, x_324);
printf("[Lean Shell Main] 18\n");
x_326 = lean_usize_mul(x_325, x_324);
printf("[Lean Shell Main] 19\n");
x_327 = lean_internal_set_max_memory(x_326);
printf("[Lean Shell Main] 20\n");
x_309 = lean_box(0);
printf("[Lean Shell Main] 21\n");
goto block_318;
printf("[Lean Shell Main] 22\n");
}
else
{
printf("[Lean Shell Main] 25\n");
lean_dec(x_320);
printf("[Lean Shell Main] 26\n");
x_309 = lean_box(0);
printf("[Lean Shell Main] 27\n");
goto block_318;
printf("[Lean Shell Main] 28\n");
}
printf("[Lean Shell Main] 29\n");
}
else
{
printf("[Lean Shell Main] 32\n");
lean_object* x_328; 
printf("[Lean Shell Main] 33\n");
lean_dec_ref(x_19);
printf("[Lean Shell Main] 34\n");
lean_dec(x_17);
printf("[Lean Shell Main] 35\n");
lean_dec(x_16);
printf("[Lean Shell Main] 36\n");
lean_dec(x_15);
printf("[Lean Shell Main] 37\n");
lean_dec(x_14);
printf("[Lean Shell Main] 38\n");
lean_dec(x_13);
printf("[Lean Shell Main] 39\n");
lean_dec(x_12);
printf("[Lean Shell Main] 40\n");
lean_dec(x_10);
printf("[Lean Shell Main] 41\n");
lean_dec(x_2);
printf("[Lean Shell Main] 42\n");
lean_dec(x_1);
printf("[Lean Shell Main] 43\n");
x_328 = l_Lean_getBuildDir();
printf("[Lean Shell Main] 44\n");
if (lean_obj_tag(x_328) == 0)
{
printf("[Lean Shell Main] 46\n");
lean_object* x_329; lean_object* x_330; 
printf("[Lean Shell Main] 47\n");
x_329 = lean_ctor_get(x_328, 0);
printf("[Lean Shell Main] 48\n");
lean_inc(x_329);
printf("[Lean Shell Main] 49\n");
lean_dec_ref(x_328);
printf("[Lean Shell Main] 50\n");
x_330 = l_Lean_getLibDir(x_329);
printf("[Lean Shell Main] 51\n");
if (lean_obj_tag(x_330) == 0)
{
printf("[Lean Shell Main] 53\n");
lean_object* x_331; lean_object* x_332; 
printf("[Lean Shell Main] 54\n");
x_331 = lean_ctor_get(x_330, 0);
printf("[Lean Shell Main] 55\n");
lean_inc(x_331);
printf("[Lean Shell Main] 56\n");
lean_dec_ref(x_330);
printf("[Lean Shell Main] 57\n");
x_332 = l_IO_println___at___00__private_Lean_Shell_0__Lean_shellMain_spec__4(x_331);
printf("[Lean Shell Main] 58\n");
if (lean_obj_tag(x_332) == 0)
{
printf("[Lean Shell Main] 60\n");
uint8_t x_333; 
printf("[Lean Shell Main] 61\n");
x_333 = !lean_is_exclusive(x_332);
printf("[Lean Shell Main] 62\n");
if (x_333 == 0)
{
printf("[Lean Shell Main] 64\n");
lean_object* x_334; lean_object* x_335; 
printf("[Lean Shell Main] 65\n");
x_334 = lean_ctor_get(x_332, 0);
printf("[Lean Shell Main] 66\n");
lean_dec(x_334);
printf("[Lean Shell Main] 67\n");
x_335 = l___private_Lean_Shell_0__Lean_shellMain___boxed__const__1;
printf("[Lean Shell Main] 68\n");
lean_ctor_set(x_332, 0, x_335);
printf("[Lean Shell Main] 69\n");
return x_332;
printf("[Lean Shell Main] 70\n");
}
else
{
printf("[Lean Shell Main] 73\n");
lean_object* x_336; lean_object* x_337; 
printf("[Lean Shell Main] 74\n");
lean_dec(x_332);
printf("[Lean Shell Main] 75\n");
x_336 = l___private_Lean_Shell_0__Lean_shellMain___boxed__const__1;
printf("[Lean Shell Main] 76\n");
x_337 = lean_alloc_ctor(0, 1, 0);
printf("[Lean Shell Main] 77\n");
lean_ctor_set(x_337, 0, x_336);
printf("[Lean Shell Main] 78\n");
return x_337;
printf("[Lean Shell Main] 79\n");
}
printf("[Lean Shell Main] 80\n");
}
else
{
printf("[Lean Shell Main] 83\n");
uint8_t x_338; 
printf("[Lean Shell Main] 84\n");
x_338 = !lean_is_exclusive(x_332);
printf("[Lean Shell Main] 85\n");
if (x_338 == 0)
{
printf("[Lean Shell Main] 87\n");
return x_332;
printf("[Lean Shell Main] 88\n");
}
else
{
printf("[Lean Shell Main] 91\n");
lean_object* x_339; lean_object* x_340; 
printf("[Lean Shell Main] 92\n");
x_339 = lean_ctor_get(x_332, 0);
printf("[Lean Shell Main] 93\n");
lean_inc(x_339);
printf("[Lean Shell Main] 94\n");
lean_dec(x_332);
printf("[Lean Shell Main] 95\n");
x_340 = lean_alloc_ctor(1, 1, 0);
printf("[Lean Shell Main] 96\n");
lean_ctor_set(x_340, 0, x_339);
printf("[Lean Shell Main] 97\n");
return x_340;
printf("[Lean Shell Main] 98\n");
}
printf("[Lean Shell Main] 99\n");
}
printf("[Lean Shell Main] 100\n");
}
else
{
printf("[Lean Shell Main] 103\n");
uint8_t x_341; 
printf("[Lean Shell Main] 104\n");
x_341 = !lean_is_exclusive(x_330);
printf("[Lean Shell Main] 105\n");
if (x_341 == 0)
{
printf("[Lean Shell Main] 107\n");
return x_330;
printf("[Lean Shell Main] 108\n");
}
else
{
printf("[Lean Shell Main] 111\n");
lean_object* x_342; lean_object* x_343; 
printf("[Lean Shell Main] 112\n");
x_342 = lean_ctor_get(x_330, 0);
printf("[Lean Shell Main] 113\n");
lean_inc(x_342);
printf("[Lean Shell Main] 114\n");
lean_dec(x_330);
printf("[Lean Shell Main] 115\n");
x_343 = lean_alloc_ctor(1, 1, 0);
printf("[Lean Shell Main] 116\n");
lean_ctor_set(x_343, 0, x_342);
printf("[Lean Shell Main] 117\n");
return x_343;
printf("[Lean Shell Main] 118\n");
}
printf("[Lean Shell Main] 119\n");
}
printf("[Lean Shell Main] 120\n");
}
else
{
printf("[Lean Shell Main] 123\n");
uint8_t x_344; 
printf("[Lean Shell Main] 124\n");
x_344 = !lean_is_exclusive(x_328);
printf("[Lean Shell Main] 125\n");
if (x_344 == 0)
{
printf("[Lean Shell Main] 127\n");
return x_328;
printf("[Lean Shell Main] 128\n");
}
else
{
printf("[Lean Shell Main] 131\n");
lean_object* x_345; lean_object* x_346; 
printf("[Lean Shell Main] 132\n");
x_345 = lean_ctor_get(x_328, 0);
printf("[Lean Shell Main] 133\n");
lean_inc(x_345);
printf("[Lean Shell Main] 134\n");
lean_dec(x_328);
printf("[Lean Shell Main] 135\n");
x_346 = lean_alloc_ctor(1, 1, 0);
printf("[Lean Shell Main] 136\n");
lean_ctor_set(x_346, 0, x_345);
printf("[Lean Shell Main] 137\n");
return x_346;
printf("[Lean Shell Main] 138\n");
}
printf("[Lean Shell Main] 139\n");
}
printf("[Lean Shell Main] 140\n");
}
printf("[Lean Shell Main] 141\n");
}
else
{
printf("[Lean Shell Main] 144\n");
lean_object* x_347; 
printf("[Lean Shell Main] 145\n");
lean_dec_ref(x_19);
printf("[Lean Shell Main] 146\n");
lean_dec(x_17);
printf("[Lean Shell Main] 147\n");
lean_dec(x_16);
printf("[Lean Shell Main] 148\n");
lean_dec(x_15);
printf("[Lean Shell Main] 149\n");
lean_dec(x_14);
printf("[Lean Shell Main] 150\n");
lean_dec(x_13);
printf("[Lean Shell Main] 151\n");
lean_dec(x_12);
printf("[Lean Shell Main] 152\n");
lean_dec(x_10);
printf("[Lean Shell Main] 153\n");
lean_dec(x_2);
printf("[Lean Shell Main] 154\n");
lean_dec(x_1);
printf("[Lean Shell Main] 155\n");
x_347 = l_Lean_getBuildDir();
printf("[Lean Shell Main] 156\n");
if (lean_obj_tag(x_347) == 0)
{
printf("[Lean Shell Main] 158\n");
lean_object* x_348; lean_object* x_349; 
printf("[Lean Shell Main] 159\n");
x_348 = lean_ctor_get(x_347, 0);
printf("[Lean Shell Main] 160\n");
lean_inc(x_348);
printf("[Lean Shell Main] 161\n");
lean_dec_ref(x_347);
printf("[Lean Shell Main] 162\n");
x_349 = l_IO_println___at___00__private_Lean_Shell_0__Lean_shellMain_spec__4(x_348);
printf("[Lean Shell Main] 163\n");
if (lean_obj_tag(x_349) == 0)
{
printf("[Lean Shell Main] 165\n");
uint8_t x_350; 
printf("[Lean Shell Main] 166\n");
x_350 = !lean_is_exclusive(x_349);
printf("[Lean Shell Main] 167\n");
if (x_350 == 0)
{
printf("[Lean Shell Main] 169\n");
lean_object* x_351; lean_object* x_352; 
printf("[Lean Shell Main] 170\n");
x_351 = lean_ctor_get(x_349, 0);
printf("[Lean Shell Main] 171\n");
lean_dec(x_351);
printf("[Lean Shell Main] 172\n");
x_352 = l___private_Lean_Shell_0__Lean_shellMain___boxed__const__1;
printf("[Lean Shell Main] 173\n");
lean_ctor_set(x_349, 0, x_352);
printf("[Lean Shell Main] 174\n");
return x_349;
printf("[Lean Shell Main] 175\n");
}
else
{
printf("[Lean Shell Main] 178\n");
lean_object* x_353; lean_object* x_354; 
printf("[Lean Shell Main] 179\n");
lean_dec(x_349);
printf("[Lean Shell Main] 180\n");
x_353 = l___private_Lean_Shell_0__Lean_shellMain___boxed__const__1;
printf("[Lean Shell Main] 181\n");
x_354 = lean_alloc_ctor(0, 1, 0);
printf("[Lean Shell Main] 182\n");
lean_ctor_set(x_354, 0, x_353);
printf("[Lean Shell Main] 183\n");
return x_354;
printf("[Lean Shell Main] 184\n");
}
printf("[Lean Shell Main] 185\n");
}
else
{
printf("[Lean Shell Main] 188\n");
uint8_t x_355; 
printf("[Lean Shell Main] 189\n");
x_355 = !lean_is_exclusive(x_349);
printf("[Lean Shell Main] 190\n");
if (x_355 == 0)
{
printf("[Lean Shell Main] 192\n");
return x_349;
printf("[Lean Shell Main] 193\n");
}
else
{
printf("[Lean Shell Main] 196\n");
lean_object* x_356; lean_object* x_357; 
printf("[Lean Shell Main] 197\n");
x_356 = lean_ctor_get(x_349, 0);
printf("[Lean Shell Main] 198\n");
lean_inc(x_356);
printf("[Lean Shell Main] 199\n");
lean_dec(x_349);
printf("[Lean Shell Main] 200\n");
x_357 = lean_alloc_ctor(1, 1, 0);
printf("[Lean Shell Main] 201\n");
lean_ctor_set(x_357, 0, x_356);
printf("[Lean Shell Main] 202\n");
return x_357;
printf("[Lean Shell Main] 203\n");
}
printf("[Lean Shell Main] 204\n");
}
printf("[Lean Shell Main] 205\n");
}
else
{
printf("[Lean Shell Main] 208\n");
uint8_t x_358; 
printf("[Lean Shell Main] 209\n");
x_358 = !lean_is_exclusive(x_347);
printf("[Lean Shell Main] 210\n");
if (x_358 == 0)
{
printf("[Lean Shell Main] 212\n");
return x_347;
printf("[Lean Shell Main] 213\n");
}
else
{
printf("[Lean Shell Main] 216\n");
lean_object* x_359; lean_object* x_360; 
printf("[Lean Shell Main] 217\n");
x_359 = lean_ctor_get(x_347, 0);
printf("[Lean Shell Main] 218\n");
lean_inc(x_359);
printf("[Lean Shell Main] 219\n");
lean_dec(x_347);
printf("[Lean Shell Main] 220\n");
x_360 = lean_alloc_ctor(1, 1, 0);
printf("[Lean Shell Main] 221\n");
lean_ctor_set(x_360, 0, x_359);
printf("[Lean Shell Main] 222\n");
return x_360;
printf("[Lean Shell Main] 223\n");
}
printf("[Lean Shell Main] 224\n");
}
printf("[Lean Shell Main] 225\n");
}
printf("[Lean Shell Main] 226\n");
block_34:
printf("[Lean Shell Main] 227\n");
{
printf("[Lean Shell Main] 228\n");
lean_object* x_25; 
printf("[Lean Shell Main] 229\n");
x_25 = l_Lean_printImportsJson(x_23);
printf("[Lean Shell Main] 230\n");
if (lean_obj_tag(x_25) == 0)
{
printf("[Lean Shell Main] 232\n");
uint8_t x_26; 
printf("[Lean Shell Main] 233\n");
x_26 = !lean_is_exclusive(x_25);
printf("[Lean Shell Main] 234\n");
if (x_26 == 0)
{
printf("[Lean Shell Main] 236\n");
lean_object* x_27; lean_object* x_28; 
printf("[Lean Shell Main] 237\n");
x_27 = lean_ctor_get(x_25, 0);
printf("[Lean Shell Main] 238\n");
lean_dec(x_27);
printf("[Lean Shell Main] 239\n");
x_28 = l___private_Lean_Shell_0__Lean_shellMain___boxed__const__1;
printf("[Lean Shell Main] 240\n");
lean_ctor_set(x_25, 0, x_28);
printf("[Lean Shell Main] 241\n");
return x_25;
printf("[Lean Shell Main] 242\n");
}
else
{
printf("[Lean Shell Main] 245\n");
lean_object* x_29; lean_object* x_30; 
printf("[Lean Shell Main] 246\n");
lean_dec(x_25);
printf("[Lean Shell Main] 247\n");
x_29 = l___private_Lean_Shell_0__Lean_shellMain___boxed__const__1;
printf("[Lean Shell Main] 248\n");
x_30 = lean_alloc_ctor(0, 1, 0);
printf("[Lean Shell Main] 249\n");
lean_ctor_set(x_30, 0, x_29);
printf("[Lean Shell Main] 250\n");
return x_30;
printf("[Lean Shell Main] 251\n");
}
printf("[Lean Shell Main] 252\n");
}
else
{
printf("[Lean Shell Main] 255\n");
uint8_t x_31; 
printf("[Lean Shell Main] 256\n");
x_31 = !lean_is_exclusive(x_25);
printf("[Lean Shell Main] 257\n");
if (x_31 == 0)
{
printf("[Lean Shell Main] 259\n");
return x_25;
printf("[Lean Shell Main] 260\n");
}
else
{
printf("[Lean Shell Main] 263\n");
lean_object* x_32; lean_object* x_33; 
printf("[Lean Shell Main] 264\n");
x_32 = lean_ctor_get(x_25, 0);
printf("[Lean Shell Main] 265\n");
lean_inc(x_32);
printf("[Lean Shell Main] 266\n");
lean_dec(x_25);
printf("[Lean Shell Main] 267\n");
x_33 = lean_alloc_ctor(1, 1, 0);
printf("[Lean Shell Main] 268\n");
lean_ctor_set(x_33, 0, x_32);
printf("[Lean Shell Main] 269\n");
return x_33;
printf("[Lean Shell Main] 270\n");
}
printf("[Lean Shell Main] 271\n");
}
printf("[Lean Shell Main] 272\n");
}
printf("[Lean Shell Main] 273\n");
block_38:
printf("[Lean Shell Main] 274\n");
{
printf("[Lean Shell Main] 275\n");
lean_object* x_36; lean_object* x_37; 
printf("[Lean Shell Main] 276\n");
x_36 = l___private_Lean_Shell_0__Lean_shellMain___boxed__const__2;
printf("[Lean Shell Main] 277\n");
x_37 = lean_alloc_ctor(0, 1, 0);
printf("[Lean Shell Main] 278\n");
lean_ctor_set(x_37, 0, x_36);
printf("[Lean Shell Main] 279\n");
return x_37;
printf("[Lean Shell Main] 280\n");
}
printf("[Lean Shell Main] 281\n");
block_52:
printf("[Lean Shell Main] 282\n");
{
printf("[Lean Shell Main] 283\n");
lean_object* x_41; uint8_t x_42; 
printf("[Lean Shell Main] 284\n");
x_41 = lean_display_cumulative_profiling_times();
printf("[Lean Shell Main] 285\n");
x_42 = l___private_Lean_Shell_0__Lean_shellMain___closed__0;
printf("[Lean Shell Main] 286\n");
if (x_42 == 0)
{
printf("[Lean Shell Main] 288\n");
if (lean_obj_tag(x_39) == 0)
{
printf("[Lean Shell Main] 290\n");
uint8_t x_43; lean_object* x_44; 
printf("[Lean Shell Main] 291\n");
x_43 = 1;
printf("[Lean Shell Main] 292\n");
x_44 = lean_io_exit(x_43);
printf("[Lean Shell Main] 293\n");
return x_44;
printf("[Lean Shell Main] 294\n");
}
else
{
printf("[Lean Shell Main] 297\n");
uint8_t x_45; lean_object* x_46; 
printf("[Lean Shell Main] 298\n");
lean_dec_ref(x_39);
printf("[Lean Shell Main] 299\n");
x_45 = 0;
printf("[Lean Shell Main] 300\n");
x_46 = lean_io_exit(x_45);
printf("[Lean Shell Main] 301\n");
return x_46;
printf("[Lean Shell Main] 302\n");
}
printf("[Lean Shell Main] 303\n");
}
else
{
printf("[Lean Shell Main] 306\n");
if (lean_obj_tag(x_39) == 0)
{
printf("[Lean Shell Main] 308\n");
x_35 = lean_box(0);
printf("[Lean Shell Main] 309\n");
goto block_38;
printf("[Lean Shell Main] 310\n");
}
else
{
printf("[Lean Shell Main] 313\n");
uint8_t x_47; 
printf("[Lean Shell Main] 314\n");
x_47 = !lean_is_exclusive(x_39);
printf("[Lean Shell Main] 315\n");
if (x_47 == 0)
{
printf("[Lean Shell Main] 317\n");
lean_object* x_48; 
printf("[Lean Shell Main] 318\n");
x_48 = lean_ctor_get(x_39, 0);
printf("[Lean Shell Main] 319\n");
lean_dec(x_48);
printf("[Lean Shell Main] 320\n");
if (x_42 == 0)
{
printf("[Lean Shell Main] 322\n");
lean_free_object(x_39);
printf("[Lean Shell Main] 323\n");
x_35 = lean_box(0);
printf("[Lean Shell Main] 324\n");
goto block_38;
printf("[Lean Shell Main] 325\n");
}
else
{
printf("[Lean Shell Main] 328\n");
lean_object* x_49; 
printf("[Lean Shell Main] 329\n");
x_49 = l___private_Lean_Shell_0__Lean_shellMain___boxed__const__1;
printf("[Lean Shell Main] 330\n");
lean_ctor_set_tag(x_39, 0);
printf("[Lean Shell Main] 331\n");
lean_ctor_set(x_39, 0, x_49);
printf("[Lean Shell Main] 332\n");
return x_39;
printf("[Lean Shell Main] 333\n");
}
printf("[Lean Shell Main] 334\n");
}
else
{
printf("[Lean Shell Main] 337\n");
lean_dec(x_39);
printf("[Lean Shell Main] 338\n");
if (x_42 == 0)
{
printf("[Lean Shell Main] 340\n");
x_35 = lean_box(0);
printf("[Lean Shell Main] 341\n");
goto block_38;
printf("[Lean Shell Main] 342\n");
}
else
{
printf("[Lean Shell Main] 345\n");
lean_object* x_50; lean_object* x_51; 
printf("[Lean Shell Main] 346\n");
x_50 = l___private_Lean_Shell_0__Lean_shellMain___boxed__const__1;
printf("[Lean Shell Main] 347\n");
x_51 = lean_alloc_ctor(0, 1, 0);
printf("[Lean Shell Main] 348\n");
lean_ctor_set(x_51, 0, x_50);
printf("[Lean Shell Main] 349\n");
return x_51;
printf("[Lean Shell Main] 350\n");
}
printf("[Lean Shell Main] 351\n");
}
printf("[Lean Shell Main] 352\n");
}
printf("[Lean Shell Main] 353\n");
}
printf("[Lean Shell Main] 354\n");
}
printf("[Lean Shell Main] 355\n");
block_69:
printf("[Lean Shell Main] 356\n");
{
printf("[Lean Shell Main] 357\n");
if (lean_obj_tag(x_17) == 1)
{
printf("[Lean Shell Main] 359\n");
lean_object* x_57; lean_object* x_58; 
printf("[Lean Shell Main] 360\n");
x_57 = lean_ctor_get(x_17, 0);
printf("[Lean Shell Main] 361\n");
lean_inc(x_57);
printf("[Lean Shell Main] 362\n");
lean_dec_ref(x_17);
printf("[Lean Shell Main] 363\n");
x_58 = lean_init_llvm();
printf("[Lean Shell Main] 364\n");
if (lean_obj_tag(x_58) == 0)
{
printf("[Lean Shell Main] 366\n");
lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; 
printf("[Lean Shell Main] 367\n");
lean_dec_ref(x_58);
printf("[Lean Shell Main] 368\n");
x_59 = l___private_Lean_Shell_0__Lean_shellMain___closed__1;
printf("[Lean Shell Main] 369\n");
x_60 = lean_alloc_closure((void*)(l___private_Lean_Shell_0__Lean_emitLLVM___boxed), 4, 3);
printf("[Lean Shell Main] 370\n");
lean_closure_set(x_60, 0, x_54);
printf("[Lean Shell Main] 371\n");
lean_closure_set(x_60, 1, x_55);
printf("[Lean Shell Main] 372\n");
lean_closure_set(x_60, 2, x_57);
printf("[Lean Shell Main] 373\n");
x_61 = lean_box(0);
printf("[Lean Shell Main] 374\n");
x_62 = l_Lean_profileitIOUnsafe___redArg(x_59, x_10, x_60, x_61);
printf("[Lean Shell Main] 375\n");
lean_dec(x_10);
printf("[Lean Shell Main] 376\n");
if (lean_obj_tag(x_62) == 0)
{
printf("[Lean Shell Main] 378\n");
lean_dec_ref(x_62);
printf("[Lean Shell Main] 379\n");
x_39 = x_53;
printf("[Lean Shell Main] 380\n");
x_40 = lean_box(0);
printf("[Lean Shell Main] 381\n");
goto block_52;
printf("[Lean Shell Main] 382\n");
}
else
{
printf("[Lean Shell Main] 385\n");
uint8_t x_63; 
printf("[Lean Shell Main] 386\n");
lean_dec(x_53);
printf("[Lean Shell Main] 387\n");
x_63 = !lean_is_exclusive(x_62);
printf("[Lean Shell Main] 388\n");
if (x_63 == 0)
{
printf("[Lean Shell Main] 390\n");
return x_62;
printf("[Lean Shell Main] 391\n");
}
else
{
printf("[Lean Shell Main] 394\n");
lean_object* x_64; lean_object* x_65; 
printf("[Lean Shell Main] 395\n");
x_64 = lean_ctor_get(x_62, 0);
printf("[Lean Shell Main] 396\n");
lean_inc(x_64);
printf("[Lean Shell Main] 397\n");
lean_dec(x_62);
printf("[Lean Shell Main] 398\n");
x_65 = lean_alloc_ctor(1, 1, 0);
printf("[Lean Shell Main] 399\n");
lean_ctor_set(x_65, 0, x_64);
printf("[Lean Shell Main] 400\n");
return x_65;
printf("[Lean Shell Main] 401\n");
}
printf("[Lean Shell Main] 402\n");
}
printf("[Lean Shell Main] 403\n");
}
else
{
printf("[Lean Shell Main] 406\n");
uint8_t x_66; 
printf("[Lean Shell Main] 407\n");
lean_dec(x_57);
printf("[Lean Shell Main] 408\n");
lean_dec(x_55);
printf("[Lean Shell Main] 409\n");
lean_dec_ref(x_54);
printf("[Lean Shell Main] 410\n");
lean_dec(x_53);
printf("[Lean Shell Main] 411\n");
lean_dec(x_10);
printf("[Lean Shell Main] 412\n");
x_66 = !lean_is_exclusive(x_58);
printf("[Lean Shell Main] 413\n");
if (x_66 == 0)
{
printf("[Lean Shell Main] 415\n");
return x_58;
printf("[Lean Shell Main] 416\n");
}
else
{
printf("[Lean Shell Main] 419\n");
lean_object* x_67; lean_object* x_68; 
printf("[Lean Shell Main] 420\n");
x_67 = lean_ctor_get(x_58, 0);
printf("[Lean Shell Main] 421\n");
lean_inc(x_67);
printf("[Lean Shell Main] 422\n");
lean_dec(x_58);
printf("[Lean Shell Main] 423\n");
x_68 = lean_alloc_ctor(1, 1, 0);
printf("[Lean Shell Main] 424\n");
lean_ctor_set(x_68, 0, x_67);
printf("[Lean Shell Main] 425\n");
return x_68;
printf("[Lean Shell Main] 426\n");
}
printf("[Lean Shell Main] 427\n");
}
printf("[Lean Shell Main] 428\n");
}
else
{
printf("[Lean Shell Main] 431\n");
lean_dec(x_55);
printf("[Lean Shell Main] 432\n");
lean_dec_ref(x_54);
printf("[Lean Shell Main] 433\n");
lean_dec(x_17);
printf("[Lean Shell Main] 434\n");
lean_dec(x_10);
printf("[Lean Shell Main] 435\n");
x_39 = x_53;
printf("[Lean Shell Main] 436\n");
x_40 = lean_box(0);
printf("[Lean Shell Main] 437\n");
goto block_52;
printf("[Lean Shell Main] 438\n");
}
printf("[Lean Shell Main] 439\n");
}
printf("[Lean Shell Main] 440\n");
block_143:
printf("[Lean Shell Main] 441\n");
{
printf("[Lean Shell Main] 442\n");
lean_object* x_76; lean_object* x_77; 
printf("[Lean Shell Main] 443\n");
x_76 = l___private_Lean_Shell_0__Lean_shellMain___closed__2;
printf("[Lean Shell Main] 444\n");
lean_inc(x_74);
printf("[Lean Shell Main] 445\n");
lean_inc(x_10);
printf("[Lean Shell Main] 446\n");
x_77 = l_Lean_Elab_runFrontend(x_73, x_10, x_72, x_74, x_11, x_14, x_15, x_18, x_19, x_76, x_20, x_70);
printf("[Lean Shell Main] 447\n");
lean_dec_ref(x_19);
printf("[Lean Shell Main] 448\n");
lean_dec(x_15);
printf("[Lean Shell Main] 449\n");
if (lean_obj_tag(x_77) == 0)
{
printf("[Lean Shell Main] 451\n");
uint8_t x_78; 
printf("[Lean Shell Main] 452\n");
x_78 = !lean_is_exclusive(x_77);
printf("[Lean Shell Main] 453\n");
if (x_78 == 0)
{
printf("[Lean Shell Main] 455\n");
lean_object* x_79; 
printf("[Lean Shell Main] 456\n");
x_79 = lean_ctor_get(x_77, 0);
printf("[Lean Shell Main] 457\n");
if (lean_obj_tag(x_79) == 1)
{
printf("[Lean Shell Main] 459\n");
if (x_21 == 0)
{
printf("[Lean Shell Main] 461\n");
lean_free_object(x_77);
printf("[Lean Shell Main] 462\n");
lean_dec(x_71);
printf("[Lean Shell Main] 463\n");
if (lean_obj_tag(x_16) == 1)
{
printf("[Lean Shell Main] 465\n");
lean_object* x_80; lean_object* x_81; uint8_t x_82; lean_object* x_83; 
printf("[Lean Shell Main] 466\n");
x_80 = lean_ctor_get(x_79, 0);
printf("[Lean Shell Main] 467\n");
lean_inc(x_80);
printf("[Lean Shell Main] 468\n");
x_81 = lean_ctor_get(x_16, 0);
printf("[Lean Shell Main] 469\n");
lean_inc(x_81);
printf("[Lean Shell Main] 470\n");
lean_dec_ref(x_16);
printf("[Lean Shell Main] 471\n");
x_82 = 1;
printf("[Lean Shell Main] 472\n");
x_83 = lean_io_prim_handle_mk(x_81, x_82);
printf("[Lean Shell Main] 473\n");
if (lean_obj_tag(x_83) == 0)
{
printf("[Lean Shell Main] 475\n");
lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; 
printf("[Lean Shell Main] 476\n");
lean_dec(x_81);
printf("[Lean Shell Main] 477\n");
x_84 = lean_ctor_get(x_83, 0);
printf("[Lean Shell Main] 478\n");
lean_inc(x_84);
printf("[Lean Shell Main] 479\n");
lean_dec_ref(x_83);
printf("[Lean Shell Main] 480\n");
x_85 = l___private_Lean_Shell_0__Lean_shellMain___closed__3;
printf("[Lean Shell Main] 481\n");
lean_inc(x_74);
printf("[Lean Shell Main] 482\n");
lean_inc(x_80);
printf("[Lean Shell Main] 483\n");
x_86 = l_Lean_IR_emitC(x_80, x_74);
printf("[Lean Shell Main] 484\n");
x_87 = lean_alloc_closure((void*)(l___private_Lean_Shell_0__Lean_shellMain___lam__0___boxed), 3, 2);
printf("[Lean Shell Main] 485\n");
lean_closure_set(x_87, 0, x_86);
printf("[Lean Shell Main] 486\n");
lean_closure_set(x_87, 1, x_84);
printf("[Lean Shell Main] 487\n");
x_88 = lean_box(0);
printf("[Lean Shell Main] 488\n");
x_89 = l_Lean_profileitIOUnsafe___redArg(x_85, x_10, x_87, x_88);
printf("[Lean Shell Main] 489\n");
if (lean_obj_tag(x_89) == 0)
{
printf("[Lean Shell Main] 491\n");
lean_dec_ref(x_89);
printf("[Lean Shell Main] 492\n");
x_53 = x_79;
printf("[Lean Shell Main] 493\n");
x_54 = x_80;
printf("[Lean Shell Main] 494\n");
x_55 = x_74;
printf("[Lean Shell Main] 495\n");
x_56 = lean_box(0);
printf("[Lean Shell Main] 496\n");
goto block_69;
printf("[Lean Shell Main] 497\n");
}
else
{
printf("[Lean Shell Main] 500\n");
uint8_t x_90; 
printf("[Lean Shell Main] 501\n");
lean_dec(x_80);
printf("[Lean Shell Main] 502\n");
lean_dec_ref(x_79);
printf("[Lean Shell Main] 503\n");
lean_dec(x_74);
printf("[Lean Shell Main] 504\n");
lean_dec(x_17);
printf("[Lean Shell Main] 505\n");
lean_dec(x_10);
printf("[Lean Shell Main] 506\n");
x_90 = !lean_is_exclusive(x_89);
printf("[Lean Shell Main] 507\n");
if (x_90 == 0)
{
printf("[Lean Shell Main] 509\n");
return x_89;
printf("[Lean Shell Main] 510\n");
}
else
{
printf("[Lean Shell Main] 513\n");
lean_object* x_91; lean_object* x_92; 
printf("[Lean Shell Main] 514\n");
x_91 = lean_ctor_get(x_89, 0);
printf("[Lean Shell Main] 515\n");
lean_inc(x_91);
printf("[Lean Shell Main] 516\n");
lean_dec(x_89);
printf("[Lean Shell Main] 517\n");
x_92 = lean_alloc_ctor(1, 1, 0);
printf("[Lean Shell Main] 518\n");
lean_ctor_set(x_92, 0, x_91);
printf("[Lean Shell Main] 519\n");
return x_92;
printf("[Lean Shell Main] 520\n");
}
printf("[Lean Shell Main] 521\n");
}
printf("[Lean Shell Main] 522\n");
}
else
{
printf("[Lean Shell Main] 525\n");
lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; 
printf("[Lean Shell Main] 526\n");
lean_dec_ref(x_83);
printf("[Lean Shell Main] 527\n");
lean_dec(x_80);
printf("[Lean Shell Main] 528\n");
lean_dec_ref(x_79);
printf("[Lean Shell Main] 529\n");
lean_dec(x_74);
printf("[Lean Shell Main] 530\n");
lean_dec(x_17);
printf("[Lean Shell Main] 531\n");
lean_dec(x_10);
printf("[Lean Shell Main] 532\n");
x_93 = l___private_Lean_Shell_0__Lean_shellMain___closed__4;
printf("[Lean Shell Main] 533\n");
x_94 = lean_string_append(x_93, x_81);
printf("[Lean Shell Main] 534\n");
lean_dec(x_81);
printf("[Lean Shell Main] 535\n");
x_95 = l___private_Lean_Shell_0__Lean_shellMain___closed__5;
printf("[Lean Shell Main] 536\n");
x_96 = lean_string_append(x_94, x_95);
printf("[Lean Shell Main] 537\n");
x_97 = l_IO_eprintln___at___00__private_Lean_Shell_0__Lean_shellMain_spec__1(x_96);
printf("[Lean Shell Main] 538\n");
if (lean_obj_tag(x_97) == 0)
{
printf("[Lean Shell Main] 540\n");
uint8_t x_98; 
printf("[Lean Shell Main] 541\n");
x_98 = !lean_is_exclusive(x_97);
printf("[Lean Shell Main] 542\n");
if (x_98 == 0)
{
printf("[Lean Shell Main] 544\n");
lean_object* x_99; lean_object* x_100; 
printf("[Lean Shell Main] 545\n");
x_99 = lean_ctor_get(x_97, 0);
printf("[Lean Shell Main] 546\n");
lean_dec(x_99);
printf("[Lean Shell Main] 547\n");
x_100 = l___private_Lean_Shell_0__Lean_shellMain___boxed__const__2;
printf("[Lean Shell Main] 548\n");
lean_ctor_set(x_97, 0, x_100);
printf("[Lean Shell Main] 549\n");
return x_97;
printf("[Lean Shell Main] 550\n");
}
else
{
printf("[Lean Shell Main] 553\n");
lean_object* x_101; lean_object* x_102; 
printf("[Lean Shell Main] 554\n");
lean_dec(x_97);
printf("[Lean Shell Main] 555\n");
x_101 = l___private_Lean_Shell_0__Lean_shellMain___boxed__const__2;
printf("[Lean Shell Main] 556\n");
x_102 = lean_alloc_ctor(0, 1, 0);
printf("[Lean Shell Main] 557\n");
lean_ctor_set(x_102, 0, x_101);
printf("[Lean Shell Main] 558\n");
return x_102;
printf("[Lean Shell Main] 559\n");
}
printf("[Lean Shell Main] 560\n");
}
else
{
printf("[Lean Shell Main] 563\n");
uint8_t x_103; 
printf("[Lean Shell Main] 564\n");
x_103 = !lean_is_exclusive(x_97);
printf("[Lean Shell Main] 565\n");
if (x_103 == 0)
{
printf("[Lean Shell Main] 567\n");
return x_97;
printf("[Lean Shell Main] 568\n");
}
else
{
printf("[Lean Shell Main] 571\n");
lean_object* x_104; lean_object* x_105; 
printf("[Lean Shell Main] 572\n");
x_104 = lean_ctor_get(x_97, 0);
printf("[Lean Shell Main] 573\n");
lean_inc(x_104);
printf("[Lean Shell Main] 574\n");
lean_dec(x_97);
printf("[Lean Shell Main] 575\n");
x_105 = lean_alloc_ctor(1, 1, 0);
printf("[Lean Shell Main] 576\n");
lean_ctor_set(x_105, 0, x_104);
printf("[Lean Shell Main] 577\n");
return x_105;
printf("[Lean Shell Main] 578\n");
}
printf("[Lean Shell Main] 579\n");
}
printf("[Lean Shell Main] 580\n");
}
printf("[Lean Shell Main] 581\n");
}
else
{
printf("[Lean Shell Main] 584\n");
lean_object* x_106; 
printf("[Lean Shell Main] 585\n");
lean_dec(x_16);
printf("[Lean Shell Main] 586\n");
x_106 = lean_ctor_get(x_79, 0);
printf("[Lean Shell Main] 587\n");
lean_inc(x_106);
printf("[Lean Shell Main] 588\n");
x_53 = x_79;
printf("[Lean Shell Main] 589\n");
x_54 = x_106;
printf("[Lean Shell Main] 590\n");
x_55 = x_74;
printf("[Lean Shell Main] 591\n");
x_56 = lean_box(0);
printf("[Lean Shell Main] 592\n");
goto block_69;
printf("[Lean Shell Main] 593\n");
}
printf("[Lean Shell Main] 594\n");
}
else
{
printf("[Lean Shell Main] 597\n");
lean_object* x_107; uint32_t x_108; lean_object* x_109; 
printf("[Lean Shell Main] 598\n");
lean_dec(x_74);
printf("[Lean Shell Main] 599\n");
lean_dec(x_17);
printf("[Lean Shell Main] 600\n");
lean_dec(x_16);
printf("[Lean Shell Main] 601\n");
x_107 = lean_ctor_get(x_79, 0);
printf("[Lean Shell Main] 602\n");
lean_inc(x_107);
printf("[Lean Shell Main] 603\n");
lean_dec_ref(x_79);
printf("[Lean Shell Main] 604\n");
x_108 = lean_run_main(x_107, x_10, x_71);
printf("[Lean Shell Main] 605\n");
lean_dec(x_71);
printf("[Lean Shell Main] 606\n");
lean_dec(x_10);
printf("[Lean Shell Main] 607\n");
lean_dec(x_107);
printf("[Lean Shell Main] 608\n");
x_109 = lean_box_uint32(x_108);
printf("[Lean Shell Main] 609\n");
lean_ctor_set(x_77, 0, x_109);
printf("[Lean Shell Main] 610\n");
return x_77;
printf("[Lean Shell Main] 611\n");
}
printf("[Lean Shell Main] 612\n");
}
else
{
printf("[Lean Shell Main] 615\n");
lean_free_object(x_77);
printf("[Lean Shell Main] 616\n");
lean_dec(x_74);
printf("[Lean Shell Main] 617\n");
lean_dec(x_71);
printf("[Lean Shell Main] 618\n");
lean_dec(x_17);
printf("[Lean Shell Main] 619\n");
lean_dec(x_16);
printf("[Lean Shell Main] 620\n");
lean_dec(x_10);
printf("[Lean Shell Main] 621\n");
x_39 = x_79;
printf("[Lean Shell Main] 622\n");
x_40 = lean_box(0);
printf("[Lean Shell Main] 623\n");
goto block_52;
printf("[Lean Shell Main] 624\n");
}
printf("[Lean Shell Main] 625\n");
}
else
{
printf("[Lean Shell Main] 628\n");
lean_object* x_110; 
printf("[Lean Shell Main] 629\n");
x_110 = lean_ctor_get(x_77, 0);
printf("[Lean Shell Main] 630\n");
lean_inc(x_110);
printf("[Lean Shell Main] 631\n");
lean_dec(x_77);
printf("[Lean Shell Main] 632\n");
if (lean_obj_tag(x_110) == 1)
{
printf("[Lean Shell Main] 634\n");
if (x_21 == 0)
{
printf("[Lean Shell Main] 636\n");
lean_dec(x_71);
printf("[Lean Shell Main] 637\n");
if (lean_obj_tag(x_16) == 1)
{
printf("[Lean Shell Main] 639\n");
lean_object* x_111; lean_object* x_112; uint8_t x_113; lean_object* x_114; 
printf("[Lean Shell Main] 640\n");
x_111 = lean_ctor_get(x_110, 0);
printf("[Lean Shell Main] 641\n");
lean_inc(x_111);
printf("[Lean Shell Main] 642\n");
x_112 = lean_ctor_get(x_16, 0);
printf("[Lean Shell Main] 643\n");
lean_inc(x_112);
printf("[Lean Shell Main] 644\n");
lean_dec_ref(x_16);
printf("[Lean Shell Main] 645\n");
x_113 = 1;
printf("[Lean Shell Main] 646\n");
x_114 = lean_io_prim_handle_mk(x_112, x_113);
printf("[Lean Shell Main] 647\n");
if (lean_obj_tag(x_114) == 0)
{
printf("[Lean Shell Main] 649\n");
lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; 
printf("[Lean Shell Main] 650\n");
lean_dec(x_112);
printf("[Lean Shell Main] 651\n");
x_115 = lean_ctor_get(x_114, 0);
printf("[Lean Shell Main] 652\n");
lean_inc(x_115);
printf("[Lean Shell Main] 653\n");
lean_dec_ref(x_114);
printf("[Lean Shell Main] 654\n");
x_116 = l___private_Lean_Shell_0__Lean_shellMain___closed__3;
printf("[Lean Shell Main] 655\n");
lean_inc(x_74);
printf("[Lean Shell Main] 656\n");
lean_inc(x_111);
printf("[Lean Shell Main] 657\n");
x_117 = l_Lean_IR_emitC(x_111, x_74);
printf("[Lean Shell Main] 658\n");
x_118 = lean_alloc_closure((void*)(l___private_Lean_Shell_0__Lean_shellMain___lam__0___boxed), 3, 2);
printf("[Lean Shell Main] 659\n");
lean_closure_set(x_118, 0, x_117);
printf("[Lean Shell Main] 660\n");
lean_closure_set(x_118, 1, x_115);
printf("[Lean Shell Main] 661\n");
x_119 = lean_box(0);
printf("[Lean Shell Main] 662\n");
x_120 = l_Lean_profileitIOUnsafe___redArg(x_116, x_10, x_118, x_119);
printf("[Lean Shell Main] 663\n");
if (lean_obj_tag(x_120) == 0)
{
printf("[Lean Shell Main] 665\n");
lean_dec_ref(x_120);
printf("[Lean Shell Main] 666\n");
x_53 = x_110;
printf("[Lean Shell Main] 667\n");
x_54 = x_111;
printf("[Lean Shell Main] 668\n");
x_55 = x_74;
printf("[Lean Shell Main] 669\n");
x_56 = lean_box(0);
printf("[Lean Shell Main] 670\n");
goto block_69;
printf("[Lean Shell Main] 671\n");
}
else
{
printf("[Lean Shell Main] 674\n");
lean_object* x_121; lean_object* x_122; lean_object* x_123; 
printf("[Lean Shell Main] 675\n");
lean_dec(x_111);
printf("[Lean Shell Main] 676\n");
lean_dec_ref(x_110);
printf("[Lean Shell Main] 677\n");
lean_dec(x_74);
printf("[Lean Shell Main] 678\n");
lean_dec(x_17);
printf("[Lean Shell Main] 679\n");
lean_dec(x_10);
printf("[Lean Shell Main] 680\n");
x_121 = lean_ctor_get(x_120, 0);
printf("[Lean Shell Main] 681\n");
lean_inc(x_121);
printf("[Lean Shell Main] 682\n");
if (lean_is_exclusive(x_120)) {
printf("[Lean Shell Main] 683\n");
 lean_ctor_release(x_120, 0);
printf("[Lean Shell Main] 684\n");
 x_122 = x_120;
printf("[Lean Shell Main] 685\n");
} else {
printf("[Lean Shell Main] 686\n");
 lean_dec_ref(x_120);
printf("[Lean Shell Main] 687\n");
 x_122 = lean_box(0);
printf("[Lean Shell Main] 688\n");
}
printf("[Lean Shell Main] 689\n");
if (lean_is_scalar(x_122)) {
printf("[Lean Shell Main] 690\n");
 x_123 = lean_alloc_ctor(1, 1, 0);
printf("[Lean Shell Main] 691\n");
} else {
printf("[Lean Shell Main] 692\n");
 x_123 = x_122;
printf("[Lean Shell Main] 693\n");
}
printf("[Lean Shell Main] 694\n");
lean_ctor_set(x_123, 0, x_121);
printf("[Lean Shell Main] 695\n");
return x_123;
printf("[Lean Shell Main] 696\n");
}
printf("[Lean Shell Main] 697\n");
}
else
{
printf("[Lean Shell Main] 700\n");
lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; 
printf("[Lean Shell Main] 701\n");
lean_dec_ref(x_114);
printf("[Lean Shell Main] 702\n");
lean_dec(x_111);
printf("[Lean Shell Main] 703\n");
lean_dec_ref(x_110);
printf("[Lean Shell Main] 704\n");
lean_dec(x_74);
printf("[Lean Shell Main] 705\n");
lean_dec(x_17);
printf("[Lean Shell Main] 706\n");
lean_dec(x_10);
printf("[Lean Shell Main] 707\n");
x_124 = l___private_Lean_Shell_0__Lean_shellMain___closed__4;
printf("[Lean Shell Main] 708\n");
x_125 = lean_string_append(x_124, x_112);
printf("[Lean Shell Main] 709\n");
lean_dec(x_112);
printf("[Lean Shell Main] 710\n");
x_126 = l___private_Lean_Shell_0__Lean_shellMain___closed__5;
printf("[Lean Shell Main] 711\n");
x_127 = lean_string_append(x_125, x_126);
printf("[Lean Shell Main] 712\n");
x_128 = l_IO_eprintln___at___00__private_Lean_Shell_0__Lean_shellMain_spec__1(x_127);
printf("[Lean Shell Main] 713\n");
if (lean_obj_tag(x_128) == 0)
{
printf("[Lean Shell Main] 715\n");
lean_object* x_129; lean_object* x_130; lean_object* x_131; 
printf("[Lean Shell Main] 716\n");
if (lean_is_exclusive(x_128)) {
printf("[Lean Shell Main] 717\n");
 lean_ctor_release(x_128, 0);
printf("[Lean Shell Main] 718\n");
 x_129 = x_128;
printf("[Lean Shell Main] 719\n");
} else {
printf("[Lean Shell Main] 720\n");
 lean_dec_ref(x_128);
printf("[Lean Shell Main] 721\n");
 x_129 = lean_box(0);
printf("[Lean Shell Main] 722\n");
}
printf("[Lean Shell Main] 723\n");
x_130 = l___private_Lean_Shell_0__Lean_shellMain___boxed__const__2;
printf("[Lean Shell Main] 724\n");
if (lean_is_scalar(x_129)) {
printf("[Lean Shell Main] 725\n");
 x_131 = lean_alloc_ctor(0, 1, 0);
printf("[Lean Shell Main] 726\n");
} else {
printf("[Lean Shell Main] 727\n");
 x_131 = x_129;
printf("[Lean Shell Main] 728\n");
}
printf("[Lean Shell Main] 729\n");
lean_ctor_set(x_131, 0, x_130);
printf("[Lean Shell Main] 730\n");
return x_131;
printf("[Lean Shell Main] 731\n");
}
else
{
printf("[Lean Shell Main] 734\n");
lean_object* x_132; lean_object* x_133; lean_object* x_134; 
printf("[Lean Shell Main] 735\n");
x_132 = lean_ctor_get(x_128, 0);
printf("[Lean Shell Main] 736\n");
lean_inc(x_132);
printf("[Lean Shell Main] 737\n");
if (lean_is_exclusive(x_128)) {
printf("[Lean Shell Main] 738\n");
 lean_ctor_release(x_128, 0);
printf("[Lean Shell Main] 739\n");
 x_133 = x_128;
printf("[Lean Shell Main] 740\n");
} else {
printf("[Lean Shell Main] 741\n");
 lean_dec_ref(x_128);
printf("[Lean Shell Main] 742\n");
 x_133 = lean_box(0);
printf("[Lean Shell Main] 743\n");
}
printf("[Lean Shell Main] 744\n");
if (lean_is_scalar(x_133)) {
printf("[Lean Shell Main] 745\n");
 x_134 = lean_alloc_ctor(1, 1, 0);
printf("[Lean Shell Main] 746\n");
} else {
printf("[Lean Shell Main] 747\n");
 x_134 = x_133;
printf("[Lean Shell Main] 748\n");
}
printf("[Lean Shell Main] 749\n");
lean_ctor_set(x_134, 0, x_132);
printf("[Lean Shell Main] 750\n");
return x_134;
printf("[Lean Shell Main] 751\n");
}
printf("[Lean Shell Main] 752\n");
}
printf("[Lean Shell Main] 753\n");
}
else
{
printf("[Lean Shell Main] 756\n");
lean_object* x_135; 
printf("[Lean Shell Main] 757\n");
lean_dec(x_16);
printf("[Lean Shell Main] 758\n");
x_135 = lean_ctor_get(x_110, 0);
printf("[Lean Shell Main] 759\n");
lean_inc(x_135);
printf("[Lean Shell Main] 760\n");
x_53 = x_110;
printf("[Lean Shell Main] 761\n");
x_54 = x_135;
printf("[Lean Shell Main] 762\n");
x_55 = x_74;
printf("[Lean Shell Main] 763\n");
x_56 = lean_box(0);
printf("[Lean Shell Main] 764\n");
goto block_69;
printf("[Lean Shell Main] 765\n");
}
printf("[Lean Shell Main] 766\n");
}
else
{
printf("[Lean Shell Main] 769\n");
lean_object* x_136; uint32_t x_137; lean_object* x_138; lean_object* x_139; 
printf("[Lean Shell Main] 770\n");
lean_dec(x_74);
printf("[Lean Shell Main] 771\n");
lean_dec(x_17);
printf("[Lean Shell Main] 772\n");
lean_dec(x_16);
printf("[Lean Shell Main] 773\n");
x_136 = lean_ctor_get(x_110, 0);
printf("[Lean Shell Main] 774\n");
lean_inc(x_136);
printf("[Lean Shell Main] 775\n");
lean_dec_ref(x_110);
printf("[Lean Shell Main] 776\n");
x_137 = lean_run_main(x_136, x_10, x_71);
printf("[Lean Shell Main] 777\n");
lean_dec(x_71);
printf("[Lean Shell Main] 778\n");
lean_dec(x_10);
printf("[Lean Shell Main] 779\n");
lean_dec(x_136);
printf("[Lean Shell Main] 780\n");
x_138 = lean_box_uint32(x_137);
printf("[Lean Shell Main] 781\n");
x_139 = lean_alloc_ctor(0, 1, 0);
printf("[Lean Shell Main] 782\n");
lean_ctor_set(x_139, 0, x_138);
printf("[Lean Shell Main] 783\n");
return x_139;
printf("[Lean Shell Main] 784\n");
}
printf("[Lean Shell Main] 785\n");
}
else
{
printf("[Lean Shell Main] 788\n");
lean_dec(x_74);
printf("[Lean Shell Main] 789\n");
lean_dec(x_71);
printf("[Lean Shell Main] 790\n");
lean_dec(x_17);
printf("[Lean Shell Main] 791\n");
lean_dec(x_16);
printf("[Lean Shell Main] 792\n");
lean_dec(x_10);
printf("[Lean Shell Main] 793\n");
x_39 = x_110;
printf("[Lean Shell Main] 794\n");
x_40 = lean_box(0);
printf("[Lean Shell Main] 795\n");
goto block_52;
printf("[Lean Shell Main] 796\n");
}
printf("[Lean Shell Main] 797\n");
}
printf("[Lean Shell Main] 798\n");
}
else
{
printf("[Lean Shell Main] 801\n");
uint8_t x_140; 
printf("[Lean Shell Main] 802\n");
lean_dec(x_74);
printf("[Lean Shell Main] 803\n");
lean_dec(x_71);
printf("[Lean Shell Main] 804\n");
lean_dec(x_17);
printf("[Lean Shell Main] 805\n");
lean_dec(x_16);
printf("[Lean Shell Main] 806\n");
lean_dec(x_10);
printf("[Lean Shell Main] 807\n");
x_140 = !lean_is_exclusive(x_77);
printf("[Lean Shell Main] 808\n");
if (x_140 == 0)
{
printf("[Lean Shell Main] 810\n");
return x_77;
printf("[Lean Shell Main] 811\n");
}
else
{
printf("[Lean Shell Main] 814\n");
lean_object* x_141; lean_object* x_142; 
printf("[Lean Shell Main] 815\n");
x_141 = lean_ctor_get(x_77, 0);
printf("[Lean Shell Main] 816\n");
lean_inc(x_141);
printf("[Lean Shell Main] 817\n");
lean_dec(x_77);
printf("[Lean Shell Main] 818\n");
x_142 = lean_alloc_ctor(1, 1, 0);
printf("[Lean Shell Main] 819\n");
lean_ctor_set(x_142, 0, x_141);
printf("[Lean Shell Main] 820\n");
return x_142;
printf("[Lean Shell Main] 821\n");
}
printf("[Lean Shell Main] 822\n");
}
printf("[Lean Shell Main] 823\n");
}
printf("[Lean Shell Main] 824\n");
block_153:
printf("[Lean Shell Main] 825\n");
{
if (lean_obj_tag(x_148) == 0)
{
printf("[Lean Shell Main] 828\n");
lean_object* x_149; 
printf("[Lean Shell Main] 829\n");
x_149 = lean_ctor_get(x_148, 0);
printf("[Lean Shell Main] 830\n");
lean_inc(x_149);
printf("[Lean Shell Main] 831\n");
lean_dec_ref(x_148);
printf("[Lean Shell Main] 832\n");
x_70 = x_144;
printf("[Lean Shell Main] 833\n");
x_71 = x_145;
printf("[Lean Shell Main] 834\n");
x_72 = x_146;
printf("[Lean Shell Main] 835\n");
x_73 = x_147;
printf("[Lean Shell Main] 836\n");
x_74 = x_149;
printf("[Lean Shell Main] 837\n");
x_75 = lean_box(0);
printf("[Lean Shell Main] 838\n");
goto block_143;
printf("[Lean Shell Main] 839\n");
}
else
{
printf("[Lean Shell Main] 842\n");
uint8_t x_150; 
printf("[Lean Shell Main] 843\n");
lean_dec_ref(x_147);
printf("[Lean Shell Main] 844\n");
lean_dec_ref(x_146);
printf("[Lean Shell Main] 845\n");
lean_dec(x_145);
printf("[Lean Shell Main] 846\n");
lean_dec(x_144);
printf("[Lean Shell Main] 847\n");
lean_dec_ref(x_19);
printf("[Lean Shell Main] 848\n");
lean_dec(x_17);
printf("[Lean Shell Main] 849\n");
lean_dec(x_16);
printf("[Lean Shell Main] 850\n");
lean_dec(x_15);
printf("[Lean Shell Main] 851\n");
lean_dec(x_14);
printf("[Lean Shell Main] 852\n");
lean_dec(x_10);
printf("[Lean Shell Main] 853\n");
x_150 = !lean_is_exclusive(x_148);
printf("[Lean Shell Main] 854\n");
if (x_150 == 0)
{
printf("[Lean Shell Main] 856\n");
return x_148;
printf("[Lean Shell Main] 857\n");
}
else
{
printf("[Lean Shell Main] 860\n");
lean_object* x_151; lean_object* x_152; 
printf("[Lean Shell Main] 861\n");
x_151 = lean_ctor_get(x_148, 0);
printf("[Lean Shell Main] 862\n");
lean_inc(x_151);
printf("[Lean Shell Main] 863\n");
lean_dec(x_148);
printf("[Lean Shell Main] 864\n");
x_152 = lean_alloc_ctor(1, 1, 0);
printf("[Lean Shell Main] 865\n");
lean_ctor_set(x_152, 0, x_151);
printf("[Lean Shell Main] 866\n");
return x_152;
printf("[Lean Shell Main] 867\n");
}
printf("[Lean Shell Main] 868\n");
}
printf("[Lean Shell Main] 869\n");
}
printf("[Lean Shell Main] 870\n");
block_180:
printf("[Lean Shell Main] 871\n");
{
printf("[Lean Shell Main] 872\n");
if (lean_obj_tag(x_13) == 0)
{
printf("[Lean Shell Main] 874\n");
lean_object* x_159; 
printf("[Lean Shell Main] 875\n");
x_159 = lean_box(0);
printf("[Lean Shell Main] 876\n");
if (lean_obj_tag(x_156) == 1)
{
printf("[Lean Shell Main] 878\n");
lean_object* x_160; lean_object* x_161; 
printf("[Lean Shell Main] 879\n");
x_160 = lean_ctor_get(x_156, 0);
printf("[Lean Shell Main] 880\n");
lean_inc(x_160);
printf("[Lean Shell Main] 881\n");
lean_dec_ref(x_156);
printf("[Lean Shell Main] 882\n");
x_161 = l_Lean_moduleNameOfFileName(x_160, x_12);
printf("[Lean Shell Main] 883\n");
if (lean_obj_tag(x_161) == 0)
{
printf("[Lean Shell Main] 885\n");
x_144 = x_159;
printf("[Lean Shell Main] 886\n");
x_145 = x_154;
printf("[Lean Shell Main] 887\n");
x_146 = x_155;
printf("[Lean Shell Main] 888\n");
x_147 = x_157;
printf("[Lean Shell Main] 889\n");
x_148 = x_161;
printf("[Lean Shell Main] 890\n");
goto block_153;
printf("[Lean Shell Main] 891\n");
}
else
printf("[Lean Shell Main] 893\n");
{
printf("[Lean Shell Main] 894\n");
if (lean_obj_tag(x_14) == 0)
{
printf("[Lean Shell Main] 896\n");
if (lean_obj_tag(x_16) == 0)
{
printf("[Lean Shell Main] 898\n");
lean_object* x_162; 
printf("[Lean Shell Main] 899\n");
lean_dec_ref(x_161);
printf("[Lean Shell Main] 900\n");
x_162 = l___private_Lean_Shell_0__Lean_shellMain___closed__7;
printf("[Lean Shell Main] 901\n");
x_70 = x_159;
printf("[Lean Shell Main] 902\n");
x_71 = x_154;
printf("[Lean Shell Main] 903\n");
x_72 = x_155;
printf("[Lean Shell Main] 904\n");
x_73 = x_157;
printf("[Lean Shell Main] 905\n");
x_74 = x_162;
printf("[Lean Shell Main] 906\n");
x_75 = lean_box(0);
printf("[Lean Shell Main] 907\n");
goto block_143;
printf("[Lean Shell Main] 908\n");
}
else
{
printf("[Lean Shell Main] 911\n");
x_144 = x_159;
printf("[Lean Shell Main] 912\n");
x_145 = x_154;
printf("[Lean Shell Main] 913\n");
x_146 = x_155;
printf("[Lean Shell Main] 914\n");
x_147 = x_157;
printf("[Lean Shell Main] 915\n");
x_148 = x_161;
printf("[Lean Shell Main] 916\n");
goto block_153;
printf("[Lean Shell Main] 917\n");
}
printf("[Lean Shell Main] 918\n");
}
else
{
printf("[Lean Shell Main] 921\n");
x_144 = x_159;
printf("[Lean Shell Main] 922\n");
x_145 = x_154;
printf("[Lean Shell Main] 923\n");
x_146 = x_155;
printf("[Lean Shell Main] 924\n");
x_147 = x_157;
printf("[Lean Shell Main] 925\n");
x_148 = x_161;
printf("[Lean Shell Main] 926\n");
goto block_153;
printf("[Lean Shell Main] 927\n");
}
printf("[Lean Shell Main] 928\n");
}
printf("[Lean Shell Main] 929\n");
}
else
{
printf("[Lean Shell Main] 932\n");
lean_object* x_163; 
printf("[Lean Shell Main] 933\n");
lean_dec(x_156);
printf("[Lean Shell Main] 934\n");
lean_dec(x_12);
printf("[Lean Shell Main] 935\n");
x_163 = l___private_Lean_Shell_0__Lean_shellMain___closed__7;
printf("[Lean Shell Main] 936\n");
x_70 = x_159;
printf("[Lean Shell Main] 937\n");
x_71 = x_154;
printf("[Lean Shell Main] 938\n");
x_72 = x_155;
printf("[Lean Shell Main] 939\n");
x_73 = x_157;
printf("[Lean Shell Main] 940\n");
x_74 = x_163;
printf("[Lean Shell Main] 941\n");
x_75 = lean_box(0);
printf("[Lean Shell Main] 942\n");
goto block_143;
printf("[Lean Shell Main] 943\n");
}
printf("[Lean Shell Main] 944\n");
}
else
{
printf("[Lean Shell Main] 947\n");
uint8_t x_164; 
printf("[Lean Shell Main] 948\n");
lean_dec(x_156);
printf("[Lean Shell Main] 949\n");
lean_dec(x_12);
printf("[Lean Shell Main] 950\n");
x_164 = !lean_is_exclusive(x_13);
printf("[Lean Shell Main] 951\n");
if (x_164 == 0)
{
printf("[Lean Shell Main] 953\n");
lean_object* x_165; lean_object* x_166; 
printf("[Lean Shell Main] 954\n");
x_165 = lean_ctor_get(x_13, 0);
printf("[Lean Shell Main] 955\n");
x_166 = l_Lean_ModuleSetup_load(x_165);
printf("[Lean Shell Main] 956\n");
lean_dec(x_165);
printf("[Lean Shell Main] 957\n");
if (lean_obj_tag(x_166) == 0)
{
printf("[Lean Shell Main] 959\n");
lean_object* x_167; lean_object* x_168; 
printf("[Lean Shell Main] 960\n");
x_167 = lean_ctor_get(x_166, 0);
printf("[Lean Shell Main] 961\n");
lean_inc(x_167);
printf("[Lean Shell Main] 962\n");
lean_dec_ref(x_166);
printf("[Lean Shell Main] 963\n");
x_168 = lean_ctor_get(x_167, 0);
printf("[Lean Shell Main] 964\n");
lean_inc(x_168);
printf("[Lean Shell Main] 965\n");
lean_ctor_set(x_13, 0, x_167);
printf("[Lean Shell Main] 966\n");
x_70 = x_13;
printf("[Lean Shell Main] 967\n");
x_71 = x_154;
printf("[Lean Shell Main] 968\n");
x_72 = x_155;
printf("[Lean Shell Main] 969\n");
x_73 = x_157;
printf("[Lean Shell Main] 970\n");
x_74 = x_168;
printf("[Lean Shell Main] 971\n");
x_75 = lean_box(0);
printf("[Lean Shell Main] 972\n");
goto block_143;
printf("[Lean Shell Main] 973\n");
}
else
{
printf("[Lean Shell Main] 976\n");
uint8_t x_169; 
printf("[Lean Shell Main] 977\n");
lean_free_object(x_13);
printf("[Lean Shell Main] 978\n");
lean_dec_ref(x_157);
printf("[Lean Shell Main] 979\n");
lean_dec_ref(x_155);
printf("[Lean Shell Main] 980\n");
lean_dec(x_154);
printf("[Lean Shell Main] 981\n");
lean_dec_ref(x_19);
printf("[Lean Shell Main] 982\n");
lean_dec(x_17);
printf("[Lean Shell Main] 983\n");
lean_dec(x_16);
printf("[Lean Shell Main] 984\n");
lean_dec(x_15);
printf("[Lean Shell Main] 985\n");
lean_dec(x_14);
printf("[Lean Shell Main] 986\n");
lean_dec(x_10);
printf("[Lean Shell Main] 987\n");
x_169 = !lean_is_exclusive(x_166);
printf("[Lean Shell Main] 988\n");
if (x_169 == 0)
{
printf("[Lean Shell Main] 990\n");
return x_166;
}
else
{
printf("[Lean Shell Main] 994\n");
lean_object* x_170; lean_object* x_171; 
printf("[Lean Shell Main] 995\n");
x_170 = lean_ctor_get(x_166, 0);
printf("[Lean Shell Main] 996\n");
lean_inc(x_170);
printf("[Lean Shell Main] 997\n");
lean_dec(x_166);
printf("[Lean Shell Main] 998\n");
x_171 = lean_alloc_ctor(1, 1, 0);
printf("[Lean Shell Main] 999\n");
lean_ctor_set(x_171, 0, x_170);
printf("[Lean Shell Main] 1000\n");
return x_171;
printf("[Lean Shell Main] 1001\n");
}
printf("[Lean Shell Main] 1002\n");
}
printf("[Lean Shell Main] 1003\n");
}
else
{
printf("[Lean Shell Main] 1006\n");
lean_object* x_172; lean_object* x_173; 
printf("[Lean Shell Main] 1007\n");
x_172 = lean_ctor_get(x_13, 0);
printf("[Lean Shell Main] 1008\n");
lean_inc(x_172);
printf("[Lean Shell Main] 1009\n");
lean_dec(x_13);
printf("[Lean Shell Main] 1010\n");
x_173 = l_Lean_ModuleSetup_load(x_172);
printf("[Lean Shell Main] 1011\n");
lean_dec(x_172);
printf("[Lean Shell Main] 1012\n");
if (lean_obj_tag(x_173) == 0)
{
printf("[Lean Shell Main] 1014\n");
lean_object* x_174; lean_object* x_175; lean_object* x_176; 
printf("[Lean Shell Main] 1015\n");
x_174 = lean_ctor_get(x_173, 0);
printf("[Lean Shell Main] 1016\n");
lean_inc(x_174);
printf("[Lean Shell Main] 1017\n");
lean_dec_ref(x_173);
printf("[Lean Shell Main] 1018\n");
x_175 = lean_ctor_get(x_174, 0);
printf("[Lean Shell Main] 1019\n");
lean_inc(x_175);
printf("[Lean Shell Main] 1020\n");
x_176 = lean_alloc_ctor(1, 1, 0);
printf("[Lean Shell Main] 1021\n");
lean_ctor_set(x_176, 0, x_174);
printf("[Lean Shell Main] 1022\n");
x_70 = x_176;
printf("[Lean Shell Main] 1023\n");
x_71 = x_154;
printf("[Lean Shell Main] 1024\n");
x_72 = x_155;
printf("[Lean Shell Main] 1025\n");
x_73 = x_157;
printf("[Lean Shell Main] 1026\n");
x_74 = x_175;
printf("[Lean Shell Main] 1027\n");
x_75 = lean_box(0);
printf("[Lean Shell Main] 1028\n");
goto block_143;
printf("[Lean Shell Main] 1029\n");
}
else
{
printf("[Lean Shell Main] 1032\n");
lean_object* x_177; lean_object* x_178; lean_object* x_179; 
printf("[Lean Shell Main] 1033\n");
lean_dec_ref(x_157);
printf("[Lean Shell Main] 1034\n");
lean_dec_ref(x_155);
printf("[Lean Shell Main] 1035\n");
lean_dec(x_154);
printf("[Lean Shell Main] 1036\n");
lean_dec_ref(x_19);
printf("[Lean Shell Main] 1037\n");
lean_dec(x_17);
printf("[Lean Shell Main] 1038\n");
lean_dec(x_16);
printf("[Lean Shell Main] 1039\n");
lean_dec(x_15);
printf("[Lean Shell Main] 1040\n");
lean_dec(x_14);
printf("[Lean Shell Main] 1041\n");
lean_dec(x_10);
printf("[Lean Shell Main] 1042\n");
x_177 = lean_ctor_get(x_173, 0);
printf("[Lean Shell Main] 1043\n");
lean_inc(x_177);
printf("[Lean Shell Main] 1044\n");
if (lean_is_exclusive(x_173)) {
printf("[Lean Shell Main] 1045\n");
 lean_ctor_release(x_173, 0);
printf("[Lean Shell Main] 1046\n");
 x_178 = x_173;
printf("[Lean Shell Main] 1047\n");
} else {
printf("[Lean Shell Main] 1048\n");
 lean_dec_ref(x_173);
printf("[Lean Shell Main] 1049\n");
 x_178 = lean_box(0);
printf("[Lean Shell Main] 1050\n");
}
printf("[Lean Shell Main] 1051\n");
if (lean_is_scalar(x_178)) {
printf("[Lean Shell Main] 1052\n");
 x_179 = lean_alloc_ctor(1, 1, 0);
printf("[Lean Shell Main] 1053\n");
} else {
printf("[Lean Shell Main] 1054\n");
 x_179 = x_178;
printf("[Lean Shell Main] 1055\n");
}
printf("[Lean Shell Main] 1056\n");
lean_ctor_set(x_179, 0, x_177);
printf("[Lean Shell Main] 1057\n");
return x_179;
printf("[Lean Shell Main] 1058\n");
}
printf("[Lean Shell Main] 1059\n");
}
printf("[Lean Shell Main] 1060\n");
}
printf("[Lean Shell Main] 1061\n");
}
printf("[Lean Shell Main] 1062\n");
block_242:
printf("[Lean Shell Main] 1063\n");
{
printf("[Lean Shell Main] 1064\n");
if (lean_obj_tag(x_184) == 0)
{
printf("[Lean Shell Main] 1066\n");
lean_object* x_185; lean_object* x_186; 
printf("[Lean Shell Main] 1067\n");
x_185 = lean_ctor_get(x_184, 0);
printf("[Lean Shell Main] 1068\n");
lean_inc(x_185);
printf("[Lean Shell Main] 1069\n");
lean_dec_ref(x_184);
printf("[Lean Shell Main] 1070\n");
x_186 = lean_decode_lossy_utf8(x_185);
printf("[Lean Shell Main] 1071\n");
lean_dec(x_185);
printf("[Lean Shell Main] 1072\n");
if (x_7 == 0)
{
if (x_8 == 0)
{
printf("[Lean Shell Main] 1076\n");
lean_object* x_187; lean_object* x_188; lean_object* x_189; lean_object* x_190; lean_object* x_191; lean_object* x_192; uint8_t x_193; 
printf("[Lean Shell Main] 1077\n");
x_187 = lean_unsigned_to_nat(0u);
printf("[Lean Shell Main] 1078\n");
x_188 = lean_string_utf8_byte_size(x_186);
printf("[Lean Shell Main] 1079\n");
lean_inc(x_188);
printf("[Lean Shell Main] 1080\n");
lean_inc_ref(x_186);
printf("[Lean Shell Main] 1081\n");
x_189 = lean_alloc_ctor(0, 3, 0);
printf("[Lean Shell Main] 1082\n");
lean_ctor_set(x_189, 0, x_186);
printf("[Lean Shell Main] 1083\n");
lean_ctor_set(x_189, 1, x_187);
printf("[Lean Shell Main] 1084\n");
lean_ctor_set(x_189, 2, x_188);
printf("[Lean Shell Main] 1085\n");
x_190 = l___private_Lean_Shell_0__Lean_shellMain___closed__10;
printf("[Lean Shell Main] 1086\n");
x_191 = l___private_Lean_Shell_0__Lean_shellMain___closed__11;
printf("[Lean Shell Main] 1087\n");
x_192 = l_String_Slice_utf8ByteSize(x_189);
printf("[Lean Shell Main] 1088\n");
x_193 = lean_nat_dec_le(x_191, x_192);
printf("[Lean Shell Main] 1089\n");
lean_dec(x_192);
printf("[Lean Shell Main] 1090\n");
if (x_193 == 0)
{
printf("[Lean Shell Main] 1092\n");
lean_dec_ref(x_189);
printf("[Lean Shell Main] 1093\n");
lean_dec(x_188);
printf("[Lean Shell Main] 1094\n");
x_154 = x_181;
printf("[Lean Shell Main] 1095\n");
x_155 = x_182;
printf("[Lean Shell Main] 1096\n");
x_156 = x_183;
printf("[Lean Shell Main] 1097\n");
x_157 = x_186;
printf("[Lean Shell Main] 1098\n");
x_158 = lean_box(0);
printf("[Lean Shell Main] 1099\n");
goto block_180;
printf("[Lean Shell Main] 1100\n");
}
else
{
printf("[Lean Shell Main] 1103\n");
uint8_t x_194; 
printf("[Lean Shell Main] 1104\n");
x_194 = lean_slice_memcmp(x_189, x_190, x_187, x_187, x_191);
printf("[Lean Shell Main] 1105\n");
lean_dec_ref(x_189);
printf("[Lean Shell Main] 1106\n");
if (x_194 == 0)
{
printf("[Lean Shell Main] 1108\n");
lean_dec(x_188);
printf("[Lean Shell Main] 1109\n");
x_154 = x_181;
printf("[Lean Shell Main] 1110\n");
x_155 = x_182;
printf("[Lean Shell Main] 1111\n");
x_156 = x_183;
printf("[Lean Shell Main] 1112\n");
x_157 = x_186;
printf("[Lean Shell Main] 1113\n");
x_158 = lean_box(0);
printf("[Lean Shell Main] 1114\n");
goto block_180;
printf("[Lean Shell Main] 1115\n");
}
else
{
printf("[Lean Shell Main] 1118\n");
uint32_t x_195; lean_object* x_196; lean_object* x_197; lean_object* x_198; lean_object* x_199; lean_object* x_200; lean_object* x_201; lean_object* x_202; uint8_t x_203; 
printf("[Lean Shell Main] 1119\n");
x_195 = 10;
printf("[Lean Shell Main] 1120\n");
x_196 = l_String_posOfAux(x_186, x_195, x_188, x_187);
printf("[Lean Shell Main] 1121\n");
x_197 = lean_unsigned_to_nat(6u);
printf("[Lean Shell Main] 1122\n");
x_198 = lean_string_utf8_extract(x_186, x_197, x_196);
printf("[Lean Shell Main] 1123\n");
x_199 = lean_string_utf8_byte_size(x_198);
printf("[Lean Shell Main] 1124\n");
x_200 = lean_alloc_ctor(0, 3, 0);
printf("[Lean Shell Main] 1125\n");
lean_ctor_set(x_200, 0, x_198);
printf("[Lean Shell Main] 1126\n");
lean_ctor_set(x_200, 1, x_187);
printf("[Lean Shell Main] 1127\n");
lean_ctor_set(x_200, 2, x_199);
printf("[Lean Shell Main] 1128\n");
x_201 = l_String_Slice_trimAscii(x_200);
printf("[Lean Shell Main] 1129\n");
lean_dec_ref(x_200);
printf("[Lean Shell Main] 1130\n");
x_202 = l___private_Lean_Shell_0__Lean_shellMain___closed__14;
printf("[Lean Shell Main] 1131\n");
x_203 = l_String_Slice_beq(x_201, x_202);
printf("[Lean Shell Main] 1132\n");
if (x_203 == 0)
{
printf("[Lean Shell Main] 1134\n");
lean_object* x_204; lean_object* x_205; lean_object* x_206; lean_object* x_207; lean_object* x_208; lean_object* x_209; 
printf("[Lean Shell Main] 1135\n");
lean_dec(x_196);
printf("[Lean Shell Main] 1136\n");
lean_dec(x_188);
printf("[Lean Shell Main] 1137\n");
lean_dec_ref(x_186);
printf("[Lean Shell Main] 1138\n");
lean_dec(x_183);
printf("[Lean Shell Main] 1139\n");
lean_dec_ref(x_182);
printf("[Lean Shell Main] 1140\n");
lean_dec(x_181);
printf("[Lean Shell Main] 1141\n");
lean_dec_ref(x_19);
printf("[Lean Shell Main] 1142\n");
lean_dec(x_17);
printf("[Lean Shell Main] 1143\n");
lean_dec(x_16);
printf("[Lean Shell Main] 1144\n");
lean_dec(x_15);
printf("[Lean Shell Main] 1145\n");
lean_dec(x_14);
printf("[Lean Shell Main] 1146\n");
lean_dec(x_13);
printf("[Lean Shell Main] 1147\n");
lean_dec(x_12);
printf("[Lean Shell Main] 1148\n");
lean_dec(x_10);
printf("[Lean Shell Main] 1149\n");
x_204 = l___private_Lean_Shell_0__Lean_shellMain___closed__15;
printf("[Lean Shell Main] 1150\n");
x_205 = l_String_Slice_toString(x_201);
printf("[Lean Shell Main] 1151\n");
lean_dec_ref(x_201);
printf("[Lean Shell Main] 1152\n");
x_206 = lean_string_append(x_204, x_205);
printf("[Lean Shell Main] 1153\n");
lean_dec_ref(x_205);
printf("[Lean Shell Main] 1154\n");
x_207 = l___private_Lean_Shell_0__Lean_shellMain___closed__16;
printf("[Lean Shell Main] 1155\n");
x_208 = lean_string_append(x_206, x_207);
printf("[Lean Shell Main] 1156\n");
x_209 = l_IO_eprintln___at___00__private_Lean_Shell_0__Lean_shellMain_spec__1(x_208);
printf("[Lean Shell Main] 1157\n");
if (lean_obj_tag(x_209) == 0)
{
printf("[Lean Shell Main] 1159\n");
uint8_t x_210; 
printf("[Lean Shell Main] 1160\n");
x_210 = !lean_is_exclusive(x_209);
printf("[Lean Shell Main] 1161\n");
if (x_210 == 0)
{
printf("[Lean Shell Main] 1163\n");
lean_object* x_211; lean_object* x_212; 
printf("[Lean Shell Main] 1164\n");
x_211 = lean_ctor_get(x_209, 0);
printf("[Lean Shell Main] 1165\n");
lean_dec(x_211);
printf("[Lean Shell Main] 1166\n");
x_212 = l___private_Lean_Shell_0__Lean_shellMain___boxed__const__2;
printf("[Lean Shell Main] 1167\n");
lean_ctor_set(x_209, 0, x_212);
printf("[Lean Shell Main] 1168\n");
return x_209;
printf("[Lean Shell Main] 1169\n");
}
else
{
printf("[Lean Shell Main] 1172\n");
lean_object* x_213; lean_object* x_214; 
printf("[Lean Shell Main] 1173\n");
lean_dec(x_209);
printf("[Lean Shell Main] 1174\n");
x_213 = l___private_Lean_Shell_0__Lean_shellMain___boxed__const__2;
printf("[Lean Shell Main] 1175\n");
x_214 = lean_alloc_ctor(0, 1, 0);
printf("[Lean Shell Main] 1176\n");
lean_ctor_set(x_214, 0, x_213);
printf("[Lean Shell Main] 1177\n");
return x_214;
printf("[Lean Shell Main] 1178\n");
}
printf("[Lean Shell Main] 1179\n");
}
else
{
printf("[Lean Shell Main] 1182\n");
uint8_t x_215; 
printf("[Lean Shell Main] 1183\n");
x_215 = !lean_is_exclusive(x_209);
printf("[Lean Shell Main] 1184\n");
if (x_215 == 0)
{
printf("[Lean Shell Main] 1186\n");
return x_209;
printf("[Lean Shell Main] 1187\n");
}
else
{
printf("[Lean Shell Main] 1190\n");
lean_object* x_216; lean_object* x_217; 
printf("[Lean Shell Main] 1191\n");
x_216 = lean_ctor_get(x_209, 0);
printf("[Lean Shell Main] 1192\n");
lean_inc(x_216);
printf("[Lean Shell Main] 1193\n");
lean_dec(x_209);
printf("[Lean Shell Main] 1194\n");
x_217 = lean_alloc_ctor(1, 1, 0);
printf("[Lean Shell Main] 1195\n");
lean_ctor_set(x_217, 0, x_216);
printf("[Lean Shell Main] 1196\n");
return x_217;
printf("[Lean Shell Main] 1197\n");
}
printf("[Lean Shell Main] 1198\n");
}
printf("[Lean Shell Main] 1199\n");
}
else
{
printf("[Lean Shell Main] 1202\n");
lean_object* x_218; 
printf("[Lean Shell Main] 1203\n");
lean_dec_ref(x_201);
printf("[Lean Shell Main] 1204\n");
x_218 = lean_string_utf8_extract(x_186, x_196, x_188);
printf("[Lean Shell Main] 1205\n");
lean_dec(x_188);
printf("[Lean Shell Main] 1206\n");
lean_dec(x_196);
printf("[Lean Shell Main] 1207\n");
lean_dec_ref(x_186);
printf("[Lean Shell Main] 1208\n");
x_154 = x_181;
printf("[Lean Shell Main] 1209\n");
x_155 = x_182;
printf("[Lean Shell Main] 1210\n");
x_156 = x_183;
printf("[Lean Shell Main] 1211\n");
x_157 = x_218;
printf("[Lean Shell Main] 1212\n");
x_158 = lean_box(0);
printf("[Lean Shell Main] 1213\n");
goto block_180;
printf("[Lean Shell Main] 1214\n");
}
printf("[Lean Shell Main] 1215\n");
}
printf("[Lean Shell Main] 1216\n");
}
printf("[Lean Shell Main] 1217\n");
}
else
{
printf("[Lean Shell Main] 1220\n");
lean_object* x_219; lean_object* x_220; 
printf("[Lean Shell Main] 1221\n");
lean_dec(x_183);
printf("[Lean Shell Main] 1222\n");
lean_dec(x_181);
printf("[Lean Shell Main] 1223\n");
lean_dec_ref(x_19);
printf("[Lean Shell Main] 1224\n");
lean_dec(x_17);
printf("[Lean Shell Main] 1225\n");
lean_dec(x_16);
printf("[Lean Shell Main] 1226\n");
lean_dec(x_15);
printf("[Lean Shell Main] 1227\n");
lean_dec(x_14);
printf("[Lean Shell Main] 1228\n");
lean_dec(x_13);
printf("[Lean Shell Main] 1229\n");
lean_dec(x_12);
printf("[Lean Shell Main] 1230\n");
lean_dec(x_10);
printf("[Lean Shell Main] 1231\n");
x_219 = lean_alloc_ctor(1, 1, 0);
printf("[Lean Shell Main] 1232\n");
lean_ctor_set(x_219, 0, x_182);
printf("[Lean Shell Main] 1233\n");
x_220 = l_Lean_Elab_printImportSrcs(x_186, x_219);
printf("[Lean Shell Main] 1234\n");
if (lean_obj_tag(x_220) == 0)
{
printf("[Lean Shell Main] 1236\n");
uint8_t x_221; 
printf("[Lean Shell Main] 1237\n");
x_221 = !lean_is_exclusive(x_220);
printf("[Lean Shell Main] 1238\n");
if (x_221 == 0)
{
printf("[Lean Shell Main] 1240\n");
lean_object* x_222; lean_object* x_223; 
printf("[Lean Shell Main] 1241\n");
x_222 = lean_ctor_get(x_220, 0);
printf("[Lean Shell Main] 1242\n");
lean_dec(x_222);
printf("[Lean Shell Main] 1243\n");
x_223 = l___private_Lean_Shell_0__Lean_shellMain___boxed__const__1;
printf("[Lean Shell Main] 1244\n");
lean_ctor_set(x_220, 0, x_223);
printf("[Lean Shell Main] 1245\n");
return x_220;
printf("[Lean Shell Main] 1246\n");
}
else
{
printf("[Lean Shell Main] 1249\n");
lean_object* x_224; lean_object* x_225; 
printf("[Lean Shell Main] 1250\n");
lean_dec(x_220);
printf("[Lean Shell Main] 1251\n");
x_224 = l___private_Lean_Shell_0__Lean_shellMain___boxed__const__1;
printf("[Lean Shell Main] 1252\n");
x_225 = lean_alloc_ctor(0, 1, 0);
printf("[Lean Shell Main] 1253\n");
lean_ctor_set(x_225, 0, x_224);
printf("[Lean Shell Main] 1254\n");
return x_225;
printf("[Lean Shell Main] 1255\n");
}
printf("[Lean Shell Main] 1256\n");
}
else
{
printf("[Lean Shell Main] 1259\n");
uint8_t x_226; 
printf("[Lean Shell Main] 1260\n");
x_226 = !lean_is_exclusive(x_220);
printf("[Lean Shell Main] 1261\n");
if (x_226 == 0)
{
printf("[Lean Shell Main] 1263\n");
return x_220;
printf("[Lean Shell Main] 1264\n");
}
else
{
printf("[Lean Shell Main] 1267\n");
lean_object* x_227; lean_object* x_228; 
printf("[Lean Shell Main] 1268\n");
x_227 = lean_ctor_get(x_220, 0);
printf("[Lean Shell Main] 1269\n");
lean_inc(x_227);
printf("[Lean Shell Main] 1270\n");
lean_dec(x_220);
printf("[Lean Shell Main] 1271\n");
x_228 = lean_alloc_ctor(1, 1, 0);
printf("[Lean Shell Main] 1272\n");
lean_ctor_set(x_228, 0, x_227);
printf("[Lean Shell Main] 1273\n");
return x_228;
printf("[Lean Shell Main] 1274\n");
}
printf("[Lean Shell Main] 1275\n");
}
printf("[Lean Shell Main] 1276\n");
}
printf("[Lean Shell Main] 1277\n");
}
else
{
printf("[Lean Shell Main] 1280\n");
lean_object* x_229; lean_object* x_230; 
printf("[Lean Shell Main] 1281\n");
lean_dec(x_183);
printf("[Lean Shell Main] 1282\n");
lean_dec(x_181);
printf("[Lean Shell Main] 1283\n");
lean_dec_ref(x_19);
printf("[Lean Shell Main] 1284\n");
lean_dec(x_17);
printf("[Lean Shell Main] 1285\n");
lean_dec(x_16);
printf("[Lean Shell Main] 1286\n");
lean_dec(x_15);
printf("[Lean Shell Main] 1287\n");
lean_dec(x_14);
printf("[Lean Shell Main] 1288\n");
lean_dec(x_13);
printf("[Lean Shell Main] 1289\n");
lean_dec(x_12);
printf("[Lean Shell Main] 1290\n");
lean_dec(x_10);
printf("[Lean Shell Main] 1291\n");
x_229 = lean_alloc_ctor(1, 1, 0);
printf("[Lean Shell Main] 1292\n");
lean_ctor_set(x_229, 0, x_182);
printf("[Lean Shell Main] 1293\n");
x_230 = l_Lean_Elab_printImports(x_186, x_229);
printf("[Lean Shell Main] 1294\n");
if (lean_obj_tag(x_230) == 0)
{
printf("[Lean Shell Main] 1296\n");
uint8_t x_231; 
printf("[Lean Shell Main] 1297\n");
x_231 = !lean_is_exclusive(x_230);
printf("[Lean Shell Main] 1298\n");
if (x_231 == 0)
{
printf("[Lean Shell Main] 1300\n");
lean_object* x_232; lean_object* x_233; 
printf("[Lean Shell Main] 1301\n");
x_232 = lean_ctor_get(x_230, 0);
printf("[Lean Shell Main] 1302\n");
lean_dec(x_232);
printf("[Lean Shell Main] 1303\n");
x_233 = l___private_Lean_Shell_0__Lean_shellMain___boxed__const__1;
printf("[Lean Shell Main] 1304\n");
lean_ctor_set(x_230, 0, x_233);
printf("[Lean Shell Main] 1305\n");
return x_230;
printf("[Lean Shell Main] 1306\n");
}
else
{
printf("[Lean Shell Main] 1309\n");
lean_object* x_234; lean_object* x_235; 
printf("[Lean Shell Main] 1310\n");
lean_dec(x_230);
printf("[Lean Shell Main] 1311\n");
x_234 = l___private_Lean_Shell_0__Lean_shellMain___boxed__const__1;
printf("[Lean Shell Main] 1312\n");
x_235 = lean_alloc_ctor(0, 1, 0);
printf("[Lean Shell Main] 1313\n");
lean_ctor_set(x_235, 0, x_234);
printf("[Lean Shell Main] 1314\n");
return x_235;
printf("[Lean Shell Main] 1315\n");
}
printf("[Lean Shell Main] 1316\n");
}
else
{
printf("[Lean Shell Main] 1319\n");
uint8_t x_236; 
printf("[Lean Shell Main] 1320\n");
x_236 = !lean_is_exclusive(x_230);
printf("[Lean Shell Main] 1321\n");
if (x_236 == 0)
{
printf("[Lean Shell Main] 1323\n");
return x_230;
printf("[Lean Shell Main] 1324\n");
}
else
{
printf("[Lean Shell Main] 1327\n");
lean_object* x_237; lean_object* x_238; 
printf("[Lean Shell Main] 1328\n");
x_237 = lean_ctor_get(x_230, 0);
printf("[Lean Shell Main] 1329\n");
lean_inc(x_237);
printf("[Lean Shell Main] 1330\n");
lean_dec(x_230);
printf("[Lean Shell Main] 1331\n");
x_238 = lean_alloc_ctor(1, 1, 0);
printf("[Lean Shell Main] 1332\n");
lean_ctor_set(x_238, 0, x_237);
printf("[Lean Shell Main] 1333\n");
return x_238;
printf("[Lean Shell Main] 1334\n");
}
printf("[Lean Shell Main] 1335\n");
}
printf("[Lean Shell Main] 1336\n");
}
printf("[Lean Shell Main] 1337\n");
}
else
{
printf("[Lean Shell Main] 1340\n");
uint8_t x_239; 
printf("[Lean Shell Main] 1341\n");
lean_dec(x_183);
printf("[Lean Shell Main] 1342\n");
lean_dec_ref(x_182);
printf("[Lean Shell Main] 1343\n");
lean_dec(x_181);
printf("[Lean Shell Main] 1344\n");
lean_dec_ref(x_19);
printf("[Lean Shell Main] 1345\n");
lean_dec(x_17);
printf("[Lean Shell Main] 1346\n");
lean_dec(x_16);
printf("[Lean Shell Main] 1347\n");
lean_dec(x_15);
printf("[Lean Shell Main] 1348\n");
lean_dec(x_14);
printf("[Lean Shell Main] 1349\n");
lean_dec(x_13);
printf("[Lean Shell Main] 1350\n");
lean_dec(x_12);
printf("[Lean Shell Main] 1351\n");
lean_dec(x_10);
printf("[Lean Shell Main] 1352\n");
x_239 = !lean_is_exclusive(x_184);
printf("[Lean Shell Main] 1353\n");
if (x_239 == 0)
{
printf("[Lean Shell Main] 1355\n");
return x_184;
printf("[Lean Shell Main] 1356\n");
}
else
{
printf("[Lean Shell Main] 1359\n");
lean_object* x_240; lean_object* x_241; 
printf("[Lean Shell Main] 1360\n");
x_240 = lean_ctor_get(x_184, 0);
printf("[Lean Shell Main] 1361\n");
lean_inc(x_240);
printf("[Lean Shell Main] 1362\n");
lean_dec(x_184);
printf("[Lean Shell Main] 1363\n");
x_241 = lean_alloc_ctor(1, 1, 0);
printf("[Lean Shell Main] 1364\n");
lean_ctor_set(x_241, 0, x_240);
printf("[Lean Shell Main] 1365\n");
return x_241;
printf("[Lean Shell Main] 1366\n");
}
printf("[Lean Shell Main] 1367\n");
}
printf("[Lean Shell Main] 1368\n");
}
printf("[Lean Shell Main] 1369\n");
block_250:
printf("[Lean Shell Main] 1370\n");
{
printf("[Lean Shell Main] 1371\n");
if (x_6 == 0)
{
printf("[Lean Shell Main] 1373\n");
lean_object* x_247; 
printf("[Lean Shell Main] 1374\n");
x_247 = l_IO_FS_readBinFile(x_245);
printf("[Lean Shell Main] 1375\n");
x_181 = x_243;
printf("[Lean Shell Main] 1376\n");
x_182 = x_245;
printf("[Lean Shell Main] 1377\n");
x_183 = x_244;
printf("[Lean Shell Main] 1378\n");
x_184 = x_247;
printf("[Lean Shell Main] 1379\n");
goto block_242;
printf("[Lean Shell Main] 1380\n");
}
else
{
printf("[Lean Shell Main] 1383\n");
lean_object* x_248; lean_object* x_249; 
printf("[Lean Shell Main] 1384\n");
x_248 = lean_get_stdin();
printf("[Lean Shell Main] 1385\n");
x_249 = l_IO_FS_Stream_readBinToEnd(x_248);
printf("[Lean Shell Main] 1386\n");
x_181 = x_243;
printf("[Lean Shell Main] 1387\n");
x_182 = x_245;
printf("[Lean Shell Main] 1388\n");
x_183 = x_244;
printf("[Lean Shell Main] 1389\n");
x_184 = x_249;
printf("[Lean Shell Main] 1390\n");
goto block_242;
printf("[Lean Shell Main] 1391\n");
}
printf("[Lean Shell Main] 1392\n");
}
printf("[Lean Shell Main] 1393\n");
block_271:
printf("[Lean Shell Main] 1394\n");
{
printf("[Lean Shell Main] 1395\n");
if (lean_obj_tag(x_253) == 1)
{
printf("[Lean Shell Main] 1397\n");
lean_object* x_254; 
printf("[Lean Shell Main] 1398\n");
x_254 = lean_ctor_get(x_253, 0);
printf("[Lean Shell Main] 1399\n");
lean_inc(x_254);
printf("[Lean Shell Main] 1400\n");
x_243 = x_252;
printf("[Lean Shell Main] 1401\n");
x_244 = x_253;
printf("[Lean Shell Main] 1402\n");
x_245 = x_254;
printf("[Lean Shell Main] 1403\n");
x_246 = lean_box(0);
printf("[Lean Shell Main] 1404\n");
goto block_250;
printf("[Lean Shell Main] 1405\n");
}
else
{
printf("[Lean Shell Main] 1408\n");
if (x_6 == 0)
{
printf("[Lean Shell Main] 1410\n");
lean_object* x_255; lean_object* x_256; 
printf("[Lean Shell Main] 1411\n");
lean_dec(x_253);
printf("[Lean Shell Main] 1412\n");
lean_dec(x_252);
printf("[Lean Shell Main] 1413\n");
lean_dec_ref(x_19);
printf("[Lean Shell Main] 1414\n");
lean_dec(x_17);
printf("[Lean Shell Main] 1415\n");
lean_dec(x_16);
printf("[Lean Shell Main] 1416\n");
lean_dec(x_15);
printf("[Lean Shell Main] 1417\n");
lean_dec(x_14);
printf("[Lean Shell Main] 1418\n");
lean_dec(x_13);
printf("[Lean Shell Main] 1419\n");
lean_dec(x_12);
printf("[Lean Shell Main] 1420\n");
lean_dec(x_10);
printf("[Lean Shell Main] 1421\n");
x_255 = l___private_Lean_Shell_0__Lean_shellMain___closed__17;
printf("[Lean Shell Main] 1422\n");
x_256 = l_IO_eprintln___at___00__private_Lean_Shell_0__Lean_shellMain_spec__1(x_255);
printf("[Lean Shell Main] 1423\n");
if (lean_obj_tag(x_256) == 0)
{
printf("[Lean Shell Main] 1425\n");
uint8_t x_257; lean_object* x_258; 
printf("[Lean Shell Main] 1426\n");
lean_dec_ref(x_256);
printf("[Lean Shell Main] 1427\n");
x_257 = 1;
printf("[Lean Shell Main] 1428\n");
x_258 = lean_display_help(x_257);
printf("[Lean Shell Main] 1429\n");
if (lean_obj_tag(x_258) == 0)
{
printf("[Lean Shell Main] 1431\n");
uint8_t x_259; 
printf("[Lean Shell Main] 1432\n");
x_259 = !lean_is_exclusive(x_258);
printf("[Lean Shell Main] 1433\n");
if (x_259 == 0)
{
printf("[Lean Shell Main] 1435\n");
lean_object* x_260; lean_object* x_261; 
printf("[Lean Shell Main] 1436\n");
x_260 = lean_ctor_get(x_258, 0);
printf("[Lean Shell Main] 1437\n");
lean_dec(x_260);
printf("[Lean Shell Main] 1438\n");
x_261 = l___private_Lean_Shell_0__Lean_shellMain___boxed__const__2;
printf("[Lean Shell Main] 1439\n");
lean_ctor_set(x_258, 0, x_261);
printf("[Lean Shell Main] 1440\n");
return x_258;
printf("[Lean Shell Main] 1441\n");
}
else
{
printf("[Lean Shell Main] 1444\n");
lean_object* x_262; lean_object* x_263; 
printf("[Lean Shell Main] 1445\n");
lean_dec(x_258);
printf("[Lean Shell Main] 1446\n");
x_262 = l___private_Lean_Shell_0__Lean_shellMain___boxed__const__2;
printf("[Lean Shell Main] 1447\n");
x_263 = lean_alloc_ctor(0, 1, 0);
printf("[Lean Shell Main] 1448\n");
lean_ctor_set(x_263, 0, x_262);
printf("[Lean Shell Main] 1449\n");
return x_263;
printf("[Lean Shell Main] 1450\n");
}
printf("[Lean Shell Main] 1451\n");
}
else
{
printf("[Lean Shell Main] 1454\n");
uint8_t x_264; 
printf("[Lean Shell Main] 1455\n");
x_264 = !lean_is_exclusive(x_258);
printf("[Lean Shell Main] 1456\n");
if (x_264 == 0)
{
printf("[Lean Shell Main] 1458\n");
return x_258;
printf("[Lean Shell Main] 1459\n");
}
else
{
printf("[Lean Shell Main] 1462\n");
lean_object* x_265; lean_object* x_266; 
printf("[Lean Shell Main] 1463\n");
x_265 = lean_ctor_get(x_258, 0);
printf("[Lean Shell Main] 1464\n");
lean_inc(x_265);
printf("[Lean Shell Main] 1465\n");
lean_dec(x_258);
printf("[Lean Shell Main] 1466\n");
x_266 = lean_alloc_ctor(1, 1, 0);
printf("[Lean Shell Main] 1467\n");
lean_ctor_set(x_266, 0, x_265);
printf("[Lean Shell Main] 1468\n");
return x_266;
printf("[Lean Shell Main] 1469\n");
}
printf("[Lean Shell Main] 1470\n");
}
printf("[Lean Shell Main] 1471\n");
}
else
{
printf("[Lean Shell Main] 1474\n");
uint8_t x_267; 
printf("[Lean Shell Main] 1475\n");
x_267 = !lean_is_exclusive(x_256);
printf("[Lean Shell Main] 1476\n");
if (x_267 == 0)
{
printf("[Lean Shell Main] 1478\n");
return x_256;
printf("[Lean Shell Main] 1479\n");
}
else
{
printf("[Lean Shell Main] 1482\n");
lean_object* x_268; lean_object* x_269; 
printf("[Lean Shell Main] 1483\n");
x_268 = lean_ctor_get(x_256, 0);
printf("[Lean Shell Main] 1484\n");
lean_inc(x_268);
printf("[Lean Shell Main] 1485\n");
lean_dec(x_256);
printf("[Lean Shell Main] 1486\n");
x_269 = lean_alloc_ctor(1, 1, 0);
printf("[Lean Shell Main] 1487\n");
lean_ctor_set(x_269, 0, x_268);
printf("[Lean Shell Main] 1488\n");
return x_269;
printf("[Lean Shell Main] 1489\n");
}
printf("[Lean Shell Main] 1490\n");
}
printf("[Lean Shell Main] 1491\n");
}
else
{
printf("[Lean Shell Main] 1494\n");
lean_object* x_270; 
printf("[Lean Shell Main] 1495\n");
x_270 = l___private_Lean_Shell_0__Lean_shellMain___closed__18;
printf("[Lean Shell Main] 1496\n");
x_243 = x_252;
printf("[Lean Shell Main] 1497\n");
x_244 = x_253;
printf("[Lean Shell Main] 1498\n");
x_245 = x_270;
printf("[Lean Shell Main] 1499\n");
x_246 = lean_box(0);
printf("[Lean Shell Main] 1500\n");
goto block_250;
printf("[Lean Shell Main] 1501\n");
}
printf("[Lean Shell Main] 1502\n");
}
printf("[Lean Shell Main] 1503\n");
}
printf("[Lean Shell Main] 1504\n");
block_291:
printf("[Lean Shell Main] 1505\n");
{
printf("[Lean Shell Main] 1506\n");
if (x_21 == 0)
{
printf("[Lean Shell Main] 1508\n");
uint8_t x_275; 
printf("[Lean Shell Main] 1509\n");
x_275 = l_List_isEmpty___redArg(x_274);
printf("[Lean Shell Main] 1510\n");
if (x_275 == 0)
{
printf("[Lean Shell Main] 1512\n");
lean_object* x_276; lean_object* x_277; 
printf("[Lean Shell Main] 1513\n");
lean_dec(x_274);
printf("[Lean Shell Main] 1514\n");
lean_dec(x_273);
printf("[Lean Shell Main] 1515\n");
lean_dec_ref(x_19);
printf("[Lean Shell Main] 1516\n");
lean_dec(x_17);
printf("[Lean Shell Main] 1517\n");
lean_dec(x_16);
printf("[Lean Shell Main] 1518\n");
lean_dec(x_15);
printf("[Lean Shell Main] 1519\n");
lean_dec(x_14);
printf("[Lean Shell Main] 1520\n");
lean_dec(x_13);
printf("[Lean Shell Main] 1521\n");
lean_dec(x_12);
printf("[Lean Shell Main] 1522\n");
lean_dec(x_10);
printf("[Lean Shell Main] 1523\n");
x_276 = l___private_Lean_Shell_0__Lean_shellMain___closed__17;
printf("[Lean Shell Main] 1524\n");
x_277 = l_IO_eprintln___at___00__private_Lean_Shell_0__Lean_shellMain_spec__1(x_276);
printf("[Lean Shell Main] 1525\n");
if (lean_obj_tag(x_277) == 0)
{
printf("[Lean Shell Main] 1527\n");
uint8_t x_278; lean_object* x_279; 
printf("[Lean Shell Main] 1528\n");
lean_dec_ref(x_277);
printf("[Lean Shell Main] 1529\n");
x_278 = 1;
printf("[Lean Shell Main] 1530\n");
x_279 = lean_display_help(x_278);
printf("[Lean Shell Main] 1531\n");
if (lean_obj_tag(x_279) == 0)
{
printf("[Lean Shell Main] 1533\n");
uint8_t x_280; 
printf("[Lean Shell Main] 1534\n");
x_280 = !lean_is_exclusive(x_279);
printf("[Lean Shell Main] 1535\n");
if (x_280 == 0)
{
printf("[Lean Shell Main] 1537\n");
lean_object* x_281; lean_object* x_282; 
printf("[Lean Shell Main] 1538\n");
x_281 = lean_ctor_get(x_279, 0);
printf("[Lean Shell Main] 1539\n");
lean_dec(x_281);
printf("[Lean Shell Main] 1540\n");
x_282 = l___private_Lean_Shell_0__Lean_shellMain___boxed__const__2;
printf("[Lean Shell Main] 1541\n");
lean_ctor_set(x_279, 0, x_282);
printf("[Lean Shell Main] 1542\n");
return x_279;
printf("[Lean Shell Main] 1543\n");
}
else
{
printf("[Lean Shell Main] 1546\n");
lean_object* x_283; lean_object* x_284; 
printf("[Lean Shell Main] 1547\n");
lean_dec(x_279);
printf("[Lean Shell Main] 1548\n");
x_283 = l___private_Lean_Shell_0__Lean_shellMain___boxed__const__2;
printf("[Lean Shell Main] 1549\n");
x_284 = lean_alloc_ctor(0, 1, 0);
printf("[Lean Shell Main] 1550\n");
lean_ctor_set(x_284, 0, x_283);
printf("[Lean Shell Main] 1551\n");
return x_284;
printf("[Lean Shell Main] 1552\n");
}
printf("[Lean Shell Main] 1553\n");
}
else
{
printf("[Lean Shell Main] 1556\n");
uint8_t x_285; 
printf("[Lean Shell Main] 1557\n");
x_285 = !lean_is_exclusive(x_279);
printf("[Lean Shell Main] 1558\n");
if (x_285 == 0)
{
printf("[Lean Shell Main] 1560\n");
return x_279;
printf("[Lean Shell Main] 1561\n");
}
else
{
printf("[Lean Shell Main] 1564\n");
lean_object* x_286; lean_object* x_287; 
printf("[Lean Shell Main] 1565\n");
x_286 = lean_ctor_get(x_279, 0);
printf("[Lean Shell Main] 1566\n");
lean_inc(x_286);
printf("[Lean Shell Main] 1567\n");
lean_dec(x_279);
printf("[Lean Shell Main] 1568\n");
x_287 = lean_alloc_ctor(1, 1, 0);
printf("[Lean Shell Main] 1569\n");
lean_ctor_set(x_287, 0, x_286);
printf("[Lean Shell Main] 1570\n");
return x_287;
printf("[Lean Shell Main] 1571\n");
}
printf("[Lean Shell Main] 1572\n");
}
printf("[Lean Shell Main] 1573\n");
}
else
{
printf("[Lean Shell Main] 1576\n");
uint8_t x_288; 
printf("[Lean Shell Main] 1577\n");
x_288 = !lean_is_exclusive(x_277);
printf("[Lean Shell Main] 1578\n");
if (x_288 == 0)
{
printf("[Lean Shell Main] 1580\n");
return x_277;
printf("[Lean Shell Main] 1581\n");
}
else
{
printf("[Lean Shell Main] 1584\n");
lean_object* x_289; lean_object* x_290; 
printf("[Lean Shell Main] 1585\n");
x_289 = lean_ctor_get(x_277, 0);
printf("[Lean Shell Main] 1586\n");
lean_inc(x_289);
printf("[Lean Shell Main] 1587\n");
lean_dec(x_277);
printf("[Lean Shell Main] 1588\n");
x_290 = lean_alloc_ctor(1, 1, 0);
printf("[Lean Shell Main] 1589\n");
lean_ctor_set(x_290, 0, x_289);
printf("[Lean Shell Main] 1590\n");
return x_290;
printf("[Lean Shell Main] 1591\n");
}
printf("[Lean Shell Main] 1592\n");
}
printf("[Lean Shell Main] 1593\n");
}
else
{
printf("[Lean Shell Main] 1596\n");
x_251 = lean_box(0);
printf("[Lean Shell Main] 1597\n");
x_252 = x_274;
printf("[Lean Shell Main] 1598\n");
x_253 = x_273;
printf("[Lean Shell Main] 1599\n");
goto block_271;
printf("[Lean Shell Main] 1600\n");
}
printf("[Lean Shell Main] 1601\n");
}
else
{
printf("[Lean Shell Main] 1604\n");
x_251 = lean_box(0);
printf("[Lean Shell Main] 1605\n");
x_252 = x_274;
printf("[Lean Shell Main] 1606\n");
x_253 = x_273;
printf("[Lean Shell Main] 1607\n");
goto block_271;
printf("[Lean Shell Main] 1608\n");
}
printf("[Lean Shell Main] 1609\n");
}
printf("[Lean Shell Main] 1610\n");
block_297:
printf("[Lean Shell Main] 1611\n");
{
printf("[Lean Shell Main] 1612\n");
if (lean_obj_tag(x_1) == 0)
{
printf("[Lean Shell Main] 1614\n");
lean_object* x_293; 
printf("[Lean Shell Main] 1615\n");
x_293 = lean_box(0);
printf("[Lean Shell Main] 1616\n");
x_272 = lean_box(0);
printf("[Lean Shell Main] 1617\n");
x_273 = x_293;
printf("[Lean Shell Main] 1618\n");
x_274 = x_1;
printf("[Lean Shell Main] 1619\n");
goto block_291;
printf("[Lean Shell Main] 1620\n");
}
else
{
printf("[Lean Shell Main] 1623\n");
lean_object* x_294; lean_object* x_295; lean_object* x_296; 
printf("[Lean Shell Main] 1624\n");
x_294 = lean_ctor_get(x_1, 0);
printf("[Lean Shell Main] 1625\n");
lean_inc(x_294);
printf("[Lean Shell Main] 1626\n");
x_295 = lean_ctor_get(x_1, 1);
printf("[Lean Shell Main] 1627\n");
lean_inc(x_295);
printf("[Lean Shell Main] 1628\n");
lean_dec_ref(x_1);
printf("[Lean Shell Main] 1629\n");
x_296 = lean_alloc_ctor(1, 1, 0);
printf("[Lean Shell Main] 1630\n");
lean_ctor_set(x_296, 0, x_294);
printf("[Lean Shell Main] 1631\n");
x_272 = lean_box(0);
printf("[Lean Shell Main] 1632\n");
x_273 = x_296;
printf("[Lean Shell Main] 1633\n");
x_274 = x_295;
printf("[Lean Shell Main] 1634\n");
goto block_291;
printf("[Lean Shell Main] 1635\n");
}
printf("[Lean Shell Main] 1636\n");
}
printf("[Lean Shell Main] 1637\n");
block_308:
printf("[Lean Shell Main] 1638\n");
{
printf("[Lean Shell Main] 1639\n");
switch (x_3) {
printf("[Lean Shell Main] 1640\n");
case 0:
printf("[Lean Shell Main] 1641\n");
{
printf("[Lean Shell Main] 1642\n");
lean_dec(x_2);
printf("[Lean Shell Main] 1643\n");
if (x_7 == 0)
{
printf("[Lean Shell Main] 1645\n");
x_292 = lean_box(0);
printf("[Lean Shell Main] 1646\n");
goto block_297;
printf("[Lean Shell Main] 1647\n");
}
else
{
printf("[Lean Shell Main] 1650\n");
if (x_9 == 0)
{
printf("[Lean Shell Main] 1652\n");
x_292 = lean_box(0);
printf("[Lean Shell Main] 1653\n");
goto block_297;
printf("[Lean Shell Main] 1654\n");
}
else
{
printf("[Lean Shell Main] 1657\n");
lean_dec_ref(x_19);
printf("[Lean Shell Main] 1658\n");
lean_dec(x_17);
printf("[Lean Shell Main] 1659\n");
lean_dec(x_16);
printf("[Lean Shell Main] 1660\n");
lean_dec(x_15);
printf("[Lean Shell Main] 1661\n");
lean_dec(x_14);
printf("[Lean Shell Main] 1662\n");
lean_dec(x_13);
printf("[Lean Shell Main] 1663\n");
lean_dec(x_12);
printf("[Lean Shell Main] 1664\n");
lean_dec(x_10);
printf("[Lean Shell Main] 1665\n");
if (x_6 == 0)
{
printf("[Lean Shell Main] 1667\n");
lean_object* x_299; 
printf("[Lean Shell Main] 1668\n");
x_299 = lean_array_mk(x_1);
printf("[Lean Shell Main] 1669\n");
x_23 = x_299;
printf("[Lean Shell Main] 1670\n");
x_24 = lean_box(0);
printf("[Lean Shell Main] 1671\n");
goto block_34;
printf("[Lean Shell Main] 1672\n");
}
else
{
printf("[Lean Shell Main] 1675\n");
lean_object* x_300; lean_object* x_301; 
printf("[Lean Shell Main] 1676\n");
lean_dec(x_1);
printf("[Lean Shell Main] 1677\n");
x_300 = lean_get_stdin();
printf("[Lean Shell Main] 1678\n");
x_301 = l_IO_FS_Stream_lines(x_300);
printf("[Lean Shell Main] 1679\n");
if (lean_obj_tag(x_301) == 0)
{
printf("[Lean Shell Main] 1681\n");
lean_object* x_302; 
printf("[Lean Shell Main] 1682\n");
x_302 = lean_ctor_get(x_301, 0);
printf("[Lean Shell Main] 1683\n");
lean_inc(x_302);
printf("[Lean Shell Main] 1684\n");
lean_dec_ref(x_301);
printf("[Lean Shell Main] 1685\n");
x_23 = x_302;
printf("[Lean Shell Main] 1686\n");
x_24 = lean_box(0);
printf("[Lean Shell Main] 1687\n");
goto block_34;
printf("[Lean Shell Main] 1688\n");
}
else
{
printf("[Lean Shell Main] 1691\n");
uint8_t x_303; 
printf("[Lean Shell Main] 1692\n");
x_303 = !lean_is_exclusive(x_301);
printf("[Lean Shell Main] 1693\n");
if (x_303 == 0)
{
printf("[Lean Shell Main] 1695\n");
return x_301;
printf("[Lean Shell Main] 1696\n");
}
else
{
printf("[Lean Shell Main] 1699\n");
lean_object* x_304; lean_object* x_305; 
printf("[Lean Shell Main] 1700\n");
x_304 = lean_ctor_get(x_301, 0);
printf("[Lean Shell Main] 1701\n");
lean_inc(x_304);
printf("[Lean Shell Main] 1702\n");
lean_dec(x_301);
printf("[Lean Shell Main] 1703\n");
x_305 = lean_alloc_ctor(1, 1, 0);
printf("[Lean Shell Main] 1704\n");
lean_ctor_set(x_305, 0, x_304);
printf("[Lean Shell Main] 1705\n");
return x_305;
printf("[Lean Shell Main] 1706\n");
}
printf("[Lean Shell Main] 1707\n");
}
printf("[Lean Shell Main] 1708\n");
}
printf("[Lean Shell Main] 1709\n");
}
printf("[Lean Shell Main] 1710\n");
}
printf("[Lean Shell Main] 1711\n");
}
printf("[Lean Shell Main] 1712\n");
case 1:
printf("[Lean Shell Main] 1713\n");
{
printf("[Lean Shell Main] 1714\n");
lean_object* x_306; 
printf("[Lean Shell Main] 1715\n");
lean_dec_ref(x_19);
printf("[Lean Shell Main] 1716\n");
lean_dec(x_17);
printf("[Lean Shell Main] 1717\n");
lean_dec(x_16);
printf("[Lean Shell Main] 1718\n");
lean_dec(x_15);
printf("[Lean Shell Main] 1719\n");
lean_dec(x_14);
printf("[Lean Shell Main] 1720\n");
lean_dec(x_13);
printf("[Lean Shell Main] 1721\n");
lean_dec(x_12);
printf("[Lean Shell Main] 1722\n");
lean_dec(x_10);
printf("[Lean Shell Main] 1723\n");
lean_dec(x_1);
printf("[Lean Shell Main] 1724\n");
x_306 = l_Lean_Server_Watchdog_watchdogMain(x_2);
printf("[Lean Shell Main] 1725\n");
return x_306;
printf("[Lean Shell Main] 1726\n");
}
printf("[Lean Shell Main] 1727\n");
default: 
printf("[Lean Shell Main] 1728\n");
{
printf("[Lean Shell Main] 1729\n");
lean_object* x_307; 
printf("[Lean Shell Main] 1730\n");
lean_dec_ref(x_19);
printf("[Lean Shell Main] 1731\n");
lean_dec(x_17);
printf("[Lean Shell Main] 1732\n");
lean_dec(x_16);
printf("[Lean Shell Main] 1733\n");
lean_dec(x_15);
printf("[Lean Shell Main] 1734\n");
lean_dec(x_14);
printf("[Lean Shell Main] 1735\n");
lean_dec(x_13);
printf("[Lean Shell Main] 1736\n");
lean_dec(x_12);
printf("[Lean Shell Main] 1737\n");
lean_dec(x_2);
printf("[Lean Shell Main] 1738\n");
lean_dec(x_1);
printf("[Lean Shell Main] 1739\n");
x_307 = l_Lean_Server_FileWorker_workerMain(x_10);
printf("[Lean Shell Main] 1740\n");
return x_307;
printf("[Lean Shell Main] 1741\n");
}
printf("[Lean Shell Main] 1742\n");
}
printf("[Lean Shell Main] 1743\n");
}
printf("[Lean Shell Main] 1744\n");
block_318:
printf("[Lean Shell Main] 1745\n");
{
printf("[Lean Shell Main] 1746\n");
lean_object* x_310; lean_object* x_311; lean_object* x_312; uint8_t x_313; 
printf("[Lean Shell Main] 1747\n");
x_310 = l___private_Lean_Shell_0__Lean_shellMain___closed__19;
printf("[Lean Shell Main] 1748\n");
x_311 = l_Lean_Option_get___at___00__private_Lean_Shell_0__Lean_shellMain_spec__3(x_10, x_310);
printf("[Lean Shell Main] 1749\n");
x_312 = lean_unsigned_to_nat(0u);
printf("[Lean Shell Main] 1750\n");
x_313 = lean_nat_dec_eq(x_311, x_312);
printf("[Lean Shell Main] 1751\n");
if (x_313 == 0)
{
printf("[Lean Shell Main] 1753\n");
size_t x_314; size_t x_315; size_t x_316; lean_object* x_317; 
printf("[Lean Shell Main] 1754\n");
x_314 = lean_usize_of_nat(x_311);
printf("[Lean Shell Main] 1755\n");
lean_dec(x_311);
printf("[Lean Shell Main] 1756\n");
x_315 = 1000;
printf("[Lean Shell Main] 1757\n");
x_316 = lean_usize_mul(x_314, x_315);
printf("[Lean Shell Main] 1758\n");
x_317 = lean_internal_set_max_heartbeat(x_316);
printf("[Lean Shell Main] 1759\n");
x_298 = lean_box(0);
printf("[Lean Shell Main] 1760\n");
goto block_308;
printf("[Lean Shell Main] 1761\n");
}
else
{
printf("[Lean Shell Main] 1764\n");
lean_dec(x_311);
printf("[Lean Shell Main] 1765\n");
x_298 = lean_box(0);
printf("[Lean Shell Main] 1766\n");
goto block_308;
printf("[Lean Shell Main] 1767\n");
}
printf("[Lean Shell Main] 1768\n");
}
printf("[Lean Shell Main] 1769\n");
}
printf("[Lean Shell Main] 1769\n");
}
LEAN_EXPORT lean_object* l_IO_ofExcept___at___00__private_Lean_Shell_0__Lean_shellMain_spec__0___redArg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_IO_ofExcept___at___00__private_Lean_Shell_0__Lean_shellMain_spec__0___redArg(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_IO_ofExcept___at___00__private_Lean_Shell_0__Lean_shellMain_spec__0___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_IO_ofExcept___at___00__private_Lean_Shell_0__Lean_shellMain_spec__0(x_1, x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_IO_eprint___at___00IO_eprintln___at___00__private_Lean_Shell_0__Lean_shellMain_spec__1_spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_IO_eprint___at___00IO_eprintln___at___00__private_Lean_Shell_0__Lean_shellMain_spec__1_spec__1(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_IO_eprintln___at___00__private_Lean_Shell_0__Lean_shellMain_spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_IO_eprintln___at___00__private_Lean_Shell_0__Lean_shellMain_spec__1(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Shell_0__Lean_shellMain_spec__3___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Option_get___at___00__private_Lean_Shell_0__Lean_shellMain_spec__3(x_1, x_2);
lean_dec_ref(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_IO_println___at___00__private_Lean_Shell_0__Lean_shellMain_spec__4___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_IO_println___at___00__private_Lean_Shell_0__Lean_shellMain_spec__4(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_shellMain___lam__0___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l___private_Lean_Shell_0__Lean_shellMain___lam__0(x_1, x_2);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_shellMain___boxed(lean_object** _args) {
lean_object* x_1 = _args[0];
lean_object* x_2 = _args[1];
lean_object* x_3 = _args[2];
lean_object* x_4 = _args[3];
lean_object* x_5 = _args[4];
lean_object* x_6 = _args[5];
lean_object* x_7 = _args[6];
lean_object* x_8 = _args[7];
lean_object* x_9 = _args[8];
lean_object* x_10 = _args[9];
lean_object* x_11 = _args[10];
lean_object* x_12 = _args[11];
lean_object* x_13 = _args[12];
lean_object* x_14 = _args[13];
lean_object* x_15 = _args[14];
lean_object* x_16 = _args[15];
lean_object* x_17 = _args[16];
lean_object* x_18 = _args[17];
lean_object* x_19 = _args[18];
lean_object* x_20 = _args[19];
lean_object* x_21 = _args[20];
lean_object* x_22 = _args[21];
_start:
{
uint8_t x_23; uint8_t x_24; uint8_t x_25; uint8_t x_26; uint8_t x_27; uint8_t x_28; uint8_t x_29; uint32_t x_30; uint8_t x_31; uint8_t x_32; uint8_t x_33; lean_object* x_34; 
x_23 = lean_unbox(x_3);
x_24 = lean_unbox(x_4);
x_25 = lean_unbox(x_5);
x_26 = lean_unbox(x_6);
x_27 = lean_unbox(x_7);
x_28 = lean_unbox(x_8);
x_29 = lean_unbox(x_9);
x_30 = lean_unbox_uint32(x_11);
lean_dec(x_11);
x_31 = lean_unbox(x_18);
x_32 = lean_unbox(x_20);
x_33 = lean_unbox(x_21);
x_34 = lean_shell_main(x_1, x_2, x_23, x_24, x_25, x_26, x_27, x_28, x_29, x_10, x_30, x_12, x_13, x_14, x_15, x_16, x_17, x_31, x_19, x_32, x_33);
return x_34;
}
}
lean_object* initialize_Lean_Elab_Frontend(uint8_t builtin);
lean_object* initialize_Lean_Elab_ParseImportsFast(uint8_t builtin);
lean_object* initialize_Lean_Server_Watchdog(uint8_t builtin);
lean_object* initialize_Lean_Server_FileWorker(uint8_t builtin);
lean_object* initialize_Lean_Compiler_IR_EmitC(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Shell(uint8_t builtin) {
printf("[Lean Shell Init] Starting\n");
lean_object * res;
printf("[Lean Shell Init] Checking _G_initialized\n");
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
printf("[Lean Shell Init] _G_initialized is false\n");
printf("[Lean Shell Init] Calling initialize_Lean_Elab_Frontend\n");
res = initialize_Lean_Elab_Frontend(builtin);
if (lean_io_result_is_error(res)) return res;
printf("[Lean Shell Init] Calling lean_dec_ref\n");
lean_dec_ref(res);
printf("[Lean Shell Init] Calling initialize_Lean_Elab_ParseImportsFast\n");
res = initialize_Lean_Elab_ParseImportsFast(builtin);
if (lean_io_result_is_error(res)) return res;
printf("[Lean Shell Init] Calling lean_dec_ref\n");
lean_dec_ref(res);
printf("[Lean Shell Init] Calling initialize_Lean_Server_Watchdog\n");
res = initialize_Lean_Server_Watchdog(builtin);
if (lean_io_result_is_error(res)) return res;
printf("[Lean Shell Init] Calling lean_dec_ref\n");
lean_dec_ref(res);
printf("[Lean Shell Init] Calling initialize_Lean_Server_FileWorker\n");
res = initialize_Lean_Server_FileWorker(builtin);
if (lean_io_result_is_error(res)) return res;
printf("[Lean Shell Init] Calling lean_dec_ref\n");
lean_dec_ref(res);
printf("[Lean Shell Init] Calling initialize_Lean_Compiler_IR_EmitC\n");
res = initialize_Lean_Compiler_IR_EmitC(builtin);
if (lean_io_result_is_error(res)) return res;
printf("[Lean Shell Init] Calling lean_dec_ref\n");
lean_dec_ref(res);
printf("[Lean Shell Init] Starting string constant initialization\n");
printf("[Lean Shell Init] Initializing shortVersionString constants\n");
l___private_Lean_Shell_0__Lean_shortVersionString___closed__0 = _init_l___private_Lean_Shell_0__Lean_shortVersionString___closed__0();
lean_mark_persistent(l___private_Lean_Shell_0__Lean_shortVersionString___closed__0);
l___private_Lean_Shell_0__Lean_shortVersionString___closed__1 = _init_l___private_Lean_Shell_0__Lean_shortVersionString___closed__1();
lean_mark_persistent(l___private_Lean_Shell_0__Lean_shortVersionString___closed__1);
l___private_Lean_Shell_0__Lean_shortVersionString___closed__2 = _init_l___private_Lean_Shell_0__Lean_shortVersionString___closed__2();
l___private_Lean_Shell_0__Lean_shortVersionString___closed__3 = _init_l___private_Lean_Shell_0__Lean_shortVersionString___closed__3();
lean_mark_persistent(l___private_Lean_Shell_0__Lean_shortVersionString___closed__3);
l___private_Lean_Shell_0__Lean_shortVersionString___closed__4 = _init_l___private_Lean_Shell_0__Lean_shortVersionString___closed__4();
lean_mark_persistent(l___private_Lean_Shell_0__Lean_shortVersionString___closed__4);
l___private_Lean_Shell_0__Lean_shortVersionString___closed__5 = _init_l___private_Lean_Shell_0__Lean_shortVersionString___closed__5();
lean_mark_persistent(l___private_Lean_Shell_0__Lean_shortVersionString___closed__5);
l___private_Lean_Shell_0__Lean_shortVersionString___closed__6 = _init_l___private_Lean_Shell_0__Lean_shortVersionString___closed__6();
lean_mark_persistent(l___private_Lean_Shell_0__Lean_shortVersionString___closed__6);
l___private_Lean_Shell_0__Lean_shortVersionString___closed__7 = _init_l___private_Lean_Shell_0__Lean_shortVersionString___closed__7();
l___private_Lean_Shell_0__Lean_shortVersionString___closed__8 = _init_l___private_Lean_Shell_0__Lean_shortVersionString___closed__8();
lean_mark_persistent(l___private_Lean_Shell_0__Lean_shortVersionString___closed__8);
l___private_Lean_Shell_0__Lean_shortVersionString___closed__9 = _init_l___private_Lean_Shell_0__Lean_shortVersionString___closed__9();
lean_mark_persistent(l___private_Lean_Shell_0__Lean_shortVersionString___closed__9);
l___private_Lean_Shell_0__Lean_shortVersionString = _init_l___private_Lean_Shell_0__Lean_shortVersionString();
lean_mark_persistent(l___private_Lean_Shell_0__Lean_shortVersionString);
printf("[Lean Shell Init] Initializing versionHeader constants\n");
l___private_Lean_Shell_0__Lean_versionHeader___closed__0 = _init_l___private_Lean_Shell_0__Lean_versionHeader___closed__0();
lean_mark_persistent(l___private_Lean_Shell_0__Lean_versionHeader___closed__0);
l___private_Lean_Shell_0__Lean_versionHeader___closed__1 = _init_l___private_Lean_Shell_0__Lean_versionHeader___closed__1();
lean_mark_persistent(l___private_Lean_Shell_0__Lean_versionHeader___closed__1);
l___private_Lean_Shell_0__Lean_versionHeader___closed__2 = _init_l___private_Lean_Shell_0__Lean_versionHeader___closed__2();
lean_mark_persistent(l___private_Lean_Shell_0__Lean_versionHeader___closed__2);
l___private_Lean_Shell_0__Lean_versionHeader___closed__3 = _init_l___private_Lean_Shell_0__Lean_versionHeader___closed__3();
lean_mark_persistent(l___private_Lean_Shell_0__Lean_versionHeader___closed__3);
l___private_Lean_Shell_0__Lean_versionHeader___closed__4 = _init_l___private_Lean_Shell_0__Lean_versionHeader___closed__4();
lean_mark_persistent(l___private_Lean_Shell_0__Lean_versionHeader___closed__4);
l___private_Lean_Shell_0__Lean_versionHeader___closed__5 = _init_l___private_Lean_Shell_0__Lean_versionHeader___closed__5();
l___private_Lean_Shell_0__Lean_versionHeader___closed__6 = _init_l___private_Lean_Shell_0__Lean_versionHeader___closed__6();
lean_mark_persistent(l___private_Lean_Shell_0__Lean_versionHeader___closed__6);
l___private_Lean_Shell_0__Lean_versionHeader___closed__7 = _init_l___private_Lean_Shell_0__Lean_versionHeader___closed__7();
lean_mark_persistent(l___private_Lean_Shell_0__Lean_versionHeader___closed__7);
l___private_Lean_Shell_0__Lean_versionHeader___closed__8 = _init_l___private_Lean_Shell_0__Lean_versionHeader___closed__8();
l___private_Lean_Shell_0__Lean_versionHeader___closed__9 = _init_l___private_Lean_Shell_0__Lean_versionHeader___closed__9();
lean_mark_persistent(l___private_Lean_Shell_0__Lean_versionHeader___closed__9);
l___private_Lean_Shell_0__Lean_versionHeader___closed__10 = _init_l___private_Lean_Shell_0__Lean_versionHeader___closed__10();
lean_mark_persistent(l___private_Lean_Shell_0__Lean_versionHeader___closed__10);
l___private_Lean_Shell_0__Lean_versionHeader = _init_l___private_Lean_Shell_0__Lean_versionHeader();
lean_mark_persistent(l___private_Lean_Shell_0__Lean_versionHeader);
printf("[Lean Shell Init] Initializing displayHelp constants\n");
l___private_Lean_Shell_0__Lean_displayHelp___closed__0 = _init_l___private_Lean_Shell_0__Lean_displayHelp___closed__0();
lean_mark_persistent(l___private_Lean_Shell_0__Lean_displayHelp___closed__0);
l___private_Lean_Shell_0__Lean_displayHelp___closed__1 = _init_l___private_Lean_Shell_0__Lean_displayHelp___closed__1();
lean_mark_persistent(l___private_Lean_Shell_0__Lean_displayHelp___closed__1);
l___private_Lean_Shell_0__Lean_displayHelp___closed__2 = _init_l___private_Lean_Shell_0__Lean_displayHelp___closed__2();
lean_mark_persistent(l___private_Lean_Shell_0__Lean_displayHelp___closed__2);
l___private_Lean_Shell_0__Lean_displayHelp___closed__3 = _init_l___private_Lean_Shell_0__Lean_displayHelp___closed__3();
lean_mark_persistent(l___private_Lean_Shell_0__Lean_displayHelp___closed__3);
l___private_Lean_Shell_0__Lean_displayHelp___closed__4 = _init_l___private_Lean_Shell_0__Lean_displayHelp___closed__4();
lean_mark_persistent(l___private_Lean_Shell_0__Lean_displayHelp___closed__4);
l___private_Lean_Shell_0__Lean_displayHelp___closed__5 = _init_l___private_Lean_Shell_0__Lean_displayHelp___closed__5();
lean_mark_persistent(l___private_Lean_Shell_0__Lean_displayHelp___closed__5);
l___private_Lean_Shell_0__Lean_displayHelp___closed__6 = _init_l___private_Lean_Shell_0__Lean_displayHelp___closed__6();
lean_mark_persistent(l___private_Lean_Shell_0__Lean_displayHelp___closed__6);
l___private_Lean_Shell_0__Lean_displayHelp___closed__7 = _init_l___private_Lean_Shell_0__Lean_displayHelp___closed__7();
lean_mark_persistent(l___private_Lean_Shell_0__Lean_displayHelp___closed__7);
l___private_Lean_Shell_0__Lean_displayHelp___closed__8 = _init_l___private_Lean_Shell_0__Lean_displayHelp___closed__8();
lean_mark_persistent(l___private_Lean_Shell_0__Lean_displayHelp___closed__8);
l___private_Lean_Shell_0__Lean_displayHelp___closed__9 = _init_l___private_Lean_Shell_0__Lean_displayHelp___closed__9();
lean_mark_persistent(l___private_Lean_Shell_0__Lean_displayHelp___closed__9);
l___private_Lean_Shell_0__Lean_displayHelp___closed__10 = _init_l___private_Lean_Shell_0__Lean_displayHelp___closed__10();
lean_mark_persistent(l___private_Lean_Shell_0__Lean_displayHelp___closed__10);
l___private_Lean_Shell_0__Lean_displayHelp___closed__11 = _init_l___private_Lean_Shell_0__Lean_displayHelp___closed__11();
lean_mark_persistent(l___private_Lean_Shell_0__Lean_displayHelp___closed__11);
l___private_Lean_Shell_0__Lean_displayHelp___closed__12 = _init_l___private_Lean_Shell_0__Lean_displayHelp___closed__12();
l___private_Lean_Shell_0__Lean_displayHelp___closed__13 = _init_l___private_Lean_Shell_0__Lean_displayHelp___closed__13();
lean_mark_persistent(l___private_Lean_Shell_0__Lean_displayHelp___closed__13);
l___private_Lean_Shell_0__Lean_displayHelp___closed__14 = _init_l___private_Lean_Shell_0__Lean_displayHelp___closed__14();
lean_mark_persistent(l___private_Lean_Shell_0__Lean_displayHelp___closed__14);
l___private_Lean_Shell_0__Lean_displayHelp___closed__15 = _init_l___private_Lean_Shell_0__Lean_displayHelp___closed__15();
lean_mark_persistent(l___private_Lean_Shell_0__Lean_displayHelp___closed__15);
l___private_Lean_Shell_0__Lean_displayHelp___closed__16 = _init_l___private_Lean_Shell_0__Lean_displayHelp___closed__16();
lean_mark_persistent(l___private_Lean_Shell_0__Lean_displayHelp___closed__16);
l___private_Lean_Shell_0__Lean_displayHelp___closed__17 = _init_l___private_Lean_Shell_0__Lean_displayHelp___closed__17();
lean_mark_persistent(l___private_Lean_Shell_0__Lean_displayHelp___closed__17);
l___private_Lean_Shell_0__Lean_displayHelp___closed__18 = _init_l___private_Lean_Shell_0__Lean_displayHelp___closed__18();
lean_mark_persistent(l___private_Lean_Shell_0__Lean_displayHelp___closed__18);
l___private_Lean_Shell_0__Lean_displayHelp___closed__19 = _init_l___private_Lean_Shell_0__Lean_displayHelp___closed__19();
lean_mark_persistent(l___private_Lean_Shell_0__Lean_displayHelp___closed__19);
l___private_Lean_Shell_0__Lean_displayHelp___closed__20 = _init_l___private_Lean_Shell_0__Lean_displayHelp___closed__20();
lean_mark_persistent(l___private_Lean_Shell_0__Lean_displayHelp___closed__20);
l___private_Lean_Shell_0__Lean_displayHelp___closed__21 = _init_l___private_Lean_Shell_0__Lean_displayHelp___closed__21();
lean_mark_persistent(l___private_Lean_Shell_0__Lean_displayHelp___closed__21);
l___private_Lean_Shell_0__Lean_displayHelp___closed__22 = _init_l___private_Lean_Shell_0__Lean_displayHelp___closed__22();
lean_mark_persistent(l___private_Lean_Shell_0__Lean_displayHelp___closed__22);
l___private_Lean_Shell_0__Lean_displayHelp___closed__23 = _init_l___private_Lean_Shell_0__Lean_displayHelp___closed__23();
lean_mark_persistent(l___private_Lean_Shell_0__Lean_displayHelp___closed__23);
l___private_Lean_Shell_0__Lean_displayHelp___closed__24 = _init_l___private_Lean_Shell_0__Lean_displayHelp___closed__24();
lean_mark_persistent(l___private_Lean_Shell_0__Lean_displayHelp___closed__24);
l___private_Lean_Shell_0__Lean_displayHelp___closed__25 = _init_l___private_Lean_Shell_0__Lean_displayHelp___closed__25();
lean_mark_persistent(l___private_Lean_Shell_0__Lean_displayHelp___closed__25);
l___private_Lean_Shell_0__Lean_displayHelp___closed__26 = _init_l___private_Lean_Shell_0__Lean_displayHelp___closed__26();
lean_mark_persistent(l___private_Lean_Shell_0__Lean_displayHelp___closed__26);
l___private_Lean_Shell_0__Lean_displayHelp___closed__27 = _init_l___private_Lean_Shell_0__Lean_displayHelp___closed__27();
lean_mark_persistent(l___private_Lean_Shell_0__Lean_displayHelp___closed__27);
l___private_Lean_Shell_0__Lean_displayHelp___closed__28 = _init_l___private_Lean_Shell_0__Lean_displayHelp___closed__28();
lean_mark_persistent(l___private_Lean_Shell_0__Lean_displayHelp___closed__28);
l___private_Lean_Shell_0__Lean_displayHelp___closed__29 = _init_l___private_Lean_Shell_0__Lean_displayHelp___closed__29();
lean_mark_persistent(l___private_Lean_Shell_0__Lean_displayHelp___closed__29);
l___private_Lean_Shell_0__Lean_displayHelp___closed__30 = _init_l___private_Lean_Shell_0__Lean_displayHelp___closed__30();
lean_mark_persistent(l___private_Lean_Shell_0__Lean_displayHelp___closed__30);
l___private_Lean_Shell_0__Lean_displayHelp___closed__31 = _init_l___private_Lean_Shell_0__Lean_displayHelp___closed__31();
lean_mark_persistent(l___private_Lean_Shell_0__Lean_displayHelp___closed__31);
l___private_Lean_Shell_0__Lean_displayHelp___closed__32 = _init_l___private_Lean_Shell_0__Lean_displayHelp___closed__32();
lean_mark_persistent(l___private_Lean_Shell_0__Lean_displayHelp___closed__32);
l___private_Lean_Shell_0__Lean_displayHelp___closed__33 = _init_l___private_Lean_Shell_0__Lean_displayHelp___closed__33();
lean_mark_persistent(l___private_Lean_Shell_0__Lean_displayHelp___closed__33);
l___private_Lean_Shell_0__Lean_displayHelp___closed__34 = _init_l___private_Lean_Shell_0__Lean_displayHelp___closed__34();
lean_mark_persistent(l___private_Lean_Shell_0__Lean_displayHelp___closed__34);
l___private_Lean_Shell_0__Lean_displayHelp___closed__35 = _init_l___private_Lean_Shell_0__Lean_displayHelp___closed__35();
lean_mark_persistent(l___private_Lean_Shell_0__Lean_displayHelp___closed__35);
l___private_Lean_Shell_0__Lean_displayHelp___closed__36 = _init_l___private_Lean_Shell_0__Lean_displayHelp___closed__36();
l___private_Lean_Shell_0__Lean_displayHelp___closed__37 = _init_l___private_Lean_Shell_0__Lean_displayHelp___closed__37();
lean_mark_persistent(l___private_Lean_Shell_0__Lean_displayHelp___closed__37);
l___private_Lean_Shell_0__Lean_displayHelp___closed__38 = _init_l___private_Lean_Shell_0__Lean_displayHelp___closed__38();
lean_mark_persistent(l___private_Lean_Shell_0__Lean_displayHelp___closed__38);
l___private_Lean_Shell_0__Lean_displayHelp___closed__39 = _init_l___private_Lean_Shell_0__Lean_displayHelp___closed__39();
lean_mark_persistent(l___private_Lean_Shell_0__Lean_displayHelp___closed__39);
l___private_Lean_Shell_0__Lean_displayHelp___closed__40 = _init_l___private_Lean_Shell_0__Lean_displayHelp___closed__40();
lean_mark_persistent(l___private_Lean_Shell_0__Lean_displayHelp___closed__40);
printf("[Lean Shell Init] String constant init complete 1\n");
l___private_Lean_Shell_0__Lean_initFn___closed__0_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_ = _init_l___private_Lean_Shell_0__Lean_initFn___closed__0_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_();
printf("[Lean Shell Init] 1\n");
lean_mark_persistent(l___private_Lean_Shell_0__Lean_initFn___closed__0_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_);
printf("[Lean Shell Init] 2\n");
l___private_Lean_Shell_0__Lean_initFn___closed__1_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_ = _init_l___private_Lean_Shell_0__Lean_initFn___closed__1_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_();
printf("[Lean Shell Init] 3\n");
lean_mark_persistent(l___private_Lean_Shell_0__Lean_initFn___closed__1_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_);
printf("[Lean Shell Init] 4\n");
l___private_Lean_Shell_0__Lean_initFn___closed__2_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_ = _init_l___private_Lean_Shell_0__Lean_initFn___closed__2_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_();
printf("[Lean Shell Init] 5\n");
lean_mark_persistent(l___private_Lean_Shell_0__Lean_initFn___closed__2_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_);
printf("[Lean Shell Init] 6\n");
l___private_Lean_Shell_0__Lean_initFn___closed__3_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_ = _init_l___private_Lean_Shell_0__Lean_initFn___closed__3_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_();
printf("[Lean Shell Init] 7\n");
lean_mark_persistent(l___private_Lean_Shell_0__Lean_initFn___closed__3_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_);
printf("[Lean Shell Init] 8\n");
l___private_Lean_Shell_0__Lean_initFn___closed__4_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_ = _init_l___private_Lean_Shell_0__Lean_initFn___closed__4_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_();
printf("[Lean Shell Init] 9\n");
lean_mark_persistent(l___private_Lean_Shell_0__Lean_initFn___closed__4_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_);
printf("[Lean Shell Init] 10\n");
l___private_Lean_Shell_0__Lean_initFn___closed__5_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_ = _init_l___private_Lean_Shell_0__Lean_initFn___closed__5_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_();
printf("[Lean Shell Init] 11\n");
lean_mark_persistent(l___private_Lean_Shell_0__Lean_initFn___closed__5_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_);
printf("[Lean Shell Init] 12\n");
l___private_Lean_Shell_0__Lean_initFn___closed__6_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_ = _init_l___private_Lean_Shell_0__Lean_initFn___closed__6_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_();
printf("[Lean Shell Init] 13\n");
lean_mark_persistent(l___private_Lean_Shell_0__Lean_initFn___closed__6_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_);
printf("[Lean Shell Init] 14\n");
l___private_Lean_Shell_0__Lean_initFn___closed__7_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_ = _init_l___private_Lean_Shell_0__Lean_initFn___closed__7_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_();
printf("[Lean Shell Init] 15\n");
lean_mark_persistent(l___private_Lean_Shell_0__Lean_initFn___closed__7_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_);
printf("[Lean Shell Init] 16\n");
l___private_Lean_Shell_0__Lean_initFn___closed__8_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_ = _init_l___private_Lean_Shell_0__Lean_initFn___closed__8_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_();
printf("[Lean Shell Init] 17\n");
lean_mark_persistent(l___private_Lean_Shell_0__Lean_initFn___closed__8_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_);
printf("[Lean Shell Init] 18\n");
l___private_Lean_Shell_0__Lean_initFn___closed__9_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_ = _init_l___private_Lean_Shell_0__Lean_initFn___closed__9_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_();
printf("[Lean Shell Init] 19\n");
lean_mark_persistent(l___private_Lean_Shell_0__Lean_initFn___closed__9_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_);
printf("[Lean Shell Init] 20\n");
l___private_Lean_Shell_0__Lean_initFn___closed__10_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_ = _init_l___private_Lean_Shell_0__Lean_initFn___closed__10_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_();
printf("[Lean Shell Init] 21\n");
lean_mark_persistent(l___private_Lean_Shell_0__Lean_initFn___closed__10_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_);
printf("[Lean Shell Init] 22\n");
l___private_Lean_Shell_0__Lean_initFn___closed__11_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_ = _init_l___private_Lean_Shell_0__Lean_initFn___closed__11_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_();
printf("[Lean Shell Init] 23\n");
lean_mark_persistent(l___private_Lean_Shell_0__Lean_initFn___closed__11_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_);
printf("[Lean Shell Init] 24\n");
l___private_Lean_Shell_0__Lean_initFn___closed__12_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_ = _init_l___private_Lean_Shell_0__Lean_initFn___closed__12_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_();
printf("[Lean Shell Init] 25\n");
lean_mark_persistent(l___private_Lean_Shell_0__Lean_initFn___closed__12_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_);
printf("[Lean Shell Init] 26\n");
l___private_Lean_Shell_0__Lean_initFn___closed__13_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_ = _init_l___private_Lean_Shell_0__Lean_initFn___closed__13_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_();
printf("[Lean Shell Init] 27\n");
lean_mark_persistent(l___private_Lean_Shell_0__Lean_initFn___closed__13_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_);
printf("[Lean Shell Init] 28\n");
if (false) {res = l___private_Lean_Shell_0__Lean_initFn_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_();
printf("[Lean Shell Init] 29\n");
if (lean_io_result_is_error(res)) return res;
printf("[Lean Shell Init] 30\n");
l___private_Lean_Shell_0__Lean_maxMemory = lean_io_result_get_value(res);
printf("[Lean Shell Init] 31\n");
lean_mark_persistent(l___private_Lean_Shell_0__Lean_maxMemory);
printf("[Lean Shell Init] 32\n");
lean_dec_ref(res);
printf("[Lean Shell Init] 33\n");
}l___private_Lean_Shell_0__Lean_initFn___closed__0_00___x40_Lean_Shell_1197438456____hygCtx___hyg_2_ = _init_l___private_Lean_Shell_0__Lean_initFn___closed__0_00___x40_Lean_Shell_1197438456____hygCtx___hyg_2_();
printf("[Lean Shell Init] 34\n");
lean_mark_persistent(l___private_Lean_Shell_0__Lean_initFn___closed__0_00___x40_Lean_Shell_1197438456____hygCtx___hyg_2_);
printf("[Lean Shell Init] 35\n");
l___private_Lean_Shell_0__Lean_initFn___closed__1_00___x40_Lean_Shell_1197438456____hygCtx___hyg_2_ = _init_l___private_Lean_Shell_0__Lean_initFn___closed__1_00___x40_Lean_Shell_1197438456____hygCtx___hyg_2_();
printf("[Lean Shell Init] 36\n");
lean_mark_persistent(l___private_Lean_Shell_0__Lean_initFn___closed__1_00___x40_Lean_Shell_1197438456____hygCtx___hyg_2_);
printf("[Lean Shell Init] 37\n");
l___private_Lean_Shell_0__Lean_initFn___closed__2_00___x40_Lean_Shell_1197438456____hygCtx___hyg_2_ = _init_l___private_Lean_Shell_0__Lean_initFn___closed__2_00___x40_Lean_Shell_1197438456____hygCtx___hyg_2_();
printf("[Lean Shell Init] 38\n");
lean_mark_persistent(l___private_Lean_Shell_0__Lean_initFn___closed__2_00___x40_Lean_Shell_1197438456____hygCtx___hyg_2_);
printf("[Lean Shell Init] 39\n");
l___private_Lean_Shell_0__Lean_initFn___closed__3_00___x40_Lean_Shell_1197438456____hygCtx___hyg_2_ = _init_l___private_Lean_Shell_0__Lean_initFn___closed__3_00___x40_Lean_Shell_1197438456____hygCtx___hyg_2_();
printf("[Lean Shell Init] 40\n");
lean_mark_persistent(l___private_Lean_Shell_0__Lean_initFn___closed__3_00___x40_Lean_Shell_1197438456____hygCtx___hyg_2_);
printf("[Lean Shell Init] 41\n");
l___private_Lean_Shell_0__Lean_initFn___closed__4_00___x40_Lean_Shell_1197438456____hygCtx___hyg_2_ = _init_l___private_Lean_Shell_0__Lean_initFn___closed__4_00___x40_Lean_Shell_1197438456____hygCtx___hyg_2_();
printf("[Lean Shell Init] 42\n");
lean_mark_persistent(l___private_Lean_Shell_0__Lean_initFn___closed__4_00___x40_Lean_Shell_1197438456____hygCtx___hyg_2_);
printf("[Lean Shell Init] 43\n");
if (false) {res = l___private_Lean_Shell_0__Lean_initFn_00___x40_Lean_Shell_1197438456____hygCtx___hyg_2_();
printf("[Lean Shell Init] 44\n");
if (lean_io_result_is_error(res)) return res;
printf("[Lean Shell Init] 45\n");
l___private_Lean_Shell_0__Lean_timeout = lean_io_result_get_value(res);
printf("[Lean Shell Init] 46\n");
lean_mark_persistent(l___private_Lean_Shell_0__Lean_timeout);
printf("[Lean Shell Init] 47\n");
lean_dec_ref(res);
printf("[Lean Shell Init] 48\n");
}l___private_Lean_Shell_0__Lean_shellMain___closed__0 = _init_l___private_Lean_Shell_0__Lean_shellMain___closed__0();
printf("[Lean Shell Init] 49\n");
l___private_Lean_Shell_0__Lean_shellMain___closed__1 = _init_l___private_Lean_Shell_0__Lean_shellMain___closed__1();
printf("[Lean Shell Init] 50\n");
lean_mark_persistent(l___private_Lean_Shell_0__Lean_shellMain___closed__1);
printf("[Lean Shell Init] 51\n");
l___private_Lean_Shell_0__Lean_shellMain___closed__2 = _init_l___private_Lean_Shell_0__Lean_shellMain___closed__2();
printf("[Lean Shell Init] 52\n");
lean_mark_persistent(l___private_Lean_Shell_0__Lean_shellMain___closed__2);
printf("[Lean Shell Init] 53\n");
l___private_Lean_Shell_0__Lean_shellMain___closed__3 = _init_l___private_Lean_Shell_0__Lean_shellMain___closed__3();
printf("[Lean Shell Init] 54\n");
lean_mark_persistent(l___private_Lean_Shell_0__Lean_shellMain___closed__3);
printf("[Lean Shell Init] 55\n");
l___private_Lean_Shell_0__Lean_shellMain___closed__4 = _init_l___private_Lean_Shell_0__Lean_shellMain___closed__4();
printf("[Lean Shell Init] 56\n");
lean_mark_persistent(l___private_Lean_Shell_0__Lean_shellMain___closed__4);
printf("[Lean Shell Init] 57\n");
l___private_Lean_Shell_0__Lean_shellMain___closed__5 = _init_l___private_Lean_Shell_0__Lean_shellMain___closed__5();
printf("[Lean Shell Init] 58\n");
lean_mark_persistent(l___private_Lean_Shell_0__Lean_shellMain___closed__5);
printf("[Lean Shell Init] 59\n");
l___private_Lean_Shell_0__Lean_shellMain___closed__6 = _init_l___private_Lean_Shell_0__Lean_shellMain___closed__6();
printf("[Lean Shell Init] 60\n");
lean_mark_persistent(l___private_Lean_Shell_0__Lean_shellMain___closed__6);
printf("[Lean Shell Init] 61\n");
l___private_Lean_Shell_0__Lean_shellMain___closed__7 = _init_l___private_Lean_Shell_0__Lean_shellMain___closed__7();
printf("[Lean Shell Init] 62\n");
lean_mark_persistent(l___private_Lean_Shell_0__Lean_shellMain___closed__7);
printf("[Lean Shell Init] 63\n");
l___private_Lean_Shell_0__Lean_shellMain___closed__8 = _init_l___private_Lean_Shell_0__Lean_shellMain___closed__8();
printf("[Lean Shell Init] 64\n");
lean_mark_persistent(l___private_Lean_Shell_0__Lean_shellMain___closed__8);
printf("[Lean Shell Init] 64\n");
l___private_Lean_Shell_0__Lean_shellMain___closed__9 = _init_l___private_Lean_Shell_0__Lean_shellMain___closed__9();
printf("[Lean Shell Init] 65\n");
lean_mark_persistent(l___private_Lean_Shell_0__Lean_shellMain___closed__9);
printf("[Lean Shell Init] 66\n");
l___private_Lean_Shell_0__Lean_shellMain___closed__10 = _init_l___private_Lean_Shell_0__Lean_shellMain___closed__10();
printf("[Lean Shell Init] 67\n");
lean_mark_persistent(l___private_Lean_Shell_0__Lean_shellMain___closed__10);
printf("[Lean Shell Init] 68\n");
l___private_Lean_Shell_0__Lean_shellMain___closed__11 = _init_l___private_Lean_Shell_0__Lean_shellMain___closed__11();
printf("[Lean Shell Init] 69\n");
lean_mark_persistent(l___private_Lean_Shell_0__Lean_shellMain___closed__11);
printf("[Lean Shell Init] 70\n");
l___private_Lean_Shell_0__Lean_shellMain___closed__12 = _init_l___private_Lean_Shell_0__Lean_shellMain___closed__12();
printf("[Lean Shell Init] 71\n");
lean_mark_persistent(l___private_Lean_Shell_0__Lean_shellMain___closed__12);
printf("[Lean Shell Init] 72\n");
l___private_Lean_Shell_0__Lean_shellMain___closed__13 = _init_l___private_Lean_Shell_0__Lean_shellMain___closed__13();
printf("[Lean Shell Init] 73\n");
lean_mark_persistent(l___private_Lean_Shell_0__Lean_shellMain___closed__13);
printf("[Lean Shell Init] 74\n");
l___private_Lean_Shell_0__Lean_shellMain___closed__14 = _init_l___private_Lean_Shell_0__Lean_shellMain___closed__14();
printf("[Lean Shell Init] 75\n");
lean_mark_persistent(l___private_Lean_Shell_0__Lean_shellMain___closed__14);
printf("[Lean Shell Init] 76\n");
l___private_Lean_Shell_0__Lean_shellMain___closed__15 = _init_l___private_Lean_Shell_0__Lean_shellMain___closed__15();
printf("[Lean Shell Init] 77\n");
lean_mark_persistent(l___private_Lean_Shell_0__Lean_shellMain___closed__15);
printf("[Lean Shell Init] 78\n");
l___private_Lean_Shell_0__Lean_shellMain___closed__16 = _init_l___private_Lean_Shell_0__Lean_shellMain___closed__16();
printf("[Lean Shell Init] 79\n");
lean_mark_persistent(l___private_Lean_Shell_0__Lean_shellMain___closed__16);
printf("[Lean Shell Init] 80\n");
l___private_Lean_Shell_0__Lean_shellMain___closed__17 = _init_l___private_Lean_Shell_0__Lean_shellMain___closed__17();
printf("[Lean Shell Init] 81\n");
lean_mark_persistent(l___private_Lean_Shell_0__Lean_shellMain___closed__17);
printf("[Lean Shell Init] 82\n");
l___private_Lean_Shell_0__Lean_shellMain___closed__18 = _init_l___private_Lean_Shell_0__Lean_shellMain___closed__18();
printf("[Lean Shell Init] 83\n");
lean_mark_persistent(l___private_Lean_Shell_0__Lean_shellMain___closed__18);
printf("[Lean Shell Init] 84\n");
l___private_Lean_Shell_0__Lean_shellMain___closed__19 = _init_l___private_Lean_Shell_0__Lean_shellMain___closed__19();
printf("[Lean Shell Init] 85\n");
lean_mark_persistent(l___private_Lean_Shell_0__Lean_shellMain___closed__19);
printf("[Lean Shell Init] 86\n");
l___private_Lean_Shell_0__Lean_shellMain___closed__20 = _init_l___private_Lean_Shell_0__Lean_shellMain___closed__20();
printf("[Lean Shell Init] 87\n");
lean_mark_persistent(l___private_Lean_Shell_0__Lean_shellMain___closed__20);
printf("[Lean Shell Init] 88\n");
l___private_Lean_Shell_0__Lean_shellMain___boxed__const__1 = _init_l___private_Lean_Shell_0__Lean_shellMain___boxed__const__1();
printf("[Lean Shell Init] 89\n");
lean_mark_persistent(l___private_Lean_Shell_0__Lean_shellMain___boxed__const__1);
printf("[Lean Shell Init] 90\n");
l___private_Lean_Shell_0__Lean_shellMain___boxed__const__2 = _init_l___private_Lean_Shell_0__Lean_shellMain___boxed__const__2();
printf("[Lean Shell Init] 91\n");
lean_mark_persistent(l___private_Lean_Shell_0__Lean_shellMain___boxed__const__2);
printf("[Lean Shell Init] Got to end\n");
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
