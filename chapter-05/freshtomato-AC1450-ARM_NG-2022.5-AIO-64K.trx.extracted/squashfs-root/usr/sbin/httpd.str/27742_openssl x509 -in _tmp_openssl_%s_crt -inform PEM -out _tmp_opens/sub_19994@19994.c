int __fastcall sub_19994(const char *a1, int a2)
{
  const char *v4; // r8
  const char *v5; // r0
  char *v6; // r3
  char v8[512]; // [sp+10h] [bp-360h] BYREF
  char v9[256]; // [sp+210h] [bp-160h] BYREF
  char v10[64]; // [sp+310h] [bp-60h] BYREF
  char s[4]; // [sp+350h] [bp-20h] BYREF
  int v12; // [sp+354h] [bp-1Ch]

  if ( !strncmp(a1, "server", 6u) )
  {
    syslog(4, "Building Certs for Server");
    v4 = "-extensions server_cert";
  }
  else
  {
    v4 = "-extensions usr_cert";
    syslog(4, "Building Certs for Client%d", a2);
  }
  *(_DWORD *)s = 0;
  v12 = 0;
  snprintf(s, 8u, "%.2X", a2);
  sub_19774("/tmp/openssl/serial", s);
  *(_DWORD *)s = 0;
  v12 = 0;
  snprintf(s, 8u, "%d", a2);
  memset(v10, 0, sizeof(v10));
  v5 = (const char *)sub_19758("wan_domain");
  if ( v5 && *v5 )
    snprintf(v10, 0x40u, ".%s", v5);
  memset(v9, 0, sizeof(v9));
  if ( a2 > 0 )
    v6 = s;
  else
    v6 = (char *)&::s;
  snprintf(v9, 0x100u, "\"/C=GB/ST=Yorks/L=York/O=FreshTomato/OU=IT/CN=%s%s%s\"", a1, v6, v10);
  memset(v8, 0, sizeof(v8));
  snprintf(
    v8,
    0x200u,
    "openssl req -nodes -new -keyout /tmp/openssl/%s.key -out /tmp/openssl/%s.csr %s -subj %s >>/tmp/openssl/openssl.log 2>&1",
    a1,
    a1,
    v4,
    v9);
  syslog(4, v8);
  system(v8);
  memset(v8, 0, sizeof(v8));
  snprintf(
    v8,
    0x200u,
    "openssl ca -batch -policy policy_anything -days 3650 -out /tmp/openssl/%s.crt -in /tmp/openssl/%s.csr %s -subj %s >>"
    "/tmp/openssl/openssl.log 2>&1",
    a1,
    a1,
    v4,
    v9);
  syslog(4, v8);
  system(v8);
  memset(v8, 0, sizeof(v8));
  snprintf(
    v8,
    0x200u,
    "openssl x509 -in /tmp/openssl/%s.crt -inform PEM -out /tmp/openssl/%s.crt -outform PEM >>/tmp/openssl/openssl.log 2>&1",
    a1,
    a1);
  syslog(4, v8);
  return system(v8);
}
