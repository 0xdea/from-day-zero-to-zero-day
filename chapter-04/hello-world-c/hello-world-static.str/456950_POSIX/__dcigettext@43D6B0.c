const char *__fastcall _dcigettext(char *a1, __int64 a2, __int64 a3, int a4, __int64 a5, unsigned int a6)
{
  bool v9; // zf
  const char *v10; // x4
  __int64 v13; // x19
  _QWORD *v14; // x2
  _QWORD *v15; // x28
  int v16; // w0
  const char *v17; // x24
  char *v18; // x19
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  _BYTE *v23; // x26
  int v24; // w0
  bool v25; // zf
  _BYTE *v26; // x0
  _BYTE *v27; // x23
  __int64 v28; // x0
  unsigned __int64 v29; // x1
  unsigned __int16 v30; // w0
  _QWORD *v31; // x1
  _WORD *v32; // x0
  __int64 v33; // x19
  __int64 v34; // x0
  __int64 v35; // x2
  unsigned __int64 v36; // x1
  unsigned __int16 v37; // w0
  __int64 *v38; // x1
  int v39; // w0
  bool v40; // zf
  const char *v41; // x0
  const char *v42; // x19
  int v43; // w24
  const char *v44; // x4
  __int64 v45; // x0
  __int64 v46; // x19
  __int64 v47; // x20
  unsigned __int64 v48; // x21
  const char *v49; // x20
  const char *v50; // x19
  unsigned __int8 *v51; // x1
  int v52; // t1
  int *v54; // x0
  __int64 domain; // x0
  __int64 v56; // x27
  __int64 msg; // x0
  const char *v58; // x4
  const char *v59; // x4
  __int64 v60; // x0
  __int64 v61; // x2
  __int64 v62; // x0
  __int64 v63; // x23
  __int64 *v64; // x24
  __int64 v65; // x0
  __int64 v66; // x19
  __int64 v67; // x21
  unsigned __int64 v68; // x20
  const char *v69; // x21
  const char *v70; // x19
  const char *v71; // x22
  __int64 v72; // x0
  __int64 v73; // x25
  __int64 v74; // x19
  __int64 v75; // x0
  __int64 v76; // x23
  unsigned __int64 v77; // x26
  __int16 *v78; // x2
  __int64 v79; // x3
  __int64 v80; // x4
  __int64 v81; // x5
  __int64 v82; // x24
  __int64 v83; // x3
  __int64 v84; // x19
  __int64 v85; // x0
  const char *v86; // x4
  __int64 v87; // x1
  int v88; // w3
  _QWORD *v89; // x19
  __int64 v91; // [xsp+0h] [xbp-200E0h] BYREF
  unsigned __int8 v92[1008]; // [xsp+10h] [xbp-200D0h] BYREF
  __int64 v93; // [xsp+400h] [xbp-1FCE0h]
  _QWORD v94[2]; // [xsp+10000h] [xbp-100E0h] BYREF
  _BYTE v95[1008]; // [xsp+10010h] [xbp-100D0h] BYREF
  __int64 v96; // [xsp+10400h] [xbp-FCE0h]
  _BYTE v97[24]; // [xsp+20000h] [xbp-E0h] BYREF
  const char *v98; // [xsp+20018h] [xbp-C8h]
  _BYTE *v99; // [xsp+20020h] [xbp-C0h]
  __int64 v100; // [xsp+20028h] [xbp-B8h]
  __int64 v101; // [xsp+20030h] [xbp-B0h]
  __int64 *v102; // [xsp+20038h] [xbp-A8h]
  int *v103; // [xsp+20040h] [xbp-A0h]
  unsigned __int64 StatusReg; // [xsp+20048h] [xbp-98h]
  __int64 v105; // [xsp+20050h] [xbp-90h]
  __int64 v106; // [xsp+20058h] [xbp-88h]
  __int64 v107; // [xsp+20060h] [xbp-80h]
  __int64 *v108; // [xsp+20068h] [xbp-78h]
  int v109; // [xsp+20070h] [xbp-70h]
  int v110; // [xsp+20074h] [xbp-6Ch]
  const char *v111; // [xsp+20078h] [xbp-68h]
  const char *v112; // [xsp+20088h] [xbp-58h] BYREF
  __int64 v113; // [xsp+20090h] [xbp-50h] BYREF
  char *v114; // [xsp+20098h] [xbp-48h] BYREF
  unsigned int v115; // [xsp+200A0h] [xbp-40h]
  __int64 v116; // [xsp+200A8h] [xbp-38h]
  __int64 v117; // [xsp+200B8h] [xbp-28h]
  __int64 v118; // [xsp+200D0h] [xbp-10h]

  v106 = a3;
  v107 = a5;
  v110 = a4;
  v112 = 0;
  if ( !a2 )
    return 0;
  if ( a6 > 0xC || a6 == 6 )
  {
    if ( a4 )
      v9 = a5 == 1;
    else
      v9 = 1;
    if ( !v9 )
      return (const char *)v106;
    return (const char *)a2;
  }
  StatusReg = _ReadStatusReg(TPIDR_EL0);
  v105 = 40;
  v109 = *(_DWORD *)(StatusReg + 40);
  pthread_rwlock_rdlock(_libc_setlocale_lock);
  pthread_rwlock_rdlock(nl_state_lock);
  v115 = a6;
  v117 = 0;
  v118 = a2;
  if ( !a1 )
    a1 = nl_current_default_domain;
  v114 = a1;
  v101 = _current_locale_name(a6);
  v116 = v101;
  pthread_rwlock_rdlock((unsigned int *)&tree_lock);
  v13 = tfind(&v114, &root, transcmp);
  v102 = (__int64 *)v13;
  pthread_rwlock_unlock((unsigned int *)&tree_lock);
  if ( !v13 || (v14 = *(_QWORD **)v13, *(_DWORD *)(*(_QWORD *)v13 + 24LL) != nl_msg_cat_cntr) )
  {
    v15 = (_QWORD *)nl_domain_bindings;
    if ( !nl_domain_bindings )
    {
LABEL_52:
      v17 = "/usr/share/locale";
LABEL_24:
      v18 = &nl_category_names[(unsigned __int8)nl_category_name_idxs[a6]];
      v23 = (_BYTE *)_current_locale_name(a6);
      if ( *v23 == 67 && ((v24 = (unsigned __int8)v23[1], v24 != 46) ? (v25 = v24 == 0) : (v25 = 1), v25)
        || (v26 = (_BYTE *)getenv("LANGUAGE", v19, v20, v21, v22), (v27 = v26) == 0)
        || !*v26 )
      {
        v27 = v23;
      }
      v100 = strlen(a1);
      v28 = strlen(v18) + v100 + 20;
      v29 = v28 & 0xFFFFFFFFFFFF0000LL;
      v30 = v28 & 0xFFF0;
      v31 = &v97[-v29];
      if ( v97 != (_BYTE *)v31 )
      {
        do
          v96 = 0;
        while ( v94 != v31 );
      }
      v94[0] = 0;
      if ( v30 >= 0x400uLL )
        v96 = 0;
      v32 = (_WORD *)stpcpy(v95, v18);
      v33 = v100;
      *v32 = 47;
      *(_DWORD *)(j_memcpy((char *)v32 + 1) + v33) = 7302446;
      v34 = strlen(v27) + 16;
      v36 = v34 & 0xFFFFFFFFFFFF0000LL;
      v37 = v34 & 0xFFF0;
      v38 = (_QWORD *)((char *)v94 - v36);
      if ( v94 != v38 )
      {
        do
          v93 = 0;
        while ( &v91 != v38 );
      }
      v91 = 0;
      if ( v37 >= 0x400uLL )
        v93 = 0;
      v111 = "POSIX";
      v108 = &v113;
      v103 = &_libc_enable_secure;
      while ( 1 )
      {
        while ( 1 )
        {
LABEL_41:
          while ( 1 )
          {
            v39 = (unsigned __int8)*v27;
            if ( v39 != 58 )
              break;
            ++v27;
          }
          if ( !*v27 )
          {
            strcpy((char *)v92, "C");
            goto LABEL_44;
          }
          v51 = v92;
          do
          {
            *v51++ = v39;
            v52 = (unsigned __int8)*++v27;
            v39 = v52;
          }
          while ( v52 != 58 && v39 != 0 );
          v54 = v103;
          *v51 = 0;
          if ( !*v54 || !strchr(v92, 47, v35) )
          {
            if ( v92[0] == 67 && (v92[1] == 46 || v92[1] == 0) )
              goto LABEL_44;
            if ( !(unsigned int)strcmp(v92, v111) )
              goto LABEL_44;
            domain = nl_find_domain(v17, v92, v95, v15);
            v56 = domain;
            if ( domain )
              break;
          }
        }
        msg = nl_find_msg(domain, v15, a2, 1, v108);
        v58 = (const char *)msg;
        if ( msg )
          break;
        v62 = *(_QWORD *)(v56 + 32);
        if ( v62 )
        {
          v98 = v17;
          v99 = v27;
          v63 = 0;
          v64 = v108;
          while ( 1 )
          {
            v65 = nl_find_msg(v62, v15, a2, 1, v64);
            if ( v65 == -1 )
              goto LABEL_44;
            if ( v65 )
            {
              v58 = (const char *)v65;
              v56 = *(_QWORD *)(v56 + 8LL * (int)v63 + 32);
              goto LABEL_76;
            }
            ++v63;
            v62 = *(_QWORD *)(v56 + 32 + 8 * v63);
            if ( !v62 )
            {
              v17 = v98;
              v27 = v99;
              goto LABEL_41;
            }
          }
        }
      }
      if ( msg == -1 )
        goto LABEL_44;
LABEL_76:
      v111 = v58;
      free(v112);
      v59 = v111;
      if ( v102 )
      {
        v60 = *v102;
        v61 = v113;
        *(_DWORD *)(v60 + 24) = nl_msg_cat_cntr;
        *(_QWORD *)(v60 + 32) = v56;
        *(_QWORD *)(v60 + 40) = v59;
        *(_QWORD *)(v60 + 48) = v61;
      }
      else
      {
        v72 = strlen(a2);
        v73 = v101;
        v74 = v72 + 1;
        v75 = strlen(v101);
        v76 = v100;
        v77 = v75 + v74 + v100 + 58;
        v82 = malloc(v77, v100 + 58, v78, v79, v80, v81);
        v59 = v111;
        if ( v82 )
        {
          v83 = v77 < 0x38 ? 56LL : v77;
          v84 = _mempcpy_chk(v82 + 56, a2, v74, v83 - 56, v111);
          j_memcpy(v84);
          v85 = strcpy(v84 + v76 + 1, v73);
          v86 = v111;
          v87 = v113;
          *(_QWORD *)v82 = v84;
          v88 = nl_msg_cat_cntr;
          *(_DWORD *)(v82 + 8) = a6;
          *(_QWORD *)(v82 + 16) = v85;
          *(_DWORD *)(v82 + 24) = v88;
          *(_QWORD *)(v82 + 32) = v56;
          *(_QWORD *)(v82 + 40) = v86;
          *(_QWORD *)(v82 + 48) = v87;
          pthread_rwlock_wrlock(&tree_lock);
          v89 = (_QWORD *)tsearch(v82, &root, transcmp);
          pthread_rwlock_unlock((unsigned int *)&tree_lock);
          v59 = v111;
          if ( !v89 || *v89 != v82 )
          {
            free(v82);
            v59 = v111;
          }
        }
      }
      *(_DWORD *)(StatusReg + v105) = v109;
      if ( v110 )
      {
        v66 = *(_QWORD *)(v56 + 16);
        v111 = v59;
        v67 = v113;
        v68 = plural_eval(*(_QWORD *)(v66 + 184), v107);
        v59 = v111;
        if ( v68 < *(_QWORD *)(v66 + 192) )
        {
          v69 = &v111[v67];
          v70 = v111;
          v71 = v111;
          while ( --v68 != -1 )
          {
            v70 += strlen(v70) + 1;
            if ( v70 >= v69 )
            {
              v59 = v71;
              goto LABEL_79;
            }
          }
          v59 = v70;
        }
      }
LABEL_79:
      v111 = v59;
      pthread_rwlock_unlock(nl_state_lock);
      pthread_rwlock_unlock(_libc_setlocale_lock);
      return v111;
    }
    while ( 1 )
    {
      v16 = strcmp(a1, v15 + 3);
      if ( !v16 )
        break;
      if ( v16 < 0 )
      {
        v15 = 0;
        v17 = "/usr/share/locale";
        goto LABEL_24;
      }
      v15 = (_QWORD *)*v15;
      if ( !v15 )
        goto LABEL_52;
    }
    v17 = (const char *)v15[1];
    if ( *v17 == 47 )
      goto LABEL_24;
    v41 = (const char *)getcwd(0, 0);
    v42 = v41;
    if ( v41 )
    {
      v43 = _asprintf_chk(&v112, 2, "%s/%s", v41, v17);
      free(v42);
      if ( (v43 & 0x80000000) == 0 )
      {
        v17 = v112;
        goto LABEL_24;
      }
    }
LABEL_44:
    free(v112);
    pthread_rwlock_unlock(nl_state_lock);
    pthread_rwlock_unlock(_libc_setlocale_lock);
    *(_DWORD *)(StatusReg + v105) = v109;
    if ( v110 )
      v40 = v107 == 1;
    else
      v40 = 1;
    if ( !v40 )
      return (const char *)v106;
    return (const char *)a2;
  }
  v44 = (const char *)v14[5];
  if ( v110 )
  {
    v45 = v14[4];
    v111 = (const char *)v14[5];
    v46 = *(_QWORD *)(v45 + 16);
    v47 = v14[6];
    v48 = plural_eval(*(_QWORD *)(v46 + 184), v107);
    v44 = v111;
    if ( v48 < *(_QWORD *)(v46 + 192) )
    {
      v49 = &v111[v47];
      v50 = v111;
      while ( --v48 != -1 )
      {
        v50 += strlen(v50) + 1;
        if ( v50 >= v49 )
        {
          v44 = v111;
          goto LABEL_56;
        }
      }
      v44 = v50;
    }
  }
LABEL_56:
  v111 = v44;
  pthread_rwlock_unlock(nl_state_lock);
  pthread_rwlock_unlock(_libc_setlocale_lock);
  v10 = v111;
  *(_DWORD *)(StatusReg + v105) = v109;
  return v10;
}
