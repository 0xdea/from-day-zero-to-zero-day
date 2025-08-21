void __fastcall sub_197B8(int a1)
{
  const char *v2; // r0
  const char *NVRAMVar; // r0
  const char *v4; // r0
  char v5[512]; // [sp+0h] [bp-460h] BYREF
  char v6[512]; // [sp+200h] [bp-260h] BYREF
  char v7[64]; // [sp+400h] [bp-60h] BYREF
  const char *v8; // [sp+440h] [bp-20h] BYREF
  const char *v9; // [sp+444h] [bp-1Ch]
  const char *v10; // [sp+448h] [bp-18h]
  int v11; // [sp+44Ch] [bp-14h]

  v8 = "rm";
  v9 = "-Rf";
  v10 = "/tmp/openssl";
  v11 = 0;
  eval(&v8, 0, 0, 0);
  v8 = "mkdir";
  v9 = "-p";
  v10 = "/tmp/openssl";
  v11 = 0;
  eval(&v8, 0, 0, 0);
  sub_19774("/tmp/openssl/index.txt", &s);
  sub_19774("/tmp/openssl/openssl.log", &s);
  memset(v6, 0, sizeof(v6));
  snprintf(v6, 0x200u, "vpn_server%d_ca_key", a1);
  if ( is_value_in_nvram_2((int)v6, &s) )
  {
    syslog(4, "No CA KEY was saved for server %d, regenerating", a1);
    memset(v7, 0, sizeof(v7));
    v2 = sub_19758((int)"wan_domain");
    if ( v2 )
    {
      if ( *v2 )
        snprintf(v7, 0x40u, ".%s", v2);
    }
    memset(v5, 0, sizeof(v5));
    snprintf(v5, 0x200u, "\"/C=GB/ST=Yorks/L=York/O=FreshTomato/OU=IT/CN=server%s\"", v7);
    memset(v6, 0, sizeof(v6));
    snprintf(
      v6,
      0x200u,
      "openssl req -days 3650 -nodes -new -x509 -keyout /tmp/openssl/cakey.pem -out /tmp/openssl/cacert.pem -subj %s >>/t"
      "mp/openssl/openssl.log 2>&1",
      v5);
    syslog(4, v6);
    system(v6);
  }
  else
  {
    syslog(4, "Found CA KEY for server %d, creating from NVRAM", a1);
    NVRAMVar = (const char *)getNVRAMVar("vpn_server%d_ca_key", a1);
    sub_19774("/tmp/openssl/cakey.pem", NVRAMVar);
    v4 = (const char *)getNVRAMVar("vpn_server%d_ca", a1);
    sub_19774("/tmp/openssl/cacert.pem", v4);
  }
}
