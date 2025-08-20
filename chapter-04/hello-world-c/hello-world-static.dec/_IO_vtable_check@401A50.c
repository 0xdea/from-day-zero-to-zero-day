__int64 (__fastcall *__fastcall IO_vtable_check(
        double a1,
        double a2,
        double a3,
        double a4,
        double a5,
        double a6,
        double a7,
        double a8))()
{
  __int64 (__fastcall *result)(); // x0

  result = _dlopen;
  if ( !_dlopen )
    _libc_fatal((__int64)"Fatal error: glibc detected an invalid stdio handle\n", a1, a2, a3, a4, a5, a6, a7, a8);
  return result;
}
