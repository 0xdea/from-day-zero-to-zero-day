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
  __int64 v36; // x2
  __int64 v37; // x4
  __int64 v38; // x5
  __int64 v39; // x1
  __int64 v40; // x3
  __int64 v41; // x0
  unsigned __int64 v42; // x0
  unsigned __int64 v43; // x1
  __int64 v44; // x0
  unsigned __int64 v45; // x1
  unsigned __int16 v46; // w0
  __int64 *v47; // x1
  __int64 v48; // x0
  int v49; // w2
  __int64 v50; // t1
  __int64 v51; // x2
  __int64 v52; // x3
  __int64 v53; // x4
  __int64 v54; // x5
  __int64 v55; // x1
  __int64 v56; // x2
  __int64 v57; // x0
  __int64 v58; // x0
  unsigned __int64 v59; // x3
  unsigned __int64 v60; // x1
  __int64 v61; // x0
  unsigned __int64 v62; // x1
  unsigned __int16 v63; // w0
  __int64 *v64; // x1
  char *v65; // x0
  __int64 v66; // x0
  __int64 v67; // x0
  __int64 v68; // x1
  bool v69; // zf
  __int64 v70; // x4
  __int64 *v71; // x28
  int v72; // w0
  unsigned int v73; // w25
  unsigned int v74; // w26
  __int64 *v75; // x27
  __int64 v76; // x1
  __int16 *v77; // x2
  unsigned int *v78; // x7
  __int64 v79; // x5
  __int64 *v80; // x0
  __int64 *v81; // x3
  __int64 v82; // t1
  _DWORD *v83; // x24
  unsigned int v84; // w22
  __int64 v85; // x0
  __int64 v86; // x0
  unsigned int v87; // w0
  unsigned int v88; // w22
  __int64 *v89; // x1
  __int64 v90; // t1
  __int64 v91; // x0
  __int64 v92; // x1
  char v93; // w0
  __int64 v94; // x0
  __int64 *result; // x0
  __int64 *v96; // x3
  __int64 v97; // x1
  __int64 v98; // x0
  __int64 v99; // x1
  __int64 v100; // x3
  __int64 v101; // x1
  __int64 v102; // x0
  __int64 origin; // x0
  __int64 v104; // x0
  __int64 *v105; // x1
  __int64 v106; // x3
  __int64 *v107; // x3
  const char *v108; // x2
  __int64 v109; // [xsp+8h] [xbp-30040h] BYREF
  __int64 v110; // [xsp+10h] [xbp-30038h]
  __int64 v111; // [xsp+18h] [xbp-30030h] BYREF
  char v112[1008]; // [xsp+28h] [xbp-30020h] BYREF
  __int64 v113; // [xsp+418h] [xbp-2FC30h]
  _QWORD v114[2]; // [xsp+10018h] [xbp-20030h] BYREF
  int v115; // [xsp+10028h] [xbp-20020h] BYREF
  __int64 v116; // [xsp+10030h] [xbp-20018h]
  __int64 v117; // [xsp+10038h] [xbp-20010h] BYREF
  char v118[1008]; // [xsp+10048h] [xbp-20000h] BYREF
  __int64 v119; // [xsp+10438h] [xbp-1FC10h]
  _QWORD v120[2]; // [xsp+20038h] [xbp-10010h] BYREF
  _DWORD v121[2]; // [xsp+20048h] [xbp-10000h] BYREF
  __int64 v122; // [xsp+20050h] [xbp-FFF8h]
  _BYTE *v123; // [xsp+20058h] [xbp-FFF0h]
  _BYTE v124[984]; // [xsp+20060h] [xbp-FFE8h] BYREF
  __int64 v125; // [xsp+20438h] [xbp-FC10h]
  _BYTE v126[16]; // [xsp+30038h] [xbp-10h] BYREF
  __int64 v127; // [xsp+300A8h] [xbp+60h]
  _BYTE *v128; // [xsp+300B0h] [xbp+68h]
  __int64 v129; // [xsp+300B8h] [xbp+70h]
  __int64 v130; // [xsp+300C0h] [xbp+78h]
  unsigned int v131; // [xsp+300CCh] [xbp+84h]
  __int64 *v132; // [xsp+300D0h] [xbp+88h]
  int *v133; // [xsp+300D8h] [xbp+90h]
  _DWORD *v134; // [xsp+300E0h] [xbp+98h]
  __int64 v135; // [xsp+300E8h] [xbp+A0h]
  int v136; // [xsp+300F0h] [xbp+A8h]
  int v137; // [xsp+300F4h] [xbp+ACh]
  __int64 *v138; // [xsp+300F8h] [xbp+B0h]
  __int64 *v139; // [xsp+30100h] [xbp+B8h]
  __int64 v140; // [xsp+30108h] [xbp+C0h]
  unsigned int *v141; // [xsp+30110h] [xbp+C8h]
  char v142[8]; // [xsp+30118h] [xbp+D0h] BYREF
  __int64 v143; // [xsp+30120h] [xbp+D8h]
  __int64 v144; // [xsp+30130h] [xbp+E8h] BYREF
  int v145; // [xsp+30138h] [xbp+F0h]
  int v146; // [xsp+3013Ch] [xbp+F4h]
  unsigned int *v147; // [xsp+30140h] [xbp+F8h]
  char *v148; // [xsp+30148h] [xbp+100h]
  __int64 v149; // [xsp+30150h] [xbp+108h]
  _QWORD v150[2]; // [xsp+30158h] [xbp+110h] BYREF
  _BYTE v151[1024]; // [xsp+30168h] [xbp+120h] BYREF

  v5 = (unsigned int)(a3 + 2);
  v7 = 24LL * (unsigned int)v5 + 15;
  v136 = a5;
  v137 = a4;
  v8 = &v126[-(v7 & 0x3FFFFF0000LL)];
  v9 = v7 & 0xFFF0;
  if ( v126 != (_BYTE *)v8 )
  {
    do
      v125 = 0;
    while ( v120 != v8 );
  }
  v120[0] = 0;
  if ( v9 >= 0x400uLL )
    v125 = 0;
  v10 = v121;
  v121[0] = 0;
  v11 = v124;
  v122 = a1;
  v123 = v124;
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
      *((_QWORD *)v11 + 2) = &v121[6 * v13];
      v11 += 24;
      v5 = *(_WORD *)(v14 + 868) & 0xFF3F | 0x40u;
      *(_WORD *)(v14 + 868) = *(_WORD *)(v14 + 868) & 0xFF3F | 0x40;
    }
    while ( v12 != a3 );
    v15 = v122;
    v139 = (__int64 *)&v121[6 * a3];
    LODWORD(v140) = a3 + 1;
  }
  else
  {
    v15 = a1;
    v139 = (__int64 *)v121;
    LODWORD(v140) = 1;
  }
  StatusReg = _ReadStatusReg(TPIDR_EL0);
  v133 = &dl_debug_mask;
  v134 = v121;
  v150[1] = 1024;
  v17 = v151;
  v18 = v139;
  v130 = 40;
  v19 = *(unsigned int *)(StatusReg + 40);
  *(_DWORD *)(StatusReg + 40) = 0;
  v20 = (__int64)v134;
  v18[2] = 0;
  v21 = *(_QWORD *)(v15 + 776);
  v150[0] = v151;
  *(_DWORD *)v20 = 1;
  v128 = v151;
  v129 = StatusReg;
  v131 = v19;
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
        if ( (_BYTE *)v150[0] != v128 )
          free(v150[0]);
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
    if ( *v134 )
    {
      while ( 1 )
      {
        v27 = (_DWORD *)*((_QWORD *)v134 + 2);
        v134 = v27;
        if ( !v27 )
          break;
        if ( !*v27 )
          goto LABEL_18;
      }
      v28 = 0;
      goto LABEL_81;
    }
