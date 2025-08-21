__int64 __fastcall nl_find_msg(__int64 a1, __int64 a2, __int64 a3, int a4, _QWORD *a5)
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
  unsigned int *v21; // x3
  __int64 v22; // x4
  bool v23; // cc
  unsigned int v24; // w0
  unsigned int v25; // w1
  unsigned int v26; // w0
  unsigned __int64 v27; // x23
  _QWORD *v28; // x6
  unsigned __int64 v29; // x21
  unsigned __int64 v30; // x26
  __int64 v31; // x1
  __int64 *v32; // x2
  __int64 v33; // x26
  __int64 v34; // x23
  unsigned __int64 v35; // x23
  unsigned __int64 v36; // x27
  __int64 v37; // x2
  unsigned int v38; // w3
  int v39; // w0
  __int64 v41; // x23
  unsigned int v42; // w26
  unsigned int v43; // w0
  __int64 v44; // x25
  __int64 v45; // x27
  __int64 v46; // x28
  _QWORD *v47; // x24
  __int64 v48; // x0
  __int64 *v49; // x0
  _BYTE *v50; // x0
  _BYTE *v51; // x28
  __int64 v52; // x1
  __int64 v53; // x2
  __int64 v54; // x3
  void *v55; // x4
  void *v56; // x5
  void *v57; // x6
  __int64 v58; // x1
  __int16 *v59; // x2
  int v60; // w28
  _QWORD *v61; // x0
  int v62; // w0
  __int64 *v63; // x25
  __int64 v64; // x1
  __int64 v65; // x4
  __int64 v66; // x5
  __int64 v67; // x27
  __int64 v68; // x20
  __int64 v69; // x3
  _QWORD *v70; // x28
  __int64 v71; // t1
  __int64 v72; // x27
  __int64 v73; // x0
  __int64 v74; // x25
  __int64 v75; // x1
  __int64 v76; // x0
  __int64 msg; // x0
  __int64 v78; // x1
  __int64 v79; // x0
  __int64 v80; // x20
  __int64 v81; // x2
  __int64 v82; // x4
  __int64 *v83; // x1
  int v84; // w27
  __int64 v85; // x0
  __int64 v86; // x1
  __int64 v87; // x2
  __int64 v88; // x3
  void *v89; // x4
  void *v90; // x5
  void *v91; // x6
  __int64 v92; // x1
  __int16 *v93; // x2
  __int64 v94; // x4
  __int64 v95; // x5
  __int64 v96; // x0
  __int64 v97; // x3
  __int64 v98; // x4
  __int64 v99; // x7
  __int64 v100; // x2
  __int64 v101; // x0
  __int64 v102; // [xsp+0h] [xbp-10070h] BYREF
  _BYTE v103[1008]; // [xsp+10h] [xbp-10060h] BYREF
  __int64 v104; // [xsp+400h] [xbp-FC70h]
  _BYTE v105[16]; // [xsp+10000h] [xbp-70h] BYREF
  __int64 v106; // [xsp+10010h] [xbp-60h]
  _QWORD *v107; // [xsp+10018h] [xbp-58h]
  int v108; // [xsp+10024h] [xbp-4Ch]
  __int64 v109; // [xsp+10028h] [xbp-48h]
  __int64 *v110; // [xsp+10030h] [xbp-40h]
  __int64 v111; // [xsp+10038h] [xbp-38h]
  __int64 v112; // [xsp+10040h] [xbp-30h] BYREF
  __int64 v113; // [xsp+10048h] [xbp-28h] BYREF
  _BYTE v114[24]; // [xsp+10050h] [xbp-20h] BYREF

  v109 = a1;
  v6 = *(_DWORD *)(a1 + 8);
  v106 = a2;
  v107 = a5;
  v108 = a4;
  if ( v6 <= 0 )
    nl_load_domain();
  v7 = *(__int64 **)(v109 + 16);
  if ( !v7 )
    return 0;
  v8 = *((_DWORD *)v7 + 10);
  if ( v7[12] )
  {
    LODWORD(v110) = strlen(a3);
    v9 = _hash_string(a3);
    v10 = *((_DWORD *)v7 + 22);
    v111 = (unsigned int)v110;
    v11 = *((_DWORD *)v7 + 26);
    v12 = v7[12];
    v13 = v9 % (v10 - 2) + 1;
    v14 = v9 % v10;
    v15 = v10 - v13;
    v16 = v13 - v10;
    while ( 1 )
    {
      v25 = *(_DWORD *)(v12 + 4LL * v14);
      v26 = bswap32(v25);
      if ( v11 )
        v25 = v26;
      if ( !v25 )
        return 0;
      v27 = v25 - 1;
      if ( v8 > (unsigned int)v27 )
      {
        v17 = (unsigned int *)(v7[6] + 8LL * (v25 - 1));
        v18 = *v17;
        if ( *((_DWORD *)v7 + 6) )
        {
          if ( (unsigned int)v110 > bswap32(v18) )
            goto LABEL_10;
          v19 = *v7;
          v20 = bswap32(v17[1]);
        }
        else
        {
          if ( (unsigned int)v110 > v18 )
            goto LABEL_10;
          v19 = *v7;
          v20 = v17[1];
        }
        if ( !(unsigned int)strcmp(a3, v19 + v20) )
          goto LABEL_18;
      }
      else
      {
        v28 = (_QWORD *)(v7[9] + 16LL * ((unsigned int)v27 - v8));
        if ( *v28 > (unsigned __int64)v111 && !(unsigned int)strcmp(a3, v28[1]) )
        {
LABEL_18:
          v29 = v27;
          v30 = v8;
          goto LABEL_19;
        }
      }
LABEL_10:
      v23 = v15 > v14;
      v24 = v14 + v16;
      v14 += v13;
      if ( !v23 )
        v14 = v24;
    }
  }
  v30 = v8;
  v35 = 0;
  v36 = v8;
