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
  double v17; // d0
  double v18; // d1
  double v19; // d2
  double v20; // d3
  double v21; // d4
  double v22; // d5
  double v23; // d6
  double v24; // d7
  void (*v25)(void); // x0
  char **v26; // x20
  char *v27; // x0
  double v28; // d0
  double v29; // d1
  double v30; // d2
  double v31; // d3
  double v32; // d4
  double v33; // d5
  double v34; // d6
  double v35; // d7
  char *v36; // x22
  unsigned int v38; // w25
  char **v39; // x0
  char **v40; // x0
  char **v41; // x0
  double v42; // d0
  double v43; // d1
  double v44; // d2
  double v45; // d3
  double v46; // d4
  double v47; // d5
  double v48; // d6
  double v49; // d7
  char *v50; // x24
  char *v51; // x27
  char ***v52; // x28
  __int64 i; // x25
  void (*v54)(void); // x0
  char *v55; // x0
  char *v56; // x19
  double v57; // d0
  double v58; // d1
  double v59; // d2
  double v60; // d3
  double v61; // d4
  double v62; // d5
  double v63; // d6
  double v64; // d7
  double v65; // d0
  double v66; // d1
  double v67; // d2
  double v68; // d3
  double v69; // d4
  double v70; // d5
  double v71; // d6
  double v72; // d7
  char *v73; // x0
  __int64 v74; // x19
  char *v75; // x0
  __int64 v76; // x2
  int8x16_t *v77; // x22
  __int64 v78; // x0
  __int64 v79; // x24
  __int64 v80; // x28
  __int64 v81; // x26
  double v82; // d0
  double v83; // d1
  double v84; // d2
  double v85; // d3
  double v86; // d4
  double v87; // d5
  double v88; // d6
  double v89; // d7
  __int64 v90; // x2
  _BYTE *v91; // x0
  int v92; // w0
  unsigned int v93; // w0
  __int64 v94; // [xsp+8h] [xbp-108h]
  char **v95; // [xsp+18h] [xbp-F8h]
  const char *v96; // [xsp+28h] [xbp-E8h] BYREF
  __int64 v97; // [xsp+30h] [xbp-E0h] BYREF
  char *v98[13]; // [xsp+38h] [xbp-D8h] BYREF
  char *v99[13]; // [xsp+A0h] [xbp-70h] BYREF
  __int64 v100; // [xsp+160h] [xbp+50h]
  __int64 v101; // [xsp+168h] [xbp+58h]

  v4 = a1;
  if ( (unsigned __int64)a1 > 0xC )
  {
    v36 = 0;
    *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40) = 22;
    return (char **)v36;
  }
  v5 = a2;
  if ( !a2 )
    return nl_global_locale[a1 + 16];
  v6 = a1 + 16LL;
  pthread_rwlock_wrlock(&_libc_setlocale_lock);
  if ( !(unsigned int)strcmp(v5, nl_global_locale[v4 + 16]) )
  {
    pthread_rwlock_unlock(&_libc_setlocale_lock);
    return nl_global_locale[v6];
  }
  v96 = 0;
  v97 = 0;
  v11 = (_BYTE *)getenv("LOCPATH", v7, v8, v9, v10);
  if ( v11 && *v11 && ((unsigned int)argz_create_sep() || (unsigned int)argz_add_sep(&v96, &v97, "/usr/lib/locale", 58)) )
  {
    v36 = 0;
    pthread_rwlock_unlock(&_libc_setlocale_lock);
    return (char **)v36;
  }
  if ( (_DWORD)v4 != 6 )
  {
    v100 = v2;
    v101 = v3;
    v13 = nl_current_used[v4];
    v99[0] = v5;
    if ( v13 )
    {
      locale = nl_find_locale(v96, v97, (unsigned int)v4, (const char **)v99);
      v15 = locale;
      if ( !locale )
        goto LABEL_79;
      v5 = v99[0];
      if ( *((_DWORD *)locale + 10) != -1 )
        *((_DWORD *)locale + 10) = -1;
    }
    else
    {
      v15 = 0;
    }
    if ( v5 == "C" || (v99[0] = (char *)strdup(v5)) != 0 )
    {
      v16 = (char *)new_composite_name(v4, v99);
      if ( v16 )
      {
        if ( v13 )
        {
          nl_global_locale[v4] = v15;
          v25 = (void (*)(void))nl_category_postload[v4];
          if ( v25 )
            v25();
        }
        v26 = (char **)v99[0];
        v27 = (char *)nl_global_locale[v4 + 16];
        if ( v99[0] != v27 )
        {
          if ( v27 != "C" )
            free((__int64)v27, v17, v18, v19, v20, v21, v22, v23, v24);
          nl_global_locale[v4 + 16] = v26;
        }
        if ( v16 != off_4918D0[0] )
        {
          if ( off_4918D0[0] != "C" )
            free((__int64)off_4918D0[0], v17, v18, v19, v20, v21, v22, v23, v24);
          off_4918D0[0] = v16;
        }
        ++nl_msg_cat_cntr;
        goto LABEL_26;
      }
      if ( v99[0] != "C" )
        free((__int64)v99[0], v17, v18, v19, v20, v21, v22, v23, v24);
    }
LABEL_79:
    v99[0] = 0;
LABEL_26:
    pthread_rwlock_unlock(&_libc_setlocale_lock);
    free((__int64)v96, v28, v29, v30, v31, v32, v33, v34, v35);
    return (char **)v99[0];
  }
  v38 = 0;
  v39 = v98;
  v95 = v98;
  do
  {
    while ( v38 == 6 )
    {
      v40 = v39 + 1;
      v38 = 8;
      *v40 = v5;
      v39 = v40 + 1;
    }
    ++v38;
    *v39++ = v5;
  }
  while ( v38 != 13 );
  v94 = strchr(v5, 59, v12);
  if ( v94 )
  {
    v94 = strdup(v5);
    v77 = (int8x16_t *)v94;
    if ( v94 )
    {
      v100 = v2;
      v101 = v3;
      while ( 1 )
      {
        v78 = strchr(v77, 61, v76);
        v79 = v78;
        if ( !v78 )
          break;
        v80 = v78 - (_QWORD)v77;
        v81 = 0;
        while ( 1 )
        {
          if ( v81 == 6 )
            v81 = 7;
          if ( v80 == nl_category_name_sizes[v81]
            && !(unsigned int)memcmp(
                                v77,
                                (int8x16_t *)&nl_category_names[(unsigned __int8)nl_category_name_idxs[v81]],
                                v79 - (_QWORD)v77) )
          {
            break;
          }
          if ( ++v81 == 13 )
            goto LABEL_89;
        }
        v98[(int)v81] = (char *)(v79 + 1);
        v91 = (_BYTE *)strchr(v79 + 1, 59, v90);
        if ( !v91 )
          break;
        *v91 = 0;
        v77 = (int8x16_t *)(v91 + 1);
      }
      v92 = 0;
      while ( 1 )
      {
        if ( v92 == 6 )
        {
          ++v95;
          v92 = 7;
        }
        if ( *v95 == v5 )
          break;
        ++v92;
        ++v95;
        if ( v92 == 13 )
          goto LABEL_44;
      }
LABEL_89:
      pthread_rwlock_unlock(&_libc_setlocale_lock);
      free(v94, v82, v83, v84, v85, v86, v87, v88, v89);
      *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40) = 22;
    }
    else
    {
      pthread_rwlock_unlock(&_libc_setlocale_lock);
    }
    return 0;
  }
  else
  {
    while ( v38 )
    {
      LODWORD(v36) = v38 - 1;
      if ( v38 == 7 )
      {
        v38 = 5;
      }
      else
      {
        v93 = v38--;
        LODWORD(v36) = v93;
      }
      v41 = nl_find_locale(v96, v97, v38, (const char **)&v98[v38]);
      v99[v38] = (char *)v41;
      if ( v41 )
      {
        if ( *((_DWORD *)v41 + 10) != -1 )
          *((_DWORD *)v41 + 10) = -1;
        v50 = v98[v38];
        if ( v50 != "C" )
        {
          v100 = v2;
          v101 = v3;
          v51 = (char *)nl_global_locale[(int)v38 + 16];
          if ( !(unsigned int)strcmp(v50, v51) )
          {
            v98[v38] = v51;
LABEL_44:
            v2 = v100;
            v3 = v101;
          }
          else
          {
            v73 = (char *)strdup(v50);
            v98[v38] = v73;
            v2 = v100;
            v3 = v101;
            if ( !v73 )
              goto LABEL_67;
          }
        }
      }
      else if ( v98[v38] != "C" )
      {
LABEL_67:
        if ( (_DWORD)v36 != 13 )
          goto LABEL_68;
LABEL_80:
        v36 = 0;
        goto LABEL_65;
      }
    }
    v36 = (char *)new_composite_name(6, v98);
    if ( !v36 )
    {
LABEL_68:
      v74 = (int)v36 + 1;
      do
      {
        if ( (_DWORD)v36 == 6 )
        {
          ++v74;
          LODWORD(v36) = 7;
        }
        v75 = v98[v74 - 1];
        if ( v75 != "C" && v75 != (char *)*(&off_491898 + v74) )
          free((__int64)v75, v42, v43, v44, v45, v46, v47, v48, v49);
        LODWORD(v36) = (_DWORD)v36 + 1;
        ++v74;
      }
      while ( (_DWORD)v36 != 13 );
      goto LABEL_80;
    }
    v100 = v2;
    v101 = v3;
    v52 = nl_global_locale;
    for ( i = 1; i != 14; ++i )
    {
      if ( (_DWORD)i == 7 )
      {
        ++v52;
        i = 8;
      }
      if ( nl_current_used[i - 1] )
      {
        *v52 = (char **)v99[i - 1];
        v54 = (void (*)(void))nl_category_postload[i - 1];
        if ( v54 )
          v54();
      }
      v55 = (char *)v52[16];
      v56 = v98[i - 1];
      if ( v56 != v55 )
      {
        if ( v55 != "C" )
          free((__int64)v55, v42, v43, v44, v45, v46, v47, v48, v49);
        v52[16] = (char **)v56;
      }
      ++v52;
    }
    if ( v36 != off_4918D0[0] )
    {
      if ( off_4918D0[0] != "C" )
        free((__int64)off_4918D0[0], v42, v43, v44, v45, v46, v47, v48, v49);
      off_4918D0[0] = v36;
    }
    ++nl_msg_cat_cntr;
LABEL_65:
    pthread_rwlock_unlock(&_libc_setlocale_lock);
    free((__int64)v96, v57, v58, v59, v60, v61, v62, v63, v64);
    free(v94, v65, v66, v67, v68, v69, v70, v71, v72);
  }
  return (char **)v36;
}