LABEL_18:
    v20 = (__int64)v134;
    v15 = *((_QWORD *)v134 + 1);
    v21 = *(_QWORD *)(v15 + 776);
    *v134 = 1;
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
        if ( (_libc_scratch_buffer_set_array_size(v150, *(unsigned __int16 *)(v15 + 770), 8) & 1) == 0 )
          dl_signal_error(12, *(const char **)(a1 + 8), 0, "cannot allocate dependency buffer");
        v21 = v150[0];
      }
    }
  }
  v29 = *(_BYTE *)(v15 + 870);
  v30 = *(unsigned int **)(*(_QWORD *)(v15 + 104) + 8LL);
  v141 = v30;
  if ( (v29 & 0x20) != 0 )
    v141 = (unsigned int *)((char *)v30 + *(_QWORD *)v15);
  v31 = *(__int64 **)(v15 + 16);
  v144 = v15;
  v145 = v137;
  v146 = v136;
  v32 = *v31;
  v20 = (__int64)v141;
  v147 = v141;
  if ( !v32 )
  {
    v22 = 0;
    goto LABEL_14;
  }
  v132 = (__int64 *)v134;
  v20 = (__int64)&v144;
  v138 = &v144;
  v22 = 0;
  if ( v32 != 1 )
  {
    while ( 1 )
    {
      v20 = 2147483645;
      if ( (v32 & 0xFFFFFFFFFFFFFFFDLL) == 0x7FFFFFFD )
        break;
LABEL_52:
      v50 = v31[2];
      v31 += 2;
      v32 = v50;
      if ( !v50 )
        goto LABEL_14;
      if ( v32 == 1 )
        goto LABEL_33;
    }
    v33 = (char *)v141 + v31[1];
    v51 = dl_dst_count((__int64)v33, (__int64)v141, StatusReg);
    if ( !v51 )
    {
LABEL_134:
      v148 = v33;
      if ( (dl_debug_mask & 1) != 0 )
      {
        v108 = *(const char **)(v15 + 8);
        if ( !*v108 )
        {
          v108 = (const char *)program_invocation_short_name[0];
          if ( !program_invocation_short_name[0] )
            v108 = "<main program>";
        }
        dl_debug_printf("load auxiliary object=%s requested by file=%s\n", v33, v108);
      }
      v28 = dl_catch_exception(v142, openaux, &v144);
      if ( v143 )
      {
        if ( *v31 != 2147483645 )
          goto LABEL_79;
        _kfifo_free((__kfifo *)v142);
        goto LABEL_52;
      }
      v96 = v132;
      StatusReg = (__int64)&v109;
      v97 = v132[1];
      v109 = *v132;
      v110 = v97;
      v111 = v132[2];
      v98 = v149;
      *(_DWORD *)v132 = 0;
      v96[1] = v98;
      if ( v21 )
      {
        *(_QWORD *)(v21 + 8LL * v22++) = v98;
        v98 = v149;
      }
      if ( (*(_WORD *)(v98 + 868) & 0xC0) != 0 )
      {
        v105 = &v109;
        do
        {
          v19 = (__int64)v105;
          v105 = (__int64 *)v105[2];
          if ( !v105 )
          {
            v17 = v132;
            v20 = v110;
            *v132 = v109;
            *((_QWORD *)v17 + 1) = v20;
            *((_QWORD *)v17 + 2) = v111;
            goto LABEL_52;
          }
        }
        while ( v105[1] != v98 );
        v5 = (__int64)v139;
        v132[2] = (__int64)&v109;
        v99 = *(_QWORD *)(v98 + 32);
        v106 = *(_QWORD *)(v19 + 16);
        *(_QWORD *)(v19 + 16) = *(_QWORD *)(v106 + 16);
        if ( v106 == v5 )
          v107 = (__int64 *)v19;
        else
          v107 = (__int64 *)v5;
        v139 = v107;
        if ( !v99 )
          goto LABEL_141;
      }
      else
      {
        v19 = 1;
        v132[2] = (__int64)&v109;
        LODWORD(v140) = v140 + 1;
        v99 = *(_QWORD *)(v98 + 32);
        *(_WORD *)(v98 + 868) = *(_WORD *)(v98 + 868) & 0xFF3F | 0x40;
        if ( !v99 )
        {
LABEL_141:
          v100 = *(_QWORD *)(v98 + 24);
          if ( v100 )
            *(_QWORD *)(v100 + 32) = v99;
          v101 = v110;
          *(_QWORD *)(v98 + 32) = *(_QWORD *)(v110 + 32);
          *(_QWORD *)(v101 + 32) = v98;
          v17 = *(_BYTE **)(v98 + 32);
          if ( v17 )
            *((_QWORD *)v17 + 3) = v98;
          *(_QWORD *)(v98 + 24) = v101;
          v20 = (__int64)v139;
          if ( v132 == v139 )
          {
            v132 = &v109;
            v139 = &v109;
          }
          else
          {
            v132 = &v109;
          }
          goto LABEL_52;
        }
      }
      *(_QWORD *)(v99 + 24) = *(_QWORD *)(v98 + 24);
      goto LABEL_141;
    }
    if ( _libc_enable_secure )
      goto LABEL_175;
    v135 = v51;
    v53 = strlen(v33);
    v55 = *(_QWORD *)(v15 + 912);
    v56 = v135;
    if ( v55 )
    {
      if ( v55 != -1 )
      {
        v57 = *(_QWORD *)(v15 + 912);
        v127 = v53;
        v58 = strlen(v57);
        v53 = v127;
        v59 = v58;
        v56 = v135;
LABEL_60:
        v60 = dl_platformlen;
        if ( (unsigned __int64)dl_platformlen < 0x15 )
          v60 = 21;
        if ( v60 < v59 )
          v60 = v59;
        v61 = v53 + (v60 - 4) * v56 + 15;
        v62 = v61 & 0xFFFFFFFFFFFF0000LL;
        v63 = v61 & 0xFFF0;
        v64 = (_QWORD *)((char *)v114 - v62);
        if ( v114 != v64 )
        {
          do
            v113 = 0;
          while ( &v111 != v64 );
        }
        v111 = 0;
        if ( v63 >= 0x400uLL )
          v113 = 0;
        v65 = dl_dst_substitute(v15, (unsigned __int8 *)v33, v112);
        if ( !*v65 )
        {
          v20 = *v31;
          if ( *v31 == 2147483645 )
            dl_signal_error(0, v33, 0, "empty dynamic string token substitution");
          if ( (dl_debug_mask & 1) != 0 )
            goto LABEL_71;
          goto LABEL_52;
        }
        v33 = v65;
        goto LABEL_134;
      }
    }
    else
    {
      v102 = **(unsigned __int8 **)(v15 + 8);
      if ( **(_BYTE **)(v15 + 8) )
        _libc_assert_fail(
          "(l)->l_name[0] == '\\0' || IS_RTLD (l)",
          (__int64)"dl-deps.c",
          0x10Fu,
          (__int64)"_dl_map_object_deps");
      v127 = v53;
      origin = dl_get_origin(v102, 0, v135, v52, v53, v54);
      *(_QWORD *)(v15 + 912) = origin;
      v53 = v127;
      v56 = v135;
      if ( (unsigned __int64)(origin - 1) <= 0xFFFFFFFFFFFFFFFDLL )
      {
        v104 = strlen(origin);
        v53 = v127;
        v59 = v104;
        v56 = v135;
        goto LABEL_60;
      }
    }
    v59 = 0;
    goto LABEL_60;
  }
