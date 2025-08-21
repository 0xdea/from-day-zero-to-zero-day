int __fastcall sub_13624(int a1, int a2)
{
  int result; // r0
  int v5; // r5
  char v6[256]; // [sp+8h] [bp-190h] BYREF
  char v7[144]; // [sp+108h] [bp-90h] BYREF

  result = sub_13024();
  if ( result )
  {
    sub_133A0(v6);
    if ( a1 > 1 )
      v5 = atoi(*(const char **)(a2 + 4));
    else
      v5 = 4000;
    sub_FF00();
    sub_13954("\n");
    snprintf(v7, 0x80u, "cat $(ls -1rv %s %s.*) | tail -n %d", v6, v6, v5);
    return sub_13D58(v7, 0);
  }
  return result;
}
