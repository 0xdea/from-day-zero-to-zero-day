int sub_10388()
{
  const char *Var; // r0
  const char *v1; // r9
  const char *v2; // r11
  int v3; // r3
  unsigned __int8 *v4; // r5
  bool v5; // zf
  unsigned __int8 *v6; // r2
  unsigned __int8 *v7; // r9
  int v8; // r3
  int v9; // t1
  bool v10; // zf
  const char *v12; // [sp+0h] [bp-40h] BYREF
  const char *v13; // [sp+4h] [bp-3Ch]
  const char *v14; // [sp+8h] [bp-38h]
  const char *v15; // [sp+Ch] [bp-34h]
  unsigned __int8 *v16; // [sp+10h] [bp-30h]
  int v17; // [sp+14h] [bp-2Ch]

  Var = (const char *)WebsGetVar("mac");
  v1 = Var;
  if ( Var )
  {
    v2 = &Var[strlen(Var)];
    while ( v1 < v2 )
    {
      do
      {
        v3 = *(unsigned __int8 *)v1;
        v4 = (unsigned __int8 *)v1++;
        v5 = v3 == 32;
        if ( v3 != 32 )
          v5 = v3 == 9;
      }
      while ( v5 || v3 == 13 || v3 == 10 );
      if ( !v3 )
        break;
      v6 = v4;
      do
      {
        v7 = v6;
        v9 = *v6++;
        v8 = v9;
        v10 = v9 == 32;
        if ( v9 != 32 )
          v10 = v8 == 0;
      }
      while ( !v10 && v8 != 13 && v8 != 10 );
      *v7 = 0;
      v15 = sub_E670((int)"lan_ifname");
      v12 = "ether-wake";
      v13 = "-b";
      v14 = "-i";
      v16 = v4;
      v17 = 0;
      eval(&v12, 0, 0, 0);
      if ( *sub_E670((int)"lan1_ifname") )
      {
        v15 = sub_E670((int)"lan1_ifname");
        v12 = "ether-wake";
        v13 = "-b";
        v14 = "-i";
        v16 = v4;
        v17 = 0;
        eval(&v12, 0, 0, 0);
      }
      if ( *sub_E670((int)"lan2_ifname") )
      {
        v15 = sub_E670((int)"lan2_ifname");
        v12 = "ether-wake";
        v13 = "-b";
        v14 = "-i";
        v16 = v4;
        v17 = 0;
        eval(&v12, 0, 0, 0);
      }
      if ( *sub_E670((int)"lan3_ifname") )
      {
        v15 = sub_E670((int)"lan3_ifname");
        v12 = "ether-wake";
        v13 = "-b";
        v14 = "-i";
        v16 = v4;
        v17 = 0;
        eval(&v12, 0, 0, 0);
      }
      v1 = (const char *)(v7 + 1);
    }
  }
  return sub_DF94();
}
