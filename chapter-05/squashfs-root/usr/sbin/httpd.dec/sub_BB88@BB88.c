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
  char *v16; // r0
  char *v17; // r7
  const char *v18; // r0
  const char *v19; // r1
  const char *v20; // r0
  const char *v21; // r1
  int v22; // r0
  int v23; // r1
  char *v24; // r2
  char *v25; // r5
  size_t v26; // r0
  char *v27; // r9
  bool v28; // zf
  void (__fastcall *v29)(const char *, unsigned int, char *); // r3
  const char *v30; // r2
  void (__fastcall *v31)(const char *); // r3
  char s[10000]; // [sp+4h] [bp-2944h] BYREF
  char v33[492]; // [sp+2714h] [bp-234h] BYREF
  char *i; // [sp+2914h] [bp-34h] BYREF
  char *v35; // [sp+2918h] [bp-30h] BYREF
  char *v36; // [sp+291Ch] [bp-2Ch] BYREF

  dword_30CB4 = 0;
  memset(s, 0, sizeof(s));
  v0 = (const char *)sub_1389C(s, 10000);
  if ( !v0 )
  {
    v1 = 400;
LABEL_110:
    v24 = (char *)v0;
    goto LABEL_111;
  }
  v36 = s;
  strsep(&v36, " ");
  while ( v36 && *v36 == 32 )
    ++v36;
  v35 = v36;
  strsep(&v35, " ");
  while ( v35 && *v35 == 32 )
    ++v35;
  v2 = v36;
  if ( !v36 || !v35 )
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
  i = v35;
  v9 = 0;
  strsep(&i, " ");
  v10 = 0;
  v11 = &v35[strlen(v35) + 1];
  while ( sub_1389C(v11, v33 - v11) && strcmp(v11, "\n") && strcmp(v11, "\r\n") )
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
      strlen((const char *)v10);
      v33[base64_decode()] = 0;
      v16 = strchr(v33, 58);
      v17 = v16;
      if ( !v16 )
        goto LABEL_75;
      *v16 = 0;
      v18 = (const char *)nvram_get("http_username");
      v19 = v18;
      if ( v18 )
      {
        if ( !*v18 )
          v19 = "root";
      }
      else
      {
        v19 = "root";
      }
      if ( !strcmp(v33, v19) )
      {
        v20 = (const char *)nvram_get("http_passwd");
        v21 = v20;
        if ( v20 )
        {
          if ( !*v20 )
            v21 = "admin";
        }
        else
        {
          v21 = "admin";
        }
        if ( !strcmp(v17 + 1, v21) )
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
  v22 = strcmp(v3, "logout");
  if ( !v22 )
  {
    sub_DEF0(v3, v7, v9);
    sub_B888();
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
      v24 = "Goodbye";
LABEL_111:
      sub_BA5C(v1, v0, v24);
      return;
    }
    sub_BAB4();
    return;
  }
  if ( v10 == 2 )
  {
    v22 = v7;
    v23 = 1;
  }
  else
  {
    v8 = (char *)off_1FFFC;
  }
  if ( v10 == 2 )
  {
LABEL_107:
    sub_BB3C(v22, v23);
    return;
  }
  while ( 2 )
  {
    v27 = *(char **)v8;
    if ( !*(_DWORD *)v8 )
    {
      if ( v10 == 1 )
      {
        v1 = 404;
LABEL_109:
        v0 = 0;
        goto LABEL_110;
      }
      v22 = v7;
      v23 = *(_DWORD *)v8;
      goto LABEL_107;
    }
    while ( 1 )
    {
      v25 = strchr(v27, 124);
      if ( !v25 )
        break;
      if ( __uri_match_pages((unsigned __int8 *)v27, v25 - v27, v3) )
        goto LABEL_93;
      v27 = v25 + 1;
    }
    v26 = strlen(v27);
    if ( !__uri_match_pages((unsigned __int8 *)v27, v26, v3) )
    {
      v8 += 24;
      continue;
    }
    break;
  }
LABEL_93:
  v28 = v10 == 1;
  if ( v10 != 1 )
    v28 = *((_DWORD *)v8 + 5) == 0;
  if ( !v28 )
  {
    v22 = v7;
    v23 = 0;
    goto LABEL_107;
  }
  v29 = (void (__fastcall *)(const char *, unsigned int, char *))*((_DWORD *)v8 + 3);
  if ( v29 )
    v29(v3, v7, v9);
  sub_B888();
  v30 = (const char *)*((_DWORD *)v8 + 1);
  if ( v30 )
    sub_B928(200, 0, v30, *((_DWORD *)v8 + 2));
  v31 = (void (__fastcall *)(const char *))*((_DWORD *)v8 + 4);
  if ( v31 )
    v31(v3);
}
