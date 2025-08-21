bool __fastcall sub_C450(int a1)
{
  const char *Var; // r0
  const char *v3; // r1
  _BOOL4 result; // r0
  __int16 v5; // r0
  const char *v6; // r0
  const char *v7; // r1
  const char *v8; // r5
  int v9; // r0
  bool v10; // zf
  const char *v11; // r4
  char s[96]; // [sp+8h] [bp-60h] BYREF

  Var = (const char *)WebsGetVar("_http_id");
  if ( Var )
    v3 = Var;
  else
    v3 = &::s;
  result = is_value_in_nvram((int)"http_id", v3);
  if ( !result )
  {
    memset(s, 0, 0x48u);
    v5 = time(0);
    snprintf(s, 0x48u, "%s,%ld", buf, v5 & 0xFFC0);
    if ( !is_value_in_nvram((int)"http_id_warn", s) )
    {
      nvram_set("http_id_warn", s);
      v6 = (const char *)WebsGetVar("_http_id");
      if ( v6 )
        v7 = v6;
      else
        v7 = &::s;
      strlcpy(s, v7, 72);
      v8 = (const char *)sub_E6BC(s);
      strlcpy(s, a1, 72);
      v9 = sub_E6BC(s);
      v10 = v9 == 0;
      if ( v9 )
        v10 = v8 == 0;
      v11 = (const char *)v9;
      if ( !v10 )
      {
        sub_B76C();
        syslog(4, "invalid ID '%s' from %s for /%s", v8, buf, v11);
      }
    }
    exit(1);
  }
  return result;
}
