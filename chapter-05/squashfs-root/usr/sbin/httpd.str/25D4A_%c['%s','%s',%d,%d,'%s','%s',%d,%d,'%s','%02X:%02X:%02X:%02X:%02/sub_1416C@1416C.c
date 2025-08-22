int __fastcall sub_1416C(int a1, int a2, int a3)
{
  int v6; // r6
  int v7; // r0
  int v8; // r0
  const char *v9; // r6
  const char *v10; // r0
  char *v11; // r8
  const char *v12; // r8
  int v13; // r8
  _BOOL4 v14; // r7
  int v15; // r0
  const char *v16; // r0
  int v17; // r0
  int v18; // r0
  int v19; // r0
  unsigned __int8 *v20; // r0
  char *v21; // r8
  int v22; // r9
  int v23; // r0
  const char *v24; // r11
  int v25; // r0
  const char *v26; // r10
  int v27; // r0
  const char *v28; // r0
  char v30[256]; // [sp+38h] [bp-258h] BYREF
  char v31[200]; // [sp+138h] [bp-158h] BYREF
  char v32; // [sp+237h] [bp-59h]
  char v33[32]; // [sp+238h] [bp-58h] BYREF
  char dest[8]; // [sp+258h] [bp-38h] BYREF
  _BYTE v35[8]; // [sp+260h] [bp-30h] BYREF

  strcpy(dest, "000000");
  if ( a3 <= 0 )
  {
    snprintf(dest, 7u, "%d", a2);
    v7 = wl_nvname("ifname", a2, 0);
    v8 = sub_13E24(v7);
    wl_iovar_get(v8, "cap", v30, 256);
    v9 = &v30[strspn(v30, " ")];
    strncpy(v31, v9, 0x100u);
    v31[strcspn(v31, " ")] = 0;
    v10 = v9;
    v32 = 0;
    v6 = 1;
    v11 = strchr(v10, 32);
    while ( v31[0] )
    {
      if ( !strcmp(v31, "mbss16") )
        v6 = 16;
      if ( !strcmp(v31, "mbss4") )
        v6 = 4;
      if ( v11 )
        v12 = &v11[strspn(v11, " ")];
      else
        v12 = &s;
      strncpy(v31, v12, 0x100u);
      v31[strcspn(v31, " ")] = 0;
      v32 = 0;
      v11 = strchr(v12, 32);
    }
  }
  else
  {
    v6 = 0;
    snprintf(dest, 7u, "%d.%d", a2, a3);
  }
  v13 = socket(2, 3, 255);
  if ( v13 >= 0 )
  {
    v15 = wl_nvname("ifname", a2, a3);
    v16 = (const char *)sub_13E24(v15);
    strcpy(v33, v16);
    if ( ioctl(v13, 0x8913u, v33) )
      v14 = 0;
    else
      v14 = (v33[16] & 0x41) != 0;
    close(v13);
  }
  else
  {
    syslog(3, "[%s %d]: error opening socket %m\n", "print_wif", 1221);
    v14 = 0;
  }
  v17 = wl_nvname("ifname", a2, a3);
  v18 = sub_13E24(v17);
  wl_ioctl(v18, 23, v35, 6);
  v19 = wl_nvname("ssid", a2, a3);
  v20 = (unsigned __int8 *)sub_13E24(v19);
  v21 = (char *)sub_17C28(v20);
  if ( a1 )
    v22 = 44;
  else
    v22 = 32;
  v23 = wl_nvname("ifname", a2, a3);
  v24 = (const char *)sub_13E24(v23);
  v25 = wl_nvname("hwaddr", a2, a3);
  v26 = (const char *)sub_13E24(v25);
  v27 = wl_nvname("mode", a2, a3);
  v28 = (const char *)sub_13E24(v27);
  sub_13970(
    0,
    "%c['%s','%s',%d,%d,'%s','%s',%d,%d,'%s','%02X:%02X:%02X:%02X:%02X:%02X']",
    v22,
    v24,
    dest,
    a2,
    a3,
    v21,
    v26,
    v14,
    v6,
    v28,
    v35[0],
    v35[1],
    v35[2],
    v35[3],
    v35[4],
    v35[5]);
  free(v21);
  return 0;
}
