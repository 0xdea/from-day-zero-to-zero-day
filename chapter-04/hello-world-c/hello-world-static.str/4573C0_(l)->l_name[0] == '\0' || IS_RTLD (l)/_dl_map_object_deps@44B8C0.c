__int64 *__fastcall dl_map_object_deps(__int64 a1, __int64 a2, int a3, int a4, int a5)
{
  __int64 v5; // x5
  __int64 v7; // x0
  _QWORD *v8; // x3
  unsigned __int16 v9; // w0
  _DWORD *v10; // x19
  _BYTE *v11; // x0
  __int64 v12; // x3
  int v13; // w5
  __int64 v14; // x4
  __int64 v15; // x22
  __int64 StatusReg; // x2
  _BYTE *v17; // x3
  __int64 *v18; // x0
  __int64 v19; // x4
  __int64 v20; // x1
  __int64 v21; // x25
  unsigned int v22; // w24
  _QWORD *v23; // x0
  _QWORD *v24; // x20
  char v25; // w0
  bool v26; // zf
  _DWORD *v27; // x0
  unsigned int v28; // w20
  char v29; // w0
  unsigned int *v30; // x1
  __int64 *v31; // x21
  __int64 v32; // x0
  char *v33; // x20
  __int64 v34; // x26
  __int64 v35; // x0
  __int64 v36; // x1
  __int64 v37; // x3
  __int64 v38; // x0
  unsigned __int64 v39; // x0
  unsigned __int64 v40; // x1
  __int64 v41; // x0
  unsigned __int64 v42; // x1
  unsigned __int16 v43; // w0
  __int64 *v44; // x1
  __int64 v45; // x0
  int v46; // w2
  __int64 v47; // t1
  __int64 v48; // x2
  __int64 v49; // x4
  __int64 v50; // x1
  __int64 v51; // x2
  __int64 v52; // x0
  __int64 v53; // x0
  unsigned __int64 v54; // x3
  unsigned __int64 v55; // x1
  __int64 v56; // x0
  unsigned __int64 v57; // x1
  unsigned __int16 v58; // w0
  __int64 *v59; // x1
  char *v60; // x0
  __int64 v61; // x0
  __int64 v62; // x0
  __int64 v63; // x1
  bool v64; // zf
  __int64 v65; // x4
  __int64 v66; // x28
  int v67; // w0
  unsigned int v68; // w25
  unsigned int v69; // w26
  __int64 *v70; // x27
  __int64 v71; // x1
  __int16 *v72; // x2
  unsigned int *v73; // x7
  __int64 v74; // x5
  __int64 *v75; // x0
  __int64 *v76; // x3
  __int64 v77; // t1
  _DWORD *v78; // x24
  unsigned int v79; // w22
  __int64 v80; // x0
  __int64 v81; // x0
  unsigned int v82; // w0
  unsigned int v83; // w22
  __int64 *v84; // x1
  __int64 v85; // t1
  __int64 v86; // x0
  __int64 v87; // x1
  char v88; // w0
  __int64 v89; // x0
  __int64 *result; // x0
  __int64 *v91; // x3
  __int64 v92; // x1
  __int64 v93; // x0
  __int64 v94; // x1
  __int64 v95; // x3
  __int64 v96; // x1
  __int64 v97; // x0
  __int64 origin; // x0
  __int64 v99; // x0
  __int64 *v100; // x1
  __int64 v101; // x3
  __int64 *v102; // x3
  const char *v103; // x2
  __int64 v104; // [xsp+8h] [xbp-30040h] BYREF
  __int64 v105; // [xsp+10h] [xbp-30038h]
  __int64 v106; // [xsp+18h] [xbp-30030h] BYREF
  char v107[1008]; // [xsp+28h] [xbp-30020h] BYREF
  __int64 v108; // [xsp+418h] [xbp-2FC30h]
  _QWORD v109[2]; // [xsp+10018h] [xbp-20030h] BYREF
  int v110; // [xsp+10028h] [xbp-20020h] BYREF
  __int64 v111; // [xsp+10030h] [xbp-20018h]
  __int64 v112; // [xsp+10038h] [xbp-20010h] BYREF
  char v113[1008]; // [xsp+10048h] [xbp-20000h] BYREF
  __int64 v114; // [xsp+10438h] [xbp-1FC10h]
  _QWORD v115[2]; // [xsp+20038h] [xbp-10010h] BYREF
  _DWORD v116[2]; // [xsp+20048h] [xbp-10000h] BYREF
  __int64 v117; // [xsp+20050h] [xbp-FFF8h]
  _BYTE *v118; // [xsp+20058h] [xbp-FFF0h]
  _BYTE v119[984]; // [xsp+20060h] [xbp-FFE8h] BYREF
  __int64 v120; // [xsp+20438h] [xbp-FC10h]
  _BYTE v121[16]; // [xsp+30038h] [xbp-10h] BYREF
  __int64 v122; // [xsp+300A8h] [xbp+60h]
  _BYTE *v123; // [xsp+300B0h] [xbp+68h]
  __int64 v124; // [xsp+300B8h] [xbp+70h]
  __int64 v125; // [xsp+300C0h] [xbp+78h]
  unsigned int v126; // [xsp+300CCh] [xbp+84h]
  __int64 *v127; // [xsp+300D0h] [xbp+88h]
  int *v128; // [xsp+300D8h] [xbp+90h]
  _DWORD *v129; // [xsp+300E0h] [xbp+98h]
  __int64 v130; // [xsp+300E8h] [xbp+A0h]
  int v131; // [xsp+300F0h] [xbp+A8h]
  int v132; // [xsp+300F4h] [xbp+ACh]
  __int64 *v133; // [xsp+300F8h] [xbp+B0h]
  __int64 *v134; // [xsp+30100h] [xbp+B8h]
  __int64 v135; // [xsp+30108h] [xbp+C0h]
  unsigned int *v136; // [xsp+30110h] [xbp+C8h]
  char v137[8]; // [xsp+30118h] [xbp+D0h] BYREF
  __int64 v138; // [xsp+30120h] [xbp+D8h]
  __int64 v139; // [xsp+30130h] [xbp+E8h] BYREF
  int v140; // [xsp+30138h] [xbp+F0h]
  int v141; // [xsp+3013Ch] [xbp+F4h]
  unsigned int *v142; // [xsp+30140h] [xbp+F8h]
  char *v143; // [xsp+30148h] [xbp+100h]
  __int64 v144; // [xsp+30150h] [xbp+108h]
  _QWORD v145[2]; // [xsp+30158h] [xbp+110h] BYREF
  _BYTE v146[1024]; // [xsp+30168h] [xbp+120h] BYREF

  v5 = (unsigned int)(a3 + 2);
  v7 = 24LL * (unsigned int)v5 + 15;
  v131 = a5;
  v132 = a4;
  v8 = &v121[-(v7 & 0x3FFFFF0000LL)];
  v9 = v7 & 0xFFF0;
  if ( v121 != (_BYTE *)v8 )
  {
    do
      v120 = 0;
    while ( v115 != v8 );
  }
  v115[0] = 0;
  if ( v9 >= 0x400uLL )
    v120 = 0;
  v10 = v116;
  v116[0] = 0;
  v11 = v119;
  v117 = a1;
  v118 = v119;
  *(_WORD *)(a1 + 868) = *(_WORD *)(a1 + 868) & 0xFF3F | 0x40;
  if ( a3 )
  {
    v12 = 0;
    do
    {
      v13 = v12 + 2;
      *(_DWORD *)v11 = 0;
      v14 = *(_QWORD *)(a2 + 8 * v12++);
      *((_QWORD *)v11 + 1) = v14;
      *((_QWORD *)v11 + 2) = &v116[6 * v13];
      v11 += 24;
      v5 = *(_WORD *)(v14 + 868) & 0xFF3F | 0x40u;
      *(_WORD *)(v14 + 868) = *(_WORD *)(v14 + 868) & 0xFF3F | 0x40;
    }
    while ( v12 != a3 );
    v15 = v117;
    v134 = (__int64 *)&v116[6 * a3];
    LODWORD(v135) = a3 + 1;
  }
  else
  {
    v15 = a1;
    v134 = (__int64 *)v116;
    LODWORD(v135) = 1;
  }
  StatusReg = _ReadStatusReg(TPIDR_EL0);
  v128 = &dl_debug_mask;
  v129 = v116;
  v145[1] = 1024;
  v17 = v146;
  v18 = v134;
  v125 = 40;
  v19 = *(unsigned int *)(StatusReg + 40);
  *(_DWORD *)(StatusReg + 40) = 0;
  v20 = (__int64)v129;
  v18[2] = 0;
  v21 = *(_QWORD *)(v15 + 776);
  v145[0] = v146;
  *(_DWORD *)v20 = 1;
  v123 = v146;
  v124 = StatusReg;
  v126 = v19;
  if ( !v21 )
    goto LABEL_19;
LABEL_10:
  v21 = 0;
  while ( !*(_QWORD *)(v15 + 72) )
  {
    if ( *(_QWORD *)(v15 + 560) )
      break;
    v22 = 0;
    if ( *(_QWORD *)(v15 + 544) )
      break;
LABEL_14:
    if ( v21 )
    {
      *(_QWORD *)(v21 + 8LL * v22) = 0;
      v23 = (_QWORD *)malloc(8LL * (2 * (v22 + 1) + 1), v20, (__int16 *)StatusReg, (__int64)v17, v19, v5);
      v24 = v23;
      if ( !v23 )
      {
        if ( (_BYTE *)v145[0] != v123 )
          free(v145[0]);
        dl_signal_error(12, *(const char **)(a1 + 8), 0, "cannot allocate dependency list");
      }
      *v23 = v15;
      j_memcpy(v23 + 1);
      j_memcpy(&v24[v22 + 2]);
      __dmb(0xBu);
      v25 = *(_BYTE *)(v15 + 870);
      *(_QWORD *)(v15 + 1032) = v24;
      *(_BYTE *)(v15 + 870) = v25 | 0x10;
    }
    if ( *v129 )
    {
      while ( 1 )
      {
        v27 = (_DWORD *)*((_QWORD *)v129 + 2);
        v129 = v27;
        if ( !v27 )
          break;
        if ( !*v27 )
          goto LABEL_18;
      }
      v28 = 0;
      goto LABEL_81;
    }
LABEL_18:
    v20 = (__int64)v129;
    v15 = *((_QWORD *)v129 + 1);
    v21 = *(_QWORD *)(v15 + 776);
    *v129 = 1;
    if ( v21 )
      goto LABEL_10;
LABEL_19:
    if ( *(_QWORD *)(v15 + 1032) )
      v26 = 1;
    else
      v26 = a1 == v15;
    if ( !v26 )
    {
      v20 = *(unsigned __int16 *)(v15 + 770);
      if ( *(_WORD *)(v15 + 770) )
      {
        if ( (_libc_scratch_buffer_set_array_size(v145, *(unsigned __int16 *)(v15 + 770), 8) & 1) == 0 )
          dl_signal_error(12, *(const char **)(a1 + 8), 0, "cannot allocate dependency buffer");
        v21 = v145[0];
      }
    }
  }
  v29 = *(_BYTE *)(v15 + 870);
  v30 = *(unsigned int **)(*(_QWORD *)(v15 + 104) + 8LL);
  v136 = v30;
  if ( (v29 & 0x20) != 0 )
    v136 = (unsigned int *)((char *)v30 + *(_QWORD *)v15);
  v31 = *(__int64 **)(v15 + 16);
  v139 = v15;
  v140 = v132;
  v141 = v131;
  v32 = *v31;
  v20 = (__int64)v136;
  v142 = v136;
  if ( !v32 )
  {
    v22 = 0;
    goto LABEL_14;
  }
  v127 = (__int64 *)v129;
  v20 = (__int64)&v139;
  v133 = &v139;
  v22 = 0;
  if ( v32 != 1 )
  {
    while ( 1 )
    {
      v20 = 2147483645;
      if ( (v32 & 0xFFFFFFFFFFFFFFFDLL) == 0x7FFFFFFD )
        break;
LABEL_52:
      v47 = v31[2];
      v31 += 2;
      v32 = v47;
      if ( !v47 )
        goto LABEL_14;
      if ( v32 == 1 )
        goto LABEL_33;
    }
    v33 = (char *)v136 + v31[1];
    v48 = dl_dst_count((__int64)v33, (__int64)v136, StatusReg);
    if ( !v48 )
    {
LABEL_134:
      v143 = v33;
      if ( (dl_debug_mask & 1) != 0 )
      {
        v103 = *(const char **)(v15 + 8);
        if ( !*v103 )
        {
          v103 = (const char *)program_invocation_short_name[0];
          if ( !program_invocation_short_name[0] )
            v103 = "<main program>";
        }
        dl_debug_printf("load auxiliary object=%s requested by file=%s\n", v33, v103);
      }
      v28 = dl_catch_exception(v137, openaux, &v139);
      if ( v138 )
      {
        if ( *v31 != 2147483645 )
          goto LABEL_79;
        _kfifo_free((__kfifo *)v137);
        goto LABEL_52;
      }
      v91 = v127;
      StatusReg = (__int64)&v104;
      v92 = v127[1];
      v104 = *v127;
      v105 = v92;
      v106 = v127[2];
      v93 = v144;
      *(_DWORD *)v127 = 0;
      v91[1] = v93;
      if ( v21 )
      {
        *(_QWORD *)(v21 + 8LL * v22++) = v93;
        v93 = v144;
      }
      if ( (*(_WORD *)(v93 + 868) & 0xC0) != 0 )
      {
        v100 = &v104;
        do
        {
          v19 = (__int64)v100;
          v100 = (__int64 *)v100[2];
          if ( !v100 )
          {
            v17 = v127;
            v20 = v105;
            *v127 = v104;
            *((_QWORD *)v17 + 1) = v20;
            *((_QWORD *)v17 + 2) = v106;
            goto LABEL_52;
          }
        }
        while ( v100[1] != v93 );
        v5 = (__int64)v134;
        v127[2] = (__int64)&v104;
        v94 = *(_QWORD *)(v93 + 32);
        v101 = *(_QWORD *)(v19 + 16);
        *(_QWORD *)(v19 + 16) = *(_QWORD *)(v101 + 16);
        if ( v101 == v5 )
          v102 = (__int64 *)v19;
        else
          v102 = (__int64 *)v5;
        v134 = v102;
        if ( !v94 )
          goto LABEL_141;
      }
      else
      {
        v19 = 1;
        v127[2] = (__int64)&v104;
        LODWORD(v135) = v135 + 1;
        v94 = *(_QWORD *)(v93 + 32);
        *(_WORD *)(v93 + 868) = *(_WORD *)(v93 + 868) & 0xFF3F | 0x40;
        if ( !v94 )
        {
LABEL_141:
          v95 = *(_QWORD *)(v93 + 24);
          if ( v95 )
            *(_QWORD *)(v95 + 32) = v94;
          v96 = v105;
          *(_QWORD *)(v93 + 32) = *(_QWORD *)(v105 + 32);
          *(_QWORD *)(v96 + 32) = v93;
          v17 = *(_BYTE **)(v93 + 32);
          if ( v17 )
            *((_QWORD *)v17 + 3) = v93;
          *(_QWORD *)(v93 + 24) = v96;
          v20 = (__int64)v134;
          if ( v127 == v134 )
          {
            v127 = &v104;
            v134 = &v104;
          }
          else
          {
            v127 = &v104;
          }
          goto LABEL_52;
        }
      }
      *(_QWORD *)(v94 + 24) = *(_QWORD *)(v93 + 24);
      goto LABEL_141;
    }
    if ( _libc_enable_secure )
      goto LABEL_175;
    v130 = v48;
    v49 = strlen(v33);
    v50 = *(_QWORD *)(v15 + 912);
    v51 = v130;
    if ( v50 )
    {
      if ( v50 != -1 )
      {
        v52 = *(_QWORD *)(v15 + 912);
        v122 = v49;
        v53 = strlen(v52);
        v49 = v122;
        v54 = v53;
        v51 = v130;
LABEL_60:
        v55 = dl_platformlen;
        if ( (unsigned __int64)dl_platformlen < 0x15 )
          v55 = 21;
        if ( v55 < v54 )
          v55 = v54;
        v56 = v49 + (v55 - 4) * v51 + 15;
        v57 = v56 & 0xFFFFFFFFFFFF0000LL;
        v58 = v56 & 0xFFF0;
        v59 = (_QWORD *)((char *)v109 - v57);
        if ( v109 != v59 )
        {
          do
            v108 = 0;
          while ( &v106 != v59 );
        }
        v106 = 0;
        if ( v58 >= 0x400uLL )
          v108 = 0;
        v60 = dl_dst_substitute(v15, (unsigned __int8 *)v33, v107);
        if ( !*v60 )
        {
          v20 = *v31;
          if ( *v31 == 2147483645 )
            dl_signal_error(0, v33, 0, "empty dynamic string token substitution");
          if ( (dl_debug_mask & 1) != 0 )
            goto LABEL_71;
          goto LABEL_52;
        }
        v33 = v60;
        goto LABEL_134;
      }
    }
    else
    {
      v97 = **(unsigned __int8 **)(v15 + 8);
      if ( **(_BYTE **)(v15 + 8) )
        _libc_assert_fail(
          "(l)->l_name[0] == '\\0' || IS_RTLD (l)",
          (__int64)"dl-deps.c",
          0x10Fu,
          (__int64)"_dl_map_object_deps");
      v122 = v49;
      origin = dl_get_origin(v97);
      *(_QWORD *)(v15 + 912) = origin;
      v49 = v122;
      v51 = v130;
      if ( (unsigned __int64)(origin - 1) <= 0xFFFFFFFFFFFFFFFDLL )
      {
        v99 = strlen(origin);
        v49 = v122;
        v54 = v99;
        v51 = v130;
        goto LABEL_60;
      }
    }
    v54 = 0;
    goto LABEL_60;
  }
LABEL_33:
  v33 = (char *)v136 + v31[1];
  v34 = dl_dst_count((__int64)v33, v20, StatusReg);
  if ( !v34 )
  {
    v17 = v33;
    goto LABEL_47;
  }
  if ( _libc_enable_secure )
LABEL_175:
    dl_signal_error(0, v33, 0, "DST not allowed in SUID/SGID programs");
  v35 = strlen(v33);
  v36 = *(_QWORD *)(v15 + 912);
  v37 = v35;
  if ( !v36 )
  {
    v61 = **(unsigned __int8 **)(v15 + 8);
    if ( **(_BYTE **)(v15 + 8) )
      _libc_assert_fail(
        "(l)->l_name[0] == '\\0' || IS_RTLD (l)",
        (__int64)"dl-deps.c",
        0xE4u,
        (__int64)"_dl_map_object_deps");
    v130 = v37;
    v62 = dl_get_origin(v61);
    *(_QWORD *)(v15 + 912) = v62;
    v37 = v130;
    if ( (unsigned __int64)(v62 - 1) <= 0xFFFFFFFFFFFFFFFDLL )
    {
      v39 = strlen(v62);
      v37 = v130;
      goto LABEL_38;
    }
    goto LABEL_73;
  }
  if ( v36 == -1 )
  {
LABEL_73:
    v39 = 0;
    goto LABEL_38;
  }
  v38 = *(_QWORD *)(v15 + 912);
  v130 = v37;
  v39 = strlen(v38);
  v37 = v130;
LABEL_38:
  v40 = dl_platformlen;
  if ( (unsigned __int64)dl_platformlen < 0x15 )
    v40 = 21;
  if ( v40 < v39 )
    v40 = v39;
  v41 = v37 + (v40 - 4) * v34 + 15;
  v42 = v41 & 0xFFFFFFFFFFFF0000LL;
  v43 = v41 & 0xFFF0;
  v44 = (_QWORD *)((char *)v115 - v42);
  if ( v115 != v44 )
  {
    do
      v114 = 0;
    while ( &v112 != v44 );
  }
  v112 = 0;
  if ( v43 >= 0x400uLL )
    v114 = 0;
  v17 = dl_dst_substitute(v15, (unsigned __int8 *)v33, v113);
  if ( !*v17 )
  {
    if ( (*v128 & 1) == 0 )
      goto LABEL_52;
LABEL_71:
    dl_debug_printf("cannot load auxiliary `%s' because of empty dynamic string token substitution\n", v33);
    goto LABEL_52;
  }
LABEL_47:
  v143 = v17;
  v28 = dl_catch_exception(v137, openaux, v133);
  if ( !v138 )
  {
    v45 = v144;
    v20 = *(unsigned __int16 *)(v144 + 868);
    if ( (v20 & 0xC0) == 0 )
    {
      v109[1] = 0;
      v17 = v134;
      v110 = 0;
      v46 = v135;
      v111 = v144;
      v112 = 0;
      v134[2] = (__int64)&v110;
      v134 = (__int64 *)&v110;
      LODWORD(v135) = v46 + 1;
      StatusReg = 1;
      v20 = *(_WORD *)(v45 + 868) & 0xFF3F | 0x40u;
      *(_WORD *)(v45 + 868) = *(_WORD *)(v45 + 868) & 0xFF3F | 0x40;
    }
    if ( v21 )
      *(_QWORD *)(v21 + 8LL * v22++) = v45;
    goto LABEL_52;
  }
LABEL_79:
  if ( !v28 )
    v28 = -1;
LABEL_81:
  if ( (_BYTE *)v145[0] != v123 )
    free(v145[0]);
  v63 = v125;
  if ( *(_DWORD *)(v124 + v125) )
    v64 = 1;
  else
    v64 = v126 == 0;
  if ( !v64 )
  {
    StatusReg = v126;
    *(_DWORD *)(v124 + v125) = v126;
  }
  v134 = *(__int64 **)(a1 + 1032);
  if ( v134 )
  {
    if ( (*(_WORD *)(a1 + 868) & 3) == 2 )
    {
      if ( *(_QWORD *)(a1 + 776) )
        _libc_assert_fail(
          "map->l_searchlist.r_list == NULL",
          (__int64)"dl-deps.c",
          0x1C8u,
          (__int64)"_dl_map_object_deps");
    }
    else
    {
      v134 = 0;
    }
  }
  v66 = malloc(8LL * (unsigned int)(2 * v135 + 1), v63, (__int16 *)StatusReg, (__int64)v17, v19, v5);
  if ( !v66 )
    dl_signal_error(12, *(const char **)(a1 + 8), 0, "cannot allocate symbol search list");
  v67 = v135;
  v68 = 0;
  v69 = -1;
  *(_DWORD *)(a1 + 784) = v135;
  v70 = (__int64 *)(v66 + 8LL * (unsigned int)(v67 + 1));
  *(_QWORD *)(a1 + 776) = v70;
  do
  {
    v71 = *((_QWORD *)v10 + 1);
    if ( v132 && (*(_WORD *)(v71 + 868) & 0x4000) != 0 )
    {
      --*(_DWORD *)(a1 + 784);
    }
    else
    {
      v70[v68] = v71;
      if ( a1 == v71 )
        v69 = v68;
      ++v68;
    }
    v72 = (__int16 *)(*(_WORD *)(v71 + 868) & 0xFF3F);
    *(_WORD *)(v71 + 868) &= 0xFF3Fu;
    v10 = (_DWORD *)*((_QWORD *)v10 + 2);
  }
  while ( v10 );
  v73 = *(unsigned int **)(a1 + 1040);
  if ( !v73 )
    goto LABEL_118;
  v74 = *v73;
  if ( !v68 )
  {
    v78 = v73 + 2;
    *(_WORD *)(a1 + 868) &= 0xFF3Fu;
    if ( (_DWORD)v74 )
    {
LABEL_103:
      v79 = 0;
      v133 = (__int64 *)(v78 + 4);
      do
      {
        while ( 1 )
        {
          if ( (*(_WORD *)(*(_QWORD *)&v78[2 * v79] + 868LL) & 0xC0) != 0 )
          {
            v80 = *(unsigned int *)(a1 + 1048);
            v135 = v79;
            v136 = v73;
            v81 = malloc(8 * (v80 + 1), v71, v72, v79, v65, v74);
            v73 = v136;
            v10 = (_DWORD *)v81;
            if ( v81 )
              break;
          }
          if ( *v73 <= ++v79 )
            goto LABEL_114;
        }
        j_memcpy(v81 + 8);
        v73 = v136;
        v82 = *v136;
        if ( *v136 <= v79 + 1 )
        {
          *v10 = v79;
          v83 = v79 + 1;
        }
        else
        {
          v71 = (__int64)v133;
          v72 = (__int16 *)&v78[2 * v79 + 2];
          v74 = (__int64)&v133[v82 - 2 - v79 + v135];
          do
          {
            v65 = *(unsigned __int16 *)(*(_QWORD *)v72 + 868LL);
            if ( (v65 & 0xC0) == 0 )
            {
              v65 = (__int64)&v10[2 * v79++];
              *(_QWORD *)(v65 + 8) = *(_QWORD *)v72;
            }
            v72 += 4;
          }
          while ( (__int16 *)v74 != v72 );
          *v10 = v79;
          v83 = v82;
        }
        v79 = v83 + 1;
      }
      while ( *v73 > v79 );
LABEL_114:
      if ( v68 )
      {
        v76 = &v70[v68];
        goto LABEL_116;
      }
    }
    goto LABEL_162;
  }
  v75 = (__int64 *)(v66 + 8LL * (unsigned int)(v67 + 1));
  v76 = &v70[v68];
  v65 = 1;
  do
  {
    v77 = *v75++;
    v71 = v77;
    v72 = (__int16 *)(*(_WORD *)(v77 + 868) & 0xFF3F | 0x40u);
    *(_WORD *)(v77 + 868) = *(_WORD *)(v77 + 868) & 0xFF3F | 0x40;
  }
  while ( v75 != v76 );
  v78 = v73 + 2;
  *(_WORD *)(a1 + 868) &= 0xFF3Fu;
  if ( (_DWORD)v74 )
    goto LABEL_103;
LABEL_116:
  v84 = v70;
  do
  {
    v85 = *v84++;
    *(_WORD *)(v85 + 868) &= 0xFF3Fu;
  }
  while ( v84 != v76 );
LABEL_118:
  if ( v69 >= v68 )
LABEL_162:
    _libc_assert_fail("map_index < nlist", (__int64)"dl-deps.c", 0x214u, (__int64)"_dl_map_object_deps");
  if ( v69 )
  {
    v86 = 0;
    *(_QWORD *)v66 = v70[v69];
    do
    {
      *(_QWORD *)(v66 + 8 + v86 * 8) = v70[v86];
      ++v86;
    }
    while ( v69 != v86 );
    if ( v69 + 1 < v68 )
    {
      v87 = v69 + 1;
      do
      {
        *(_QWORD *)(v66 + v87 * 8) = v70[v87];
        ++v87;
      }
      while ( v68 - 2 - v69 + v69 + 1 + 1LL != v87 );
    }
  }
  else
  {
    j_memcpy(v66);
  }
  dl_sort_maps(v66, v68, (&dl_ns)[21 * *(_QWORD *)(*(_QWORD *)v66 + 48LL) + 4] != *(__int64 **)v66, 0);
  *(_QWORD *)(v66 + 8LL * v68) = 0;
  __dmb(0xBu);
  v88 = *(_BYTE *)(a1 + 870);
  *(_QWORD *)(a1 + 1032) = v66;
  *(_BYTE *)(a1 + 870) = v88 | 0x10;
  if ( v10 )
  {
    __dmb(0xBu);
    v89 = *(_QWORD *)(a1 + 1040);
    *(_QWORD *)(a1 + 1040) = v10;
    dl_scope_free(v89);
  }
  result = v134;
  if ( v134 )
    result = (__int64 *)dl_scope_free(v134);
  if ( v28 )
  {
    if ( v28 == -1 )
      v28 = 0;
    dl_signal_exception(v28, v137, 0);
  }
  return result;
}