LABEL_33:
  v33 = (char *)v141 + v31[1];
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
  v39 = *(_QWORD *)(v15 + 912);
  v40 = v35;
  if ( !v39 )
  {
    v66 = **(unsigned __int8 **)(v15 + 8);
    if ( **(_BYTE **)(v15 + 8) )
      _libc_assert_fail(
        "(l)->l_name[0] == '\\0' || IS_RTLD (l)",
        (__int64)"dl-deps.c",
        0xE4u,
        (__int64)"_dl_map_object_deps");
    v135 = v40;
    v67 = dl_get_origin(v66, 0, v36, v40, v37, v38);
    *(_QWORD *)(v15 + 912) = v67;
    v40 = v135;
    if ( (unsigned __int64)(v67 - 1) <= 0xFFFFFFFFFFFFFFFDLL )
    {
      v42 = strlen(v67);
      v40 = v135;
      goto LABEL_38;
    }
    goto LABEL_73;
  }
  if ( v39 == -1 )
  {
LABEL_73:
    v42 = 0;
    goto LABEL_38;
  }
  v41 = *(_QWORD *)(v15 + 912);
  v135 = v40;
  v42 = strlen(v41);
  v40 = v135;
LABEL_38:
  v43 = dl_platformlen;
  if ( (unsigned __int64)dl_platformlen < 0x15 )
    v43 = 21;
  if ( v43 < v42 )
    v43 = v42;
  v44 = v40 + (v43 - 4) * v34 + 15;
  v45 = v44 & 0xFFFFFFFFFFFF0000LL;
  v46 = v44 & 0xFFF0;
  v47 = (_QWORD *)((char *)v120 - v45);
  if ( v120 != v47 )
  {
    do
      v119 = 0;
    while ( &v117 != v47 );
  }
  v117 = 0;
  if ( v46 >= 0x400uLL )
    v119 = 0;
  v17 = dl_dst_substitute(v15, (unsigned __int8 *)v33, v118);
  if ( !*v17 )
  {
    if ( (*v133 & 1) == 0 )
      goto LABEL_52;
LABEL_71:
    dl_debug_printf("cannot load auxiliary `%s' because of empty dynamic string token substitution\n", v33);
    goto LABEL_52;
  }
