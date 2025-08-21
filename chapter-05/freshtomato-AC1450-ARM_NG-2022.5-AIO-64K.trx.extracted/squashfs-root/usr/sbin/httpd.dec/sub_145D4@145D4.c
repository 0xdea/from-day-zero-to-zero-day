unsigned int __fastcall sub_145D4(int a1)
{
  unsigned int result; // r0
  int v2; // r0

  if ( a1 )
    return sub_14550();
  sub_14550();
  v2 = wl_nvname("tnoise");
  result = nvram_get_int(v2);
  if ( result < 0xFFFFFF9C )
    return -99;
  return result;
}
