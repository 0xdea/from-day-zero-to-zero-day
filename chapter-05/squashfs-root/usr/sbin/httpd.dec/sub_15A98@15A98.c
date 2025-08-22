size_t __fastcall sub_15A98(const char *a1, int a2, int a3, int a4)
{
  bool v4; // cc
  int v5; // r7
  int v7; // r0
  const char *v8; // r4
  int v9; // r0
  unsigned int v10; // r8
  int v11; // r6
  int v12; // r6
  int v13; // r0
  int v14; // r5
  bool v15; // zf
  int v16; // r6
  void *v17; // r0
  _DWORD *v18; // r5
  _DWORD *v19; // r4
  unsigned int v20; // t1
  int v22; // [sp+8h] [bp-28h] BYREF
  int v23; // [sp+Ch] [bp-24h] BYREF
  int v24; // [sp+10h] [bp-20h] BYREF
  char src[28]; // [sp+14h] [bp-1Ch] BYREF

  v5 = (int)a1;
  v4 = (int)a1 <= 0;
  if ( (int)a1 <= 0 )
    a1 = 0;
  if ( !v4 )
    a1 = *(const char **)a2;
  sub_144B8(a1, a2, a3, a4);
  v7 = wl_nvname("ifname");
  v8 = sub_13E24(v7);
  wl_ioctl(v8, 83, src, 4);
  if ( wl_ioctl(v8, 141, &v24, 4) )
  {
    v9 = wl_nvname("nband");
    v24 = nvram_get_int(v9);
  }
  wl_iovar_getint(v8, "chanspec", &v22);
  if ( v5 <= 1 )
  {
    wl_ioctl(v8, 39, &v23, 4);
    v10 = sub_13D94(v23);
  }
  else
  {
    v10 = atoi(*(const char **)(a2 + 4));
    if ( v5 != 2 )
    {
      v11 = atoi(*(const char **)(a2 + 8));
      if ( v11 )
        goto LABEL_17;
    }
  }
  v12 = v22 & 0x3800;
  if ( v12 == 0x2000 )
  {
    v11 = 80;
  }
  else if ( v12 == 6144 )
  {
    v11 = 40;
  }
  else
  {
    v11 = 20;
  }
LABEL_17:
  if ( v5 <= 3 )
    goto LABEL_24;
  v13 = atoi(*(const char **)(a2 + 12));
  if ( !v13 )
    v13 = v24;
  v24 = v13;
  if ( v5 == 4 )
  {
LABEL_24:
    v14 = v22 & 0x700;
  }
  else if ( !strcmp(*(const char **)(a2 + 16), "upper") )
  {
    v14 = 256;
  }
  else
  {
    v14 = 0;
  }
  sub_13954("\nwl_channels = [\n[0, 0]");
  if ( v10 )
  {
    if ( !sub_14024((int)v8, src, v24, v11, v14) )
    {
      v15 = v11 == 40;
      if ( v11 == 40 )
        v15 = v24 == 2;
      if ( v15 )
        sub_14024((int)v8, src, 2, 20, v14);
    }
  }
  else
  {
    v16 = v24;
    v17 = malloc(0x2000u);
    v18 = v17;
    if ( v17 )
    {
      *(_DWORD *)v17 = 0x2000;
      strcpy((char *)v17 + 8, src); // XXX
      v18[1] = v16;
      if ( !wl_ioctl(v8, 260, v18, *v18) )
      {
        v19 = v18 + 3;
        while ( v10 < v18[3] )
        {
          ++v10;
          v20 = v19[1];
          ++v19;
          sub_13E40(v20, v16);
        }
      }
      free(v18);
    }
  }
  return sub_13954("];\n");
}
