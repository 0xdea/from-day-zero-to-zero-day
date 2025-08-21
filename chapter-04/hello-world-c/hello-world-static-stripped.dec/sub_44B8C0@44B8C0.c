_DWORD *__fastcall sub_44B8C0(
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
  unsigned __int64 v30; // x25
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
  __int64 v42; // x21
  char v43; // w0
  bool v44; // zf
  _DWORD *v45; // x0
  int v46; // w20
  char v47; // w0
  unsigned int *v48; // x1
  __int64 *v49; // x21
  __int64 v50; // x0
  char *v51; // x20
  __int64 v52; // x7
  __int64 v53; // x26
  __int64 v54; // x0
  __int64 v55; // x2
  void *v56; // x4
  void *v57; // x5
  void *v58; // x6
  double v59; // d0
  double v60; // d1
  double v61; // d2
  double v62; // d3
  double v63; // d4
  double v64; // d5
  double v65; // d6
  double v66; // d7
  __int64 v67; // x1
  __int64 v68; // x3
  __int64 v69; // x0
  unsigned __int64 v70; // x0
  unsigned __int64 v71; // x1
  __int64 v72; // x0
  unsigned __int64 v73; // x1
  unsigned __int16 v74; // w0
  __int64 *v75; // x1
  __int64 v76; // x0
  int v77; // w2
  __int64 v78; // t1
  __int64 v79; // x2
  __int64 v80; // x7
  __int64 v81; // x3
  void *v82; // x4
  void *v83; // x5
  void *v84; // x6
  double v85; // d0
  double v86; // d1
  double v87; // d2
  double v88; // d3
  double v89; // d4
  double v90; // d5
  double v91; // d6
  double v92; // d7
  __int64 v93; // x1
  __int64 v94; // x2
  __int64 v95; // x0
  __int64 v96; // x0
  unsigned __int64 v97; // x3
  unsigned __int64 v98; // x1
  __int64 v99; // x0
  unsigned __int64 v100; // x1
  unsigned __int16 v101; // w0
  __int64 *v102; // x1
  unsigned __int8 *v103; // x0
  __int64 v104; // x0
  __int64 v105; // x0
  __int64 v106; // x1
  bool v107; // zf
  __int64 v108; // x4
  void *v109; // x6
  __int64 *v110; // x28
  double v111; // d0
  double v112; // d1
  double v113; // d2
  double v114; // d3
  double v115; // d4
  double v116; // d5
  double v117; // d6
  double v118; // d7
  int v119; // w0
  unsigned int v120; // w25
  unsigned int v121; // w26
  __int64 *v122; // x27
  __int64 *v123; // x1
  __int64 v124; // x2
  unsigned int *v125; // x7
  unsigned __int64 v126; // x5
  __int64 *v127; // x0
  __int64 *v128; // x3
  __int64 v129; // t1
  _DWORD *v130; // x24
  unsigned int v131; // w22
  __int64 v132; // x0
  __int64 v133; // x0
  unsigned int v134; // w0
  unsigned int v135; // w22
  __int64 *v136; // x1
  __int64 v137; // t1
  __int64 v138; // x0
  __int64 v139; // x1
  __int64 v140; // x1
  __int64 v141; // x2
  __int64 v142; // x3
  void *v143; // x4
  void *v144; // x5
  void *v145; // x6
  double v146; // d0
  double v147; // d1
  double v148; // d2
  double v149; // d3
  double v150; // d4
  double v151; // d5
  double v152; // d6
  double v153; // d7
  char v154; // w0
  unsigned __int64 v155; // x0
  _DWORD *result; // x0
  unsigned __int8 *v157; // x3
  __int64 v158; // x1
  __int64 v159; // x0
  __int64 v160; // x1
  __int64 v161; // x3
  __int64 v162; // x1
  __int64 v163; // x0
  __int64 v164; // x0
  __int64 v165; // x0
  __int64 *v166; // x1
  __int64 v167; // x3
  unsigned __int8 *v168; // x3
  const char *v169; // x2
  __int64 v170; // [xsp+8h] [xbp-30040h] BYREF
  __int64 v171; // [xsp+10h] [xbp-30038h]
  __int64 v172; // [xsp+18h] [xbp-30030h] BYREF
  unsigned __int8 v173[1008]; // [xsp+28h] [xbp-30020h] BYREF
  __int64 v174; // [xsp+418h] [xbp-2FC30h]
  _QWORD v175[2]; // [xsp+10018h] [xbp-20030h] BYREF
  int v176; // [xsp+10028h] [xbp-20020h] BYREF
  __int64 v177; // [xsp+10030h] [xbp-20018h]
  __int64 v178; // [xsp+10038h] [xbp-20010h] BYREF
  unsigned __int8 v179[1008]; // [xsp+10048h] [xbp-20000h] BYREF
  __int64 v180; // [xsp+10438h] [xbp-1FC10h]
  _QWORD v181[2]; // [xsp+20038h] [xbp-10010h] BYREF
  _DWORD v182[2]; // [xsp+20048h] [xbp-10000h] BYREF
  __int64 v183; // [xsp+20050h] [xbp-FFF8h]
  _BYTE *v184; // [xsp+20058h] [xbp-FFF0h]
  _BYTE v185[984]; // [xsp+20060h] [xbp-FFE8h] BYREF
  __int64 v186; // [xsp+20438h] [xbp-FC10h]
  _BYTE v187[16]; // [xsp+30038h] [xbp-10h] BYREF
  void *v188; // [xsp+300A8h] [xbp+60h]
  _BYTE *v189; // [xsp+300B0h] [xbp+68h]
  __int64 v190; // [xsp+300B8h] [xbp+70h]
  __int64 v191; // [xsp+300C0h] [xbp+78h]
  unsigned int v192; // [xsp+300CCh] [xbp+84h]
  unsigned __int8 *v193; // [xsp+300D0h] [xbp+88h]
  int *v194; // [xsp+300D8h] [xbp+90h]
  _DWORD *v195; // [xsp+300E0h] [xbp+98h]
  __int64 v196; // [xsp+300E8h] [xbp+A0h]
  int v197; // [xsp+300F0h] [xbp+A8h]
  int v198; // [xsp+300F4h] [xbp+ACh]
  __int64 *v199; // [xsp+300F8h] [xbp+B0h]
  unsigned __int8 *v200; // [xsp+30100h] [xbp+B8h]
  __int64 v201; // [xsp+30108h] [xbp+C0h]
  unsigned int *v202; // [xsp+30110h] [xbp+C8h]
  __int64 v203; // [xsp+30118h] [xbp+D0h] BYREF
  __int64 v204; // [xsp+30120h] [xbp+D8h]
  __int64 v205; // [xsp+30130h] [xbp+E8h] BYREF
  int v206; // [xsp+30138h] [xbp+F0h]
  int v207; // [xsp+3013Ch] [xbp+F4h]
  unsigned int *v208; // [xsp+30140h] [xbp+F8h]
  void *v209; // [xsp+30148h] [xbp+100h]
  __int64 v210; // [xsp+30150h] [xbp+108h]
  unsigned __int64 v211[2]; // [xsp+30158h] [xbp+110h] BYREF
  _BYTE v212[1024]; // [xsp+30168h] [xbp+120h] BYREF

  v13 = (unsigned int)(a3 + 2);
  v14 = 24;
  v16 = 24LL * (unsigned int)v13 + 15;
  v197 = a5;
  v198 = a4;
  v17 = &v187[-(v16 & 0x3FFFFF0000LL)];
  v18 = v16 & 0xFFF0;
  if ( v187 != (_BYTE *)v17 )
  {
    do
      v186 = 0;
    while ( v181 != v17 );
  }
  v181[0] = 0;
  if ( v18 >= 0x400uLL )
    v186 = 0;
  v19 = v182;
  v182[0] = 0;
  v20 = v185;
  v183 = a1;
  v184 = v185;
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
      *((_QWORD *)v20 + 2) = &v182[6 * v22];
      v20 += 24;
      v13 = *(_WORD *)(v23 + 868) & 0xFF3F | 0x40u;
      *(_WORD *)(v23 + 868) = *(_WORD *)(v23 + 868) & 0xFF3F | 0x40;
    }
    while ( v21 != a3 );
    v24 = v183;
    v200 = (unsigned __int8 *)&v182[6 * a3];
    LODWORD(v201) = a3 + 1;
  }
  else
  {
    v24 = a1;
    v200 = (unsigned __int8 *)v182;
    LODWORD(v201) = 1;
  }
  StatusReg = _ReadStatusReg(TPIDR_EL0);
  v194 = &dword_496770;
  v195 = v182;
  v211[1] = 1024;
  v26 = v212;
  v27 = v200;
  v191 = 40;
  v28 = *(unsigned int *)(StatusReg + 40);
  *(_DWORD *)(StatusReg + 40) = 0;
  v29 = (__int64)v195;
  *((_QWORD *)v27 + 2) = 0;
  v30 = *(_QWORD *)(v24 + 776);
  v211[0] = (unsigned __int64)v212;
  *(_DWORD *)v29 = 1;
  v189 = v212;
  v190 = StatusReg;
  v192 = v28;
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
      v32 = (_QWORD *)sub_40B890(
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
        if ( (_BYTE *)v211[0] != v189 )
          sub_40C1A0(v211[0], v33, v34, v35, v36, v37, v38, v39, v40);
        sub_432250(12, *(const char **)(a1 + 8), 0, "cannot allocate dependency list");
      }
      *v32 = v24;
      v42 = 8LL * (v31 + 1);
      j_ifunc_40DC90(v32 + 1, v30, v42);
      j_ifunc_40DC90(&v41[v31 + 2], v41, v42);
      __dmb(0xBu);
      v43 = *(_BYTE *)(v24 + 870);
      *(_QWORD *)(v24 + 1032) = v41;
      *(_BYTE *)(v24 + 870) = v43 | 0x10;
    }
    if ( *v195 )
    {
      while ( 1 )
      {
        v45 = (_DWORD *)*((_QWORD *)v195 + 2);
        v195 = v45;
        if ( !v45 )
          break;
        if ( !*v45 )
          goto LABEL_18;
      }
      v46 = 0;
      goto LABEL_81;
    }
