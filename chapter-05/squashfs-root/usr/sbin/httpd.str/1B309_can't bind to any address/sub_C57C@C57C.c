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
  int v14; // r0
  int v16; // r5
  int v17; // r6
  int i; // r5
  int v19; // r4
  int v20; // r3
  const char *v21; // r0
  int v22; // r4
  int v23; // r0
  int v24; // r0
  int v25; // r0
  const char *v26; // r0
  __pid_t v27; // r0
  int v28; // r3
  bool v29; // zf
  int v30; // r8
  int *j; // r5
  int v32; // r0
  int v33; // r6
  int *v34; // r5
  int v35; // r0
  int v36; // r0
  int v37; // r0
  int v38; // [sp+Ch] [bp-334h]
  char v39[188]; // [sp+10h] [bp-330h] BYREF
  _DWORD v40[32]; // [sp+CCh] [bp-274h] BYREF
  char s[128]; // [sp+14Ch] [bp-1F4h] BYREF
  struct sockaddr addr[8]; // [sp+1CCh] [bp-174h] BYREF
  fd_set dest; // [sp+24Ch] [bp-F4h] BYREF
  char v44[32]; // [sp+2CCh] [bp-74h] BYREF
  char v45[16]; // [sp+2ECh] [bp-54h] BYREF
  int optval; // [sp+2FCh] [bp-44h] BYREF
  char *v47; // [sp+300h] [bp-40h]
  int v48; // [sp+304h] [bp-3Ch]
  __int64 v49; // [sp+308h] [bp-38h] BYREF
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
  if ( get_ipv6_service(v14) )
    sub_B2CC(1);
  if ( !dword_30B80[0] )
  {
    syslog(3, "can't bind to any address");
    return 1;
  }
  if ( !dword_30CE8 )
    goto LABEL_67;
  v16 = 1;
  v17 = file_lock("httpd");
  do
  {
    if ( v17 < 0 )
      sleep(v16 * v16);
    else
      v16 = 5;
    ++v16;
  }
  while ( v16 <= 4 );
  if ( is_value_in_nvram((int)"https_crt_gen", "1") )
    sub_B6F4();
  for ( i = 2; ; --i )
  {
    v19 = nvram_get_int("https_crt_save");
    if ( f_exists("/etc/cert.pem")
      && f_exists("/etc/key.pem")
      && mssl_cert_key_match((int)"/etc/cert.pem", (int)"/etc/key.pem")
      && (nvram_get_int("https_crt_timeset") || time(0) <= 946684800) )
    {
      goto LABEL_53;
    }
    if ( !v19
      || !is_value_in_nvram((int)"crt_ver", "1")
      || !nvram_get_file((int)"https_crt_file", (int)"/tmp/cert.tgz", 0x2000) )
    {
      goto LABEL_52;
    }
    v40[0] = "tar";
    v40[1] = "-xzf";
    v40[2] = "/tmp/cert.tgz";
    v40[3] = "-C";
    v40[4] = "/";
    v40[5] = "etc/cert.pem";
    v40[6] = "etc/key.pem";
    v40[7] = 0;
    if ( eval(v40, 0, 0, 0) )
    {
      v20 = 0;
    }
    else
    {
      system("cat /etc/key.pem /etc/cert.pem > /etc/server.pem");
      v20 = mssl_cert_key_match((int)"/etc/cert.pem", (int)"/etc/key.pem");
      if ( v20 )
      {
        syslog(6, "mssl_cert_key_match : PASS");
        v20 = 1;
      }
    }
    v38 = v20;
    unlink("/tmp/cert.tgz");
    if ( !v38 )
    {
LABEL_52:
      sub_B6F4();
      syslog(6, "generating SSL certificate...");
      f_read((int)"/dev/urandom", (int)&v49, 8);
      memset(v44, 0, sizeof(v44));
      snprintf(v44, 0x20u, "%llu", v49 & 0x7FFFFFFFFFFFFFFFLL);
      optval = (int)"gencert.sh";
      v47 = v44;
      v48 = 0;
      eval(&optval, 0, 0, 0);
LABEL_53:
      if ( !v19 )
        goto LABEL_59;
    }
    v21 = sub_B1C8((int)"https_crt_file");
    v22 = *(unsigned __int8 *)v21;
    if ( !*v21 )
    {
      v40[0] = "tar";
      v40[1] = "-C";
      v40[2] = "/";
      v40[3] = "-czf";
      v40[4] = "/tmp/cert.tgz";
      v40[5] = "etc/cert.pem";
      v40[6] = "etc/key.pem";
      v40[7] = 0;
      if ( !eval(v40, v22, v22, v22) && nvram_set_file("https_crt_file", "/tmp/cert.tgz", 0x2000) )
      {
        v23 = nvram_set((int)"crt_ver", (int)"1");
        nvram_commit_x(v23);
      }
      unlink("/tmp/cert.tgz");
    }
LABEL_59:
    if ( mssl_init("/etc/cert.pem", "/etc/key.pem") )
      break;
    sub_B6F4();
    if ( i )
      v24 = 4;
    else
      v24 = 3;
    syslog(v24, "unable to start SSL");
    if ( !i )
    {
      file_unlock(v17);
      v25 = 1;
      goto LABEL_100;
    }
  }
  v4 = dword_30B80;
  file_unlock(v17);
