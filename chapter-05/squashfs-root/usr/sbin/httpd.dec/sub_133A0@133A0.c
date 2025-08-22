char *__fastcall sub_133A0(char *a1)
{
  const char *v2; // r4
  int v3; // r0
  char *result; // r0
  char *v5; // r0
  char *v6; // r6
  char s[280]; // [sp+8h] [bp-118h] BYREF

  if ( nvram_get_int("log_file_custom") )
  {
    v3 = nvram_get("log_file_path");
    v2 = &::s;
    if ( v3 )
      v2 = (const char *)v3;
  }
  else
  {
    v2 = "/var/log/messages";
  }
  result = (char *)f_read_string("/etc/syslogd.cfg", s, 256);
  if ( (int)result > 0 )
  {
    v5 = strchr(s, 10);
    if ( v5 )
      *v5 = 0;
    strtok(s, asc_1B230);
    strtok(0, asc_1B230);
    result = strtok(0, asc_1B230);
    v6 = result;
    if ( result )
    {
      if ( *result == 47 )
      {
        result = (char *)f_write(result);
        if ( (int)result >= 0 )
          v2 = v6;
      }
    }
  }
  if ( a1 )
    return strcpy(a1, v2); // XXX
  return result;
}
