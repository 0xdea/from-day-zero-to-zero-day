int __fastcall sub_197B8(int a1)
{
  const char *v2; // r0
  int NVRAMVar; // r0
  int v5; // r0
  char v6[512]; // [sp+0h] [bp-460h] BYREF
  char v7[512]; // [sp+200h] [bp-260h] BYREF
  char v8[64]; // [sp+400h] [bp-60h] BYREF
  const char *v9; // [sp+440h] [bp-20h] BYREF
  const char *v10; // [sp+444h] [bp-1Ch]
  const char *v11; // [sp+448h] [bp-18h]
  int v12; // [sp+44Ch] [bp-14h]

  v9 = "rm";
  v10 = "-Rf";
  v11 = "/tmp/openssl";
  v12 = 0;
  eval(&v9, 0, 0, 0);
  v9 = "mkdir";
  v10 = "-p";
  v11 = "/tmp/openssl";
  v12 = 0;
  eval(&v9, 0, 0, 0);
  sub_19774("/tmp/openssl/index.txt", &s);
  sub_19774("/tmp/openssl/openssl.log", &s);
  memset(v7, 0, sizeof(v7));
  snprintf(v7, 0x200u, "vpn_server%d_ca_key", a1);
  if ( is_value_in_nvram_2(v7, &s) )
  {
    syslog(4, "No CA KEY was saved for server %d, regenerating", a1);
    memset(v8, 0, sizeof(v8));
    v2 = (const char *)sub_19758("wan_domain");
    if ( v2 )
    {
      if ( *v2 )
        snprintf(v8, 0x40u, ".%s", v2);
    }
    memset(v6, 0, sizeof(v6));
    snprintf(v6, 0x200u, "\"/C=GB/ST=Yorks/L=York/O=FreshTomato/OU=IT/CN=server%s\"", v8);
    memset(v7, 0, sizeof(v7));
    snprintf(
      v7,
      0x200u,
      "openssl req -days 3650 -nodes -new -x509 -keyout /tmp/openssl/cakey.pem -out /tmp/openssl/cacert.pem -subj %s >>/t"
      "mp/openssl/openssl.log 2>&1",
      v6);
    syslog(4, v7);
    return system(v7);
  }
  else
  {
    syslog(4, "Found CA KEY for server %d, creating from NVRAM", a1);
    NVRAMVar = getNVRAMVar("vpn_server%d_ca_key", a1);
    sub_19774("/tmp/openssl/cakey.pem", NVRAMVar);
    v5 = getNVRAMVar("vpn_server%d_ca", a1);
    return sub_19774("/tmp/openssl/cacert.pem", v5);
  }
}
