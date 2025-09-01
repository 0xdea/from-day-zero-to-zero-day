const char *__fastcall sub_EB34(const char *result, const char **a2)
{
  const char *wanip; // r0
  char s[128]; // [sp+Ch] [bp-F4h] BYREF
  char v5[48]; // [sp+8Ch] [bp-74h] BYREF
  _BYTE v6[16]; // [sp+BCh] [bp-44h] BYREF
  _BYTE buf[16]; // [sp+CCh] [bp-34h] BYREF
  int v8; // [sp+DCh] [bp-24h] BYREF
  _BYTE v9[4]; // [sp+E0h] [bp-20h] BYREF
  int v10; // [sp+E4h] [bp-1Ch]

  v10 = 0;
  v8 = 7233911;
  if ( result == (const char *)3 )
  {
    inet_pton(10, *a2, buf);
    atoi(a2[1]);
    atoi(a2[2]);
    wanip = (const char *)get_wanip(&v8);
    inet_pton(2, wanip, v9);
    result = (const char *)calc_6rd_local_prefix();
    if ( result )
    {
      result = inet_ntop(10, v6, v5, 0x2Eu);
      if ( result )
      {
        snprintf(s, 0x80u, "\nlocal_prefix = '%s/%d';\n", v5, v10);
        return (const char *)sub_13954(s);
      }
    }
  }
  return result;
}
