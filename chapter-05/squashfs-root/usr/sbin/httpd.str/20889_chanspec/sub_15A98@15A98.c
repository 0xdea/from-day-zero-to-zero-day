int __fastcall sub_15A98(int a1, int a2)
{
  bool v2; // cc
  int v3; // r7
  int v5; // r0
  int v6; // r4
  int v7; // r0
  unsigned int v8; // r8
  int v9; // r6
  int v10; // r6
  int v11; // r0
  int v12; // r5
  bool v13; // zf
  int v14; // r6
  void *v15; // r0
  _DWORD *v16; // r5
  _DWORD *v17; // r4
  int v18; // t1
  __int16 v20; // [sp+8h] [bp-28h]
  int v21; // [sp+Ch] [bp-24h] BYREF
  int v22; // [sp+10h] [bp-20h] BYREF
  char src[28]; // [sp+14h] [bp-1Ch] BYREF

  v3 = a1;
  v2 = a1 <= 0;
  if ( a1 <= 0 )
    a1 = 0;
  if ( !v2 )
    a1 = *(_DWORD *)a2;
  sub_144B8(a1);
  v5 = wl_nvname("ifname", dword_30CA0, 0);
  v6 = sub_13E24(v5);
  wl_ioctl(v6, 83, src, 4);
  if ( wl_ioctl(v6, 141, &v22, 4) )
  {
    v7 = wl_nvname("nband", dword_30CA0, 0);
    v22 = nvram_get_int(v7);
  }
  wl_iovar_getint();
  if ( v3 <= 1 )
  {
    wl_ioctl(v6, 39, &v21, 4);
    v8 = sub_13D94(v21);
  }
  else
  {
    v8 = atoi(*(const char **)(a2 + 4));
    if ( v3 != 2 )
    {
      v9 = atoi(*(const char **)(a2 + 8));
      if ( v9 )
        goto LABEL_17;
    }
  }
  v10 = v20 & 0x3800;
  if ( v10 == 0x2000 )
  {
    v9 = 80;
  }
  else if ( v10 == 6144 )
  {
    v9 = 40;
  }
  else
  {
    v9 = 20;
  }
LABEL_17:
  if ( v3 <= 3 )
    goto LABEL_24;
  v11 = atoi(*(const char **)(a2 + 12));
  if ( !v11 )
    v11 = v22;
  v22 = v11;
  if ( v3 == 4 )
  {
LABEL_24:
    v12 = v20 & 0x700;
  }
  else if ( !strcmp(*(const char **)(a2 + 16), "upper") )
  {
    v12 = 256;
  }
  else
  {
    v12 = 0;
  }
  sub_13954("\nwl_channels = [\n[0, 0]");
  if ( v8 )
  {
    if ( !sub_14024(v6, src, v22, v9, v12) )
    {
      v13 = v9 == 40;
      if ( v9 == 40 )
        v13 = v22 == 2;
      if ( v13 )
        sub_14024(v6, src, 2, 20, v12);
    }
  }
  else
  {
    v14 = v22;
    v15 = malloc(0x2000u);
    v16 = v15;
    if ( v15 )
    {
      *(_DWORD *)v15 = 0x2000;
      strcpy((char *)v15 + 8, src);
      v16[1] = v14;
      if ( !wl_ioctl(v6, 260, v16, *v16) )
      {
        v17 = v16 + 3;
        while ( v8 < v16[3] )
        {
          ++v8;
          v18 = v17[1];
          ++v17;
          sub_13E40(v18, v14);
        }
      }
      free(v16);
    }
  }
  return sub_13954("];\n");
}