LABEL_47:
  v148 = v17;
  v28 = dl_catch_exception(v142, openaux, v138);
  if ( !v143 )
  {
    v48 = v149;
    v20 = *(unsigned __int16 *)(v149 + 868);
    if ( (v20 & 0xC0) == 0 )
    {
      v114[1] = 0;
      v17 = v139;
      v115 = 0;
      v49 = v140;
      v116 = v149;
      v117 = 0;
      v139[2] = (__int64)&v115;
      v139 = (__int64 *)&v115;
      LODWORD(v140) = v49 + 1;
      StatusReg = 1;
      v20 = *(_WORD *)(v48 + 868) & 0xFF3F | 0x40u;
      *(_WORD *)(v48 + 868) = *(_WORD *)(v48 + 868) & 0xFF3F | 0x40;
    }
    if ( v21 )
      *(_QWORD *)(v21 + 8LL * v22++) = v48;
    goto LABEL_52;
  }
LABEL_79:
  if ( !v28 )
    v28 = -1;
LABEL_81:
  if ( (_BYTE *)v150[0] != v128 )
    free(v150[0]);
  v68 = v130;
  if ( *(_DWORD *)(v129 + v130) )
    v69 = 1;
  else
    v69 = v131 == 0;
  if ( !v69 )
  {
    StatusReg = v131;
    *(_DWORD *)(v129 + v130) = v131;
  }
  v139 = *(__int64 **)(a1 + 1032);
  if ( v139 )
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
      v139 = 0;
    }
  }
  v71 = (__int64 *)malloc(8LL * (unsigned int)(2 * v140 + 1), v68, (__int16 *)StatusReg, (__int64)v17, v19, v5);
  if ( !v71 )
    dl_signal_error(12, *(const char **)(a1 + 8), 0, "cannot allocate symbol search list");
  v72 = v140;
  v73 = 0;
  v74 = -1;
  *(_DWORD *)(a1 + 784) = v140;
  v75 = &v71[v72 + 1];
  *(_QWORD *)(a1 + 776) = v75;
  do
  {
    v76 = *((_QWORD *)v10 + 1);
    if ( v137 && (*(_WORD *)(v76 + 868) & 0x4000) != 0 )
    {
      --*(_DWORD *)(a1 + 784);
    }
    else
    {
      v75[v73] = v76;
      if ( a1 == v76 )
        v74 = v73;
      ++v73;
    }
    v77 = (__int16 *)(*(_WORD *)(v76 + 868) & 0xFF3F);
    *(_WORD *)(v76 + 868) &= 0xFF3Fu;
    v10 = (_DWORD *)*((_QWORD *)v10 + 2);
  }
  while ( v10 );
  v78 = *(unsigned int **)(a1 + 1040);
  if ( !v78 )
    goto LABEL_118;
  v79 = *v78;
  if ( !v73 )
  {
    v83 = v78 + 2;
    *(_WORD *)(a1 + 868) &= 0xFF3Fu;
    if ( (_DWORD)v79 )
    {
LABEL_103:
      v84 = 0;
      v138 = (__int64 *)(v83 + 4);
      do
      {
        while ( 1 )
        {
          if ( (*(_WORD *)(*(_QWORD *)&v83[2 * v84] + 868LL) & 0xC0) != 0 )
          {
            v85 = *(unsigned int *)(a1 + 1048);
            v140 = v84;
            v141 = v78;
            v86 = malloc(8 * (v85 + 1), v76, v77, v84, v70, v79);
            v78 = v141;
            v10 = (_DWORD *)v86;
            if ( v86 )
              break;
          }
          if ( *v78 <= ++v84 )
            goto LABEL_114;
        }
        j_memcpy(v86 + 8);
        v78 = v141;
        v87 = *v141;
        if ( *v141 <= v84 + 1 )
        {
          *v10 = v84;
          v88 = v84 + 1;
        }
        else
        {
          v76 = (__int64)v138;
          v77 = (__int16 *)&v83[2 * v84 + 2];
          v79 = (__int64)&v138[v87 - 2 - v84 + v140];
          do
          {
            v70 = *(unsigned __int16 *)(*(_QWORD *)v77 + 868LL);
            if ( (v70 & 0xC0) == 0 )
            {
              v70 = (__int64)&v10[2 * v84++];
              *(_QWORD *)(v70 + 8) = *(_QWORD *)v77;
            }
            v77 += 4;
          }
          while ( (__int16 *)v79 != v77 );
          *v10 = v84;
          v88 = v87;
        }
        v84 = v88 + 1;
      }
      while ( *v78 > v84 );
LABEL_114:
      if ( v73 )
      {
        v81 = &v75[v73];
        goto LABEL_116;
      }
    }
    goto LABEL_162;
  }
  v80 = &v71[v72 + 1];
  v81 = &v75[v73];
  v70 = 1;
  do
  {
    v82 = *v80++;
    v76 = v82;
    v77 = (__int16 *)(*(_WORD *)(v82 + 868) & 0xFF3F | 0x40u);
    *(_WORD *)(v82 + 868) = *(_WORD *)(v82 + 868) & 0xFF3F | 0x40;
  }
  while ( v80 != v81 );
  v83 = v78 + 2;
  *(_WORD *)(a1 + 868) &= 0xFF3Fu;
  if ( (_DWORD)v79 )
    goto LABEL_103;
