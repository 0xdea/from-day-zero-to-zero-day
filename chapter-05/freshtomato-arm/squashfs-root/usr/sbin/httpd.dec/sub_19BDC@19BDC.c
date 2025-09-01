char *sub_19BDC()
{
  char *result; // r0
  const char *v1; // r4
  const char *v2; // r6
  bool v3; // cc
  FILE *v4; // r4
  char s[272]; // [sp+8h] [bp-110h] BYREF

  result = (char *)WebsGetVar("server");
  if ( result )
  {
    v1 = "server";
  }
  else
  {
    result = (char *)WebsGetVar("client");
    if ( !result )
    {
      v1 = 0;
      v2 = 0;
      goto LABEL_7;
    }
    v1 = "client";
  }
  result = (char *)atoi(result);
  v2 = result;
LABEL_7:
  v3 = (int)v1 <= 0;
  if ( v1 )
    v3 = (int)v2 <= 0;
  if ( !v3 )
  {
    snprintf(s, 0x100u, "vpn%s%d", v1, v2);
    result = (char *)pidof(s);
    if ( (int)result > 0 )
    {
      snprintf(s, 0x100u, "/etc/openvpn/%s%d/status", v1, v2);
      if ( !f_exists(s) )
        sleep(5u);
      result = (char *)fopen(s, "r");
      v4 = (FILE *)result;
      if ( result )
      {
        while ( fgets(s, 256, v4) )
          sub_13954(s);
        return (char *)fclose(v4);
      }
    }
  }
  return result;
}
