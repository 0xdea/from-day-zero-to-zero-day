void __fastcall __noreturn start(
        void (*a1)(void *),
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        char a10)
{
  _libc_start_main_impl(
    (__int64 (__fastcall *)(_QWORD, __int64, char **))_wrap_main,
    a9,
    (__int64)&a10,
    0,
    0,
    a1,
    (__int64)&a9);
}
