const char *__fastcall _dcigettext(
        unsigned __int64 *a1,
        unsigned __int64 *a2,
        __int64 a3,
        int a4,
        unsigned __int64 a5,
        unsigned int a6)
{
  bool v9; // zf
  const char *v10; // x4
  __int64 *v13; // x19
  _QWORD *v14; // x2
  _QWORD *v15; // x28
  int v16; // w0
  __int64 v17; // x2
  __int64 v18; // x3
  void *v19; // x4
  void *v20; // x5
  void *v21; // x6
  double v22; // d0
  double v23; // d1
  double v24; // d2
  double v25; // d3
  double v26; // d4
  double v27; // d5
  double v28; // d6
  double v29; // d7
  const char *v30; // x24
  char *v31; // x19
  unsigned __int8 *v32; // x26
  int v33; // w0
  bool v34; // zf
  unsigned __int8 *v35; // x0
  unsigned __int8 *v36; // x23
  __int64 v37; // x0
  unsigned __int64 v38; // x1
  unsigned __int16 v39; // w0
  _QWORD *v40; // x1
  char *v41; // x0
  __int64 v42; // x19
  __int64 v43; // x0
  double v44; // d0
  double v45; // d1
  double v46; // d2
  double v47; // d3
  double v48; // d4
  double v49; // d5
  double v50; // d6
  double v51; // d7
  unsigned __int64 v52; // x1
  unsigned __int16 v53; // w0
  __int64 *v54; // x1
  int v55; // w0
  bool v56; // zf
  char *v57; // x0
  __int64 v58; // x19
  int v59; // w24
  double v60; // d0
  double v61; // d1
  double v62; // d2
  double v63; // d3
  double v64; // d4
  double v65; // d5
  double v66; // d6
  double v67; // d7
  const char *v68; // x4
  __int64 v69; // x0
  __int64 v70; // x19
  __int64 v71; // x20
  unsigned __int64 v72; // x21
  const char *v73; // x20
  const char *v74; // x19
  unsigned __int64 *v75; // x1
  int v76; // t1
  int *v78; // x0
  __int64 domain; // x0
  __int64 v80; // x27
  __int64 msg; // x0
  const char *v82; // x4
  const char *v83; // x4
  __int64 v84; // x0
  __int64 v85; // x2
  __int64 v86; // x0
  __int64 v87; // x23
  __int64 *v88; // x24
  __int64 v89; // x0
  __int64 v90; // x19
  __int64 v91; // x21
  unsigned __int64 v92; // x20
  const char *v93; // x21
  const char *v94; // x19
  const char *v95; // x22
  __int64 v96; // x0
  __int64 v97; // x25
  __int64 v98; // x19
  __int64 v99; // x0
  __int64 v100; // x23
  __int64 v101; // x2
  __int64 v102; // x3
  void *v103; // x4
  void *v104; // x5
  void *v105; // x6
  double v106; // d0
  double v107; // d1
  double v108; // d2
  double v109; // d3
  double v110; // d4
  double v111; // d5
  double v112; // d6
  double v113; // d7
  __int64 v114; // x24
  __int64 v115; // x19
  __int64 v116; // x0
  const char *v117; // x4
  __int64 v118; // x1
  int v119; // w3
  __int64 v120; // x3
  void *v121; // x4
  void *v122; // x5
  void *v123; // x6
  double v124; // d0
  double v125; // d1
  double v126; // d2
  double v127; // d3
  double v128; // d4
  double v129; // d5
  double v130; // d6
  double v131; // d7
  _QWORD *v132; // x19
  double v133; // d0
  double v134; // d1
  double v135; // d2
  double v136; // d3
  double v137; // d4
  double v138; // d5
  double v139; // d6
  double v140; // d7
  __int64 v142; // [xsp+0h] [xbp-200E0h] BYREF
  unsigned __int64 v143[126]; // [xsp+10h] [xbp-200D0h] BYREF
  __int64 v144; // [xsp+400h] [xbp-1FCE0h]
  _QWORD v145[2]; // [xsp+10000h] [xbp-100E0h] BYREF
  _QWORD v146[126]; // [xsp+10010h] [xbp-100D0h] BYREF
  __int64 v147; // [xsp+10400h] [xbp-FCE0h]
  _BYTE v148[24]; // [xsp+20000h] [xbp-E0h] BYREF
  const char *v149; // [xsp+20018h] [xbp-C8h]
  unsigned __int8 *v150; // [xsp+20020h] [xbp-C0h]
  __int64 v151; // [xsp+20028h] [xbp-B8h]
  __int64 v152; // [xsp+20030h] [xbp-B0h]
  __int64 *v153; // [xsp+20038h] [xbp-A8h]
  int *v154; // [xsp+20040h] [xbp-A0h]
  unsigned __int64 StatusReg; // [xsp+20048h] [xbp-98h]
  __int64 v156; // [xsp+20050h] [xbp-90h]
  __int64 v157; // [xsp+20058h] [xbp-88h]
  unsigned __int64 v158; // [xsp+20060h] [xbp-80h]
  __int64 *v159; // [xsp+20068h] [xbp-78h]
  int v160; // [xsp+20070h] [xbp-70h]
  int v161; // [xsp+20074h] [xbp-6Ch]
  const char *v162; // [xsp+20078h] [xbp-68h]
  const char *v163; // [xsp+20088h] [xbp-58h] BYREF
  __int64 v164; // [xsp+20090h] [xbp-50h] BYREF
  unsigned __int64 *v165; // [xsp+20098h] [xbp-48h] BYREF
  unsigned int v166; // [xsp+200A0h] [xbp-40h]
  __int64 v167; // [xsp+200A8h] [xbp-38h]
  __int64 v168; // [xsp+200B8h] [xbp-28h]
  unsigned __int64 *v169; // [xsp+200D0h] [xbp-10h]

  v157 = a3;
  v158 = a5;
  v161 = a4;
  v163 = 0;
  if ( !a2 )
    return 0;
  if ( a6 > 0xC || a6 == 6 )
  {
    if ( a4 )
      v9 = a5 == 1;
    else
      v9 = 1;
    if ( !v9 )
      return (const char *)v157;
    return (const char *)a2;
  }
  StatusReg = _ReadStatusReg(TPIDR_EL0);
  v156 = 40;
  v160 = *(_DWORD *)(StatusReg + 40);
  pthread_rwlock_rdlock((unsigned int *)&_libc_setlocale_lock);
  pthread_rwlock_rdlock(nl_state_lock);
  v166 = a6;
  v168 = 0;
  v169 = a2;
  if ( !a1 )
    a1 = (unsigned __int64 *)nl_current_default_domain;
  v165 = a1;
  v152 = _current_locale_name(a6);
  v167 = v152;
  pthread_rwlock_rdlock((unsigned int *)&tree_lock);
  v13 = tfind((__int64)&v165, &root, (__int64 (__fastcall *)(__int64, _QWORD))transcmp);
  v153 = v13;
  pthread_rwlock_unlock((unsigned int *)&tree_lock);
  if ( !v13 || (v14 = (_QWORD *)*v13, *(_DWORD *)(*v13 + 24) != nl_msg_cat_cntr) )
  {
    v15 = (_QWORD *)nl_domain_bindings;
    if ( !nl_domain_bindings )
    {
LABEL_52:
      v30 = "/usr/share/locale";
LABEL_24:
      v31 = &nl_category_names[(unsigned __int8)nl_category_name_idxs[a6]];
      v32 = (unsigned __int8 *)_current_locale_name(a6);
      if ( *v32 == 67 && ((v33 = v32[1], v33 != 46) ? (v34 = v33 == 0) : (v34 = 1), v34)
        || (v35 = getenv("LANGUAGE"), (v36 = v35) == 0)
        || !*v35 )
      {
        v36 = v32;
      }
      v151 = strlen(a1);
      v37 = strlen(v31) + v151 + 20;
      v38 = v37 & 0xFFFFFFFFFFFF0000LL;
      v39 = v37 & 0xFFF0;
      v40 = &v148[-v38];
      if ( v148 != (_BYTE *)v40 )
      {
        do
          v147 = 0;
        while ( v145 != v40 );
      }
      v145[0] = 0;
      if ( v39 >= 0x400uLL )
        v147 = 0;
      v41 = stpcpy(v146, (unsigned __int64)v31);
      v42 = v151;
      *(_WORD *)v41 = 47;
      *(_DWORD *)(j_memcpy(v41 + 1) + v42) = 7302446;
      v43 = strlen(v36) + 16;
      v52 = v43 & 0xFFFFFFFFFFFF0000LL;
      v53 = v43 & 0xFFF0;
      v54 = (_QWORD *)((char *)v145 - v52);
      if ( v145 != v54 )
      {
        do
          v144 = 0;
        while ( &v142 != v54 );
      }
      v142 = 0;
      if ( v53 >= 0x400uLL )
        v144 = 0;
      v162 = "POSIX";
      v159 = &v164;
      v154 = &_libc_enable_secure;
      while ( 1 )
      {
        while ( 1 )
        {
LABEL_41:
          while ( 1 )
          {
            v55 = *v36;
            if ( v55 != 58 )
              break;
            ++v36;
          }
          if ( !*v36 )
          {
            LOWORD(v143[0]) = 67;
            goto LABEL_44;
          }
          v75 = v143;
          do
          {
            *(_BYTE *)v75 = v55;
            v75 = (unsigned __int64 *)((char *)v75 + 1);
            v76 = *++v36;
            v55 = v76;
          }
          while ( v76 != 58 && v55 != 0 );
          v78 = v154;
          *(_BYTE *)v75 = 0;
          if ( !*v78 || !strchr((__int64)v143, 0x2Fu) )
          {
            if ( LOBYTE(v143[0]) == 67 && (BYTE1(v143[0]) == 46 || BYTE1(v143[0]) == 0) )
              goto LABEL_44;
            if ( !(unsigned int)strcmp(v143, (unsigned __int64)v162) )
              goto LABEL_44;
            domain = nl_find_domain((__int64)v30, (__int64)v143, (__int64)v146, (__int64)v15);
            v80 = domain;
            if ( domain )
              break;
          }
        }
        msg = nl_find_msg(domain, (__int64)v15, a2, 1, v159);
        v82 = (const char *)msg;
        if ( msg )
          break;
        v86 = *(_QWORD *)(v80 + 32);
        if ( v86 )
        {
          v149 = v30;
          v150 = v36;
          v87 = 0;
          v88 = v159;
          while ( 1 )
          {
            v89 = nl_find_msg(v86, (__int64)v15, a2, 1, v88);
            if ( v89 == -1 )
              goto LABEL_44;
            if ( v89 )
            {
              v82 = (const char *)v89;
              v80 = *(_QWORD *)(v80 + 8LL * (int)v87 + 32);
              goto LABEL_76;
            }
            ++v87;
            v86 = *(_QWORD *)(v80 + 32 + 8 * v87);
            if ( !v86 )
            {
              v30 = v149;
              v36 = v150;
              goto LABEL_41;
            }
          }
        }
      }
      if ( msg == -1 )
        goto LABEL_44;
LABEL_76:
      v162 = v82;
      free((__int64)v163, v44, v45, v46, v47, v48, v49, v50, v51);
      v83 = v162;
      if ( v153 )
      {
        v84 = *v153;
        v85 = v164;
        *(_DWORD *)(v84 + 24) = nl_msg_cat_cntr;
        *(_QWORD *)(v84 + 32) = v80;
        *(_QWORD *)(v84 + 40) = v83;
        *(_QWORD *)(v84 + 48) = v85;
      }
      else
      {
        v96 = strlen(a2);
        v97 = v152;
        v98 = v96 + 1;
        v99 = strlen(v152);
        v100 = v151;
        v114 = malloc(
                 v99 + v98 + v151 + 58,
                 v106,
                 v107,
                 v108,
                 v109,
                 v110,
                 v111,
                 v112,
                 v113,
                 v151 + 58,
                 v101,
                 v102,
                 v103,
                 v104,
                 v105);
        v83 = v162;
        if ( v114 )
        {
          v115 = _mempcpy_chk(v114 + 56, a2);
          j_memcpy(v115);
          v116 = strcpy(v115 + v100 + 1, v97);
          v117 = v162;
          v118 = v164;
          *(_QWORD *)v114 = v115;
          v119 = nl_msg_cat_cntr;
          *(_DWORD *)(v114 + 8) = a6;
          *(_QWORD *)(v114 + 16) = v116;
          *(_DWORD *)(v114 + 24) = v119;
          *(_QWORD *)(v114 + 32) = v80;
          *(_QWORD *)(v114 + 40) = v117;
          *(_QWORD *)(v114 + 48) = v118;
          pthread_rwlock_wrlock(&tree_lock);
          v132 = tsearch(
                   v114,
                   (unsigned __int64 *)&root,
                   (unsigned __int64)transcmp,
                   v120,
                   v121,
                   v122,
                   v123,
                   v124,
                   v125,
                   v126,
                   v127,
                   v128,
                   v129,
                   v130,
                   v131);
          pthread_rwlock_unlock((unsigned int *)&tree_lock);
          v83 = v162;
          if ( !v132 || *v132 != v114 )
          {
            free(v114, v133, v134, v135, v136, v137, v138, v139, v140);
            v83 = v162;
          }
        }
      }
      *(_DWORD *)(StatusReg + v156) = v160;
      if ( v161 )
      {
        v90 = *(_QWORD *)(v80 + 16);
        v162 = v83;
        v91 = v164;
        v92 = plural_eval(*(int **)(v90 + 184), v158);
        v83 = v162;
        if ( v92 < *(_QWORD *)(v90 + 192) )
        {
          v93 = &v162[v91];
          v94 = v162;
          v95 = v162;
          while ( --v92 != -1 )
          {
            v94 += strlen(v94) + 1;
            if ( v94 >= v93 )
            {
              v83 = v95;
              goto LABEL_79;
            }
          }
          v83 = v94;
        }
      }
LABEL_79:
      v162 = v83;
      pthread_rwlock_unlock(nl_state_lock);
      pthread_rwlock_unlock((unsigned int *)&_libc_setlocale_lock);
      return v162;
    }
    while ( 1 )
    {
      v16 = strcmp(a1, (unsigned __int64)(v15 + 3));
      if ( !v16 )
        break;
      if ( v16 < 0 )
      {
        v15 = 0;
        v30 = "/usr/share/locale";
        goto LABEL_24;
      }
      v15 = (_QWORD *)*v15;
      if ( !v15 )
        goto LABEL_52;
    }
    v30 = (const char *)v15[1];
    if ( *v30 == 47 )
      goto LABEL_24;
    v57 = getcwd(0, 0, v22, v23, v24, v25, v26, v27, v28, v29, v17, v18, v19, v20, v21);
    v58 = (__int64)v57;
    if ( v57 )
    {
      v59 = _asprintf_chk((__int64)&v163, 2, "%s/%s", v57, v30);
      free(v58, v60, v61, v62, v63, v64, v65, v66, v67);
      if ( (v59 & 0x80000000) == 0 )
      {
        v30 = v163;
        goto LABEL_24;
      }
    }
LABEL_44:
    free((__int64)v163, v44, v45, v46, v47, v48, v49, v50, v51);
    pthread_rwlock_unlock(nl_state_lock);
    pthread_rwlock_unlock((unsigned int *)&_libc_setlocale_lock);
    *(_DWORD *)(StatusReg + v156) = v160;
    if ( v161 )
      v56 = v158 == 1;
    else
      v56 = 1;
    if ( !v56 )
      return (const char *)v157;
    return (const char *)a2;
  }
  v68 = (const char *)v14[5];
  if ( v161 )
  {
    v69 = v14[4];
    v162 = (const char *)v14[5];
    v70 = *(_QWORD *)(v69 + 16);
    v71 = v14[6];
    v72 = plural_eval(*(int **)(v70 + 184), v158);
    v68 = v162;
    if ( v72 < *(_QWORD *)(v70 + 192) )
    {
      v73 = &v162[v71];
      v74 = v162;
      while ( --v72 != -1 )
      {
        v74 += strlen(v74) + 1;
        if ( v74 >= v73 )
        {
          v68 = v162;
          goto LABEL_56;
        }
      }
      v68 = v74;
    }
  }
LABEL_56:
  v162 = v68;
  pthread_rwlock_unlock(nl_state_lock);
  pthread_rwlock_unlock((unsigned int *)&_libc_setlocale_lock);
  v10 = v162;
  *(_DWORD *)(StatusReg + v156) = v160;
  return v10;
}
