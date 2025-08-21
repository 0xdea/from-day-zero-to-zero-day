int __fastcall sub_C57C(int a1, char *const *a2)
{
  int *v4; // r4
  int v5; // r0
  int *v6; // r3
  const char *v7; // r11
  char *v8; // r0
  size_t v9; // r2
  const char *v10; // r1
  int v11; // r8
  int v12; // r0
  int v13; // r4
  int v15; // r5
  int v16; // r6
  int i; // r5
  int v18; // r4
  int v19; // r3
  const char *v20; // r0
  int v21; // r4
  int v22; // r0
  int v23; // r0
  int v24; // r0
  const char *v25; // r0
  __pid_t v26; // r0
  int v27; // r3
  bool v28; // zf
  int v29; // r8
  int *j; // r5
  int v31; // r0
  int v32; // r6
  int *v33; // r5
  int v34; // r0
  int v35; // r0
  int v36; // [sp+Ch] [bp-334h]
  char v37[188]; // [sp+10h] [bp-330h] BYREF
  _DWORD v38[32]; // [sp+CCh] [bp-274h] BYREF
  char s[128]; // [sp+14Ch] [bp-1F4h] BYREF
  struct sockaddr addr[8]; // [sp+1CCh] [bp-174h] BYREF
  fd_set dest; // [sp+24Ch] [bp-F4h] BYREF
  char v42[32]; // [sp+2CCh] [bp-74h] BYREF
  char v43[16]; // [sp+2ECh] [bp-54h] BYREF
  int optval; // [sp+2FCh] [bp-44h] BYREF
  char *v45; // [sp+300h] [bp-40h]
  int v46; // [sp+304h] [bp-3Ch]
  __int64 v47; // [sp+308h] [bp-38h] BYREF
  socklen_t addr_len; // [sp+314h] [bp-2Ch] BYREF

  openlog("httpd", 1, 24);
  v4 = dword_30B80;
  dword_30CE8 = 0;
  v5 = nvram_get_int("http_lanport");
  dword_30B80[0] = 0;
  dword_30D6C = v5;
  v6 = dword_30B80;
  do
  {
    v6[1] = 0;
    ++v6;
  }
  while ( v6 != (int *)&unk_30C00 );
  memset(s, 0, sizeof(s));
  if ( a1 )
  {
    while ( 1 )
    {
      v12 = getopt(a1, a2, "Np:s:");
      v13 = v12;
      if ( v12 == -1 )
        break;
      if ( v12 == 112 || v12 == 115 )
      {
        v7 = (const char *)optarg;
        v8 = strrchr((const char *)optarg, 58);
        if ( v8 )
        {
          if ( *v7 == 91 && v8 > v7 && *(v8 - 1) == 93 )
          {
            v9 = v8 - v7 - 2;
            v10 = v7 + 1;
          }
          else
          {
            v9 = v8 - v7;
            v10 = v7;
          }
          v7 = v8 + 1;
          if ( v9 >= 0x80 )
            v9 = 128;
          memcpy(s, v10, v9);
        }
        v11 = (unsigned __int8)s[0];
        if ( v13 == 115 )
          dword_30CE8 = 1;
        if ( s[0] )
          v11 = strchr(s, 58) != 0;
        dword_30D6C = atoi(v7);
        sub_AF6C(s, dword_30D6C, v11, v13 == 115);
        memset(s, 0, sizeof(s));
      }
      else if ( v12 == 78 )
      {
        dword_30C88 = 1;
      }
      else
      {
        fprintf((FILE *)stderr, "ERROR: unknown option %c\n", v12);
      }
    }
    v4 = dword_30B80;
  }
  sub_B2CC(0);
  if ( get_ipv6_service() )
    sub_B2CC(1);
  if ( !dword_30B80[0] )
  {
    syslog(3, "can't bind to any address");
    return 1;
  }
  if ( !dword_30CE8 )
    goto LABEL_67;
  v15 = 1;
  v16 = file_lock("httpd");
  do
  {
    if ( v16 < 0 )
      sleep(v15 * v15);
    else
      v15 = 5;
    ++v15;
  }
  while ( v15 <= 4 );
  if ( is_value_in_nvram((int)"https_crt_gen", "1") )
    sub_B6F4();
  for ( i = 2; ; --i )
  {
    v18 = nvram_get_int("https_crt_save");
    if ( f_exists("/etc/cert.pem")
      && f_exists("/etc/key.pem")
      && mssl_cert_key_match("/etc/cert.pem", "/etc/key.pem")
      && (nvram_get_int("https_crt_timeset") || time(0) <= 946684800) )
    {
      goto LABEL_53;
    }
    if ( !v18 || !is_value_in_nvram((int)"crt_ver", "1") || !nvram_get_file("https_crt_file", "/tmp/cert.tgz", 0x2000) )
      goto LABEL_52;
    v38[0] = "tar";
    v38[1] = "-xzf";
    v38[2] = "/tmp/cert.tgz";
    v38[3] = "-C";
    v38[4] = "/";
    v38[5] = "etc/cert.pem";
    v38[6] = "etc/key.pem";
    v38[7] = 0;
    if ( eval(v38, 0, 0, 0) )
    {
      v19 = 0;
    }
    else
    {
      system("cat /etc/key.pem /etc/cert.pem > /etc/server.pem");
      v19 = mssl_cert_key_match("/etc/cert.pem", "/etc/key.pem");
      if ( v19 )
      {
        syslog(6, "mssl_cert_key_match : PASS");
        v19 = 1;
      }
    }
    v36 = v19;
    unlink("/tmp/cert.tgz");
    if ( !v36 )
    {
LABEL_52:
      sub_B6F4();
      syslog(6, "generating SSL certificate...");
      f_read("/dev/urandom", &v47, 8);
      memset(v42, 0, sizeof(v42));
      snprintf(v42, 0x20u, "%llu", v47 & 0x7FFFFFFFFFFFFFFFLL);
      optval = (int)"gencert.sh";
      v45 = v42;
      v46 = 0;
      eval(&optval, 0, 0, 0);
LABEL_53:
      if ( !v18 )
        goto LABEL_59;
    }
    v20 = sub_B1C8();
    v21 = *(unsigned __int8 *)v20;
    if ( !*v20 )
    {
      v38[0] = "tar";
      v38[1] = "-C";
      v38[2] = "/";
      v38[3] = "-czf";
      v38[4] = "/tmp/cert.tgz";
      v38[5] = "etc/cert.pem";
      v38[6] = "etc/key.pem";
      v38[7] = 0;
      if ( !eval(v38, v21, v21, v21) && nvram_set_file("https_crt_file", "/tmp/cert.tgz", 0x2000) )
      {
        v22 = nvram_set("crt_ver", "1");
        nvram_commit_x(v22);
      }
      unlink("/tmp/cert.tgz");
    }
LABEL_59:
    if ( mssl_init("/etc/cert.pem", "/etc/key.pem") )
      break;
    sub_B6F4();
    if ( i )
      v23 = 4;
    else
      v23 = 3;
    syslog(v23, "unable to start SSL");
    if ( !i )
    {
      file_unlock(v16);
      v24 = 1;
      goto LABEL_100;
    }
  }
  v4 = dword_30B80;
  file_unlock(v16);
LABEL_67:
  v25 = sub_B1C8();
  if ( strncmp(v25, "TID", 3u) )
  {
    f_read("/dev/urandom", &v47, 8);
    memset(v38, 0, sizeof(v38));
    snprintf((char *)v38, 0x80u, "TID%llx", v47);
    nvram_set("http_id", v38);
  }
  nvram_unset("http_id_warn");
  if ( daemon(1, 1) != -1 )
  {
    memset(v43, 0, sizeof(v43));
    v26 = getpid();
    snprintf(v43, 0x10u, "%d", v26);
    f_write_string("/var/run/httpd.pid", v43, 0, 420);
    signal(13, (__sighandler_t)1);
    signal(14, (__sighandler_t)1);
    signal(1, (__sighandler_t)1);
    signal(17, (__sighandler_t)1);
LABEL_72:
    while ( 1 )
    {
      memcpy(&dest, &unk_30B84, sizeof(dest));
      if ( select(dword_30720 + 1, &dest, 0, 0, 0) >= 0 )
        break;
      v27 = *_errno_location();
      v28 = v27 == 11;
      if ( v27 != 11 )
        v28 = v27 == 4;
      if ( !v28 )
        sleep(1u);
    }
    v29 = dword_30B80[0] - 1;
    for ( j = &dword_30B80[2 * dword_30B80[0] + 33]; ; j -= 2 )
    {
      if ( v29 < 0 )
        goto LABEL_72;
      v31 = *(j - 2);
      if ( v31 >= 0 && ((dest.__fds_bits[(unsigned int)v31 >> 5] >> (v31 & 0x1F)) & 1) != 0 )
      {
        dword_30CE8 = 0;
        addr_len = 128;
        dword_30724 = accept(v31, addr, &addr_len);
        if ( dword_30724 >= 0 )
        {
          if ( wait_action_idle(10) )
          {
            if ( !fork() )
            {
              v32 = dword_30B80[0] - 1;
              dword_30CE8 = dword_30B80[2 * v29 + 34];
              v33 = &dword_30B80[2 * dword_30B80[0] + 33];
              while ( v32 >= 0 )
              {
                v34 = *(v33 - 2);
                if ( v34 >= 0 )
                  close(v34);
                --v32;
                v33 -= 2;
              }
              dword_30B80[0] = 0;
              do
              {
                v4[1] = 0;
                ++v4;
              }
              while ( v4 != (int *)&unk_30C00 );
              dword_30720 = -1;
              sub_D0A8(0);
              memcpy(&word_30CEC, addr, 0x80u);
              if ( nvram_get_int("web_wl_filter")
                && sub_E8BC(v38, v42)
                && (memset(v37, 0, 0xB8u),
                    strcpy(v37, "sta_info"),
                    ether_atoe(v38, &v37[9]),
                    foreach_wif(1, v37, sub_B738)) )
              {
                if ( nvram_get_int("debug_logwlac") )
                  syslog(4, "wireless access from %s blocked", (const char *)v38);
              }
              else
              {
                optval = 60;
                v45 = 0;
                setsockopt(dword_30724, 1, 21, &optval, 8u);
                setsockopt(dword_30724, 1, 20, &optval, 8u);
                addr_len = 1;
                setsockopt(dword_30724, 6, 1, &addr_len, 4u);
                v35 = fcntl(dword_30724, 2, 1);
                if ( sub_13C68(v35) )
                  sub_BB88();
                sub_13CC8();
              }
              v24 = 0;
LABEL_100:
              exit(v24);
            }
            close(dword_30724);
          }
          else
          {
            syslog(4, "router is busy");
          }
        }
      }
      --v29;
    }
  }
  syslog(3, "daemon: %m");
  return 0;
}
