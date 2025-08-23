void sub_19CE8()
{
  const char *Var; // r0
  const char *v1; // r1
  char *v2; // r4
  const char *v3; // r0
  const char *v4; // r1
  char *v5; // r5
  int v6; // r5
  const char *v7; // r0
  char v8[64]; // [sp+0h] [bp-70h] BYREF
  char v9[48]; // [sp+40h] [bp-30h] BYREF

  Var = (const char *)WebsGetVar("_mode");
  if ( Var )
    v1 = Var;
  else
    v1 = &s;
  strlcpy((int)v8, (int)v1, 64);
  v2 = sub_E6BC(v8);
  if ( !v2 )
  {
    syslog(4, "No mode was set to wo_vpn_genkey!");
    return;
  }
  v3 = (const char *)WebsGetVar("_server");
  if ( v3 )
    v4 = v3;
  else
    v4 = &s;
  strlcpy((int)v8, (int)v4, 64);
  v5 = sub_E6BC(v8);
  if ( !v5 && (!strncmp(v2, "static", 6u) || !strcmp(v2, "key")) )
  {
    syslog(4, "No server was set to wo_vpn_genkey but it was required by mode!");
    return;
  }
  v6 = atoi(v5);
  if ( !strcmp(v2, "static1") )
  {
    v7 = "openvpn --genkey secret /tmp/genvpnkey >/dev/null 2>&1 && cat /tmp/genvpnkey | tail -n +4 && rm /tmp/genvpnkey";
LABEL_19:
    sub_13D58(v7, 0); // KKK
    return;
  }
  if ( !strcmp(v2, "static2") )
  {
    v7 = "openvpn --genkey tls-crypt-v2-server /tmp/genvpnkey >/dev/null 2>&1 && cat /tmp/genvpnkey && rm /tmp/genvpnkey";
    goto LABEL_19;
  }
  if ( !strcmp(v2, "dh") )
  {
    v7 = "openssl dhparam -out /tmp/dh1024.pem 1024 >/dev/null 2>&1 && cat /tmp/dh1024.pem && rm /tmp/dh1024.pem";
    goto LABEL_19;
  }
  sub_197B8(v6);
  sub_19994("server", 0);
  sub_13954("cakey = '");
  sub_13D1C("/tmp/openssl/cakey.pem", 1);
  sub_13954("';\ncacert = '");
  sub_13D1C("/tmp/openssl/cacert.pem", 1);
  sub_13954("';");
  sub_13954("\ngenerated_crt = '");
  memset(v9, 0, 0x20u);
  snprintf(v9, 0x20u, "/tmp/openssl/%s.crt", "server");
  sub_13D1C(v9, 1);
  sub_13954("';\ngenerated_key = '");
  memset(v9, 0, 0x20u);
  snprintf(v9, 0x20u, "/tmp/openssl/%s.key", "server");
  sub_13D1C(v9, 1);
  sub_13954("';");
}