LABEL_18:
    v29 = (__int64)v195;
    v24 = *((_QWORD *)v195 + 1);
    v30 = *(_QWORD *)(v24 + 776);
    *v195 = 1;
    if ( v30 )
      goto LABEL_10;
LABEL_19:
    if ( *(_QWORD *)(v24 + 1032) )
      v44 = 1;
    else
      v44 = a1 == v24;
    if ( !v44 )
    {
      v29 = *(unsigned __int16 *)(v24 + 770);
      if ( *(_WORD *)(v24 + 770) )
      {
        if ( (sub_42EC30(
                v211,
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
          sub_432250(12, *(const char **)(a1 + 8), 0, "cannot allocate dependency buffer");
        v30 = v211[0];
      }
    }
  }
  v47 = *(_BYTE *)(v24 + 870);
  v48 = *(unsigned int **)(*(_QWORD *)(v24 + 104) + 8LL);
  v202 = v48;
  if ( (v47 & 0x20) != 0 )
    v202 = (unsigned int *)((char *)v48 + *(_QWORD *)v24);
  v49 = *(__int64 **)(v24 + 16);
  v205 = v24;
  v206 = v198;
  v207 = v197;
  v50 = *v49;
  v29 = (__int64)v202;
  v208 = v202;
  if ( !v50 )
  {
    v31 = 0;
    goto LABEL_14;
  }
  v193 = (unsigned __int8 *)v195;
  v199 = &v205;
  v31 = 0;
  if ( v50 != 1 )
  {
    while ( 1 )
    {
      v29 = 2147483645;
      if ( (v50 & 0xFFFFFFFFFFFFFFFDLL) == 0x7FFFFFFD )
        break;
LABEL_52:
      v78 = v49[2];
      v49 += 2;
      v50 = v78;
      if ( !v78 )
        goto LABEL_14;
      if ( v50 == 1 )
        goto LABEL_33;
    }
    v51 = (char *)v202 + v49[1];
    v79 = sub_433614((__int64)v51);
    if ( !v79 )
    {
LABEL_134:
      v209 = v51;
      if ( (dword_496770 & 1) != 0 )
      {
        v169 = *(const char **)(v24 + 8);
        if ( !*v169 )
        {
          v169 = (const char *)off_491918;
          if ( !off_491918 )
            v169 = "<main program>";
        }
        sub_438334("load auxiliary object=%s requested by file=%s\n", v51, v169);
      }
      v46 = sub_4322A0(
              &v203,
              (void (__fastcall *)(__int64))sub_44B870,
              (__int64)&v205,
              (__int64)v26,
              v28,
              v13,
              v14,
              v80);
      if ( v204 )
      {
        if ( *v49 != 2147483645 )
          goto LABEL_79;
        _kfifo_free((__kfifo *)&v203);
        goto LABEL_52;
      }
      v157 = v193;
      StatusReg = (__int64)&v170;
      v158 = *((_QWORD *)v193 + 1);
      v170 = *(_QWORD *)v193;
      v171 = v158;
      v172 = *((_QWORD *)v193 + 2);
      v159 = v210;
      *(_DWORD *)v193 = 0;
      *((_QWORD *)v157 + 1) = v159;
      if ( v30 )
      {
        *(_QWORD *)(v30 + 8LL * v31++) = v159;
        v159 = v210;
      }
      if ( (*(_WORD *)(v159 + 868) & 0xC0) != 0 )
      {
        v166 = &v170;
        do
        {
          v28 = (__int64)v166;
          v166 = (__int64 *)v166[2];
          if ( !v166 )
          {
            v26 = v193;
            v29 = v171;
            *(_QWORD *)v193 = v170;
            *((_QWORD *)v26 + 1) = v29;
            *((_QWORD *)v26 + 2) = v172;
            goto LABEL_52;
          }
        }
        while ( v166[1] != v159 );
        v13 = (__int64)v200;
        *((_QWORD *)v193 + 2) = &v170;
        v160 = *(_QWORD *)(v159 + 32);
        v167 = *(_QWORD *)(v28 + 16);
        *(_QWORD *)(v28 + 16) = *(_QWORD *)(v167 + 16);
        if ( v167 == v13 )
          v168 = (unsigned __int8 *)v28;
        else
          v168 = (unsigned __int8 *)v13;
        v200 = v168;
        if ( !v160 )
          goto LABEL_141;
      }
      else
      {
        v28 = 1;
        *((_QWORD *)v193 + 2) = &v170;
        LODWORD(v201) = v201 + 1;
        v160 = *(_QWORD *)(v159 + 32);
        *(_WORD *)(v159 + 868) = *(_WORD *)(v159 + 868) & 0xFF3F | 0x40;
        if ( !v160 )
        {
LABEL_141:
          v161 = *(_QWORD *)(v159 + 24);
          if ( v161 )
            *(_QWORD *)(v161 + 32) = v160;
          v162 = v171;
          *(_QWORD *)(v159 + 32) = *(_QWORD *)(v171 + 32);
          *(_QWORD *)(v162 + 32) = v159;
          v26 = *(unsigned __int8 **)(v159 + 32);
          if ( v26 )
            *((_QWORD *)v26 + 3) = v159;
          *(_QWORD *)(v159 + 24) = v162;
          v29 = (__int64)v200;
          if ( v193 == v200 )
          {
            v193 = (unsigned __int8 *)&v170;
            v200 = (unsigned __int8 *)&v170;
          }
          else
          {
            v193 = (unsigned __int8 *)&v170;
          }
          goto LABEL_52;
        }
      }
      *(_QWORD *)(v160 + 24) = *(_QWORD *)(v159 + 24);
      goto LABEL_141;
    }
    if ( dword_491570 )
      goto LABEL_175;
    v196 = v79;
    v82 = (void *)ifunc_40DFD0(v51);
    v93 = *(_QWORD *)(v24 + 912);
    v94 = v196;
    if ( v93 )
    {
      if ( v93 != -1 )
      {
        v95 = *(_QWORD *)(v24 + 912);
        v188 = v82;
        v96 = ifunc_40DFD0(v95);
        v82 = v188;
        v97 = v96;
        v94 = v196;
LABEL_60:
        v98 = qword_4967A8;
        if ( (unsigned __int64)qword_4967A8 < 0x15 )
          v98 = 21;
        if ( v98 < v97 )
          v98 = v97;
        v99 = (__int64)v82 + (v98 - 4) * v94 + 15;
        v100 = v99 & 0xFFFFFFFFFFFF0000LL;
        v101 = v99 & 0xFFF0;
        v102 = (_QWORD *)((char *)v175 - v100);
        if ( v175 != v102 )
        {
          do
            v174 = 0;
          while ( &v172 != v102 );
        }
        v172 = 0;
        if ( v101 >= 0x400uLL )
          v174 = 0;
        v103 = sub_4336E0(v24, (unsigned __int8 *)v51, v173);
        if ( !*v103 )
        {
          v29 = *v49;
          if ( *v49 == 2147483645 )
            sub_432250(0, v51, 0, "empty dynamic string token substitution");
          if ( (dword_496770 & 1) != 0 )
            goto LABEL_71;
          goto LABEL_52;
        }
        v51 = (char *)v103;
        goto LABEL_134;
      }
    }
    else
    {
      v163 = **(unsigned __int8 **)(v24 + 8);
      if ( **(_BYTE **)(v24 + 8) )
        sub_41F250(
          "(l)->l_name[0] == '\\0' || IS_RTLD (l)",
          (__int64)"dl-deps.c",
          0x10Fu,
          (__int64)"_dl_map_object_deps");
      v188 = v82;
      v164 = sub_437AD0(v85, v86, v87, v88, v89, v90, v91, v92, v163, 0, v196, v81, v82, v83, v84);
      *(_QWORD *)(v24 + 912) = v164;
      v82 = v188;
      v94 = v196;
      if ( (unsigned __int64)(v164 - 1) <= 0xFFFFFFFFFFFFFFFDLL )
      {
        v165 = ifunc_40DFD0(v164);
        v82 = v188;
        v97 = v165;
        v94 = v196;
        goto LABEL_60;
      }
    }
    v97 = 0;
    goto LABEL_60;
  }
LABEL_33:
  v51 = (char *)v202 + v49[1];
  v53 = sub_433614((__int64)v51);
  if ( !v53 )
  {
    v26 = (unsigned __int8 *)v51;
    goto LABEL_47;
  }
  if ( dword_491570 )
LABEL_175:
    sub_432250(0, v51, 0, "DST not allowed in SUID/SGID programs");
  v54 = ifunc_40DFD0(v51);
  v67 = *(_QWORD *)(v24 + 912);
  v68 = v54;
  if ( !v67 )
  {
    v104 = **(unsigned __int8 **)(v24 + 8);
    if ( **(_BYTE **)(v24 + 8) )
      sub_41F250("(l)->l_name[0] == '\\0' || IS_RTLD (l)", (__int64)"dl-deps.c", 0xE4u, (__int64)"_dl_map_object_deps");
    v196 = v68;
    v105 = sub_437AD0(v59, v60, v61, v62, v63, v64, v65, v66, v104, 0, v55, v68, v56, v57, v58);
    *(_QWORD *)(v24 + 912) = v105;
    v68 = v196;
    if ( (unsigned __int64)(v105 - 1) <= 0xFFFFFFFFFFFFFFFDLL )
    {
      v70 = ifunc_40DFD0(v105);
      v68 = v196;
      goto LABEL_38;
    }
    goto LABEL_73;
  }
  if ( v67 == -1 )
  {
LABEL_73:
    v70 = 0;
    goto LABEL_38;
  }
  v69 = *(_QWORD *)(v24 + 912);
  v196 = v68;
  v70 = ifunc_40DFD0(v69);
  v68 = v196;
LABEL_38:
  v71 = qword_4967A8;
  if ( (unsigned __int64)qword_4967A8 < 0x15 )
    v71 = 21;
  if ( v71 < v70 )
    v71 = v70;
  v72 = v68 + (v71 - 4) * v53 + 15;
  v73 = v72 & 0xFFFFFFFFFFFF0000LL;
  v74 = v72 & 0xFFF0;
  v75 = (_QWORD *)((char *)v181 - v73);
  if ( v181 != v75 )
  {
    do
      v180 = 0;
    while ( &v178 != v75 );
  }
  v178 = 0;
  if ( v74 >= 0x400uLL )
    v180 = 0;
  v26 = sub_4336E0(v24, (unsigned __int8 *)v51, v179);
  if ( !*v26 )
  {
    if ( (*v194 & 1) == 0 )
      goto LABEL_52;
LABEL_71:
    sub_438334("cannot load auxiliary `%s' because of empty dynamic string token substitution\n", v51);
    goto LABEL_52;
  }
LABEL_47:
  v209 = v26;
  v46 = sub_4322A0(&v203, (void (__fastcall *)(__int64))sub_44B870, (__int64)v199, (__int64)v26, v28, v13, v14, v52);
  if ( !v204 )
  {
    v76 = v210;
    v29 = *(unsigned __int16 *)(v210 + 868);
    if ( (v29 & 0xC0) == 0 )
    {
      v175[1] = 0;
      v26 = v200;
      v176 = 0;
      v77 = v201;
      v177 = v210;
      v178 = 0;
      *((_QWORD *)v200 + 2) = &v176;
      v200 = (unsigned __int8 *)&v176;
      LODWORD(v201) = v77 + 1;
      StatusReg = 1;
      v29 = *(_WORD *)(v76 + 868) & 0xFF3F | 0x40u;
      *(_WORD *)(v76 + 868) = *(_WORD *)(v76 + 868) & 0xFF3F | 0x40;
    }
    if ( v30 )
      *(_QWORD *)(v30 + 8LL * v31++) = v76;
    goto LABEL_52;
  }
LABEL_79:
  if ( !v46 )
    v46 = -1;
LABEL_81:
  if ( (_BYTE *)v211[0] != v189 )
    sub_40C1A0(v211[0], a6, a7, a8, a9, a10, a11, a12, a13);
  v106 = v191;
  if ( *(_DWORD *)(v190 + v191) )
    v107 = 1;
  else
    v107 = v192 == 0;
  if ( !v107 )
  {
    StatusReg = v192;
    *(_DWORD *)(v190 + v191) = v192;
  }
  v200 = *(unsigned __int8 **)(a1 + 1032);
  if ( v200 )
  {
    if ( (*(_WORD *)(a1 + 868) & 3) == 2 )
    {
      if ( *(_QWORD *)(a1 + 776) )
        sub_41F250("map->l_searchlist.r_list == NULL", (__int64)"dl-deps.c", 0x1C8u, (__int64)"_dl_map_object_deps");
    }
    else
    {
      v200 = 0;
    }
  }
  v110 = (__int64 *)sub_40B890(
                      8LL * (unsigned int)(2 * v201 + 1),
                      a6,
                      a7,
                      a8,
                      a9,
                      a10,
                      a11,
                      a12,
                      a13,
                      v106,
                      StatusReg,
                      (__int64)v26,
                      (void *)v28,
                      (void *)v13,
                      (void *)v14);
  if ( !v110 )
    sub_432250(12, *(const char **)(a1 + 8), 0, "cannot allocate symbol search list");
  v119 = v201;
  v120 = 0;
  v121 = -1;
  *(_DWORD *)(a1 + 784) = v201;
  v122 = &v110[v119 + 1];
  *(_QWORD *)(a1 + 776) = v122;
  do
  {
    v123 = (__int64 *)*((_QWORD *)v19 + 1);
    if ( v198 && (*((_WORD *)v123 + 434) & 0x4000) != 0 )
    {
      --*(_DWORD *)(a1 + 784);
    }
    else
    {
      v122[v120] = (__int64)v123;
      if ( (__int64 *)a1 == v123 )
        v121 = v120;
      ++v120;
    }
    v124 = *((_WORD *)v123 + 434) & 0xFF3F;
    *((_WORD *)v123 + 434) &= 0xFF3Fu;
    v19 = (_DWORD *)*((_QWORD *)v19 + 2);
  }
  while ( v19 );
  v125 = *(unsigned int **)(a1 + 1040);
  if ( !v125 )
    goto LABEL_118;
  v126 = *v125;
  if ( !v120 )
  {
    v130 = v125 + 2;
    *(_WORD *)(a1 + 868) &= 0xFF3Fu;
    if ( (_DWORD)v126 )
    {
LABEL_103:
      v131 = 0;
      v199 = (__int64 *)(v130 + 4);
      do
      {
        while ( 1 )
        {
          if ( (*(_WORD *)(*(_QWORD *)&v130[2 * v131] + 868LL) & 0xC0) != 0 )
          {
            v132 = *(unsigned int *)(a1 + 1048);
            v201 = v131;
            v202 = v125;
            v133 = sub_40B890(
                     8 * (v132 + 1),
                     v111,
                     v112,
                     v113,
                     v114,
                     v115,
                     v116,
                     v117,
                     v118,
                     (__int64)v123,
                     v124,
                     v131,
                     (void *)v108,
                     (void *)v126,
                     v109);
            v125 = v202;
            v19 = (_DWORD *)v133;
            if ( v133 )
              break;
          }
          if ( *v125 <= ++v131 )
            goto LABEL_114;
        }
        j_ifunc_40DC90(v133 + 8, v130, 8LL * v131);
        v125 = v202;
        v134 = *v202;
        if ( *v202 <= v131 + 1 )
        {
          *v19 = v131;
          v135 = v131 + 1;
        }
        else
        {
          v123 = v199;
          v124 = (__int64)&v130[2 * v131 + 2];
          v126 = (unsigned __int64)&v199[v134 - 2 - v131 + v201];
          do
          {
            v108 = *(unsigned __int16 *)(*(_QWORD *)v124 + 868LL);
            if ( (v108 & 0xC0) == 0 )
            {
              v108 = (__int64)&v19[2 * v131++];
              *(_QWORD *)(v108 + 8) = *(_QWORD *)v124;
            }
            v124 += 8;
          }
          while ( v126 != v124 );
          *v19 = v131;
          v135 = v134;
        }
        v131 = v135 + 1;
      }
      while ( *v125 > v131 );
LABEL_114:
      if ( v120 )
      {
        v128 = &v122[v120];
        goto LABEL_116;
      }
    }
    goto LABEL_162;
  }
  v127 = &v110[v119 + 1];
  v128 = &v122[v120];
  v108 = 1;
  do
  {
    v129 = *v127++;
    v123 = (__int64 *)v129;
    v124 = *(_WORD *)(v129 + 868) & 0xFF3F | 0x40u;
    *(_WORD *)(v129 + 868) = *(_WORD *)(v129 + 868) & 0xFF3F | 0x40;
  }
  while ( v127 != v128 );
  v130 = v125 + 2;
  *(_WORD *)(a1 + 868) &= 0xFF3Fu;
  if ( (_DWORD)v126 )
    goto LABEL_103;
LABEL_116:
  v136 = v122;
  do
  {
    v137 = *v136++;
    *(_WORD *)(v137 + 868) &= 0xFF3Fu;
  }
  while ( v136 != v128 );
LABEL_118:
  if ( v121 >= v120 )
LABEL_162:
    sub_41F250("map_index < nlist", (__int64)"dl-deps.c", 0x214u, (__int64)"_dl_map_object_deps");
  if ( v121 )
  {
    v138 = 0;
    *v110 = v122[v121];
    do
    {
      v110[v138 + 1] = v122[v138];
      ++v138;
    }
    while ( v121 != v138 );
    if ( v121 + 1 < v120 )
    {
      v139 = v121 + 1;
      do
      {
        v110[v139] = v122[v139];
        ++v139;
      }
      while ( v120 - 2 - v121 + v121 + 1 + 1LL != v139 );
    }
  }
  else
  {
    j_ifunc_40DC90(v110, v122, 8LL * v120);
  }
  sub_4472F0(v110, v120, (&off_4914A8)[21 * *(_QWORD *)(*v110 + 48) + 4] != (__int64 *)*v110, 0);
  v110[v120] = 0;
  __dmb(0xBu);
  v154 = *(_BYTE *)(a1 + 870);
  *(_QWORD *)(a1 + 1032) = v110;
  *(_BYTE *)(a1 + 870) = v154 | 0x10;
  if ( v19 )
  {
    __dmb(0xBu);
    v155 = *(_QWORD *)(a1 + 1040);
    *(_QWORD *)(a1 + 1040) = v19;
    sub_439EF0(v155, v146, v147, v148, v149, v150, v151, v152, v153, v140, v141, v142, v143, v144, v145);
  }
  result = v200;
  if ( v200 )
    result = (_DWORD *)sub_439EF0(
                         (unsigned __int64)v200,
                         v146,
                         v147,
                         v148,
                         v149,
                         v150,
                         v151,
                         v152,
                         v153,
                         v140,
                         v141,
                         v142,
                         v143,
                         v144,
                         v145);
  if ( v46 )
  {
    if ( v46 == -1 )
      v46 = 0;
    sub_432204(v46, (__int64)&v203, 0);
  }
  return result;
}