LABEL_24:
  if ( v36 <= v35 )
    return 0;
  while ( 1 )
  {
    v29 = (v36 + v35) >> 1;
    LODWORD(v37) = *(_DWORD *)(v7[6] + 8 * v29 + 4);
    v38 = bswap32(v37);
    if ( *((_DWORD *)v7 + 6) )
      v37 = v38;
    else
      v37 = (unsigned int)v37;
    v39 = strcmp(a3, *v7 + v37);
    if ( v39 < 0 )
    {
      v36 = (v36 + v35) >> 1;
      goto LABEL_24;
    }
    if ( !v39 )
      break;
    v35 = v29 + 1;
    if ( v36 <= v29 + 1 )
      return 0;
  }
LABEL_19:
  if ( v29 < v30 )
  {
    v31 = v7[7];
    v32 = (__int64 *)*((unsigned int *)v7 + 6);
    v21 = (unsigned int *)(v31 + 8 * v29);
    v41 = *v7;
    v42 = *v21;
    v43 = v21[1];
    if ( (_DWORD)v32 )
    {
      v42 = bswap32(v42);
      v34 = v41 + bswap32(v43);
    }
    else
    {
      v34 = v41 + v43;
    }
    v33 = v42 + 1;
  }
  else
  {
    v31 = v7[10];
    v32 = (__int64 *)(v31 + 16 * (v29 - v30));
    v33 = *v32;
    v34 = v32[1];
  }
  if ( !v108 )
    goto LABEL_22;
  if ( !v106 || (v44 = *(_QWORD *)(v106 + 16)) == 0 )
  {
    if ( output_charset_cached_1 )
    {
      v44 = output_charset_cache_0;
    }
    else
    {
      v50 = (_BYTE *)getenv("OUTPUT_CHARSET", v31, v32, v21, v22);
      v51 = v50;
      if ( v50 && *v50 )
      {
        v111 = strlen(v50) + 1;
        v96 = malloc(v111, v92, v93, v111, v94, v95);
        v44 = v96;
        if ( v96 )
        {
          _memcpy_chk(v96, v51, v111);
          output_charset_cache_0 = v44;
          output_charset_cached_1 = 1;
          goto LABEL_41;
        }
        output_charset_cached_1 = 1;
        output_charset_cache_0 = 0;
        goto LABEL_52;
      }
      output_charset_cached_1 = 1;
      v44 = output_charset_cache_0;
    }
    if ( v44 )
      goto LABEL_41;
LABEL_52:
    v44 = *(_QWORD *)(**(_QWORD **)(_ReadStatusReg(TPIDR_EL0) + 16) + 168LL);
  }
