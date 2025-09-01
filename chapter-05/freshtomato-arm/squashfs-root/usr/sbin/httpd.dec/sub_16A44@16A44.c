size_t sub_16A44()
{
  int v0; // r5
  const char *wanip; // r0
  const char *v2; // r0
  const char *v3; // r0
  const char *v4; // r0
  char *v5; // r0
  struct tm *v6; // r0
  int v7; // r5
  char *v8; // r0
  _BYTE *v9; // r0
  signed int v10; // r0
  int v11; // r2
  struct tm *v12; // r0
  const char *v14; // r0
  char v15[256]; // [sp+0h] [bp-2C0h] BYREF
  char v16[256]; // [sp+100h] [bp-1C0h] BYREF
  struct stat v17; // [sp+200h] [bp-C0h] BYREF
  char v18[64]; // [sp+258h] [bp-68h] BYREF
  time_t v19; // [sp+298h] [bp-28h] BYREF
  char *v20; // [sp+29Ch] [bp-24h] BYREF

  v0 = 0;
  wanip = (const char *)get_wanip("wan");
  sub_13970(0, "\nddnsx_ip = '%s';", wanip);
  v2 = (const char *)get_wanip("wan2");
  sub_13970(0, "\nddnsx2_ip = '%s';", v2);
  v3 = (const char *)get_wanip("wan3");
  sub_13970(0, "\nddnsx3_ip = '%s';", v3);
  v4 = (const char *)get_wanip("wan4");
  sub_13970(0, "\nddnsx4_ip = '%s';", v4);
  sub_13970(0, "\nddnsx_msg = [");
  v5 = "'";
  while ( 1 )
  {
    sub_13954(v5);
    snprintf(v18, 0x40u, "/var/lib/mdu/ddnsx%d.msg", v0);
    f_read_string(v18, v15, 256);
    if ( v15[0] )
    {
      if ( !stat(v18, &v17) && v17.st_mtim.tv_sec > 946684800 )
      {
        v6 = localtime(&v17.st_mtim.tv_sec);
        strftime(v16, 0x100u, "%a, %d %b %Y %H:%M:%S %z: ", v6);
        sub_13954(v16);
      }
      tty_vhangup_self_2(v15);
    }
    if ( v0 == 1 )
      break;
    v5 = "','";
    v0 = 1;
  }
  v7 = 0;
  sub_13954("'];\nddnsx_last = [");
  v8 = "'";
  while ( 1 )
  {
    sub_13954(v8);
    snprintf(v18, 0x40u, "ddnsx%d", v7);
    v9 = (_BYTE *)nvram_get(v18);
    if ( !v9 || *v9 )
    {
      snprintf(v18, 0x40u, "ddnsx%d_cache", v7);
      v14 = (const char *)nvram_get(v18);
      if ( v14 )
      {
        v10 = strtoul(v14, &v20, 10);
        v19 = v10;
        v11 = (unsigned __int8)*v20++;
        if ( v11 == 44 )
        {
          if ( v10 > 946684800 )
          {
            v12 = localtime(&v19);
            strftime(v16, 0x100u, "%a, %d %b %Y %H:%M:%S %z: ", v12);
            sub_13954(v16);
          }
          tty_vhangup_self_2(v20);
        }
      }
    }
    if ( v7 == 1 )
      break;
    v8 = "','";
    v7 = 1;
  }
  return sub_13954("'];\n");
}
