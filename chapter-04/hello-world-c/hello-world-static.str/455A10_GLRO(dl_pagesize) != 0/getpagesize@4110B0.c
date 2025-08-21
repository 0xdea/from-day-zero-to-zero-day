__int64 getpagesize()
{
  __int64 result; // x0
  __int64 v1; // x0

  result = dl_pagesize;
  if ( !dl_pagesize )
  {
    v1 = _libc_assert_fail("GLRO(dl_pagesize) != 0", "../sysdeps/unix/sysv/linux/getpagesize.c", 28, "__getpagesize");
    return next_line(v1);
  }
  return result;
}
