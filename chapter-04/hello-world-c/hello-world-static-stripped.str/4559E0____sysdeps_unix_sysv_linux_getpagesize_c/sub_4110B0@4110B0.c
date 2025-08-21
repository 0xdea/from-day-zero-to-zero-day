__int64 sub_4110B0()
{
  __int64 result; // x0
  long double v1; // q0

  result = qword_490F10;
  if ( !qword_490F10 )
  {
    v1 = sub_41F250("GLRO(dl_pagesize) != 0", "../sysdeps/unix/sysv/linux/getpagesize.c", 28, "__getpagesize");
    return sub_4110F0(v1);
  }
  return result;
}
