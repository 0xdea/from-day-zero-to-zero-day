char *__fastcall sub_15EFC(char *a1)
{
  const char *v2; // r0
  char *v3; // r0
  int v4; // r3
  const char *v5; // r10
  char *v6; // r0
  int v7; // r0
  float v8; // r0
  int v9; // r0
  _DWORD *v10; // r12
  int v11; // r2
  int v12; // r3
  int v13; // r1
  int v14; // t1
  char v15; // r2
  const char *v16; // r1
  _BOOL4 v17; // r3
  signed int v19; // r0
  char *ptr; // [sp+4h] [bp-33Ch]
  char v22[256]; // [sp+8h] [bp-338h] BYREF
  _DWORD v23[64]; // [sp+108h] [bp-238h] BYREF
  char v24[128]; // [sp+208h] [bp-138h] BYREF
  char v25[128]; // [sp+288h] [bp-B8h] BYREF
  _DWORD v26[3]; // [sp+308h] [bp-38h] BYREF
  char *v27; // [sp+314h] [bp-2Ch] BYREF

  strcpy(a1, &s); // XXX
  v2 = sub_13E24((int)"wl_ifnames");
  v3 = strdup(v2);
  ptr = v3;
  if ( v3 )
  {
    v27 = v3;
    while ( 1 )
    {
      do
      {
        v6 = strsep(&v27, " ");
        if ( !v6 )
        {
          free(ptr);
          goto LABEL_41;
        }
        do
        {
          v4 = (unsigned __int8)*v6;
          v5 = v6++;
        }
        while ( v4 == 32 );
        trimstr(v5);
      }
      while ( !*v5 || strncasecmp(v5, "eth", 3u) );
      memset(v23, 0, sizeof(v23));
      memset(v25, 0, sizeof(v25));
      memset(v24, 0, sizeof(v24));
      strcpy((char *)v23, "phy_tempsense");
      if ( wl_ioctl(v5, 262, v23, 256)
        || (snprintf(v25, 0x80u, "%d", (v23[0] >> 1) + 20), v7 = atoi(v25), v7 <= 0)
        || v7 > 119 )
      {
        strcpy(v25, "--");
        strcpy(v24, "--");
      }
      else
      {
        v8 = (double)(unsigned int)((v23[0] >> 1) + 20) * 1.8 + 32.0;
        snprintf(v24, 0x80u, "%d", (int)(v8 + 0.5));
      }
      memset(v23, 0, sizeof(v23));
      memset(v22, 0, sizeof(v22));
      v9 = wl_ioctl(v5, 140, v26, 12);
      if ( v9 || !v26[0] )
        goto LABEL_33;
      v10 = v26;
      v11 = 1;
      v12 = 0;
      while ( v11 <= v26[0] )
      {
        v14 = v10[1];
        ++v10;
        v13 = v14;
        if ( v14 == 1 )
        {
          v12 = 1;
        }
        else if ( v13 == 2 )
        {
          v9 = 1;
        }
        ++v11;
      }
      v15 = v12;
      if ( ((v9 == 1) & (unsigned __int8)v12) != 0 )
      {
        v16 = "2.4G/5G";
        goto LABEL_34;
      }
      if ( v12 )
        v17 = 0;
      else
        v17 = v9 == 1;
      if ( v17 )
      {
        v16 = "2.4G";
        goto LABEL_34;
      }
      if ( !v9 && v15 & 1 )
        v16 = "5G";
      else
LABEL_33:
        v16 = "--";
LABEL_34:
      strcpy(v22, v16);
      if ( v25[0] && v22[0] && (strcmp(v25, "--") || strcmp(v22, "--")) )
      {
        strcat(a1, v5); // XXX
        strcat(a1, ": ");
        strcat(a1, v22); // XXX
        strcat(a1, " - ");
        strcat(a1, v25); // XXX
        strcat(a1, "&#176;C&nbsp;/&nbsp;");
        strcat(a1, v24); // XXX
        strcat(a1, "&#176;F&nbsp;&nbsp;&nbsp;&nbsp;");
      }
    }
  }
LABEL_41:
  v19 = strlen(a1);
  if ( v19 > 23 )
  {
    a1[v19 - 24] = 0;
LABEL_45:
    trimstr(a1);
    return a1;
  }
  if ( v19 )
    goto LABEL_45;
  strcpy(a1, "--");
  return a1;
}
