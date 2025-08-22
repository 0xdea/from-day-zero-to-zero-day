int __fastcall sub_162AC(int a1, int a2, int a3, _BYTE *a4)
{
  unsigned int *v4; // r4
  int v5; // r0
  int v6; // r0
  const char *v7; // r5
  int v8; // r8
  int v9; // r7
  int v10; // r11
  int j; // r6
  const char *v12; // r6
  int v13; // r11
  const char *v14; // r0
  unsigned int i; // [sp+1Ch] [bp-164h]
  _DWORD v19[46]; // [sp+30h] [bp-150h] BYREF
  char v20[16]; // [sp+E8h] [bp-98h] BYREF
  int v21; // [sp+F8h] [bp-88h]
  _BYTE v22[32]; // [sp+108h] [bp-78h] BYREF
  _BYTE v23[16]; // [sp+128h] [bp-58h] BYREF
  int v24; // [sp+138h] [bp-48h] BYREF
  _BYTE v25[6]; // [sp+13Ch] [bp-44h] BYREF
  int v26; // [sp+144h] [bp-3Ch] BYREF
  _BYTE dest[8]; // [sp+148h] [bp-38h] BYREF
  _BYTE s2[8]; // [sp+150h] [bp-30h] BYREF

  v4 = (unsigned int *)malloc(0x30Cu);
  if ( v4 )
  {
    v5 = wl_nvname("ifname");
    v6 = nvram_get(v5);
    v7 = &s;
    v8 = 159;
    if ( v6 )
      v7 = (const char *)v6;
    while ( 1 )
    {
      *v4 = 128;
      v9 = wl_ioctl(v7, v8, v4, 780);
      if ( !v9 )
        break;
LABEL_31:
      if ( v8 == 123 )
      {
        free(v4);
        return 0;
      }
      v8 = 123;
    }
    for ( i = 0; ; ++i )
    {
      if ( i >= *v4 )
        goto LABEL_31;
      memcpy(dest, (char *)v4 + v9 + 4, 6u);
      v26 = 0;
      if ( !wl_ioctl(v7, 127, &v26, 12) )
      {
        memset(v19, 0, sizeof(v19));
        strcpy((char *)v19, "sta_info");
        memcpy((char *)&v19[2] + 1, (char *)v4 + v9 + 4, 6u);
        if ( !wl_ioctl(v7, 262, v19, 184) )
        {
          if ( !v19[17] && !v19[18] )
          {
            memcpy(v25, (char *)v4 + v9 + 4, sizeof(v25));
            v24 = 0;
            if ( wl_ioctl(v7, 12, &v24, 12) )
              goto LABEL_29;
            v19[17] = (unsigned int)(1000 * v24) >> 1;
            v19[18] = v19[17];
          }
          if ( (v19[2] & 0x40) != 0 )
          {
            if ( v8 != 123 || (v19[2] & 0x80) == 0 )
              goto LABEL_29;
            v10 = socket(2, 2, 0);
            if ( v10 >= 0 )
            {
              for ( j = 1; j != 32; ++j )
              {
                v21 = j;
                if ( !ioctl(v10, 0x8910u, v20)
                  && !strncmp(v20, "wds", 3u)
                  && !wl_ioctl(v20, 246, s2, 6)
                  && !memcmp(dest, s2, 6u) )
                {
                  v12 = v23;
                  close(v10);
                  strlcpy(v23, v20, 16); // KKK
                  goto LABEL_28;
                }
              }
              close(v10);
            }
          }
          v12 = v7;
LABEL_28:
          v13 = (unsigned __int8)*a4;
          v14 = (const char *)ether_etoa(dest, v22);
          sub_13970(0, "%c['%s','%s',%d,%d,%d,%u,%d]", v13, v12, v14, v26, v19[17], v19[18], v19[11], a2);
          *a4 = 44;
        }
      }
LABEL_29:
      v9 += 6;
    }
  }
  return 0;
}
