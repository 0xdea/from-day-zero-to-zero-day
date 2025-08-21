int __fastcall sub_E9F4(int a1, unsigned __int8 **a2)
{
  int v2; // r7
  int v3; // r5
  int v4; // r8
  const char *v5; // r6
  char *v6; // r0
  int v7; // r2
  char v9[104]; // [sp+0h] [bp-68h] BYREF

  v2 = a1;
  v3 = 0;
  v4 = 32;
  if ( a1 )
    v2 = **a2;
  sub_13954("\nvar lanip = [");
  do
  {
    memset(v9, 0, 0x40u);
    if ( v3 )
      snprintf(v9, 0x40u, "lan%d_ipaddr", v3);
    else
      snprintf(v9, 0x40u, "lan_ipaddr");
    v5 = (const char *)nvram_get(v9);
    if ( v5 )
    {
      memset(v9, 0, 0x40u);
      snprintf(v9, 0x40u, "%s", v5);
      v6 = strrchr(v9, 46);
      if ( v6 )
      {
        *v6 = 0;
        if ( v2 == 49 )
        {
          v5 = v9;
        }
        else if ( v2 == 50 )
        {
          v5 = v6 + 1;
        }
        v7 = v4;
        v4 = 44;
        sub_13970(0, "%c'%s'", v7, v5);
      }
    }
    ++v3;
  }
  while ( v3 != 4 );
  return sub_13954("];\n");
}