LABEL_116:
  v89 = v75;
  do
  {
    v90 = *v89++;
    *(_WORD *)(v90 + 868) &= 0xFF3Fu;
  }
  while ( v89 != v81 );
LABEL_118:
  if ( v74 >= v73 )
LABEL_162:
    _libc_assert_fail("map_index < nlist", (__int64)"dl-deps.c", 0x214u, (__int64)"_dl_map_object_deps");
  if ( v74 )
  {
    v91 = 0;
    *v71 = v75[v74];
    do
    {
      v71[v91 + 1] = v75[v91];
      ++v91;
    }
    while ( v74 != v91 );
    if ( v74 + 1 < v73 )
    {
      v92 = v74 + 1;
      do
      {
        v71[v92] = v75[v92];
        ++v92;
      }
      while ( v73 - 2 - v74 + v74 + 1 + 1LL != v92 );
    }
  }
  else
  {
    j_memcpy(v71);
  }
  dl_sort_maps(v71, v73, (&dl_ns)[21 * *(_QWORD *)(*v71 + 48) + 4] != (__int64 *)*v71, 0);
  v71[v73] = 0;
  __dmb(0xBu);
  v93 = *(_BYTE *)(a1 + 870);
  *(_QWORD *)(a1 + 1032) = v71;
  *(_BYTE *)(a1 + 870) = v93 | 0x10;
  if ( v10 )
  {
    __dmb(0xBu);
    v94 = *(_QWORD *)(a1 + 1040);
    *(_QWORD *)(a1 + 1040) = v10;
    dl_scope_free(v94);
  }
  result = v139;
  if ( v139 )
    result = (__int64 *)dl_scope_free(v139);
  if ( v28 )
  {
    if ( v28 == -1 )
      v28 = 0;
    dl_signal_exception(v28, v142, 0);
  }
  return result;
}