LABEL_41:
  v111 = (__int64)(v7 + 16);
  pthread_rwlock_rdlock((unsigned int *)v7 + 32);
  v45 = v7[15];
  v46 = 24 * v45 - 24;
  while ( v45 )
  {
    --v45;
    v47 = (_QWORD *)(v7[14] + v46);
    v46 -= 24;
    if ( !(unsigned int)strcmp(*v47, v44) )
      goto LABEL_44;
  }
  pthread_rwlock_unlock((unsigned int *)v111);
  pthread_rwlock_wrlock((pthread_rwlock_t *)v111);
  v67 = v7[15];
  v110 = (__int64 *)v7[14];
  v68 = 24 * v67;
  v69 = 24 * v67 - 24;
  v70 = (__int64 *)((char *)v110 + v69);
  while ( v67 )
  {
    v47 = v70;
    --v67;
    v71 = *v70;
    v70 -= 3;
    if ( !(unsigned int)strcmp(v71, v44) )
      goto LABEL_44;
  }
  if ( v110 )
    v72 = (__int64)realloc((__int64)v110, v68 + 24, (__int64)v110, v69, v65, v66);
  else
    v72 = malloc(v68 + 24, v64, 0, v69, v65, v66);
  if ( !v72 || (v7[14] = v72, v73 = strdup(v44), (v74 = v73) == 0) )
  {
    v34 = -1;
    pthread_rwlock_unlock((unsigned int *)v111);
    return v34;
  }
  v47 = (_QWORD *)(v72 + v68);
  *(_QWORD *)(v72 + v68) = v73;
  v75 = v106;
  v76 = v109;
  *(_QWORD *)(v72 + v68 + 8) = -1;
  msg = nl_find_msg(v76, v75, (__int64)&qword_456B08, 0, &v113);
  v78 = msg;
  if ( msg == -1 )
    return v78;
  if ( !msg )
    goto LABEL_89;
  v79 = strstr(msg, "charset=");
  if ( !v79 )
    goto LABEL_89;
  v80 = v79 + 8;
  v81 = strcspn(v79 + 8, " \t\n");
  v83 = (__int64 *)&v105[-((v81 + 16) & 0xFFFFFFFFFFFF0000LL)];
  if ( v105 != (_BYTE *)v83 )
  {
    do
      v104 = 0;
    while ( &v102 != v83 );
  }
  v102 = 0;
  if ( (((_WORD)v81 + 16) & 0xFFF0u) >= 0x400uLL )
    v104 = 0;
  *(_BYTE *)_mempcpy_chk(v103, v80, v81, v81 + 1, v82) = 0;
  _gconv_create_spec(v114, v103, v74);
  v114[16] = 1;
  v84 = _gconv_open(v114, v47 + 1, 1);
  QV4::ESTable::~ESTable((QV4::ESTable *)v114);
  if ( !v84 )
    goto LABEL_89;
  if ( v84 != -1 )
  {
    pthread_rwlock_unlock((unsigned int *)v111);
    free(v74);
    return 0;
  }
  v47[1] = -1;
LABEL_89:
  v85 = v7[15];
  v47[2] = 0;
  v7[15] = v85 + 1;
