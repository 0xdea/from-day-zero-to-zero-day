const char *__fastcall sub_EB34(const char *result, const char **a2)
{
  int v3; // r8
  int v4; // r7
  const char *wanip; // r0
  char s[128]; // [sp+Ch] [bp-F4h] BYREF
  char v7[48]; // [sp+8Ch] [bp-74h] BYREF
  _BYTE v8[16]; // [sp+BCh] [bp-44h] BYREF
  _BYTE buf[16]; // [sp+CCh] [bp-34h] BYREF
  int v10; // [sp+DCh] [bp-24h] BYREF
  _BYTE v11[4]; // [sp+E0h] [bp-20h] BYREF
  int v12; // [sp+E4h] [bp-1Ch] BYREF

  v12 = 0;
  v10 = 7233911;
  if ( result == (const char *)3 )
  {
    inet_pton(10, *a2, buf);
    v3 = atoi(a2[1]);
    v4 = atoi(a2[2]);
    wanip = (const char *)get_wanip(&v10);
    inet_pton(2, wanip, v11);
    result = (const char *)calc_6rd_local_prefix(buf, v3, v4, v11, v8, &v12);
    if ( result )
    {
      result = inet_ntop(10, v8, v7, 0x2Eu);
      if ( result )
      {
        snprintf(s, 0x80u, "\nlocal_prefix = '%s/%d';\n", v7, v12);
        return (const char *)sub_13954(s);
      }
    }
  }
  return result;
}
