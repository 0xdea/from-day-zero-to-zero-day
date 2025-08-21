int __fastcall sub_18B50(const char *a1, int a2, const char *a3, const char *a4, char a5)
{
  const char *label_or_uuid; // r5
  char *v9; // r0
  const char *v10; // r3
  char *v11; // r2
  char *v12; // r6
  int v13; // r0
  const char **v14; // r6
  int v15; // r1
  int v16; // r2
  unsigned int v17; // r3
  unsigned __int64 v18; // r0
  unsigned __int64 v19; // r4
  int v20; // r0
  int v21; // r1
  int v22; // r2
  int v23; // r0
  unsigned __int64 v25; // r0
  char v26[128]; // [sp+18h] [bp-E0h] BYREF
  statfs buf; // [sp+98h] [bp-60h] BYREF

  label_or_uuid = (const char *)find_label_or_uuid(a1, v26, 0);
  if ( !v26[0] )
    strncpy(v26, a4, 0x80u);
  if ( a5 < 0 )
  {
    if ( (a5 & 2) != 0 )
      sub_13970(0, "]],['%s',[", a3);
    v9 = sub_E6BC(v26);
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
        v19 = 0;
        v18 = sub_18AD8(a1, v15, v16, v17);
      }
      else
      {
        v18 = buf.f_bsize * (unsigned __int64)buf.f_blocks;
        v19 = buf.f_bsize * (unsigned __int64)buf.f_bfree;
      }
      sub_13970(0, "1,'%s','%s','%s',%llu,%llu]", v14[1], v14[2], v14[3], v18, v19);
    }
    return 1;
  }
  v20 = findmntents(a1, 1, 0, 0);
  if ( v20 )
  {
    if ( a5 < 0 )
    {
      v23 = atoi(*(const char **)(v20 + 8));
      sub_13970(0, "2,'','swap','',%llu,0]", (__int64)v23 << 10);
    }
    return 1;
  }
  if ( (a5 & 0x80) == 0 )
    return 0;
  if ( !label_or_uuid )
    label_or_uuid = &s;
  v25 = sub_18AD8(a1, v21, v22, (unsigned int)&s);
  sub_13970(0, "0,'','%s','',%llu,0]", label_or_uuid, v25);
  return 0;
}