LABEL_44:
  pthread_rwlock_unlock((unsigned int *)v111);
  if ( v47[1] == -1 )
  {
LABEL_22:
    *v107 = v33;
    return v34;
  }
  v48 = v47[2];
  if ( v48 )
    goto LABEL_46;
  if ( _aarch64_cas4_acq(0, 1u, (atomic_uint *)lock_4) )
    _lll_lock_wait_private(lock_4, v86, v87, v88, v89, v90, v91);
  if ( v47[2] )
  {
LABEL_93:
    if ( (int)_aarch64_swp4_rel(0, (atomic_uint *)lock_4) > 1 )
      _lll_lock_wake_private(lock_4);
    v48 = v47[2];
LABEL_46:
    if ( v48 == -1 )
      return -1;
    v49 = *(__int64 **)(v48 + 8 * v29);
    if ( v49 )
    {
LABEL_48:
      v34 = (__int64)(v49 + 1);
      v33 = *v49;
      goto LABEL_22;
    }
    if ( _aarch64_cas4_acq(0, 1u, (atomic_uint *)lock_4) )
      _lll_lock_wait_private(lock_4, v52, v53, v54, v55, v56, v57);
  }
  else
  {
    v101 = calloc(v8 + *((_DWORD *)v7 + 16), 8u, v87, v88, (__int64)v89, (__int64)v90);
    v47[2] = v101;
    if ( !v101 )
    {
      v47[2] = -1;
      goto LABEL_93;
    }
  }
  v59 = (__int16 *)freemem_3;
  v58 = freemem_size_2;
  v112 = v34;
  v113 = freemem_3 + 8;
  if ( (unsigned __int64)freemem_size_2 <= 7 )
    goto LABEL_61;
  v60 = 0;
  v110 = &v113;
  v111 = (__int64)&v112;
  while ( 2 )
  {
    v62 = _gconv(v47[1], v111, v112 + v33, v110, v113 + v58 - 8, v114);
    if ( (v62 & 0xFFFFFFFB) == 0 )
    {
      v97 = v113;
      v98 = freemem_3;
      v99 = v47[2];
      v100 = freemem_size_2 - (v113 - freemem_3);
      *(_QWORD *)freemem_3 = v113 - freemem_3 - 8;
      *(_QWORD *)(v99 + 8 * v29) = v98;
      freemem_3 = v97 + (v100 & 7);
      freemem_size_2 = v100 & 0xFFFFFFFFFFFFFFF8LL;
      if ( (int)_aarch64_swp4_rel(0, (atomic_uint *)lock_4) > 1 )
        _lll_lock_wake_private(lock_4);
      v49 = *(__int64 **)(v47[2] + 8 * v29);
      goto LABEL_48;
    }
    if ( v62 != 5 )
    {
      if ( (int)_aarch64_swp4_rel(0, (atomic_uint *)lock_4) > 1 )
        _lll_lock_wake_private(lock_4);
      return 0;
    }
    v112 = v34;
    if ( !v60 )
    {
LABEL_61:
      freemem_size_2 = 4080;
      v61 = (_QWORD *)malloc(0xFF0u, v58, v59, v54, (__int64)v55, (__int64)v56);
      if ( !v61 )
        goto LABEL_74;
      v58 = 4072;
      v60 = 1;
      v110 = &v113;
      v111 = (__int64)&v112;
      *v61 = transmem_list;
      goto LABEL_63;
    }
    ++v60;
    v63 = (__int64 *)transmem_list;
    freemem_size_2 = 4080 * v60;
    v61 = realloc(transmem_list, 4080 * v60, (__int64)v59, v54, (__int64)v55, (__int64)v56);
    if ( v61 )
    {
      v58 = 4080 * v60 - 8LL;
LABEL_63:
      v113 = (__int64)(v61 + 2);
      freemem_3 = (__int64)(v61 + 1);
      freemem_size_2 = v58;
      transmem_list = (__int64)v61;
      continue;
    }
    break;
  }
  transmem_list = *v63;
  free(v63);
LABEL_74:
  freemem_3 = 0;
  freemem_size_2 = 0;
  if ( (int)_aarch64_swp4_rel(0, (atomic_uint *)lock_4) <= 1 )
    return -1;
  v34 = -1;
  _lll_lock_wake_private(lock_4);
  return v34;
}
