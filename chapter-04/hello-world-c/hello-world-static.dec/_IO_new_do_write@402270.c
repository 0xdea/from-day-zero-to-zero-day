__int64 __fastcall IO_new_do_write(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        double a4,
        double a5,
        double a6,
        double a7,
        double a8,
        double a9,
        double a10,
        double a11)
{
  if ( !a3 )
    return 0;
  if ( a3 == new_do_write(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11) )
    return 0;
  return 0xFFFFFFFFLL;
}
