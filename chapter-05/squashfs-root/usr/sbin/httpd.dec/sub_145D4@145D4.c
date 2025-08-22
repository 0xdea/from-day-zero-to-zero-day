unsigned int __fastcall sub_145D4(int a1, int a2)
{
  unsigned int result; // r0
  int v4; // r0

  if ( a1 )
    return sub_14550(a2);
  sub_14550(a2);
  v4 = wl_nvname("tnoise", a2, 0);
  result = nvram_get_int(v4);
  if ( result < 0xFFFFFF9C )
    return -99;
  return result;
}
