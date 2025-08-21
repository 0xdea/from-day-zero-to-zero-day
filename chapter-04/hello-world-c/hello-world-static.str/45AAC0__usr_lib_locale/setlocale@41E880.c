char **__fastcall setlocale(int a1, char *a2)
{
  __int64 v2; // x27
  __int64 v3; // x28
  __int64 v4; // x22
  char *v5; // x19
  __int64 v6; // x25
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x3
  __int64 v10; // x4
  _BYTE *v11; // x0
  __int64 v12; // x2
  __int64 v13; // x27
  char **locale; // x0
  char **v15; // x25
  char *v16; // x19
  void (*v17)(void); // x0
  char **v18; // x20
  char *v19; // x0
  char *v20; // x22
  unsigned int v22; // w25
  char **v23; // x0
  char **v24; // x0
  char **v25; // x0
  char *v26; // x24
  char *v27; // x27
  char ***v28; // x28
  __int64 i; // x25
  void (*v30)(void); // x0
  char *v31; // x0
  char *v32; // x19
  char *v33; // x0
  __int64 v34; // x19
  char *v35; // x0
  __int64 v36; // x2
  _BYTE *v37; // x22
  __int64 v38; // x0
  __int64 v39; // x24
  __int64 v40; // x28
  __int64 v41; // x26
  __int64 v42; // x2
  _BYTE *v43; // x0
  int v44; // w0
  unsigned int v45; // w0
  __int64 v46; // [xsp+8h] [xbp-108h]
  char **v47; // [xsp+18h] [xbp-F8h]
  const char *v48; // [xsp+28h] [xbp-E8h] BYREF
  __int64 v49; // [xsp+30h] [xbp-E0h] BYREF
  char *v50[13]; // [xsp+38h] [xbp-D8h] BYREF
  char *v51[13]; // [xsp+A0h] [xbp-70h] BYREF
  __int64 v52; // [xsp+160h] [xbp+50h]
  __int64 v53; // [xsp+168h] [xbp+58h]

  v4 = a1;
  if ( (unsigned __int64)a1 > 0xC )
  {
    v20 = 0;
    *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40) = 22;
    return (char **)v20;
  }
  v5 = a2;
  if ( !a2 )
    return nl_global_locale[a1 + 16];
  v6 = a1 + 16LL;
  pthread_rwlock_wrlock((pthread_rwlock_t *)_libc_setlocale_lock);
  if ( !(unsigned int)strcmp(v5, nl_global_locale[v4 + 16]) )
  {
    pthread_rwlock_unlock(_libc_setlocale_lock);
    return nl_global_locale[v6];
  }
  v48 = 0;
  v49 = 0;
  v11 = (_BYTE *)getenv("LOCPATH", v7, v8, v9, v10);
  if ( v11 && *v11 && ((unsigned int)argz_create_sep() || (unsigned int)argz_add_sep(&v48, &v49, "/usr/lib/locale", 58)) )
  {
    v20 = 0;
    pthread_rwlock_unlock(_libc_setlocale_lock);
    return (char **)v20;
  }
  if ( (_DWORD)v4 != 6 )
  {
    v52 = v2;
    v53 = v3;
    v13 = nl_current_used[v4];
    v51[0] = v5;
    if ( v13 )
    {
      locale = nl_find_locale(v48, v49, (unsigned int)v4, (const char **)v51);
      v15 = locale;
      if ( !locale )
        goto LABEL_79;
      v5 = v51[0];
      if ( *((_DWORD *)locale + 10) != -1 )
        *((_DWORD *)locale + 10) = -1;
    }
    else
    {
      v15 = 0;
    }
    if ( v5 == "C" || (v51[0] = (char *)strdup(v5)) != 0 )
    {
      v16 = (char *)new_composite_name(v4, v51);
      if ( v16 )
      {
        if ( v13 )
        {
          nl_global_locale[v4] = v15;
          v17 = (void (*)(void))nl_category_postload[v4];
          if ( v17 )
            v17();
        }
        v18 = (char **)v51[0];
        v19 = (char *)nl_global_locale[v4 + 16];
        if ( v51[0] != v19 )
        {
          if ( v19 != "C" )
            free(v19);
          nl_global_locale[v4 + 16] = v18;
        }
        if ( v16 != off_4918D0[0] )
        {
          if ( off_4918D0[0] != "C" )
            free(off_4918D0[0]);
          off_4918D0[0] = v16;
        }
        ++nl_msg_cat_cntr;
        goto LABEL_26;
      }
      if ( v51[0] != "C" )
        free(v51[0]);
    }
LABEL_79:
    v51[0] = 0;
LABEL_26:
    pthread_rwlock_unlock(_libc_setlocale_lock);
    free(v48);
    return (char **)v51[0];
  }
  v22 = 0;
  v23 = v50;
  v47 = v50;
  do
  {
    while ( v22 == 6 )
    {
      v24 = v23 + 1;
      v22 = 8;
      *v24 = v5;
      v23 = v24 + 1;
    }
    ++v22;
    *v23++ = v5;
  }
  while ( v22 != 13 );
  v46 = strchr(v5, 59, v12);
  if ( v46 )
  {
    v46 = strdup(v5);
    v37 = (_BYTE *)v46;
    if ( v46 )
    {
      v52 = v2;
      v53 = v3;
      while ( 1 )
      {
        v38 = strchr(v37, 61, v36);
        v39 = v38;
        if ( !v38 )
          break;
        v40 = v38 - (_QWORD)v37;
        v41 = 0;
        while ( 1 )
        {
          if ( v41 == 6 )
            v41 = 7;
          if ( v40 == nl_category_name_sizes[v41]
            && !(unsigned int)memcmp(
                                v37,
                                &nl_category_names[(unsigned __int8)nl_category_name_idxs[v41]],
                                v39 - (_QWORD)v37) )
          {
            break;
          }
          if ( ++v41 == 13 )
            goto LABEL_89;
        }
        v50[(int)v41] = (char *)(v39 + 1);
        v43 = (_BYTE *)strchr(v39 + 1, 59, v42);
        if ( !v43 )
          break;
        *v43 = 0;
        v37 = v43 + 1;
      }
      v44 = 0;
      while ( 1 )
      {
        if ( v44 == 6 )
        {
          ++v47;
          v44 = 7;
        }
        if ( *v47 == v5 )
          break;
        ++v44;
        ++v47;
        if ( v44 == 13 )
          goto LABEL_44;
      }
LABEL_89:
      pthread_rwlock_unlock(_libc_setlocale_lock);
      free(v46);
      *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40) = 22;
    }
    else
    {
      pthread_rwlock_unlock(_libc_setlocale_lock);
    }
    return 0;
  }
  else
  {
    while ( v22 )
    {
      LODWORD(v20) = v22 - 1;
      if ( v22 == 7 )
      {
        v22 = 5;
      }
      else
      {
        v45 = v22--;
        LODWORD(v20) = v45;
      }
      v25 = nl_find_locale(v48, v49, v22, (const char **)&v50[v22]);
      v51[v22] = (char *)v25;
      if ( v25 )
      {
        if ( *((_DWORD *)v25 + 10) != -1 )
          *((_DWORD *)v25 + 10) = -1;
        v26 = v50[v22];
        if ( v26 != "C" )
        {
          v52 = v2;
          v53 = v3;
          v27 = (char *)nl_global_locale[(int)v22 + 16];
          if ( !(unsigned int)strcmp(v26, v27) )
          {
            v50[v22] = v27;
LABEL_44:
            v2 = v52;
            v3 = v53;
          }
          else
          {
            v33 = (char *)strdup(v26);
            v50[v22] = v33;
            v2 = v52;
            v3 = v53;
            if ( !v33 )
              goto LABEL_67;
          }
        }
      }
      else if ( v50[v22] != "C" )
      {
LABEL_67:
        if ( (_DWORD)v20 != 13 )
          goto LABEL_68;
LABEL_80:
        v20 = 0;
        goto LABEL_65;
      }
    }
    v20 = (char *)new_composite_name(6, v50);
    if ( !v20 )
    {
LABEL_68:
      v34 = (int)v20 + 1;
      do
      {
        if ( (_DWORD)v20 == 6 )
        {
          ++v34;
          LODWORD(v20) = 7;
        }
        v35 = v50[v34 - 1];
        if ( v35 != "C" && v35 != (char *)*(&off_491898 + v34) )
          free(v35);
        LODWORD(v20) = (_DWORD)v20 + 1;
        ++v34;
      }
      while ( (_DWORD)v20 != 13 );
      goto LABEL_80;
    }
    v52 = v2;
    v53 = v3;
    v28 = nl_global_locale;
    for ( i = 1; i != 14; ++i )
    {
      if ( (_DWORD)i == 7 )
      {
        ++v28;
        i = 8;
      }
      if ( nl_current_used[i - 1] )
      {
        *v28 = (char **)v51[i - 1];
        v30 = (void (*)(void))nl_category_postload[i - 1];
        if ( v30 )
          v30();
      }
      v31 = (char *)v28[16];
      v32 = v50[i - 1];
      if ( v32 != v31 )
      {
        if ( v31 != "C" )
          free(v31);
        v28[16] = (char **)v32;
      }
      ++v28;
    }
    if ( v20 != off_4918D0[0] )
    {
      if ( off_4918D0[0] != "C" )
        free(off_4918D0[0]);
      off_4918D0[0] = v20;
    }
    ++nl_msg_cat_cntr;
LABEL_65:
    pthread_rwlock_unlock(_libc_setlocale_lock);
    free(v48);
    free(v46);
  }
  return (char **)v20;
}
