__int64 (__fastcall *IO_vtable_check())()
{
  __int64 (__fastcall *result)(); // x0

  result = _dlopen;
  if ( !_dlopen )
    _libc_fatal("Fatal error: glibc detected an invalid stdio handle\n");
  return result;
}
