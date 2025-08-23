FILE *__fastcall sub_1376C(const char *a1)
{
  char *v2; // r5
  const char *v3; // r0
  FILE *result; // r0
  char v5[256]; // [sp+8h] [bp-1D0h] BYREF
  char v6[128]; // [sp+108h] [bp-D0h] BYREF
  char s[80]; // [sp+188h] [bp-50h] BYREF

  sub_133A0(v5);
  if ( !strncmp(a1, "webmon_", 7u) )
  {
    snprintf(s, 0x40u, "/proc/%s", a1);
    v2 = strstr(a1, "searches");
    if ( !nvram_get_int("log_wm") )
      goto LABEL_6;
    v3 = "log_wmdmax";
    if ( v2 )
      v3 = "log_wmsmax";
    if ( nvram_get_int(v3) > 0 )
    {
      sub_B928(200, 0, "application/tomato-binary-file", 0);
      return sub_C3F0(s);
    }
    else
    {
LABEL_6:
      sub_E088("Web Monitoring disabled");
      return (FILE *)sub_C30C("error.asp");
    }
  }
  else
  {
    result = (FILE *)sub_13024();
    if ( result )
    {
      sub_B928(200, 0, "application/tomato-binary-file", 0);
      snprintf(v6, 0x80u, "cat $(ls -1rv %s %s.*)", v5, v5);
      return (FILE *)sub_13D58(v6); // KKK?
    }
  }
  return result;
}
