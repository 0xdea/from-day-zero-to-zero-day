char *__fastcall sub_12D3C(char *result, char *a2)
{
  char *v2; // r6
  char *v3; // r0
  const char *v4; // r4
  char *v5; // [sp+4h] [bp-14h] BYREF

  v5 = a2;
  if ( result == (char *)1 )
  {
    result = strdup(*(const char **)a2);
    v2 = result;
    if ( result )
    {
      sub_13954("\nnvram = {\n");
      v5 = v2;
      while ( 1 )
      {
        v3 = strsep(&v5, ",");
        v4 = v3;
        if ( !v3 )
          break;
        if ( *v3 && strcmp(v3, "wl_unit") )
        {
          sub_13970(0, "\t'%s': '", v4);
          sub_12CDC((int)v4);
          tty_vhangup_self_1();
          sub_13954("',\n");
          if ( !strncmp(v4, "wl_", 3u) )
            foreach_wif(1, v4, sub_12CF8);
        }
      }
      free(v2);
      sub_13954("\t'wl_unit': '");
      sub_12CDC((int)"wl_unit");
      tty_vhangup_self_2();
      sub_13954("',\n");
      sub_13954("\t'http_id': '");
      sub_12CDC((int)"http_id");
      tty_vhangup_self_2();
      sub_13954("',\n");
      sub_13954("\t'web_mx': '");
      sub_12CDC((int)"web_mx");
      tty_vhangup_self_2();
      sub_13954("',\n");
      sub_13954("\t'web_pb': '");
      sub_12CDC((int)"web_pb");
      tty_vhangup_self_2();
      return (char *)sub_13954("'};\n");
    }
  }
  return result;
}
