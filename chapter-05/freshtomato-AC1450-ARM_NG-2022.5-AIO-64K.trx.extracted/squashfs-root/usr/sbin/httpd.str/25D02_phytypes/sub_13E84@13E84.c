int __fastcall sub_13E84(int a1, int a2)
{
  int v4; // r0
  int v5; // r6
  int v6; // r0
  unsigned __int8 *v7; // r4
  int v8; // r2
  int v9; // r3
  bool v10; // zf
  size_t v11; // r4
  _DWORD *v12; // r5
  unsigned int v13; // r4
  int v14; // r2
  int v15; // t1
  int v16; // r6
  int v17; // r0
  const char *v18; // r5
  int v19; // r3
  int v20; // r2
  int v21; // r3
  _DWORD v23[9]; // [sp+4h] [bp-24h] BYREF

  v4 = wl_nvname("ifname", a2, 0);
  v5 = sub_13E24(v4);
  v6 = wl_nvname("phytype", a2, 0);
  v7 = (unsigned __int8 *)sub_13E24(v6);
  if ( a1 )
    v8 = 44;
  else
    v8 = 32;
  sub_13970(0, "%c[", v8);
  v9 = *v7;
  v10 = v9 == 110;
  if ( v9 != 110 )
    v10 = v9 == 108;
  if ( v10 || (v11 = 0, v9 == 115 || v9 == 99 || v9 == 118 || v9 == 104) )
  {
    if ( wl_ioctl(v5, 140, v23, 12) >= 0 )
    {
      v12 = v23;
      v13 = 1;
      v14 = 32;
      if ( v23[0] > 2 )
        v23[0] = 2;
      while ( v13 <= v23[0] )
      {
        v15 = v12[1];
        ++v12;
        ++v13;
        sub_13970(0, "%c'%d'", v14, v15);
        v14 = 44;
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
    v16 = 32;
    v17 = wl_nvname("phytypes", a2, 0);
    v18 = (const char *)sub_13E24(v17);
    while ( v11 < strlen(v18) )
    {
      v19 = (unsigned __int8)v18[v11];
      v20 = v16;
      ++v11;
      v16 = 44;
      if ( v19 == 97 )
        v21 = 1;
      else
        v21 = 2;
      sub_13970(0, "%c'%d'", v20, v21);
    }
  }
  sub_13954("]");
  return 0;
}
