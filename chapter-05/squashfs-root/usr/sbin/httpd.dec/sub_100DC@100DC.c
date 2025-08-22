int __fastcall sub_100DC(int a1, const char **a2)
{
  const char *v2; // r1
  int v3; // r0
  char v5[64]; // [sp+0h] [bp-58h] BYREF
  char dest[24]; // [sp+40h] [bp-18h] BYREF

  strcpy(dest, "wanXX");
  if ( a1 <= 0 )
    v2 = "wan";
  else
    v2 = *a2;
  strcpy(dest, v2); // XXX
  strcpy(v5, "-");
  if ( check_wanup(dest) )
  {
    v3 = check_wanup_time(dest);
    sub_E81C(v5, v3);
  }
  return sub_13954(v5);
}
