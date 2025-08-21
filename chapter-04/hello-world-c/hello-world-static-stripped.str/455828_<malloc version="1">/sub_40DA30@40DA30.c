__int64 __fastcall sub_40DA30(
        int a1,
        __int64 a2,
        long double a3,
        long double a4,
        long double a5,
        long double a6,
        long double a7,
        long double a8,
        long double a9,
        long double a10)
{
  if ( !a1 )
  {
    if ( (byte_496690 & 1) != 0 )
    {
      sub_428F10("<malloc version=\"1\">\n", a2);
    }
    else
    {
      sub_407FA0(a3, a4, a5, a6, a7, a8, a9, a10);
      sub_428F10("<malloc version=\"1\">\n", a2);
    }
    JUMPOUT(0x407770);
  }
  return 22;
}
