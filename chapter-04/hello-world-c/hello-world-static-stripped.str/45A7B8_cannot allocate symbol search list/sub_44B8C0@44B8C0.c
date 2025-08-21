__int64 *__fastcall sub_44B8C0(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        int a5,
        long double a6,
        long double a7,
        long double a8,
        long double a9,
        long double a10,
        long double a11,
        long double a12,
        long double a13)
{
  __int64 v13; // x5
  __int64 v15; // x0
  _QWORD *v16; // x3
  unsigned __int16 v17; // w0
  _DWORD *v18; // x19
  _BYTE *v19; // x0
  __int64 v20; // x3
  int v21; // w5
  __int64 v22; // x4
  __int64 v23; // x22
  unsigned __int64 StatusReg; // x2
  _BYTE *v25; // x3
  __int64 *v26; // x0
  __int64 v27; // x4
  __int64 v28; // x1
  __int64 v29; // x25
  unsigned int v30; // w24
  _QWORD *v31; // x0
  long double v32; // q0
  _QWORD *v33; // x20
  __int64 v34; // x21
  char v35; // w0
  bool v36; // zf
  _DWORD *v37; // x0
  unsigned int v38; // w20
  char v39; // w0
  unsigned int *v40; // x1
  __int64 *v41; // x21
  __int64 v42; // x0
  char *v43; // x20
  __int64 v44; // x26
  long double v45; // q0
  __int64 v46; // x0
  __int64 v47; // x2
  __int64 v48; // x4
  __int64 v49; // x5
  long double v50; // q0
  long double v51; // q1
  long double v52; // q2
  long double v53; // q3
  long double v54; // q4
  long double v55; // q5
  long double v56; // q6
  long double v57; // q7
  __int64 v58; // x1
  __int64 v59; // x3
  __int64 v60; // x0
  unsigned __int64 v61; // x0
  unsigned __int64 v62; // x1
  __int64 v63; // x0
  unsigned __int64 v64; // x1
  unsigned __int16 v65; // w0
  __int64 *v66; // x1
  __int64 v67; // x0
  int v68; // w2
  __int64 v69; // t1
  __int64 v70; // x2
  __int64 v71; // x3
  __int64 v72; // x4
  __int64 v73; // x5
  long double v74; // q0
  long double v75; // q1
  long double v76; // q2
  long double v77; // q3
  long double v78; // q4
  long double v79; // q5
  long double v80; // q6
  long double v81; // q7
  __int64 v82; // x1
  __int64 v83; // x2
  __int64 v84; // x0
  __int64 v85; // x0
  unsigned __int64 v86; // x3
  unsigned __int64 v87; // x1
  __int64 v88; // x0
  unsigned __int64 v89; // x1
  unsigned __int16 v90; // w0
  __int64 *v91; // x1
  char *v92; // x0
  __int64 v93; // x0
  __int64 v94; // x0
  __int64 v95; // x1
  bool v96; // zf
  __int64 v97; // x4
  __int64 *v98; // x28
  long double v99; // q0
  long double v100; // q1
  long double v101; // q2
  long double v102; // q3
  long double v103; // q4
  long double v104; // q5
  long double v105; // q6
  long double v106; // q7
  int v107; // w0
  unsigned int v108; // w25
  unsigned int v109; // w26
  __int64 *v110; // x27
  __int64 v111; // x1
  __int16 *v112; // x2
  unsigned int *v113; // x7
  __int64 v114; // x5
  __int64 *v115; // x0
  __int64 *v116; // x3
  __int64 v117; // t1
  _DWORD *v118; // x24
  unsigned int v119; // w22
  __int64 v120; // x0
  __int64 v121; // x0
  unsigned int v122; // w0
  unsigned int v123; // w22
  __int64 *v124; // x1
  __int64 v125; // t1
  __int64 v126; // x0
  __int64 v127; // x1
  char v128; // w0
  __int64 v129; // x0
  __int64 *result; // x0
  __int64 *v131; // x3
  __int64 v132; // x1
  __int64 v133; // x0
  __int64 v134; // x1
  __int64 v135; // x3
  __int64 v136; // x1
  __int64 v137; // x0
  __int64 v138; // x0
  __int64 v139; // x0
  __int64 *v140; // x1
  __int64 v141; // x3
  __int64 *v142; // x3
  const char *v143; // x2
  __int64 v144; // [xsp+8h] [xbp-30040h] BYREF
  __int64 v145; // [xsp+10h] [xbp-30038h]
  __int64 v146; // [xsp+18h] [xbp-30030h] BYREF
  char v147[1008]; // [xsp+28h] [xbp-30020h] BYREF
  __int64 v148; // [xsp+418h] [xbp-2FC30h]
  _QWORD v149[2]; // [xsp+10018h] [xbp-20030h] BYREF
  int v150; // [xsp+10028h] [xbp-20020h] BYREF
  __int64 v151; // [xsp+10030h] [xbp-20018h]
  __int64 v152; // [xsp+10038h] [xbp-20010h] BYREF
  char v153[1008]; // [xsp+10048h] [xbp-20000h] BYREF
  __int64 v154; // [xsp+10438h] [xbp-1FC10h]
  _QWORD v155[2]; // [xsp+20038h] [xbp-10010h] BYREF
  _DWORD v156[2]; // [xsp+20048h] [xbp-10000h] BYREF
  __int64 v157; // [xsp+20050h] [xbp-FFF8h]
  _BYTE *v158; // [xsp+20058h] [xbp-FFF0h]
  _BYTE v159[984]; // [xsp+20060h] [xbp-FFE8h] BYREF
  __int64 v160; // [xsp+20438h] [xbp-FC10h]
  _BYTE v161[16]; // [xsp+30038h] [xbp-10h] BYREF
  __int64 v162; // [xsp+300A8h] [xbp+60h]
  _BYTE *v163; // [xsp+300B0h] [xbp+68h]
  unsigned __int64 v164; // [xsp+300B8h] [xbp+70h]
  __int64 v165; // [xsp+300C0h] [xbp+78h]
  unsigned int v166; // [xsp+300CCh] [xbp+84h]
  __int64 *v167; // [xsp+300D0h] [xbp+88h]
  int *v168; // [xsp+300D8h] [xbp+90h]
  _DWORD *v169; // [xsp+300E0h] [xbp+98h]
  __int64 v170; // [xsp+300E8h] [xbp+A0h]
  int v171; // [xsp+300F0h] [xbp+A8h]
  int v172; // [xsp+300F4h] [xbp+ACh]
  __int64 *v173; // [xsp+300F8h] [xbp+B0h]
  __int64 *v174; // [xsp+30100h] [xbp+B8h]
  __int64 v175; // [xsp+30108h] [xbp+C0h]
  unsigned int *v176; // [xsp+30110h] [xbp+C8h]
  char v177[8]; // [xsp+30118h] [xbp+D0h] BYREF
  __int64 v178; // [xsp+30120h] [xbp+D8h]
  __int64 v179; // [xsp+30130h] [xbp+E8h] BYREF
  int v180; // [xsp+30138h] [xbp+F0h]
  int v181; // [xsp+3013Ch] [xbp+F4h]
  unsigned int *v182; // [xsp+30140h] [xbp+F8h]
  char *v183; // [xsp+30148h] [xbp+100h]
  __int64 v184; // [xsp+30150h] [xbp+108h]
  _QWORD v185[2]; // [xsp+30158h] [xbp+110h] BYREF
  _BYTE v186[1024]; // [xsp+30168h] [xbp+120h] BYREF

  v13 = (unsigned int)(a3 + 2);
  v15 = 24LL * (unsigned int)v13 + 15;
  v171 = a5;
  v172 = a4;
  v16 = &v161[-(v15 & 0x3FFFFF0000LL)];
  v17 = v15 & 0xFFF0;
  if ( v161 != (_BYTE *)v16 )
  {
    do
      v160 = 0;
    while ( v155 != v16 );
  }
  v155[0] = 0;
  if ( v17 >= 0x400uLL )
    v160 = 0;
  v18 = v156;
  v156[0] = 0;
  v19 = v159;
  v157 = a1;
  v158 = v159;
  *(_WORD *)(a1 + 868) = *(_WORD *)(a1 + 868) & 0xFF3F | 0x40;
  if ( a3 )
  {
    v20 = 0;
    do
    {
      v21 = v20 + 2;
      *(_DWORD *)v19 = 0;
      v22 = *(_QWORD *)(a2 + 8 * v20++);
      *((_QWORD *)v19 + 1) = v22;
      *((_QWORD *)v19 + 2) = &v156[6 * v21];
      v19 += 24;
      v13 = *(_WORD *)(v22 + 868) & 0xFF3F | 0x40u;
      *(_WORD *)(v22 + 868) = *(_WORD *)(v22 + 868) & 0xFF3F | 0x40;
    }
    while ( v20 != a3 );
    v23 = v157;
    v174 = (__int64 *)&v156[6 * a3];
    LODWORD(v175) = a3 + 1;
  }
  else
  {
    v23 = a1;
    v174 = (__int64 *)v156;
    LODWORD(v175) = 1;
  }
  StatusReg = _ReadStatusReg(TPIDR_EL0);
  v168 = &dword_496770;
  v169 = v156;
  v185[1] = 1024;
  v25 = v186;
  v26 = v174;
  v165 = 40;
  v27 = *(unsigned int *)(StatusReg + 40);
  *(_DWORD *)(StatusReg + 40) = 0;
  v28 = (__int64)v169;
  v26[2] = 0;
  v29 = *(_QWORD *)(v23 + 776);
  v185[0] = v186;
  *(_DWORD *)v28 = 1;
  v163 = v186;
  v164 = StatusReg;
  v166 = v27;
  if ( !v29 )
    goto LABEL_19;
LABEL_10:
  v29 = 0;
  while ( !*(_QWORD *)(v23 + 72) )
  {
    if ( *(_QWORD *)(v23 + 560) )
      break;
    v30 = 0;
    if ( *(_QWORD *)(v23 + 544) )
      break;
LABEL_14:
    if ( v29 )
    {
      *(_QWORD *)(v29 + 8LL * v30) = 0;
      v31 = (_QWORD *)sub_40B890(
                        8LL * (2 * (v30 + 1) + 1),
                        a6,
                        a7,
                        a8,
                        a9,
                        a10,
                        a11,
                        a12,
                        a13,
                        v28,
                        (__int16 *)StatusReg,
                        (__int64)v25,
                        v27,
                        v13);
      v33 = v31;
      if ( !v31 )
      {
        if ( (_BYTE *)v185[0] != v163 )
          sub_40C1A0(v185[0]);
        sub_432250(12, *(_QWORD *)(a1 + 8), v32, 0, "cannot allocate dependency list");
      }
      *v31 = v23;
      v34 = 8LL * (v30 + 1);
      j_ifunc_40DC90(v31 + 1, v29, v34);
      j_ifunc_40DC90(&v33[v30 + 2], v33, v34);
      __dmb(0xBu);
      v35 = *(_BYTE *)(v23 + 870);
      *(_QWORD *)(v23 + 1032) = v33;
      *(_BYTE *)(v23 + 870) = v35 | 0x10;
    }
    if ( *v169 )
    {
      while ( 1 )
      {
        v37 = (_DWORD *)*((_QWORD *)v169 + 2);
        v169 = v37;
        if ( !v37 )
          break;
        if ( !*v37 )
          goto LABEL_18;
      }
      v38 = 0;
      goto LABEL_81;
    }
LABEL_18:
    v28 = (__int64)v169;
    v23 = *((_QWORD *)v169 + 1);
    v29 = *(_QWORD *)(v23 + 776);
    *v169 = 1;
    if ( v29 )
      goto LABEL_10;
LABEL_19:
    if ( *(_QWORD *)(v23 + 1032) )
      v36 = 1;
    else
      v36 = a1 == v23;
    if ( !v36 )
    {
      v28 = *(unsigned __int16 *)(v23 + 770);
      if ( *(_WORD *)(v23 + 770) )
      {
        if ( (sub_42EC30(v185, *(unsigned __int16 *)(v23 + 770), 8) & 1) == 0 )
          sub_432250(12, *(_QWORD *)(a1 + 8), a6, 0, "cannot allocate dependency buffer");
        v29 = v185[0];
      }
    }
  }
  v39 = *(_BYTE *)(v23 + 870);
  v40 = *(unsigned int **)(*(_QWORD *)(v23 + 104) + 8LL);
  v176 = v40;
  if ( (v39 & 0x20) != 0 )
    v176 = (unsigned int *)((char *)v40 + *(_QWORD *)v23);
  v41 = *(__int64 **)(v23 + 16);
  v179 = v23;
  v180 = v172;
  v181 = v171;
  v42 = *v41;
  v28 = (__int64)v176;
  v182 = v176;
  if ( !v42 )
  {
    v30 = 0;
    goto LABEL_14;
  }
  v167 = (__int64 *)v169;
  v173 = &v179;
  v30 = 0;
  if ( v42 != 1 )
  {
    while ( 1 )
    {
      v28 = 2147483645;
      if ( (v42 & 0xFFFFFFFFFFFFFFFDLL) == 0x7FFFFFFD )
        break;
LABEL_52:
      v69 = v41[2];
      v41 += 2;
      v42 = v69;
      if ( !v69 )
        goto LABEL_14;
      if ( v42 == 1 )
        goto LABEL_33;
    }
    v43 = (char *)v176 + v41[1];
    v70 = sub_433614((__int64)v43);
    if ( !v70 )
    {
LABEL_134:
      v183 = v43;
      if ( (dword_496770 & 1) != 0 )
      {
        v143 = *(const char **)(v23 + 8);
        if ( !*v143 )
        {
          v143 = (const char *)off_491918;
          if ( !off_491918 )
            v143 = "<main program>";
        }
        sub_438334("load auxiliary object=%s requested by file=%s\n", v43, v143);
      }
      v38 = sub_4322A0(v177, sub_44B870, &v179);
      if ( v178 )
      {
        if ( *v41 != 2147483645 )
          goto LABEL_79;
        _kfifo_free((__kfifo *)v177);
        goto LABEL_52;
      }
      v131 = v167;
      StatusReg = (unsigned __int64)&v144;
      v132 = v167[1];
      v144 = *v167;
      v145 = v132;
      v146 = v167[2];
      v133 = v184;
      *(_DWORD *)v167 = 0;
      v131[1] = v133;
      if ( v29 )
      {
        *(_QWORD *)(v29 + 8LL * v30++) = v133;
        v133 = v184;
      }
      if ( (*(_WORD *)(v133 + 868) & 0xC0) != 0 )
      {
        v140 = &v144;
        do
        {
          v27 = (__int64)v140;
          v140 = (__int64 *)v140[2];
          if ( !v140 )
          {
            v25 = v167;
            v28 = v145;
            *v167 = v144;
            *((_QWORD *)v25 + 1) = v28;
            *((_QWORD *)v25 + 2) = v146;
            goto LABEL_52;
          }
        }
        while ( v140[1] != v133 );
        v13 = (__int64)v174;
        v167[2] = (__int64)&v144;
        v134 = *(_QWORD *)(v133 + 32);
        v141 = *(_QWORD *)(v27 + 16);
        *(_QWORD *)(v27 + 16) = *(_QWORD *)(v141 + 16);
        if ( v141 == v13 )
          v142 = (__int64 *)v27;
        else
          v142 = (__int64 *)v13;
        v174 = v142;
        if ( !v134 )
          goto LABEL_141;
      }
      else
      {
        v27 = 1;
        v167[2] = (__int64)&v144;
        LODWORD(v175) = v175 + 1;
        v134 = *(_QWORD *)(v133 + 32);
        *(_WORD *)(v133 + 868) = *(_WORD *)(v133 + 868) & 0xFF3F | 0x40;
        if ( !v134 )
        {
LABEL_141:
          v135 = *(_QWORD *)(v133 + 24);
          if ( v135 )
            *(_QWORD *)(v135 + 32) = v134;
          v136 = v145;
          *(_QWORD *)(v133 + 32) = *(_QWORD *)(v145 + 32);
          *(_QWORD *)(v136 + 32) = v133;
          v25 = *(_BYTE **)(v133 + 32);
          if ( v25 )
            *((_QWORD *)v25 + 3) = v133;
          *(_QWORD *)(v133 + 24) = v136;
          v28 = (__int64)v174;
          if ( v167 == v174 )
          {
            v167 = &v144;
            v174 = &v144;
          }
          else
          {
            v167 = &v144;
          }
          goto LABEL_52;
        }
      }
      *(_QWORD *)(v134 + 24) = *(_QWORD *)(v133 + 24);
      goto LABEL_141;
    }
    if ( dword_491570 )
      goto LABEL_175;
    v170 = v70;
    v72 = ifunc_40DFD0(v43);
    v82 = *(_QWORD *)(v23 + 912);
    v83 = v170;
    if ( v82 )
    {
      if ( v82 != -1 )
      {
        v84 = *(_QWORD *)(v23 + 912);
        v162 = v72;
        v85 = ifunc_40DFD0(v84);
        v72 = v162;
        v86 = v85;
        v83 = v170;
LABEL_60:
        v87 = qword_4967A8;
        if ( (unsigned __int64)qword_4967A8 < 0x15 )
          v87 = 21;
        if ( v87 < v86 )
          v87 = v86;
        v88 = v72 + (v87 - 4) * v83 + 15;
        v89 = v88 & 0xFFFFFFFFFFFF0000LL;
        v90 = v88 & 0xFFF0;
        v91 = (_QWORD *)((char *)v149 - v89);
        if ( v149 != v91 )
        {
          do
            v148 = 0;
          while ( &v146 != v91 );
        }
        v146 = 0;
        if ( v90 >= 0x400uLL )
          v148 = 0;
        v92 = sub_4336E0(v23, (unsigned __int8 *)v43, v147);
        if ( !*v92 )
        {
          v28 = *v41;
          if ( *v41 == 2147483645 )
            sub_432250(0, (__int64)v43, a6, 0, "empty dynamic string token substitution");
          if ( (dword_496770 & 1) != 0 )
            goto LABEL_71;
          goto LABEL_52;
        }
        v43 = v92;
        goto LABEL_134;
      }
    }
    else
    {
      v137 = **(unsigned __int8 **)(v23 + 8);
      if ( **(_BYTE **)(v23 + 8) )
        sub_41F250(
          "(l)->l_name[0] == '\\0' || IS_RTLD (l)",
          (__int64)"dl-deps.c",
          0x10Fu,
          (__int64)"_dl_map_object_deps");
      v162 = v72;
      v138 = sub_437AD0(v74, v75, v76, v77, v78, v79, v80, v81, v137, 0, v170, v71, v72, v73);
      *(_QWORD *)(v23 + 912) = v138;
      v72 = v162;
      v83 = v170;
      if ( (unsigned __int64)(v138 - 1) <= 0xFFFFFFFFFFFFFFFDLL )
      {
        v139 = ifunc_40DFD0(v138);
        v72 = v162;
        v86 = v139;
        v83 = v170;
        goto LABEL_60;
      }
    }
    v86 = 0;
    goto LABEL_60;
  }
LABEL_33:
  v43 = (char *)v176 + v41[1];
  v44 = sub_433614((__int64)v43);
  if ( !v44 )
  {
    v25 = v43;
    goto LABEL_47;
  }
  if ( dword_491570 )
LABEL_175:
    sub_432250(0, (__int64)v43, v45, 0, "DST not allowed in SUID/SGID programs");
  v46 = ifunc_40DFD0(v43);
  v58 = *(_QWORD *)(v23 + 912);
  v59 = v46;
  if ( !v58 )
  {
    v93 = **(unsigned __int8 **)(v23 + 8);
    if ( **(_BYTE **)(v23 + 8) )
      sub_41F250("(l)->l_name[0] == '\\0' || IS_RTLD (l)", (__int64)"dl-deps.c", 0xE4u, (__int64)"_dl_map_object_deps");
    v170 = v59;
    v94 = sub_437AD0(v50, v51, v52, v53, v54, v55, v56, v57, v93, 0, v47, v59, v48, v49);
    *(_QWORD *)(v23 + 912) = v94;
    v59 = v170;
    if ( (unsigned __int64)(v94 - 1) <= 0xFFFFFFFFFFFFFFFDLL )
    {
      v61 = ifunc_40DFD0(v94);
      v59 = v170;
      goto LABEL_38;
    }
    goto LABEL_73;
  }
  if ( v58 == -1 )
  {
LABEL_73:
    v61 = 0;
    goto LABEL_38;
  }
  v60 = *(_QWORD *)(v23 + 912);
  v170 = v59;
  v61 = ifunc_40DFD0(v60);
  v59 = v170;
LABEL_38:
  v62 = qword_4967A8;
  if ( (unsigned __int64)qword_4967A8 < 0x15 )
    v62 = 21;
  if ( v62 < v61 )
    v62 = v61;
  v63 = v59 + (v62 - 4) * v44 + 15;
  v64 = v63 & 0xFFFFFFFFFFFF0000LL;
  v65 = v63 & 0xFFF0;
  v66 = (_QWORD *)((char *)v155 - v64);
  if ( v155 != v66 )
  {
    do
      v154 = 0;
    while ( &v152 != v66 );
  }
  v152 = 0;
  if ( v65 >= 0x400uLL )
    v154 = 0;
  v25 = sub_4336E0(v23, (unsigned __int8 *)v43, v153);
  if ( !*v25 )
  {
    if ( (*v168 & 1) == 0 )
      goto LABEL_52;
LABEL_71:
    sub_438334("cannot load auxiliary `%s' because of empty dynamic string token substitution\n", v43);
    goto LABEL_52;
  }
LABEL_47:
  v183 = v25;
  v38 = sub_4322A0(v177, sub_44B870, v173);
  if ( !v178 )
  {
    v67 = v184;
    v28 = *(unsigned __int16 *)(v184 + 868);
    if ( (v28 & 0xC0) == 0 )
    {
      v149[1] = 0;
      v25 = v174;
      v150 = 0;
      v68 = v175;
      v151 = v184;
      v152 = 0;
      v174[2] = (__int64)&v150;
      v174 = (__int64 *)&v150;
      LODWORD(v175) = v68 + 1;
      StatusReg = 1;
      v28 = *(_WORD *)(v67 + 868) & 0xFF3F | 0x40u;
      *(_WORD *)(v67 + 868) = *(_WORD *)(v67 + 868) & 0xFF3F | 0x40;
    }
    if ( v29 )
      *(_QWORD *)(v29 + 8LL * v30++) = v67;
    goto LABEL_52;
  }
LABEL_79:
  if ( !v38 )
    v38 = -1;
LABEL_81:
  if ( (_BYTE *)v185[0] != v163 )
    sub_40C1A0(v185[0]);
  v95 = v165;
  if ( *(_DWORD *)(v164 + v165) )
    v96 = 1;
  else
    v96 = v166 == 0;
  if ( !v96 )
  {
    StatusReg = v166;
    *(_DWORD *)(v164 + v165) = v166;
  }
  v174 = *(__int64 **)(a1 + 1032);
  if ( v174 )
  {
    if ( (*(_WORD *)(a1 + 868) & 3) == 2 )
    {
      if ( *(_QWORD *)(a1 + 776) )
        sub_41F250("map->l_searchlist.r_list == NULL", (__int64)"dl-deps.c", 0x1C8u, (__int64)"_dl_map_object_deps");
    }
    else
    {
      v174 = 0;
    }
  }
  v98 = (__int64 *)sub_40B890(
                     8LL * (unsigned int)(2 * v175 + 1),
                     a6,
                     a7,
                     a8,
                     a9,
                     a10,
                     a11,
                     a12,
                     a13,
                     v95,
                     (__int16 *)StatusReg,
                     (__int64)v25,
                     v27,
                     v13);
  if ( !v98 )
    sub_432250(12, *(_QWORD *)(a1 + 8), v99, 0, "cannot allocate symbol search list");
  v107 = v175;
  v108 = 0;
  v109 = -1;
  *(_DWORD *)(a1 + 784) = v175;
  v110 = &v98[v107 + 1];
  *(_QWORD *)(a1 + 776) = v110;
  do
  {
    v111 = *((_QWORD *)v18 + 1);
    if ( v172 && (*(_WORD *)(v111 + 868) & 0x4000) != 0 )
    {
      --*(_DWORD *)(a1 + 784);
    }
    else
    {
      v110[v108] = v111;
      if ( a1 == v111 )
        v109 = v108;
      ++v108;
    }
    v112 = (__int16 *)(*(_WORD *)(v111 + 868) & 0xFF3F);
    *(_WORD *)(v111 + 868) &= 0xFF3Fu;
    v18 = (_DWORD *)*((_QWORD *)v18 + 2);
  }
  while ( v18 );
  v113 = *(unsigned int **)(a1 + 1040);
  if ( !v113 )
    goto LABEL_118;
  v114 = *v113;
  if ( !v108 )
  {
    v118 = v113 + 2;
    *(_WORD *)(a1 + 868) &= 0xFF3Fu;
    if ( (_DWORD)v114 )
    {
LABEL_103:
      v119 = 0;
      v173 = (__int64 *)(v118 + 4);
      do
      {
        while ( 1 )
        {
          if ( (*(_WORD *)(*(_QWORD *)&v118[2 * v119] + 868LL) & 0xC0) != 0 )
          {
            v120 = *(unsigned int *)(a1 + 1048);
            v175 = v119;
            v176 = v113;
            v121 = sub_40B890(
                     8 * (v120 + 1),
                     v99,
                     v100,
                     v101,
                     v102,
                     v103,
                     v104,
                     v105,
                     v106,
                     v111,
                     v112,
                     v119,
                     v97,
                     v114);
            v113 = v176;
            v18 = (_DWORD *)v121;
            if ( v121 )
              break;
          }
          if ( *v113 <= ++v119 )
            goto LABEL_114;
        }
        j_ifunc_40DC90(v121 + 8, v118, 8LL * v119);
        v113 = v176;
        v122 = *v176;
        if ( *v176 <= v119 + 1 )
        {
          *v18 = v119;
          v123 = v119 + 1;
        }
        else
        {
          v111 = (__int64)v173;
          v112 = (__int16 *)&v118[2 * v119 + 2];
          v114 = (__int64)&v173[v122 - 2 - v119 + v175];
          do
          {
            v97 = *(unsigned __int16 *)(*(_QWORD *)v112 + 868LL);
            if ( (v97 & 0xC0) == 0 )
            {
              v97 = (__int64)&v18[2 * v119++];
              *(_QWORD *)(v97 + 8) = *(_QWORD *)v112;
            }
            v112 += 4;
          }
          while ( (__int16 *)v114 != v112 );
          *v18 = v119;
          v123 = v122;
        }
        v119 = v123 + 1;
      }
      while ( *v113 > v119 );
LABEL_114:
      if ( v108 )
      {
        v116 = &v110[v108];
        goto LABEL_116;
      }
    }
    goto LABEL_162;
  }
  v115 = &v98[v107 + 1];
  v116 = &v110[v108];
  v97 = 1;
  do
  {
    v117 = *v115++;
    v111 = v117;
    v112 = (__int16 *)(*(_WORD *)(v117 + 868) & 0xFF3F | 0x40u);
    *(_WORD *)(v117 + 868) = *(_WORD *)(v117 + 868) & 0xFF3F | 0x40;
  }
  while ( v115 != v116 );
  v118 = v113 + 2;
  *(_WORD *)(a1 + 868) &= 0xFF3Fu;
  if ( (_DWORD)v114 )
    goto LABEL_103;
LABEL_116:
  v124 = v110;
  do
  {
    v125 = *v124++;
    *(_WORD *)(v125 + 868) &= 0xFF3Fu;
  }
  while ( v124 != v116 );
LABEL_118:
  if ( v109 >= v108 )
LABEL_162:
    sub_41F250("map_index < nlist", (__int64)"dl-deps.c", 0x214u, (__int64)"_dl_map_object_deps");
  if ( v109 )
  {
    v126 = 0;
    *v98 = v110[v109];
    do
    {
      v98[v126 + 1] = v110[v126];
      ++v126;
    }
    while ( v109 != v126 );
    if ( v109 + 1 < v108 )
    {
      v127 = v109 + 1;
      do
      {
        v98[v127] = v110[v127];
        ++v127;
      }
      while ( v108 - 2 - v109 + v109 + 1 + 1LL != v127 );
    }
  }
  else
  {
    j_ifunc_40DC90(v98, v110, 8LL * v108);
  }
  sub_4472F0(v98, v108, (&off_4914A8)[21 * *(_QWORD *)(*v98 + 48) + 4] != (__int64 *)*v98, 0);
  v98[v108] = 0;
  __dmb(0xBu);
  v128 = *(_BYTE *)(a1 + 870);
  *(_QWORD *)(a1 + 1032) = v98;
  *(_BYTE *)(a1 + 870) = v128 | 0x10;
  if ( v18 )
  {
    __dmb(0xBu);
    v129 = *(_QWORD *)(a1 + 1040);
    *(_QWORD *)(a1 + 1040) = v18;
    sub_439EF0(v129);
  }
  result = v174;
  if ( v174 )
    result = (__int64 *)sub_439EF0(v174);
  if ( v38 )
  {
    if ( v38 == -1 )
      v38 = 0;
    sub_432204(v38, v177, 0);
  }
  return result;
}