LABEL_67:
  v26 = sub_B1C8((int)"http_id");
  if ( strncmp(v26, "TID", 3u) )
  {
    f_read((int)"/dev/urandom", (int)&v49, 8);
    memset(v40, 0, sizeof(v40));
    snprintf((char *)v40, 0x80u, "TID%llx", v49);
    nvram_set((int)"http_id", (int)v40);
  }
  nvram_unset((int)"http_id_warn");
  if ( daemon(1, 1) != -1 )
  {
    memset(v45, 0, sizeof(v45));
    v27 = getpid();
    snprintf(v45, 0x10u, "%d", v27);
    f_write_string((int)"/var/run/httpd.pid", (int)v45, 0, 420);
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
      v28 = *_errno_location();
      v29 = v28 == 11;
      if ( v28 != 11 )
        v29 = v28 == 4;
      if ( !v29 )
        sleep(1u);
    }
    v30 = dword_30B80[0] - 1;
    for ( j = &dword_30B80[2 * dword_30B80[0] + 33]; ; j -= 2 )
    {
      if ( v30 < 0 )
        goto LABEL_72;
      v32 = *(j - 2);
      if ( v32 >= 0 && ((dest.__fds_bits[(unsigned int)v32 >> 5] >> (v32 & 0x1F)) & 1) != 0 )
      {
        dword_30CE8 = 0;
        addr_len = 128;
        dword_30724 = accept(v32, addr, &addr_len);
        if ( dword_30724 >= 0 )
        {
          if ( wait_action_idle(10) )
          {
            if ( !fork() )
            {
              v33 = dword_30B80[0] - 1;
              dword_30CE8 = dword_30B80[2 * v30 + 34];
              v34 = &dword_30B80[2 * dword_30B80[0] + 33];
              while ( v33 >= 0 )
              {
                v35 = *(v34 - 2);
                if ( v35 >= 0 )
                  close(v35);
                --v33;
                v34 -= 2;
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
                && sub_E8BC((int)v40, (int)v44)
                && (memset(v39, 0, 0xB8u),
                    strcpy(v39, "sta_info"),
                    ether_atoe(v40, &v39[9]),
                    foreach_wif(1, (int)v39, (int)sub_B738)) )
              {
                if ( nvram_get_int("debug_logwlac") )
                  syslog(4, "wireless access from %s blocked", (const char *)v40);
              }
              else
              {
                optval = 60;
                v47 = 0;
                setsockopt(dword_30724, 1, 21, &optval, 8u);
                setsockopt(dword_30724, 1, 20, &optval, 8u);
                addr_len = 1;
                setsockopt(dword_30724, 6, 1, &addr_len, 4u);
                v36 = fcntl(dword_30724, 2, 1);
                v37 = sub_13C68(v36);
                if ( v37 )
                  sub_BB88();
                sub_13CC8(v37);
              }
              v25 = 0;
LABEL_100:
              exit(v25);
            }
            close(dword_30724);
          }
          else
          {
            syslog(4, "router is busy");
          }
        }
      }
      --v30;
    }
  }
  syslog(3, "daemon: %m");
  return 0;
}
