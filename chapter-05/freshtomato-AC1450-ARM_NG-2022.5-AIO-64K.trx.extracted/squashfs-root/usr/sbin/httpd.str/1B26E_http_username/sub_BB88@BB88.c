void sub_BB88()
{
  const char *v0; // r1
  int v1; // r0
  char *v2; // r5
  const char *v3; // r4
  size_t v4; // r6
  char *v5; // r0
  int v6; // r5
  unsigned int v7; // r6
  char *v8; // r8
  char *v9; // r10
  int v10; // r7
  char *v11; // r5
  char *v12; // r0
  int v13; // r2
  bool v14; // zf
  size_t v15; // r0
  size_t v16; // r0
  char *v17; // r0
  char *v18; // r7
  const char *v19; // r0
  const char *v20; // r1
  const char *v21; // r0
  const char *v22; // r1
  int v23; // r0
  int v24; // r1
  int v25; // r0
  char *v26; // r2
  char *v27; // r5
  size_t v28; // r0
  int matched; // r0
  char *v30; // r9
  bool v31; // zf
  int (__fastcall *v32)(const char *, unsigned int, char *); // r3
  const char *v33; // r2
  void (__fastcall *v34)(const char *); // r3
  char s[10000]; // [sp+4h] [bp-2944h] BYREF
  char v36[492]; // [sp+2714h] [bp-234h] BYREF
  char *i; // [sp+2914h] [bp-34h] BYREF
  char *v38; // [sp+2918h] [bp-30h] BYREF
  char *v39; // [sp+291Ch] [bp-2Ch] BYREF

  dword_30CB4 = 0;
  memset(s, 0, sizeof(s));
  v0 = (const char *)sub_1389C(s, 10000);
  if ( !v0 )
  {
    v1 = 400;
LABEL_110:
    v26 = (char *)v0;
    goto LABEL_111;
  }
  v39 = s;
  strsep(&v39, " ");
  while ( v39 && *v39 == 32 )
    ++v39;
  v38 = v39;
  strsep(&v38, " ");
  while ( v38 && *v38 == 32 )
    ++v38;
  v2 = v39;
  if ( !v39 || !v38 )
    goto LABEL_25;
  if ( strcasecmp(s, "get") && strcasecmp(s, "post") )
  {
    v1 = 501;
LABEL_16:
    v0 = 0;
    goto LABEL_110;
  }
  if ( *v2 != 47 )
    goto LABEL_25;
  v3 = v2 + 1;
  v4 = strlen(v2 + 1);
  v5 = strchr(v2 + 1, 63);
  i = v5;
  if ( v5 )
  {
    *v5 = 0;
    setenv("QUERY_STRING", i + 1, 1);
    sub_D0A8(i + 1);
  }
  v6 = (unsigned __int8)v2[1];
  if ( v6 == 47
    || !strncmp(v3, "..", 2u)
    || !strncmp(v3, "../", 3u)
    || strstr(v3, "/../")
    || !strcmp(&v3[v4 - 3], "/..") )
  {
LABEL_25:
    v1 = 400;
    goto LABEL_16;
  }
  if ( !v6 || v3[v4 - 1] == 47 || !strcmp(v3, "index.asp") )
  {
    v3 = "status-overview.asp";
  }
  else if ( !strcmp(v3, "ext/") )
  {
    v3 = "ext/index.asp";
  }
  else if ( !strcmp(v3, "ext") )
  {
    v3 = "ext/index.asp";
  }
  v7 = 0;
  v8 = 0;
  i = v38;
  v9 = 0;
  strsep(&i, " ");
  v10 = 0;
  v11 = &v38[strlen(v38) + 1];
  while ( sub_1389C(v11, v36 - v11) && strcmp(v11, "\n") && strcmp(v11, "\r\n") )
  {
    if ( !strncasecmp(v11, "Authorization:", 0xEu) )
    {
      i = v11 + 14;
      v10 = (int)&i[strspn(i, asc_1B230)];
      i = (char *)v10;
      v11 = (char *)(v10 + strlen((const char *)v10) + 1);
    }
    else if ( !strncasecmp(v11, "User-Agent:", 0xBu) )
    {
      i = v11 + 11;
      v8 = &i[strspn(i, asc_1B230)];
      i = v8;
      v11 = &v8[strlen(v8) + 1];
    }
    else if ( !strncasecmp(v11, "Content-Length:", 0xFu) )
    {
      i = v11 + 15;
      i = &v11[strspn(v11 + 15, asc_1B230) + 15];
      v7 = strtoul(i, 0, 0);
      if ( (v7 == 0x7FFFFFFF) | (v7 >> 31) )
      {
        v1 = 400;
        goto LABEL_109;
      }
    }
    else if ( !strncasecmp(v11, "Content-Type:", 0xDu) )
    {
      v12 = strstr(v11, "boundary=");
      if ( v12 )
        v9 = v12 + 9;
      i = v12;
      if ( v12 )
      {
        for ( i = v9; ; ++i )
        {
          v13 = (unsigned __int8)*i;
          v14 = v13 == 13;
          if ( v13 != 13 )
            v14 = v13 == 0;
          if ( v14 || v13 == 10 )
            break;
        }
        *i = 0;
        v11 = ++i;
      }
    }
  }
  dword_30CB0 = strcasecmp(s, "post") == 0;
  sub_B76C();
  if ( v10 )
  {
    if ( !strncmp((const char *)v10, "Basic ", 6u) )
    {
      v15 = strlen((const char *)(v10 + 6));
      if ( (unsigned int)base64_decoded_len(v15) > 0x200 )
        goto LABEL_75;
      v16 = strlen((const char *)v10);
      v36[base64_decode(v10 + 6, v36, v16 - 6)] = 0;
      v17 = strchr(v36, 58);
      v18 = v17;
      if ( !v17 )
        goto LABEL_75;
      *v17 = 0;
      v19 = (const char *)nvram_get("http_username");
      v20 = v19;
      if ( v19 )
      {
        if ( !*v19 )
          v20 = "root";
      }
      else
      {
        v20 = "root";
      }
      if ( !strcmp(v36, v20) )
      {
        v21 = (const char *)nvram_get("http_passwd");
        v22 = v21;
        if ( v21 )
        {
          if ( !*v21 )
            v22 = "admin";
        }
        else
        {
          v22 = "admin";
        }
        if ( !strcmp(v18 + 1, v22) )
          v10 = 1;
        else
          v10 = 2;
      }
      else
      {
LABEL_75:
        v10 = 2;
      }
    }
    else
    {
      v10 = 0;
    }
  }
  v23 = strcmp(v3, "logout");
  if ( !v23 )
  {
    v25 = sub_DEF0(v3, v7, v9);
    sub_B888(v25);
    if ( strstr(v8, "Chrome/") )
    {
      if ( v10 == 2 )
        goto LABEL_82;
    }
    else if ( v10 != 1 )
    {
LABEL_82:
      v1 = 404;
      v0 = 0;
      v26 = "Goodbye";
LABEL_111:
      sub_BA5C(v1, v0, v26);
      return;
    }
    sub_BAB4();
    return;
  }
  if ( v10 == 2 )
  {
    v23 = v7;
    v24 = 1;
  }
  else
  {
    v8 = (char *)off_1FFFC;
  }
  if ( v10 == 2 )
  {
LABEL_107:
    sub_BB3C(v23, v24);
    return;
  }
  while ( 2 )
  {
    v30 = *(char **)v8;
    if ( !*(_DWORD *)v8 )
    {
      if ( v10 == 1 )
      {
        v1 = 404;
LABEL_109:
        v0 = 0;
        goto LABEL_110;
      }
      v23 = v7;
      v24 = *(_DWORD *)v8;
      goto LABEL_107;
    }
    while ( 1 )
    {
      v27 = strchr(v30, 124);
      if ( !v27 )
        break;
      matched = __uri_match_pages((unsigned __int8 *)v30, v27 - v30, v3);
      if ( matched )
        goto LABEL_93;
      v30 = v27 + 1;
    }
    v28 = strlen(v30);
    matched = __uri_match_pages((unsigned __int8 *)v30, v28, v3);
    if ( !matched )
    {
      v8 += 24;
      continue;
    }
    break;
  }
LABEL_93:
  v31 = v10 == 1;
  if ( v10 != 1 )
    v31 = *((_DWORD *)v8 + 5) == 0;
  if ( !v31 )
  {
    v23 = v7;
    v24 = 0;
    goto LABEL_107;
  }
  v32 = (int (__fastcall *)(const char *, unsigned int, char *))*((_DWORD *)v8 + 3);
  if ( v32 )
    matched = v32(v3, v7, v9);
  sub_B888(matched);
  v33 = (const char *)*((_DWORD *)v8 + 1);
  if ( v33 )
    sub_B928(200, 0, v33, *((_DWORD *)v8 + 2));
  v34 = (void (__fastcall *)(const char *))*((_DWORD *)v8 + 4);
  if ( v34 )
    v34(v3);
}
