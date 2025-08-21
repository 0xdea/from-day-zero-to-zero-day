int __fastcall sub_18B50(int a1, int a2, const char *a3, const char *a4, char a5)
{
  const char *label_or_uuid; // r5
  char *v9; // r0
  const char *v10; // r3
  char *v11; // r2
  char *v12; // r6
  int v13; // r0
  const char **v14; // r6
  unsigned __int64 v15; // r0
  unsigned __int64 v16; // r4
  int v17; // r0
  int v18; // r0
  __int64 v20; // r0
  char v21[128]; // [sp+18h] [bp-E0h] BYREF
  statfs buf; // [sp+98h] [bp-60h] BYREF

  label_or_uuid = (const char *)find_label_or_uuid(a1, v21, 0);
  if ( !v21[0] )
    strncpy(v21, a4, 0x80u);
  if ( a5 < 0 )
  {
    if ( (a5 & 2) != 0 )
      sub_13970(0, "]],['%s',[", a3);
    v9 = sub_E6BC(v21);
    v11 = (char *)&s;
    if ( v9 )
      v10 = v9;
    v12 = v9;
    if ( !v9 )
      v10 = &s;
    if ( (a5 & 2) == 0 )
      v11 = ",";
    sub_13970(0, "%s['%s',", v11, v10);
    free(v12);
  }
  v13 = findmntents(a1, 0, 0, 0);
  v14 = (const char **)v13;
  if ( v13 )
  {
    if ( a5 < 0 )
    {
      if ( statfs(*(const char **)(v13 + 4), &buf) )
      {
        v16 = 0;
        v15 = sub_18AD8(a1);
      }
      else
      {
        v15 = buf.f_bsize * (unsigned __int64)buf.f_blocks;
        v16 = buf.f_bsize * (unsigned __int64)buf.f_bfree;
      }
      sub_13970(0, "1,'%s','%s','%s',%llu,%llu]", v14[1], v14[2], v14[3], v15, v16);
    }
    return 1;
  }
  v17 = findmntents(a1, 1, 0, 0);
  if ( v17 )
  {
    if ( a5 < 0 )
    {
      v18 = atoi(*(const char **)(v17 + 8));
      sub_13970(0, "2,'','swap','',%llu,0]", (__int64)v18 << 10);
    }
    return 1;
  }
  if ( (a5 & 0x80) == 0 )
    return 0;
  if ( !label_or_uuid )
    label_or_uuid = &s;
  v20 = sub_18AD8(a1);
  sub_13970(0, "0,'','%s','',%llu,0]", label_or_uuid, v20);
  return 0;
}
