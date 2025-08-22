int __fastcall sub_1461C(int a1, int a2)
{
  int v3; // r0
  int v4; // r5
  int v5; // r11
  int v6; // r0
  int v7; // r0
  int v8; // r4
  int v9; // r0
  const char *v10; // r7
  int v11; // r0
  int v12; // r8
  int v13; // r8
  int v14; // r3
  int v15; // r9
  int v16; // r1
  int v17; // r2
  int radio; // r3
  int v19; // r9
  int v20; // r5
  int v21; // r10
  unsigned int v22; // r0
  int v24; // [sp+2Ch] [bp-16Ch]
  int v25; // [sp+30h] [bp-168h]
  int v26; // [sp+34h] [bp-164h]
  int v27; // [sp+38h] [bp-160h]
  int v29[64]; // [sp+44h] [bp-154h] BYREF
  int v30; // [sp+144h] [bp-54h] BYREF
  int v31; // [sp+14Ch] [bp-4Ch]
  _DWORD s[3]; // [sp+150h] [bp-48h] BYREF
  int v33; // [sp+15Ch] [bp-3Ch]
  int v34; // [sp+160h] [bp-38h] BYREF
  int v35; // [sp+164h] [bp-34h] BYREF
  int v36; // [sp+168h] [bp-30h] BYREF
  int v37; // [sp+16Ch] [bp-2Ch] BYREF

  v3 = wl_nvname("ifname", a2, 0);
  v4 = sub_13E24(v3);
  v5 = wl_client(a2, 0);
  wl_ioctl(v4, 39, &v37, 4);
  if ( wl_ioctl(v4, 12, &v36, 4) < 0 )
    v36 = 0;
  if ( wl_ioctl(v4, 141, &v34, 4) < 0 )
  {
    v6 = wl_nvname("nband", a2, 0);
    v34 = nvram_get_int(v6);
  }
  v7 = wl_nvname("channel", a2, 0);
  v8 = nvram_get_int(v7);
  if ( sub_13D94(v37) )
  {
    if ( wl_iovar_getint() )
    {
      v9 = wl_nvname("nctrlsb", a2, 0);
      v10 = (const char *)sub_13E24(v9);
      v11 = wl_nvname("nbw", a2, 0);
      v12 = nvram_get_int(v11);
      goto LABEL_32;
    }
    v13 = v35 & 0x3800;
    v8 = (unsigned __int8)v35;
    if ( v13 == 6144 )
    {
      if ( (v35 & 0x3F00) == 0x1800 )
        v14 = -2;
      else
        v14 = 2;
    }
    else
    {
      if ( v13 != 0x2000 )
      {
LABEL_17:
        if ( (v35 & 0x700) != 0 )
        {
          if ( (v35 & 0x700) == 0x100 )
            v10 = "upper";
          else
            v10 = "none";
        }
        else
        {
          v10 = "lower";
        }
        if ( v13 == 0x2000 )
        {
          v12 = 80;
        }
        else if ( v13 == 6144 )
        {
          v12 = 40;
        }
        else
        {
          v12 = 20;
        }
        goto LABEL_32;
      }
      if ( (v35 & 0x700) == 0x100 )
        v14 = -2;
      else
        v14 = -6;
    }
    v8 = (unsigned __int8)v35 + v14;
    goto LABEL_17;
  }
  if ( !wl_ioctl(v4, 29, &v30, 12) )
  {
    v8 = v31;
    if ( v31 > 0 )
    {
      v10 = &::s;
      v15 = 1;
      v12 = 20;
      goto LABEL_35;
    }
    v8 = v30;
  }
  v10 = &::s;
  v12 = 20;
LABEL_32:
  if ( !v8 )
  {
    v15 = 0;
    v27 = 0;
    goto LABEL_36;
  }
  v15 = 0;
LABEL_35:
  v27 = sub_13DC8(v8, v34);
LABEL_36:
  if ( wl_iovar_getint() )
    v33 = 0;
  if ( v33 )
  {
    if ( wl_iovar_getbuf(v4, "chanim_state", &v35, 4, v29, 256) )
      v16 = -1;
    else
      v16 = v29[0];
    v26 = v16;
  }
  else
  {
    v26 = -1;
  }
  memset(s, 0, sizeof(s));
  if ( v5 && wl_ioctl(v4, 127, s, 12) )
    s[0] = -100;
  if ( a1 )
    v17 = 44;
  else
    v17 = 32;
  v24 = v17;
  radio = get_radio(a2);
  if ( v15 )
    v19 = 45;
  else
    v19 = 32;
  v20 = v36;
  v21 = s[0];
  v25 = radio;
  v22 = sub_145D4(v5, a2);
  sub_13970(
    0,
    "%c{ radio: %d, client: %d, channel: %c%d, mhz: %d, rate: %d, ctrlsb: '%s', nbw: %d, rssi: %d, noise: %d, intf: %d }\n",
    v24,
    v25,
    v5,
    v19,
    v8,
    v27,
    v20,
    v10,
    v12,
    v21,
    v22,
    v26);
  return 0;
}
