__int64 __fastcall nl_find_msg(__int64 a1, __int64 a2, unsigned __int64 *a3, int a4, _QWORD *a5)
{
  int v6; // w6
  __int64 *v7; // x22
  unsigned int v8; // w19
  unsigned int v9; // w0
  unsigned int v10; // w2
  int v11; // w26
  __int64 v12; // x27
  unsigned int v13; // w24
  unsigned int v14; // w28
  unsigned int v15; // w20
  unsigned int v16; // w21
  unsigned int *v17; // x10
  unsigned int v18; // w0
  __int64 v19; // x1
  __int64 v20; // x0
  bool v21; // cc
  unsigned int v22; // w0
  unsigned int v23; // w1
  unsigned int v24; // w0
  unsigned __int64 v25; // x23
  _QWORD *v26; // x6
  unsigned __int64 v27; // x21
  unsigned __int64 v28; // x26
  __int64 *v29; // x2
  __int64 v30; // x26
  __int64 v31; // x23
  unsigned __int64 v32; // x23
  unsigned __int64 v33; // x27
  __int64 v34; // x2
  unsigned int v35; // w3
  int v36; // w0
  unsigned int *v38; // x3
  __int64 v39; // x23
  unsigned int v40; // w26
  unsigned int v41; // w0
  unsigned __int64 v42; // x25
  __int64 v43; // x27
  __int64 v44; // x28
  unsigned __int64 **v45; // x24
  unsigned __int64 *v46; // x0
  __int64 *v47; // x0
  unsigned __int8 *v48; // x0
  __int64 v49; // x28
  __int64 v50; // x1
  __int64 v51; // x2
  __int64 v52; // x3
  void *v53; // x4
  void *v54; // x5
  void *v55; // x6
  double v56; // d0
  double v57; // d1
  double v58; // d2
  double v59; // d3
  double v60; // d4
  double v61; // d5
  double v62; // d6
  double v63; // d7
  __int64 v64; // x1
  __int64 v65; // x2
  int v66; // w28
  _QWORD *v67; // x0
  int v68; // w0
  __int64 *v69; // x25
  double v70; // d0
  double v71; // d1
  double v72; // d2
  double v73; // d3
  double v74; // d4
  double v75; // d5
  double v76; // d6
  double v77; // d7
  __int64 v78; // x1
  void *v79; // x4
  void *v80; // x5
  void *v81; // x6
  double v82; // d0
  double v83; // d1
  double v84; // d2
  double v85; // d3
  double v86; // d4
  double v87; // d5
  double v88; // d6
  double v89; // d7
  __int64 v90; // x27
  __int64 v91; // x20
  __int64 v92; // x3
  unsigned __int64 **v93; // x28
  unsigned __int64 *v94; // t1
  __int64 v95; // x1
  __int64 v96; // x2
  __int64 v97; // x3
  void *v98; // x4
  void *v99; // x5
  void *v100; // x6
  __int64 v101; // x27
  __int64 v102; // x0
  __int64 v103; // x25
  __int64 v104; // x1
  __int64 v105; // x0
  int8x16_t *msg; // x0
  int8x16_t *v107; // x1
  __int64 v108; // x0
  __int64 v109; // x20
  __int64 v110; // x2
  __int64 *v111; // x1
  int v112; // w27
  __int64 v113; // x0
  __int64 v114; // x1
  __int64 v115; // x2
  __int64 v116; // x3
  void *v117; // x4
  void *v118; // x5
  void *v119; // x6
  double v120; // d0
  double v121; // d1
  double v122; // d2
  double v123; // d3
  double v124; // d4
  double v125; // d5
  double v126; // d6
  double v127; // d7
  __int64 v128; // x1
  __int64 v129; // x2
  __int64 v130; // x3
  void *v131; // x4
  void *v132; // x5
  void *v133; // x6
  __int64 v134; // x1
  __int64 v135; // x2
  void *v136; // x4
  void *v137; // x5
  void *v138; // x6
  double v139; // d0
  double v140; // d1
  double v141; // d2
  double v142; // d3
  double v143; // d4
  double v144; // d5
  double v145; // d6
  double v146; // d7
  __int64 v147; // x0
  __int64 v148; // x1
  __int64 v149; // x2
  __int64 v150; // x3
  void *v151; // x4
  void *v152; // x5
  void *v153; // x6
  __int64 v154; // x3
  __int64 v155; // x4
  unsigned __int64 *v156; // x7
  __int64 v157; // x2
  __int64 v158; // x1
  __int64 v159; // x2
  __int64 v160; // x3
  void *v161; // x4
  void *v162; // x5
  void *v163; // x6
  __int64 v164; // x0
  double v165; // d0
  double v166; // d1
  double v167; // d2
  double v168; // d3
  double v169; // d4
  double v170; // d5
  double v171; // d6
  double v172; // d7
  __int64 v173; // [xsp+0h] [xbp-10070h] BYREF
  _BYTE v174[1008]; // [xsp+10h] [xbp-10060h] BYREF
  __int64 v175; // [xsp+400h] [xbp-FC70h]
  _BYTE v176[16]; // [xsp+10000h] [xbp-70h] BYREF
  __int64 v177; // [xsp+10010h] [xbp-60h]
  _QWORD *v178; // [xsp+10018h] [xbp-58h]
  int v179; // [xsp+10024h] [xbp-4Ch]
  __int64 v180; // [xsp+10028h] [xbp-48h]
  __int64 *v181; // [xsp+10030h] [xbp-40h]
  __int64 v182; // [xsp+10038h] [xbp-38h]
  __int64 v183; // [xsp+10040h] [xbp-30h] BYREF
  __int64 v184; // [xsp+10048h] [xbp-28h] BYREF
  _BYTE v185[24]; // [xsp+10050h] [xbp-20h] BYREF

  v180 = a1;
  v6 = *(_DWORD *)(a1 + 8);
  v177 = a2;
  v178 = a5;
  v179 = a4;
  if ( v6 <= 0 )
    nl_load_domain(a1, a2);
  v7 = *(__int64 **)(v180 + 16);
  if ( !v7 )
    return 0;
  v8 = *((_DWORD *)v7 + 10);
  if ( v7[12] )
  {
    LODWORD(v181) = strlen(a3);
    v9 = _hash_string(a3);
    v10 = *((_DWORD *)v7 + 22);
    v182 = (unsigned int)v181;
    v11 = *((_DWORD *)v7 + 26);
    v12 = v7[12];
    v13 = v9 % (v10 - 2) + 1;
    v14 = v9 % v10;
    v15 = v10 - v13;
    v16 = v13 - v10;
    while ( 1 )
    {
      v23 = *(_DWORD *)(v12 + 4LL * v14);
      v24 = bswap32(v23);
      if ( v11 )
        v23 = v24;
      if ( !v23 )
        return 0;
      v25 = v23 - 1;
      if ( v8 > (unsigned int)v25 )
      {
        v17 = (unsigned int *)(v7[6] + 8LL * (v23 - 1));
        v18 = *v17;
        if ( *((_DWORD *)v7 + 6) )
        {
          if ( (unsigned int)v181 > bswap32(v18) )
            goto LABEL_10;
          v19 = *v7;
          v20 = bswap32(v17[1]);
        }
        else
        {
          if ( (unsigned int)v181 > v18 )
            goto LABEL_10;
          v19 = *v7;
          v20 = v17[1];
        }
        if ( !(unsigned int)strcmp(a3, v19 + v20) )
          goto LABEL_18;
      }
      else
      {
        v26 = (_QWORD *)(v7[9] + 16LL * ((unsigned int)v25 - v8));
        if ( *v26 > (unsigned __int64)v182 && !(unsigned int)strcmp(a3, v26[1]) )
        {
LABEL_18:
          v27 = v25;
          v28 = v8;
          goto LABEL_19;
        }
      }
LABEL_10:
      v21 = v15 > v14;
      v22 = v14 + v16;
      v14 += v13;
      if ( !v21 )
        v14 = v22;
    }
  }
  v28 = v8;
  v32 = 0;
  v33 = v8;
LABEL_24:
  if ( v33 <= v32 )
    return 0;
  while ( 1 )
  {
    v27 = (v33 + v32) >> 1;
    LODWORD(v34) = *(_DWORD *)(v7[6] + 8 * v27 + 4);
    v35 = bswap32(v34);
    if ( *((_DWORD *)v7 + 6) )
      v34 = v35;
    else
      v34 = (unsigned int)v34;
    v36 = strcmp(a3, *v7 + v34);
    if ( v36 < 0 )
    {
      v33 = (v33 + v32) >> 1;
      goto LABEL_24;
    }
    if ( !v36 )
      break;
    v32 = v27 + 1;
    if ( v33 <= v27 + 1 )
      return 0;
  }
LABEL_19:
  if ( v27 < v28 )
  {
    v38 = (unsigned int *)(v7[7] + 8 * v27);
    v39 = *v7;
    v40 = *v38;
    v41 = v38[1];
    if ( *((_DWORD *)v7 + 6) )
    {
      v40 = bswap32(v40);
      v31 = v39 + bswap32(v41);
    }
    else
    {
      v31 = v39 + v41;
    }
    v30 = v40 + 1;
  }
  else
  {
    v29 = (__int64 *)(v7[10] + 16 * (v27 - v28));
    v30 = *v29;
    v31 = v29[1];
  }
  if ( !v179 )
    goto LABEL_22;
  if ( !v177 || (v42 = *(_QWORD *)(v177 + 16)) == 0 )
  {
    if ( output_charset_cached_1 )
    {
      v42 = output_charset_cache_0;
    }
    else
    {
      v48 = getenv("OUTPUT_CHARSET");
      v49 = (__int64)v48;
      if ( v48 && *v48 )
      {
        v182 = strlen(v48) + 1;
        v147 = malloc(v182, v139, v140, v141, v142, v143, v144, v145, v146, v134, v135, v182, v136, v137, v138);
        v42 = v147;
        if ( v147 )
        {
          _memcpy_chk(v147, v49, v182, v182);
          output_charset_cache_0 = v42;
          output_charset_cached_1 = 1;
          goto LABEL_41;
        }
        output_charset_cached_1 = 1;
        output_charset_cache_0 = 0;
        goto LABEL_52;
      }
      output_charset_cached_1 = 1;
      v42 = output_charset_cache_0;
    }
    if ( v42 )
      goto LABEL_41;
LABEL_52:
    v42 = *(_QWORD *)(**(_QWORD **)(_ReadStatusReg(TPIDR_EL0) + 16) + 168LL);
  }
LABEL_41:
  v182 = (__int64)(v7 + 16);
  pthread_rwlock_rdlock((unsigned int *)v7 + 32);
  v43 = v7[15];
  v44 = 24 * v43 - 24;
  while ( v43 )
  {
    --v43;
    v45 = (unsigned __int64 **)(v7[14] + v44);
    v44 -= 24;
    if ( !(unsigned int)strcmp(*v45, v42) )
      goto LABEL_44;
  }
  pthread_rwlock_unlock((unsigned int *)v182);
  pthread_rwlock_wrlock((pthread_rwlock_t *)v182);
  v90 = v7[15];
  v181 = (__int64 *)v7[14];
  v91 = 24 * v90;
  v92 = 24 * v90 - 24;
  v93 = (unsigned __int64 **)((char *)v181 + v92);
  while ( v90 )
  {
    v45 = v93;
    --v90;
    v94 = *v93;
    v93 -= 3;
    if ( !(unsigned int)strcmp(v94, v42) )
      goto LABEL_44;
  }
  if ( v181 )
    v101 = realloc((__int64)v181, v91 + 24, v82, v83, v84, v85, v86, v87, v88, v89, (__int64)v181, v92, v79, v80, v81);
  else
    v101 = malloc(v91 + 24, v82, v83, v84, v85, v86, v87, v88, v89, v78, 0, v92, v79, v80, v81);
  if ( !v101 || (v7[14] = v101, v102 = strdup(v42), (v103 = v102) == 0) )
  {
    v31 = -1;
    pthread_rwlock_unlock((unsigned int *)v182);
    return v31;
  }
  v45 = (unsigned __int64 **)(v101 + v91);
  *(_QWORD *)(v101 + v91) = v102;
  v104 = v177;
  v105 = v180;
  *(_QWORD *)(v101 + v91 + 8) = -1;
  msg = (int8x16_t *)nl_find_msg(v105, v104, &qword_456B08, 0, &v184);
  v107 = msg;
  if ( msg == (int8x16_t *)-1LL )
    return (__int64)v107;
  if ( !msg )
    goto LABEL_89;
  v108 = strstr(msg, (int8x16_t *)"charset=");
  if ( !v108 )
    goto LABEL_89;
  v109 = v108 + 8;
  v110 = strcspn(v108 + 8, " \t\n");
  v111 = (__int64 *)&v176[-((v110 + 16) & 0xFFFFFFFFFFFF0000LL)];
  if ( v176 != (_BYTE *)v111 )
  {
    do
      v175 = 0;
    while ( &v173 != v111 );
  }
  v173 = 0;
  if ( (((_WORD)v110 + 16) & 0xFFF0u) >= 0x400uLL )
    v175 = 0;
  *(_BYTE *)_mempcpy_chk(v174, v109) = 0;
  _gconv_create_spec(v185, v174, v103);
  v185[16] = 1;
  v112 = _gconv_open(v185, v45 + 1, 1);
  QV4::ESTable::~ESTable((QV4::ESTable *)v185);
  if ( !v112 )
    goto LABEL_89;
  if ( v112 != -1 )
  {
    pthread_rwlock_unlock((unsigned int *)v182);
    free(v103, v165, v166, v167, v168, v169, v170, v171, v172);
    return 0;
  }
  v45[1] = (unsigned __int64 *)-1LL;
LABEL_89:
  v113 = v7[15];
  v45[2] = 0;
  v7[15] = v113 + 1;
LABEL_44:
  pthread_rwlock_unlock((unsigned int *)v182);
  if ( v45[1] == (unsigned __int64 *)-1LL )
  {
LABEL_22:
    *v178 = v30;
    return v31;
  }
  v46 = v45[2];
  if ( v46 )
    goto LABEL_46;
  if ( _aarch64_cas4_acq(0, 1u, (atomic_uint *)lock_4) )
    _lll_lock_wait_private(lock_4, v120, v121, v122, v123, v124, v125, v126, v127, v114, v115, v116, v117, v118, v119);
  if ( v45[2] )
  {
LABEL_93:
    if ( (int)_aarch64_swp4_rel(0, (atomic_uint *)lock_4) > 1 )
      _lll_lock_wake_private(lock_4, v128, v129, v130, v131, v132, v133);
    v46 = v45[2];
LABEL_46:
    if ( v46 == (unsigned __int64 *)-1LL )
      return -1;
    v47 = (__int64 *)v46[v27];
    if ( v47 )
    {
LABEL_48:
      v31 = (__int64)(v47 + 1);
      v30 = *v47;
      goto LABEL_22;
    }
    if ( _aarch64_cas4_acq(0, 1u, (atomic_uint *)lock_4) )
      _lll_lock_wait_private(lock_4, v56, v57, v58, v59, v60, v61, v62, v63, v50, v51, v52, v53, v54, v55);
  }
  else
  {
    v164 = calloc(
             v8 + *((_DWORD *)v7 + 16),
             8u,
             v120,
             v121,
             v122,
             v123,
             v124,
             v125,
             v126,
             v127,
             v115,
             v116,
             v117,
             v118,
             v119);
    v45[2] = (unsigned __int64 *)v164;
    if ( !v164 )
    {
      v45[2] = (unsigned __int64 *)-1LL;
      goto LABEL_93;
    }
  }
  v65 = freemem_3;
  v64 = freemem_size_2;
  v183 = v31;
  v184 = freemem_3 + 8;
  if ( (unsigned __int64)freemem_size_2 <= 7 )
    goto LABEL_61;
  v66 = 0;
  v181 = &v184;
  v182 = (__int64)&v183;
  while ( 2 )
  {
    v68 = _gconv(v45[1], v182, v183 + v30, v181, v184 + v64 - 8, v185);
    if ( (v68 & 0xFFFFFFFB) == 0 )
    {
      v154 = v184;
      v155 = freemem_3;
      v156 = v45[2];
      v157 = freemem_size_2 - (v184 - freemem_3);
      *(_QWORD *)freemem_3 = v184 - freemem_3 - 8;
      v156[v27] = v155;
      freemem_3 = v154 + (v157 & 7);
      freemem_size_2 = v157 & 0xFFFFFFFFFFFFFFF8LL;
      if ( (int)_aarch64_swp4_rel(0, (atomic_uint *)lock_4) > 1 )
        _lll_lock_wake_private(lock_4, v158, v159, v160, v161, v162, v163);
      v47 = (__int64 *)v45[2][v27];
      goto LABEL_48;
    }
    if ( v68 != 5 )
    {
      if ( (int)_aarch64_swp4_rel(0, (atomic_uint *)lock_4) > 1 )
        _lll_lock_wake_private(lock_4, v148, v149, v150, v151, v152, v153);
      return 0;
    }
    v183 = v31;
    if ( !v66 )
    {
LABEL_61:
      freemem_size_2 = 4080;
      v67 = (_QWORD *)malloc(0xFF0u, v56, v57, v58, v59, v60, v61, v62, v63, v64, v65, v52, v53, v54, v55);
      if ( !v67 )
        goto LABEL_74;
      v64 = 4072;
      v66 = 1;
      v181 = &v184;
      v182 = (__int64)&v183;
      *v67 = transmem_list;
      goto LABEL_63;
    }
    ++v66;
    v69 = (__int64 *)transmem_list;
    freemem_size_2 = 4080 * v66;
    v67 = (_QWORD *)realloc(transmem_list, 4080 * v66, v56, v57, v58, v59, v60, v61, v62, v63, v65, v52, v53, v54, v55);
    if ( v67 )
    {
      v64 = 4080 * v66 - 8LL;
LABEL_63:
      v184 = (__int64)(v67 + 2);
      freemem_3 = (__int64)(v67 + 1);
      freemem_size_2 = v64;
      transmem_list = (__int64)v67;
      continue;
    }
    break;
  }
  transmem_list = *v69;
  free((__int64)v69, v70, v71, v72, v73, v74, v75, v76, v77);
LABEL_74:
  freemem_3 = 0;
  freemem_size_2 = 0;
  if ( (int)_aarch64_swp4_rel(0, (atomic_uint *)lock_4) <= 1 )
    return -1;
  v31 = -1;
  _lll_lock_wake_private(lock_4, v95, v96, v97, v98, v99, v100);
  return v31;
}
