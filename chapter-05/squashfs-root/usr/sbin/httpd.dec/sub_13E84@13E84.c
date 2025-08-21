int __fastcall sub_13E84(int a1)
{
  int v2; // r0
  const char *v3; // r6
  int v4; // r0
  const char *v5; // r4
  int v6; // r2
  int v7; // r3
  bool v8; // zf
  size_t v9; // r4
  _DWORD *v10; // r5
  unsigned int v11; // r4
  int v12; // r2
  int v13; // t1
  int v14; // r6
  int v15; // r0
  const char *v16; // r5
  int v17; // r3
  int v18; // r2
  int v19; // r3
  _DWORD v21[9]; // [sp+4h] [bp-24h] BYREF

  v2 = wl_nvname("ifname");
  v3 = sub_13E24(v2);
  v4 = wl_nvname("phytype");
  v5 = sub_13E24(v4);
  if ( a1 )
    v6 = 44;
  else
    v6 = 32;
  sub_13970(0, "%c[", v6);
  v7 = *(unsigned __int8 *)v5;
  v8 = v7 == 110;
  if ( v7 != 110 )
    v8 = v7 == 108;
  if ( v8 || (v9 = 0, v7 == 115 || v7 == 99 || v7 == 118 || v7 == 104) )
  {
    if ( wl_ioctl(v3, 140, v21, 12) >= 0 )
    {
      v10 = v21;
      v11 = 1;
      v12 = 32;
      if ( v21[0] > 2 )
        v21[0] = 2;
      while ( v11 <= v21[0] )
      {
        v13 = v10[1];
        ++v10;
        ++v11;
        sub_13970(0, "%c'%d'", v12, v13);
        v12 = 44;
      }
    }
    else
    {
      sub_13970(0, "%c'%d'", 32, 1);
      sub_13970(0, "%c'%d'", 44, 2);
    }
  }
  else
  {
    v14 = 32;
    v15 = wl_nvname("phytypes");
    v16 = sub_13E24(v15);
    while ( v9 < strlen(v16) )
    {
      v17 = (unsigned __int8)v16[v9];
      v18 = v14;
      ++v9;
      v14 = 44;
      if ( v17 == 97 )
        v19 = 1;
      else
        v19 = 2;
      sub_13970(0, "%c'%d'", v18, v19);
    }
  }
  sub_13954("]");
  return 0;
}
