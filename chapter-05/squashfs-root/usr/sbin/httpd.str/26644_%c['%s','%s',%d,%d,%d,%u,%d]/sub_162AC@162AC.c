int __fastcall sub_162AC(int a1, int a2, int a3, _BYTE *a4)
{
  unsigned int *v5; // r4
  int v6; // r0
  int v7; // r0
  const char *v8; // r5
  int v9; // r8
  int v10; // r7
  int v11; // r11
  int j; // r6
  const char *v13; // r6
  int v14; // r11
  const char *v15; // r0
  unsigned int i; // [sp+1Ch] [bp-164h]
  _DWORD v20[46]; // [sp+30h] [bp-150h] BYREF
  char v21[16]; // [sp+E8h] [bp-98h] BYREF
  int v22; // [sp+F8h] [bp-88h]
  _BYTE v23[32]; // [sp+108h] [bp-78h] BYREF
  _BYTE v24[16]; // [sp+128h] [bp-58h] BYREF
  int v25; // [sp+138h] [bp-48h] BYREF
  _BYTE v26[6]; // [sp+13Ch] [bp-44h] BYREF
  int v27; // [sp+144h] [bp-3Ch] BYREF
  _BYTE dest[8]; // [sp+148h] [bp-38h] BYREF
  _BYTE s2[8]; // [sp+150h] [bp-30h] BYREF

  v5 = (unsigned int *)malloc(0x30Cu);
  if ( v5 )
  {
    v6 = wl_nvname("ifname", a2, a3);
    v7 = nvram_get(v6);
    v8 = &s;
    v9 = 159;
    if ( v7 )
      v8 = (const char *)v7;
    while ( 1 )
    {
      *v5 = 128;
      v10 = wl_ioctl(v8, v9, v5, 780);
      if ( !v10 )
        break;
LABEL_31:
      if ( v9 == 123 )
      {
        free(v5);
        return 0;
      }
      v9 = 123;
    }
    for ( i = 0; ; ++i )
    {
      if ( i >= *v5 )
        goto LABEL_31;
      memcpy(dest, (char *)v5 + v10 + 4, 6u);
      v27 = 0;
      if ( !wl_ioctl(v8, 127, &v27, 12) )
      {
        memset(v20, 0, sizeof(v20));
        strcpy((char *)v20, "sta_info");
        memcpy((char *)&v20[2] + 1, (char *)v5 + v10 + 4, 6u);
        if ( !wl_ioctl(v8, 262, v20, 184) )
        {
          if ( !v20[17] && !v20[18] )
          {
            memcpy(v26, (char *)v5 + v10 + 4, sizeof(v26));
            v25 = 0;
            if ( wl_ioctl(v8, 12, &v25, 12) )
              goto LABEL_29;
            v20[17] = (unsigned int)(1000 * v25) >> 1;
            v20[18] = v20[17];
          }
          if ( (v20[2] & 0x40) != 0 )
          {
            if ( v9 != 123 || (v20[2] & 0x80) == 0 )
              goto LABEL_29;
            v11 = socket(2, 2, 0);
            if ( v11 >= 0 )
            {
              for ( j = 1; j != 32; ++j )
              {
                v22 = j;
                if ( !ioctl(v11, 0x8910u, v21)
                  && !strncmp(v21, "wds", 3u)
                  && !wl_ioctl(v21, 246, s2, 6)
                  && !memcmp(dest, s2, 6u) )
                {
                  v13 = v24;
                  close(v11);
                  strlcpy((int)v24, (int)v21, 16);
                  goto LABEL_28;
                }
              }
              close(v11);
            }
          }
          v13 = v8;
LABEL_28:
          v14 = (unsigned __int8)*a4;
          v15 = (const char *)ether_etoa((int)dest, (int)v23);
          sub_13970(0, "%c['%s','%s',%d,%d,%d,%u,%d]", v14, v13, v15, v27, v20[17], v20[18], v20[11], a2);
          *a4 = 44;
        }
      }
LABEL_29:
      v10 += 6;
    }
  }
  return 0;
}
