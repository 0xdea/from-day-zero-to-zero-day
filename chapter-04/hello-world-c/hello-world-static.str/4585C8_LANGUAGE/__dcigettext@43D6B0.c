const char *__fastcall _dcigettext(char *a1, __int64 a2, __int64 a3, int a4, __int64 a5, unsigned int a6)
{
  bool v9; // zf
  const char *v10; // x4
  __int64 v13; // x19
  _QWORD *v14; // x2
  _QWORD *v15; // x28
  int v16; // w0
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  __int64 v20; // x5
  const char *v21; // x24
  char *v22; // x19
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  _BYTE *v27; // x26
  int v28; // w0
  bool v29; // zf
  _BYTE *v30; // x0
  _BYTE *v31; // x23
  __int64 v32; // x0
  unsigned __int64 v33; // x1
  unsigned __int16 v34; // w0
  _QWORD *v35; // x1
  _WORD *v36; // x0
  __int64 v37; // x19
  __int64 v38; // x0
  __int64 v39; // x2
  unsigned __int64 v40; // x1
  unsigned __int16 v41; // w0
  __int64 *v42; // x1
  int v43; // w0
  bool v44; // zf
  char *v45; // x0
  char *v46; // x19
  int v47; // w24
  const char *v48; // x4
  __int64 v49; // x0
  __int64 v50; // x19
  __int64 v51; // x20
  unsigned __int64 v52; // x21
  const char *v53; // x20
  const char *v54; // x19
  unsigned __int8 *v55; // x1
  int v56; // t1
  int *v58; // x0
  __int64 domain; // x0
  __int64 v60; // x27
  __int64 msg; // x0
  const char *v62; // x4
  const char *v63; // x4
  __int64 v64; // x0
  __int64 v65; // x2
  __int64 v66; // x0
  __int64 v67; // x23
  __int64 *v68; // x24
  __int64 v69; // x0
  __int64 v70; // x19
  __int64 v71; // x21
  unsigned __int64 v72; // x20
  const char *v73; // x21
  const char *v74; // x19
  const char *v75; // x22
  __int64 v76; // x0
  __int64 v77; // x25
  __int64 v78; // x19
  __int64 v79; // x0
  __int64 v80; // x23
  unsigned __int64 v81; // x26
  __int16 *v82; // x2
  __int64 v83; // x3
  __int64 v84; // x4
  __int64 v85; // x5
  __int64 v86; // x24
  __int64 v87; // x3
  __int64 v88; // x19
  __int64 v89; // x0
  const char *v90; // x4
  __int64 v91; // x1
  int v92; // w3
  _QWORD *v93; // x19
  __int64 v95; // [xsp+0h] [xbp-200E0h] BYREF
  unsigned __int8 v96[1008]; // [xsp+10h] [xbp-200D0h] BYREF
  __int64 v97; // [xsp+400h] [xbp-1FCE0h]
  _QWORD v98[2]; // [xsp+10000h] [xbp-100E0h] BYREF
  _BYTE v99[1008]; // [xsp+10010h] [xbp-100D0h] BYREF
  __int64 v100; // [xsp+10400h] [xbp-FCE0h]
  _BYTE v101[24]; // [xsp+20000h] [xbp-E0h] BYREF
  const char *v102; // [xsp+20018h] [xbp-C8h]
  _BYTE *v103; // [xsp+20020h] [xbp-C0h]
  __int64 v104; // [xsp+20028h] [xbp-B8h]
  __int64 v105; // [xsp+20030h] [xbp-B0h]
  __int64 *v106; // [xsp+20038h] [xbp-A8h]
  int *v107; // [xsp+20040h] [xbp-A0h]
  unsigned __int64 StatusReg; // [xsp+20048h] [xbp-98h]
  __int64 v109; // [xsp+20050h] [xbp-90h]
  __int64 v110; // [xsp+20058h] [xbp-88h]
  __int64 v111; // [xsp+20060h] [xbp-80h]
  __int64 *v112; // [xsp+20068h] [xbp-78h]
  int v113; // [xsp+20070h] [xbp-70h]
  int v114; // [xsp+20074h] [xbp-6Ch]
  const char *v115; // [xsp+20078h] [xbp-68h]
  const char *v116; // [xsp+20088h] [xbp-58h] BYREF
  __int64 v117; // [xsp+20090h] [xbp-50h] BYREF
  char *v118; // [xsp+20098h] [xbp-48h] BYREF
  unsigned int v119; // [xsp+200A0h] [xbp-40h]
  __int64 v120; // [xsp+200A8h] [xbp-38h]
  __int64 v121; // [xsp+200B8h] [xbp-28h]
  __int64 v122; // [xsp+200D0h] [xbp-10h]

  v110 = a3;
  v111 = a5;
  v114 = a4;
  v116 = 0;
  if ( !a2 )
    return 0;
  if ( a6 > 0xC || a6 == 6 )
  {
    if ( a4 )
      v9 = a5 == 1;
    else
      v9 = 1;
    if ( !v9 )
      return (const char *)v110;
    return (const char *)a2;
  }
  StatusReg = _ReadStatusReg(TPIDR_EL0);
  v109 = 40;
  v113 = *(_DWORD *)(StatusReg + 40);
  pthread_rwlock_rdlock(_libc_setlocale_lock);
  pthread_rwlock_rdlock(nl_state_lock);
  v119 = a6;
  v121 = 0;
  v122 = a2;
  if ( !a1 )
    a1 = nl_current_default_domain;
  v118 = a1;
  v105 = _current_locale_name(a6);
  v120 = v105;
  pthread_rwlock_rdlock((unsigned int *)&tree_lock);
  v13 = tfind(&v118, &root, transcmp);
  v106 = (__int64 *)v13;
  pthread_rwlock_unlock((unsigned int *)&tree_lock);
  if ( !v13 || (v14 = *(_QWORD **)v13, *(_DWORD *)(*(_QWORD *)v13 + 24LL) != nl_msg_cat_cntr) )
  {
    v15 = (_QWORD *)nl_domain_bindings;
    if ( !nl_domain_bindings )
    {
LABEL_52:
      v21 = "/usr/share/locale";
LABEL_24:
      v22 = &nl_category_names[(unsigned __int8)nl_category_name_idxs[a6]];
      v27 = (_BYTE *)_current_locale_name(a6);
      if ( *v27 == 67 && ((v28 = (unsigned __int8)v27[1], v28 != 46) ? (v29 = v28 == 0) : (v29 = 1), v29)
        || (v30 = (_BYTE *)getenv("LANGUAGE", v23, v24, v25, v26), (v31 = v30) == 0)
        || !*v30 )
      {
        v31 = v27;
      }
      v104 = strlen(a1);
      v32 = strlen(v22) + v104 + 20;
      v33 = v32 & 0xFFFFFFFFFFFF0000LL;
      v34 = v32 & 0xFFF0;
      v35 = &v101[-v33];
      if ( v101 != (_BYTE *)v35 )
      {
        do
          v100 = 0;
        while ( v98 != v35 );
      }
      v98[0] = 0;
      if ( v34 >= 0x400uLL )
        v100 = 0;
      v36 = (_WORD *)stpcpy(v99, v22);
      v37 = v104;
      *v36 = 47;
      *(_DWORD *)(j_memcpy((char *)v36 + 1) + v37) = 7302446;
      v38 = strlen(v31) + 16;
      v40 = v38 & 0xFFFFFFFFFFFF0000LL;
      v41 = v38 & 0xFFF0;
      v42 = (_QWORD *)((char *)v98 - v40);
      if ( v98 != v42 )
      {
        do
          v97 = 0;
        while ( &v95 != v42 );
      }
      v95 = 0;
      if ( v41 >= 0x400uLL )
        v97 = 0;
      v115 = "POSIX";
      v112 = &v117;
      v107 = &_libc_enable_secure;
      while ( 1 )
      {
        while ( 1 )
        {
LABEL_41:
          while ( 1 )
          {
            v43 = (unsigned __int8)*v31;
            if ( v43 != 58 )
              break;
            ++v31;
          }
          if ( !*v31 )
          {
            strcpy((char *)v96, "C");
            goto LABEL_44;
          }
          v55 = v96;
          do
          {
            *v55++ = v43;
            v56 = (unsigned __int8)*++v31;
            v43 = v56;
          }
          while ( v56 != 58 && v43 != 0 );
          v58 = v107;
          *v55 = 0;
          if ( !*v58 || !strchr(v96, 47, v39) )
          {
            if ( v96[0] == 67 && (v96[1] == 46 || v96[1] == 0) )
              goto LABEL_44;
            if ( !(unsigned int)strcmp(v96, v115) )
              goto LABEL_44;
            domain = nl_find_domain(v21, v96, v99, v15);
            v60 = domain;
            if ( domain )
              break;
          }
        }
        msg = nl_find_msg(domain, (__int64)v15, a2, 1, v112);
        v62 = (const char *)msg;
        if ( msg )
          break;
        v66 = *(_QWORD *)(v60 + 32);
        if ( v66 )
        {
          v102 = v21;
          v103 = v31;
          v67 = 0;
          v68 = v112;
          while ( 1 )
          {
            v69 = nl_find_msg(v66, (__int64)v15, a2, 1, v68);
            if ( v69 == -1 )
              goto LABEL_44;
            if ( v69 )
            {
              v62 = (const char *)v69;
              v60 = *(_QWORD *)(v60 + 8LL * (int)v67 + 32);
              goto LABEL_76;
            }
            ++v67;
            v66 = *(_QWORD *)(v60 + 32 + 8 * v67);
            if ( !v66 )
            {
              v21 = v102;
              v31 = v103;
              goto LABEL_41;
            }
          }
        }
      }
      if ( msg == -1 )
        goto LABEL_44;
LABEL_76:
      v115 = v62;
      free(v116);
      v63 = v115;
      if ( v106 )
      {
        v64 = *v106;
        v65 = v117;
        *(_DWORD *)(v64 + 24) = nl_msg_cat_cntr;
        *(_QWORD *)(v64 + 32) = v60;
        *(_QWORD *)(v64 + 40) = v63;
        *(_QWORD *)(v64 + 48) = v65;
      }
      else
      {
        v76 = strlen(a2);
        v77 = v105;
        v78 = v76 + 1;
        v79 = strlen(v105);
        v80 = v104;
        v81 = v79 + v78 + v104 + 58;
        v86 = malloc(v81, v104 + 58, v82, v83, v84, v85);
        v63 = v115;
        if ( v86 )
        {
          v87 = v81 < 0x38 ? 56LL : v81;
          v88 = _mempcpy_chk(v86 + 56, a2, v78, v87 - 56, v115);
          j_memcpy(v88);
          v89 = strcpy(v88 + v80 + 1, v77);
          v90 = v115;
          v91 = v117;
          *(_QWORD *)v86 = v88;
          v92 = nl_msg_cat_cntr;
          *(_DWORD *)(v86 + 8) = a6;
          *(_QWORD *)(v86 + 16) = v89;
          *(_DWORD *)(v86 + 24) = v92;
          *(_QWORD *)(v86 + 32) = v60;
          *(_QWORD *)(v86 + 40) = v90;
          *(_QWORD *)(v86 + 48) = v91;
          pthread_rwlock_wrlock(&tree_lock);
          v93 = (_QWORD *)tsearch(v86, &root, transcmp);
          pthread_rwlock_unlock((unsigned int *)&tree_lock);
          v63 = v115;
          if ( !v93 || *v93 != v86 )
          {
            free(v86);
            v63 = v115;
          }
        }
      }
      *(_DWORD *)(StatusReg + v109) = v113;
      if ( v114 )
      {
        v70 = *(_QWORD *)(v60 + 16);
        v115 = v63;
        v71 = v117;
        v72 = plural_eval(*(_QWORD *)(v70 + 184), v111);
        v63 = v115;
        if ( v72 < *(_QWORD *)(v70 + 192) )
        {
          v73 = &v115[v71];
          v74 = v115;
          v75 = v115;
          while ( --v72 != -1 )
          {
            v74 += strlen(v74) + 1;
            if ( v74 >= v73 )
            {
              v63 = v75;
              goto LABEL_79;
            }
          }
          v63 = v74;
        }
      }
LABEL_79:
      v115 = v63;
      pthread_rwlock_unlock(nl_state_lock);
      pthread_rwlock_unlock(_libc_setlocale_lock);
      return v115;
    }
    while ( 1 )
    {
      v16 = strcmp(a1, v15 + 3);
      if ( !v16 )
        break;
      if ( v16 < 0 )
      {
        v15 = 0;
        v21 = "/usr/share/locale";
        goto LABEL_24;
      }
      v15 = (_QWORD *)*v15;
      if ( !v15 )
        goto LABEL_52;
    }
    v21 = (const char *)v15[1];
    if ( *v21 == 47 )
      goto LABEL_24;
    v45 = getcwd(0, 0, v17, v18, v19, v20);
    v46 = v45;
    if ( v45 )
    {
      v47 = _asprintf_chk(&v116, 2, "%s/%s", v45, v21);
      free(v46);
      if ( (v47 & 0x80000000) == 0 )
      {
        v21 = v116;
        goto LABEL_24;
      }
    }
LABEL_44:
    free(v116);
    pthread_rwlock_unlock(nl_state_lock);
    pthread_rwlock_unlock(_libc_setlocale_lock);
    *(_DWORD *)(StatusReg + v109) = v113;
    if ( v114 )
      v44 = v111 == 1;
    else
      v44 = 1;
    if ( !v44 )
      return (const char *)v110;
    return (const char *)a2;
  }
  v48 = (const char *)v14[5];
  if ( v114 )
  {
    v49 = v14[4];
    v115 = (const char *)v14[5];
    v50 = *(_QWORD *)(v49 + 16);
    v51 = v14[6];
    v52 = plural_eval(*(_QWORD *)(v50 + 184), v111);
    v48 = v115;
    if ( v52 < *(_QWORD *)(v50 + 192) )
    {
      v53 = &v115[v51];
      v54 = v115;
      while ( --v52 != -1 )
      {
        v54 += strlen(v54) + 1;
        if ( v54 >= v53 )
        {
          v48 = v115;
          goto LABEL_56;
        }
      }
      v48 = v54;
    }
  }
LABEL_56:
  v115 = v48;
  pthread_rwlock_unlock(nl_state_lock);
  pthread_rwlock_unlock(_libc_setlocale_lock);
  v10 = v115;
  *(_DWORD *)(StatusReg + v109) = v113;
  return v10;
}
