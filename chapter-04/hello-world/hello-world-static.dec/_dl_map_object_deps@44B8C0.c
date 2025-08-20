_DWORD *__fastcall dl_map_object_deps(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        int a5,
        double a6,
        double a7,
        double a8,
        double a9,
        double a10,
        double a11,
        double a12,
        double a13)
{
  __int64 v13; // x5
  __int64 v14; // x6
  __int64 v16; // x0
  _QWORD *v17; // x3
  unsigned __int16 v18; // w0
  _DWORD *v19; // x19
  _BYTE *v20; // x0
  __int64 v21; // x3
  int v22; // w5
  __int64 v23; // x4
  __int64 v24; // x22
  __int64 StatusReg; // x2
  unsigned __int8 *v26; // x3
  unsigned __int8 *v27; // x0
  __int64 v28; // x4
  __int64 v29; // x1
  __int64 v30; // x25
  unsigned int v31; // w24
  _QWORD *v32; // x0
  double v33; // d0
  double v34; // d1
  double v35; // d2
  double v36; // d3
  double v37; // d4
  double v38; // d5
  double v39; // d6
  double v40; // d7
  _QWORD *v41; // x20
  char v42; // w0
  bool v43; // zf
  _DWORD *v44; // x0
  int v45; // w20
  char v46; // w0
  unsigned int *v47; // x1
  __int64 *v48; // x21
  __int64 v49; // x0
  char *v50; // x20
  __int64 v51; // x7
  __int64 v52; // x26
  __int64 v53; // x0
  __int64 v54; // x2
  void *v55; // x4
  void *v56; // x5
  void *v57; // x6
  double v58; // d0
  double v59; // d1
  double v60; // d2
  double v61; // d3
  double v62; // d4
  double v63; // d5
  double v64; // d6
  double v65; // d7
  __int64 v66; // x1
  __int64 v67; // x3
  __int64 v68; // x0
  unsigned __int64 v69; // x0
  unsigned __int64 v70; // x1
  __int64 v71; // x0
  unsigned __int64 v72; // x1
  unsigned __int16 v73; // w0
  __int64 *v74; // x1
  __int64 v75; // x0
  int v76; // w2
  __int64 v77; // t1
  __int64 v78; // x2
  __int64 v79; // x7
  __int64 v80; // x3
  void *v81; // x4
  void *v82; // x5
  void *v83; // x6
  double v84; // d0
  double v85; // d1
  double v86; // d2
  double v87; // d3
  double v88; // d4
  double v89; // d5
  double v90; // d6
  double v91; // d7
  __int64 v92; // x1
  __int64 v93; // x2
  __int64 v94; // x0
  __int64 v95; // x0
  unsigned __int64 v96; // x3
  unsigned __int64 v97; // x1
  __int64 v98; // x0
  unsigned __int64 v99; // x1
  unsigned __int16 v100; // w0
  __int64 *v101; // x1
  unsigned __int8 *v102; // x0
  __int64 v103; // x0
  __int64 v104; // x0
  __int64 v105; // x1
  bool v106; // zf
  __int64 v107; // x4
  void *v108; // x6
  __int64 *v109; // x28
  double v110; // d0
  double v111; // d1
  double v112; // d2
  double v113; // d3
  double v114; // d4
  double v115; // d5
  double v116; // d6
  double v117; // d7
  int v118; // w0
  unsigned int v119; // w25
  unsigned int v120; // w26
  __int64 *v121; // x27
  __int64 *v122; // x1
  __int64 v123; // x2
  unsigned int *v124; // x7
  unsigned __int64 v125; // x5
  __int64 *v126; // x0
  __int64 *v127; // x3
  __int64 v128; // t1
  _DWORD *v129; // x24
  unsigned int v130; // w22
  __int64 v131; // x0
  __int64 v132; // x0
  unsigned int v133; // w0
  unsigned int v134; // w22
  __int64 *v135; // x1
  __int64 v136; // t1
  __int64 v137; // x0
  __int64 v138; // x1
  __int64 v139; // x1
  __int64 v140; // x2
  __int64 v141; // x3
  void *v142; // x4
  void *v143; // x5
  void *v144; // x6
  double v145; // d0
  double v146; // d1
  double v147; // d2
  double v148; // d3
  double v149; // d4
  double v150; // d5
  double v151; // d6
  double v152; // d7
  char v153; // w0
  __int64 v154; // x0
  _DWORD *result; // x0
  unsigned __int8 *v156; // x3
  __int64 v157; // x1
  __int64 v158; // x0
  __int64 v159; // x1
  __int64 v160; // x3
  __int64 v161; // x1
  __int64 v162; // x0
  __int64 origin; // x0
  __int64 v164; // x0
  __int64 *v165; // x1
  __int64 v166; // x3
  unsigned __int8 *v167; // x3
  const char *v168; // x2
  __int64 v169; // [xsp+8h] [xbp-30040h] BYREF
  __int64 v170; // [xsp+10h] [xbp-30038h]
  __int64 v171; // [xsp+18h] [xbp-30030h] BYREF
  unsigned __int8 v172[1008]; // [xsp+28h] [xbp-30020h] BYREF
  __int64 v173; // [xsp+418h] [xbp-2FC30h]
  _QWORD v174[2]; // [xsp+10018h] [xbp-20030h] BYREF
  int v175; // [xsp+10028h] [xbp-20020h] BYREF
  __int64 v176; // [xsp+10030h] [xbp-20018h]
  __int64 v177; // [xsp+10038h] [xbp-20010h] BYREF
  unsigned __int8 v178[1008]; // [xsp+10048h] [xbp-20000h] BYREF
  __int64 v179; // [xsp+10438h] [xbp-1FC10h]
  _QWORD v180[2]; // [xsp+20038h] [xbp-10010h] BYREF
  _DWORD v181[2]; // [xsp+20048h] [xbp-10000h] BYREF
  __int64 v182; // [xsp+20050h] [xbp-FFF8h]
  _BYTE *v183; // [xsp+20058h] [xbp-FFF0h]
  _BYTE v184[984]; // [xsp+20060h] [xbp-FFE8h] BYREF
  __int64 v185; // [xsp+20438h] [xbp-FC10h]
  _BYTE v186[16]; // [xsp+30038h] [xbp-10h] BYREF
  void *v187; // [xsp+300A8h] [xbp+60h]
  _BYTE *v188; // [xsp+300B0h] [xbp+68h]
  __int64 v189; // [xsp+300B8h] [xbp+70h]
  __int64 v190; // [xsp+300C0h] [xbp+78h]
  unsigned int v191; // [xsp+300CCh] [xbp+84h]
  unsigned __int8 *v192; // [xsp+300D0h] [xbp+88h]
  int *v193; // [xsp+300D8h] [xbp+90h]
  _DWORD *v194; // [xsp+300E0h] [xbp+98h]
  __int64 v195; // [xsp+300E8h] [xbp+A0h]
  int v196; // [xsp+300F0h] [xbp+A8h]
  int v197; // [xsp+300F4h] [xbp+ACh]
  __int64 *v198; // [xsp+300F8h] [xbp+B0h]
  unsigned __int8 *v199; // [xsp+30100h] [xbp+B8h]
  __int64 v200; // [xsp+30108h] [xbp+C0h]
  unsigned int *v201; // [xsp+30110h] [xbp+C8h]
  __int64 v202; // [xsp+30118h] [xbp+D0h] BYREF
  __int64 v203; // [xsp+30120h] [xbp+D8h]
  __int64 v204; // [xsp+30130h] [xbp+E8h] BYREF
  int v205; // [xsp+30138h] [xbp+F0h]
  int v206; // [xsp+3013Ch] [xbp+F4h]
  unsigned int *v207; // [xsp+30140h] [xbp+F8h]
  void *v208; // [xsp+30148h] [xbp+100h]
  __int64 v209; // [xsp+30150h] [xbp+108h]
  __int64 v210[2]; // [xsp+30158h] [xbp+110h] BYREF
  _BYTE v211[1024]; // [xsp+30168h] [xbp+120h] BYREF

  v13 = (unsigned int)(a3 + 2);
  v14 = 24;
  v16 = 24LL * (unsigned int)v13 + 15;
  v196 = a5;
  v197 = a4;
  v17 = &v186[-(v16 & 0x3FFFFF0000LL)];
  v18 = v16 & 0xFFF0;
  if ( v186 != (_BYTE *)v17 )
  {
    do
      v185 = 0;
    while ( v180 != v17 );
  }
  v180[0] = 0;
  if ( v18 >= 0x400uLL )
    v185 = 0;
  v19 = v181;
  v181[0] = 0;
  v20 = v184;
  v182 = a1;
  v183 = v184;
  *(_WORD *)(a1 + 868) = *(_WORD *)(a1 + 868) & 0xFF3F | 0x40;
  if ( a3 )
  {
    v21 = 0;
    v14 = 24;
    do
    {
      v22 = v21 + 2;
      *(_DWORD *)v20 = 0;
      v23 = *(_QWORD *)(a2 + 8 * v21++);
      *((_QWORD *)v20 + 1) = v23;
      *((_QWORD *)v20 + 2) = &v181[6 * v22];
      v20 += 24;
      v13 = *(_WORD *)(v23 + 868) & 0xFF3F | 0x40u;
      *(_WORD *)(v23 + 868) = *(_WORD *)(v23 + 868) & 0xFF3F | 0x40;
    }
    while ( v21 != a3 );
    v24 = v182;
    v199 = (unsigned __int8 *)&v181[6 * a3];
    LODWORD(v200) = a3 + 1;
  }
  else
  {
    v24 = a1;
    v199 = (unsigned __int8 *)v181;
    LODWORD(v200) = 1;
  }
  StatusReg = _ReadStatusReg(TPIDR_EL0);
  v193 = &dl_debug_mask;
  v194 = v181;
  v210[1] = 1024;
  v26 = v211;
  v27 = v199;
  v190 = 40;
  v28 = *(unsigned int *)(StatusReg + 40);
  *(_DWORD *)(StatusReg + 40) = 0;
  v29 = (__int64)v194;
  *((_QWORD *)v27 + 2) = 0;
  v30 = *(_QWORD *)(v24 + 776);
  v210[0] = (__int64)v211;
  *(_DWORD *)v29 = 1;
  v188 = v211;
  v189 = StatusReg;
  v191 = v28;
  if ( !v30 )
    goto LABEL_19;
LABEL_10:
  v30 = 0;
  while ( !*(_QWORD *)(v24 + 72) )
  {
    if ( *(_QWORD *)(v24 + 560) )
      break;
    v31 = 0;
    if ( *(_QWORD *)(v24 + 544) )
      break;
LABEL_14:
    if ( v30 )
    {
      *(_QWORD *)(v30 + 8LL * v31) = 0;
      v32 = (_QWORD *)malloc(
                        8LL * (2 * (v31 + 1) + 1),
                        a6,
                        a7,
                        a8,
                        a9,
                        a10,
                        a11,
                        a12,
                        a13,
                        v29,
                        StatusReg,
                        (__int64)v26,
                        (void *)v28,
                        (void *)v13,
                        (void *)v14);
      v41 = v32;
      if ( !v32 )
      {
        if ( (_BYTE *)v210[0] != v188 )
          free(v210[0], v33, v34, v35, v36, v37, v38, v39, v40);
        dl_signal_error(12, *(const char **)(a1 + 8), 0, "cannot allocate dependency list");
      }
      *v32 = v24;
      j_memcpy(v32 + 1);
      j_memcpy(&v41[v31 + 2]);
      __dmb(0xBu);
      v42 = *(_BYTE *)(v24 + 870);
      *(_QWORD *)(v24 + 1032) = v41;
      *(_BYTE *)(v24 + 870) = v42 | 0x10;
    }
    if ( *v194 )
    {
      while ( 1 )
      {
        v44 = (_DWORD *)*((_QWORD *)v194 + 2);
        v194 = v44;
        if ( !v44 )
          break;
        if ( !*v44 )
          goto LABEL_18;
      }
      v45 = 0;
      goto LABEL_81;
    }
LABEL_18:
    v29 = (__int64)v194;
    v24 = *((_QWORD *)v194 + 1);
    v30 = *(_QWORD *)(v24 + 776);
    *v194 = 1;
    if ( v30 )
      goto LABEL_10;
LABEL_19:
    if ( *(_QWORD *)(v24 + 1032) )
      v43 = 1;
    else
      v43 = a1 == v24;
    if ( !v43 )
    {
      v29 = *(unsigned __int16 *)(v24 + 770);
      if ( *(_WORD *)(v24 + 770) )
      {
        if ( (_libc_scratch_buffer_set_array_size(
                v210,
                *(unsigned __int16 *)(v24 + 770),
                8,
                a6,
                a7,
                a8,
                a9,
                a10,
                a11,
                a12,
                a13,
                (__int64)v26,
                (void *)v28,
                (void *)v13,
                (void *)v14)
            & 1) == 0 )
          dl_signal_error(12, *(const char **)(a1 + 8), 0, "cannot allocate dependency buffer");
        v30 = v210[0];
      }
    }
  }
  v46 = *(_BYTE *)(v24 + 870);
  v47 = *(unsigned int **)(*(_QWORD *)(v24 + 104) + 8LL);
  v201 = v47;
  if ( (v46 & 0x20) != 0 )
    v201 = (unsigned int *)((char *)v47 + *(_QWORD *)v24);
  v48 = *(__int64 **)(v24 + 16);
  v204 = v24;
  v205 = v197;
  v206 = v196;
  v49 = *v48;
  v29 = (__int64)v201;
  v207 = v201;
  if ( !v49 )
  {
    v31 = 0;
    goto LABEL_14;
  }
  v192 = (unsigned __int8 *)v194;
  v198 = &v204;
  v31 = 0;
  if ( v49 != 1 )
  {
    while ( 1 )
    {
      v29 = 2147483645;
      if ( (v49 & 0xFFFFFFFFFFFFFFFDLL) == 0x7FFFFFFD )
        break;
LABEL_52:
      v77 = v48[2];
      v48 += 2;
      v49 = v77;
      if ( !v77 )
        goto LABEL_14;
      if ( v49 == 1 )
        goto LABEL_33;
    }
    v50 = (char *)v201 + v48[1];
    v78 = dl_dst_count((__int64)v50);
    if ( !v78 )
    {
LABEL_134:
      v208 = v50;
      if ( (dl_debug_mask & 1) != 0 )
      {
        v168 = *(const char **)(v24 + 8);
        if ( !*v168 )
        {
          v168 = (const char *)program_invocation_short_name[0];
          if ( !program_invocation_short_name[0] )
            v168 = "<main program>";
        }
        dl_debug_printf("load auxiliary object=%s requested by file=%s\n", v50, v168);
      }
      v45 = dl_catch_exception(
              &v202,
              (void (__fastcall *)(__int64))openaux,
              (__int64)&v204,
              (__int64)v26,
              v28,
              v13,
              v14,
              v79);
      if ( v203 )
      {
        if ( *v48 != 2147483645 )
          goto LABEL_79;
        _kfifo_free((__kfifo *)&v202);
        goto LABEL_52;
      }
      v156 = v192;
      StatusReg = (__int64)&v169;
      v157 = *((_QWORD *)v192 + 1);
      v169 = *(_QWORD *)v192;
      v170 = v157;
      v171 = *((_QWORD *)v192 + 2);
      v158 = v209;
      *(_DWORD *)v192 = 0;
      *((_QWORD *)v156 + 1) = v158;
      if ( v30 )
      {
        *(_QWORD *)(v30 + 8LL * v31++) = v158;
        v158 = v209;
      }
      if ( (*(_WORD *)(v158 + 868) & 0xC0) != 0 )
      {
        v165 = &v169;
        do
        {
          v28 = (__int64)v165;
          v165 = (__int64 *)v165[2];
          if ( !v165 )
          {
            v26 = v192;
            v29 = v170;
            *(_QWORD *)v192 = v169;
            *((_QWORD *)v26 + 1) = v29;
            *((_QWORD *)v26 + 2) = v171;
            goto LABEL_52;
          }
        }
        while ( v165[1] != v158 );
        v13 = (__int64)v199;
        *((_QWORD *)v192 + 2) = &v169;
        v159 = *(_QWORD *)(v158 + 32);
        v166 = *(_QWORD *)(v28 + 16);
        *(_QWORD *)(v28 + 16) = *(_QWORD *)(v166 + 16);
        if ( v166 == v13 )
          v167 = (unsigned __int8 *)v28;
        else
          v167 = (unsigned __int8 *)v13;
        v199 = v167;
        if ( !v159 )
          goto LABEL_141;
      }
      else
      {
        v28 = 1;
        *((_QWORD *)v192 + 2) = &v169;
        LODWORD(v200) = v200 + 1;
        v159 = *(_QWORD *)(v158 + 32);
        *(_WORD *)(v158 + 868) = *(_WORD *)(v158 + 868) & 0xFF3F | 0x40;
        if ( !v159 )
        {
LABEL_141:
          v160 = *(_QWORD *)(v158 + 24);
          if ( v160 )
            *(_QWORD *)(v160 + 32) = v159;
          v161 = v170;
          *(_QWORD *)(v158 + 32) = *(_QWORD *)(v170 + 32);
          *(_QWORD *)(v161 + 32) = v158;
          v26 = *(unsigned __int8 **)(v158 + 32);
          if ( v26 )
            *((_QWORD *)v26 + 3) = v158;
          *(_QWORD *)(v158 + 24) = v161;
          v29 = (__int64)v199;
          if ( v192 == v199 )
          {
            v192 = (unsigned __int8 *)&v169;
            v199 = (unsigned __int8 *)&v169;
          }
          else
          {
            v192 = (unsigned __int8 *)&v169;
          }
          goto LABEL_52;
        }
      }
      *(_QWORD *)(v159 + 24) = *(_QWORD *)(v158 + 24);
      goto LABEL_141;
    }
    if ( _libc_enable_secure )
      goto LABEL_175;
    v195 = v78;
    v81 = (void *)strlen(v50);
    v92 = *(_QWORD *)(v24 + 912);
    v93 = v195;
    if ( v92 )
    {
      if ( v92 != -1 )
      {
        v94 = *(_QWORD *)(v24 + 912);
        v187 = v81;
        v95 = strlen(v94);
        v81 = v187;
        v96 = v95;
        v93 = v195;
LABEL_60:
        v97 = dl_platformlen;
        if ( (unsigned __int64)dl_platformlen < 0x15 )
          v97 = 21;
        if ( v97 < v96 )
          v97 = v96;
        v98 = (__int64)v81 + (v97 - 4) * v93 + 15;
        v99 = v98 & 0xFFFFFFFFFFFF0000LL;
        v100 = v98 & 0xFFF0;
        v101 = (_QWORD *)((char *)v174 - v99);
        if ( v174 != v101 )
        {
          do
            v173 = 0;
          while ( &v171 != v101 );
        }
        v171 = 0;
        if ( v100 >= 0x400uLL )
          v173 = 0;
        v102 = dl_dst_substitute(v24, (unsigned __int8 *)v50, v172);
        if ( !*v102 )
        {
          v29 = *v48;
          if ( *v48 == 2147483645 )
            dl_signal_error(0, v50, 0, "empty dynamic string token substitution");
          if ( (dl_debug_mask & 1) != 0 )
            goto LABEL_71;
          goto LABEL_52;
        }
        v50 = (char *)v102;
        goto LABEL_134;
      }
    }
    else
    {
      v162 = **(unsigned __int8 **)(v24 + 8);
      if ( **(_BYTE **)(v24 + 8) )
        _libc_assert_fail(
          "(l)->l_name[0] == '\\0' || IS_RTLD (l)",
          (__int64)"dl-deps.c",
          0x10Fu,
          (__int64)"_dl_map_object_deps");
      v187 = v81;
      origin = dl_get_origin(v84, v85, v86, v87, v88, v89, v90, v91, v162, 0, v195, v80, v81, v82, v83);
      *(_QWORD *)(v24 + 912) = origin;
      v81 = v187;
      v93 = v195;
      if ( (unsigned __int64)(origin - 1) <= 0xFFFFFFFFFFFFFFFDLL )
      {
        v164 = strlen(origin);
        v81 = v187;
        v96 = v164;
        v93 = v195;
        goto LABEL_60;
      }
    }
    v96 = 0;
    goto LABEL_60;
  }
LABEL_33:
  v50 = (char *)v201 + v48[1];
  v52 = dl_dst_count((__int64)v50);
  if ( !v52 )
  {
    v26 = (unsigned __int8 *)v50;
    goto LABEL_47;
  }
  if ( _libc_enable_secure )
LABEL_175:
    dl_signal_error(0, v50, 0, "DST not allowed in SUID/SGID programs");
  v53 = strlen(v50);
  v66 = *(_QWORD *)(v24 + 912);
  v67 = v53;
  if ( !v66 )
  {
    v103 = **(unsigned __int8 **)(v24 + 8);
    if ( **(_BYTE **)(v24 + 8) )
      _libc_assert_fail(
        "(l)->l_name[0] == '\\0' || IS_RTLD (l)",
        (__int64)"dl-deps.c",
        0xE4u,
        (__int64)"_dl_map_object_deps");
    v195 = v67;
    v104 = dl_get_origin(v58, v59, v60, v61, v62, v63, v64, v65, v103, 0, v54, v67, v55, v56, v57);
    *(_QWORD *)(v24 + 912) = v104;
    v67 = v195;
    if ( (unsigned __int64)(v104 - 1) <= 0xFFFFFFFFFFFFFFFDLL )
    {
      v69 = strlen(v104);
      v67 = v195;
      goto LABEL_38;
    }
    goto LABEL_73;
  }
  if ( v66 == -1 )
  {
LABEL_73:
    v69 = 0;
    goto LABEL_38;
  }
  v68 = *(_QWORD *)(v24 + 912);
  v195 = v67;
  v69 = strlen(v68);
  v67 = v195;
LABEL_38:
  v70 = dl_platformlen;
  if ( (unsigned __int64)dl_platformlen < 0x15 )
    v70 = 21;
  if ( v70 < v69 )
    v70 = v69;
  v71 = v67 + (v70 - 4) * v52 + 15;
  v72 = v71 & 0xFFFFFFFFFFFF0000LL;
  v73 = v71 & 0xFFF0;
  v74 = (_QWORD *)((char *)v180 - v72);
  if ( v180 != v74 )
  {
    do
      v179 = 0;
    while ( &v177 != v74 );
  }
  v177 = 0;
  if ( v73 >= 0x400uLL )
    v179 = 0;
  v26 = dl_dst_substitute(v24, (unsigned __int8 *)v50, v178);
  if ( !*v26 )
  {
    if ( (*v193 & 1) == 0 )
      goto LABEL_52;
LABEL_71:
    dl_debug_printf("cannot load auxiliary `%s' because of empty dynamic string token substitution\n", v50);
    goto LABEL_52;
  }
LABEL_47:
  v208 = v26;
  v45 = dl_catch_exception(
          &v202,
          (void (__fastcall *)(__int64))openaux,
          (__int64)v198,
          (__int64)v26,
          v28,
          v13,
          v14,
          v51);
  if ( !v203 )
  {
    v75 = v209;
    v29 = *(unsigned __int16 *)(v209 + 868);
    if ( (v29 & 0xC0) == 0 )
    {
      v174[1] = 0;
      v26 = v199;
      v175 = 0;
      v76 = v200;
      v176 = v209;
      v177 = 0;
      *((_QWORD *)v199 + 2) = &v175;
      v199 = (unsigned __int8 *)&v175;
      LODWORD(v200) = v76 + 1;
      StatusReg = 1;
      v29 = *(_WORD *)(v75 + 868) & 0xFF3F | 0x40u;
      *(_WORD *)(v75 + 868) = *(_WORD *)(v75 + 868) & 0xFF3F | 0x40;
    }
    if ( v30 )
      *(_QWORD *)(v30 + 8LL * v31++) = v75;
    goto LABEL_52;
  }
LABEL_79:
  if ( !v45 )
    v45 = -1;
LABEL_81:
  if ( (_BYTE *)v210[0] != v188 )
    free(v210[0], a6, a7, a8, a9, a10, a11, a12, a13);
  v105 = v190;
  if ( *(_DWORD *)(v189 + v190) )
    v106 = 1;
  else
    v106 = v191 == 0;
  if ( !v106 )
  {
    StatusReg = v191;
    *(_DWORD *)(v189 + v190) = v191;
  }
  v199 = *(unsigned __int8 **)(a1 + 1032);
  if ( v199 )
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
      v199 = 0;
    }
  }
  v109 = (__int64 *)malloc(
                      8LL * (unsigned int)(2 * v200 + 1),
                      a6,
                      a7,
                      a8,
                      a9,
                      a10,
                      a11,
                      a12,
                      a13,
                      v105,
                      StatusReg,
                      (__int64)v26,
                      (void *)v28,
                      (void *)v13,
                      (void *)v14);
  if ( !v109 )
    dl_signal_error(12, *(const char **)(a1 + 8), 0, "cannot allocate symbol search list");
  v118 = v200;
  v119 = 0;
  v120 = -1;
  *(_DWORD *)(a1 + 784) = v200;
  v121 = &v109[v118 + 1];
  *(_QWORD *)(a1 + 776) = v121;
  do
  {
    v122 = (__int64 *)*((_QWORD *)v19 + 1);
    if ( v197 && (*((_WORD *)v122 + 434) & 0x4000) != 0 )
    {
      --*(_DWORD *)(a1 + 784);
    }
    else
    {
      v121[v119] = (__int64)v122;
      if ( (__int64 *)a1 == v122 )
        v120 = v119;
      ++v119;
    }
    v123 = *((_WORD *)v122 + 434) & 0xFF3F;
    *((_WORD *)v122 + 434) &= 0xFF3Fu;
    v19 = (_DWORD *)*((_QWORD *)v19 + 2);
  }
  while ( v19 );
  v124 = *(unsigned int **)(a1 + 1040);
  if ( !v124 )
    goto LABEL_118;
  v125 = *v124;
  if ( !v119 )
  {
    v129 = v124 + 2;
    *(_WORD *)(a1 + 868) &= 0xFF3Fu;
    if ( (_DWORD)v125 )
    {
LABEL_103:
      v130 = 0;
      v198 = (__int64 *)(v129 + 4);
      do
      {
        while ( 1 )
        {
          if ( (*(_WORD *)(*(_QWORD *)&v129[2 * v130] + 868LL) & 0xC0) != 0 )
          {
            v131 = *(unsigned int *)(a1 + 1048);
            v200 = v130;
            v201 = v124;
            v132 = malloc(
                     8 * (v131 + 1),
                     v110,
                     v111,
                     v112,
                     v113,
                     v114,
                     v115,
                     v116,
                     v117,
                     (__int64)v122,
                     v123,
                     v130,
                     (void *)v107,
                     (void *)v125,
                     v108);
            v124 = v201;
            v19 = (_DWORD *)v132;
            if ( v132 )
              break;
          }
          if ( *v124 <= ++v130 )
            goto LABEL_114;
        }
        j_memcpy(v132 + 8);
        v124 = v201;
        v133 = *v201;
        if ( *v201 <= v130 + 1 )
        {
          *v19 = v130;
          v134 = v130 + 1;
        }
        else
        {
          v122 = v198;
          v123 = (__int64)&v129[2 * v130 + 2];
          v125 = (unsigned __int64)&v198[v133 - 2 - v130 + v200];
          do
          {
            v107 = *(unsigned __int16 *)(*(_QWORD *)v123 + 868LL);
            if ( (v107 & 0xC0) == 0 )
            {
              v107 = (__int64)&v19[2 * v130++];
              *(_QWORD *)(v107 + 8) = *(_QWORD *)v123;
            }
            v123 += 8;
          }
          while ( v125 != v123 );
          *v19 = v130;
          v134 = v133;
        }
        v130 = v134 + 1;
      }
      while ( *v124 > v130 );
LABEL_114:
      if ( v119 )
      {
        v127 = &v121[v119];
        goto LABEL_116;
      }
    }
    goto LABEL_162;
  }
  v126 = &v109[v118 + 1];
  v127 = &v121[v119];
  v107 = 1;
  do
  {
    v128 = *v126++;
    v122 = (__int64 *)v128;
    v123 = *(_WORD *)(v128 + 868) & 0xFF3F | 0x40u;
    *(_WORD *)(v128 + 868) = *(_WORD *)(v128 + 868) & 0xFF3F | 0x40;
  }
  while ( v126 != v127 );
  v129 = v124 + 2;
  *(_WORD *)(a1 + 868) &= 0xFF3Fu;
  if ( (_DWORD)v125 )
    goto LABEL_103;
