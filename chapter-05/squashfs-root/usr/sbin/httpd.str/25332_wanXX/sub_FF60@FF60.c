int __fastcall sub_FF60(int a1, const char **a2)
{
  const char *v2; // r1
  const char *v3; // r0
  _WORD v5[4]; // [sp+0h] [bp-18h] BYREF

  v5[3] = HIWORD(a2);
  strcpy((char *)v5, "wanXX");
  if ( a1 <= 0 )
    v2 = "wan";
  else
    v2 = *a2;
  strcpy((char *)v5, v2);
  if ( check_wanup() )
    v3 = "1";
  else
    v3 = "0";
  return sub_13954(v3);
}
