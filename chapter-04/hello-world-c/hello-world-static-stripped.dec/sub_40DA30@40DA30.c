__int64 __fastcall sub_40DA30(int a1, __int64 a2, __int64 a3, __int64 a4, void *a5, void *a6, void *a7)
{
  if ( !a1 )
  {
    if ( (byte_496690 & 1) != 0 )
    {
      sub_428F10("<malloc version=\"1\">\n", a2);
    }
    else
    {
      sub_407FA0((unsigned __int8)byte_496690, a2, a3, a4, a5, a6, a7);
      sub_428F10("<malloc version=\"1\">\n", a2);
    }
    JUMPOUT(0x407770);
  }
  return 22;
}