LABEL_116:
  v135 = v121;
  do
  {
    v136 = *v135++;
    *(_WORD *)(v136 + 868) &= 0xFF3Fu;
  }
  while ( v135 != v127 );
LABEL_118:
  if ( v120 >= v119 )
LABEL_162:
    _libc_assert_fail("map_index < nlist", (__int64)"dl-deps.c", 0x214u, (__int64)"_dl_map_object_deps");
  if ( v120 )
  {
    v137 = 0;
    *v109 = v121[v120];
    do
    {
      v109[v137 + 1] = v121[v137];
      ++v137;
    }
    while ( v120 != v137 );
    if ( v120 + 1 < v119 )
    {
      v138 = v120 + 1;
      do
      {
        v109[v138] = v121[v138];
        ++v138;
      }
      while ( v119 - 2 - v120 + v120 + 1 + 1LL != v138 );
    }
  }
  else
  {
    j_memcpy(v109);
  }
  dl_sort_maps(v109, v119, (&dl_ns)[21 * *(_QWORD *)(*v109 + 48) + 4] != (__int64 *)*v109, 0);
  v109[v119] = 0;
  __dmb(0xBu);
  v153 = *(_BYTE *)(a1 + 870);
  *(_QWORD *)(a1 + 1032) = v109;
  *(_BYTE *)(a1 + 870) = v153 | 0x10;
  if ( v19 )
  {
    __dmb(0xBu);
    v154 = *(_QWORD *)(a1 + 1040);
    *(_QWORD *)(a1 + 1040) = v19;
    dl_scope_free(v154, v145, v146, v147, v148, v149, v150, v151, v152, v139, v140, v141, v142, v143, v144);
  }
  result = v199;
  if ( v199 )
    result = (_DWORD *)dl_scope_free(
                         (__int64)v199,
                         v145,
                         v146,
                         v147,
                         v148,
                         v149,
                         v150,
                         v151,
                         v152,
                         v139,
                         v140,
                         v141,
                         v142,
                         v143,
                         v144);
  if ( v45 )
  {
    if ( v45 == -1 )
      v45 = 0;
    dl_signal_exception(v45, (__int64)&v202, 0);
  }
  return result;
}
