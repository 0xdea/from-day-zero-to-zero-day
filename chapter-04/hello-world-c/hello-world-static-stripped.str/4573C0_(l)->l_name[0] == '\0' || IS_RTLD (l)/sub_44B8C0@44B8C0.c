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
  __int64 v47; // x1
  __int64 v48; // x3
  __int64 v49; // x0
  unsigned __int64 v50; // x0
  unsigned __int64 v51; // x1
  __int64 v52; // x0
  unsigned __int64 v53; // x1
  unsigned __int16 v54; // w0
  __int64 *v55; // x1
  __int64 v56; // x0
  int v57; // w2
  __int64 v58; // t1
  __int64 v59; // x2
  __int64 v60; // x4
  __int64 v61; // x1
  __int64 v62; // x2
  __int64 v63; // x0
  __int64 v64; // x0
  unsigned __int64 v65; // x3
  unsigned __int64 v66; // x1
  __int64 v67; // x0
  unsigned __int64 v68; // x1
  unsigned __int16 v69; // w0
  __int64 *v70; // x1
  char *v71; // x0
  __int64 v72; // x0
  __int64 v73; // x0
  __int64 v74; // x1
  bool v75; // zf
  __int64 v76; // x4
  __int64 v77; // x28
  long double v78; // q0
  long double v79; // q1
  long double v80; // q2
  long double v81; // q3
  long double v82; // q4
  long double v83; // q5
  long double v84; // q6
  long double v85; // q7
  int v86; // w0
  unsigned int v87; // w25
  unsigned int v88; // w26
  __int64 *v89; // x27
  __int64 v90; // x1
  __int16 *v91; // x2
  unsigned int *v92; // x7
  __int64 v93; // x5
  __int64 *v94; // x0
  __int64 *v95; // x3
  __int64 v96; // t1
  _DWORD *v97; // x24
  unsigned int v98; // w22
  __int64 v99; // x0
  __int64 v100; // x0
  unsigned int v101; // w0
  unsigned int v102; // w22
  __int64 *v103; // x1
  __int64 v104; // t1
  __int64 v105; // x0
  __int64 v106; // x1
  char v107; // w0
  __int64 v108; // x0
  __int64 *result; // x0
  __int64 *v110; // x3
  __int64 v111; // x1
  __int64 v112; // x0
  __int64 v113; // x1
  __int64 v114; // x3
  __int64 v115; // x1
  __int64 v116; // x0
  __int64 v117; // x0
  __int64 v118; // x0
  __int64 *v119; // x1
  __int64 v120; // x3
  __int64 *v121; // x3
  const char *v122; // x2
  __int64 v123; // [xsp+8h] [xbp-30040h] BYREF
  __int64 v124; // [xsp+10h] [xbp-30038h]
  __int64 v125; // [xsp+18h] [xbp-30030h] BYREF
  char v126[1008]; // [xsp+28h] [xbp-30020h] BYREF
  __int64 v127; // [xsp+418h] [xbp-2FC30h]
  _QWORD v128[2]; // [xsp+10018h] [xbp-20030h] BYREF
  int v129; // [xsp+10028h] [xbp-20020h] BYREF
  __int64 v130; // [xsp+10030h] [xbp-20018h]
  __int64 v131; // [xsp+10038h] [xbp-20010h] BYREF
  char v132[1008]; // [xsp+10048h] [xbp-20000h] BYREF
  __int64 v133; // [xsp+10438h] [xbp-1FC10h]
  _QWORD v134[2]; // [xsp+20038h] [xbp-10010h] BYREF
  _DWORD v135[2]; // [xsp+20048h] [xbp-10000h] BYREF
  __int64 v136; // [xsp+20050h] [xbp-FFF8h]
  _BYTE *v137; // [xsp+20058h] [xbp-FFF0h]
  _BYTE v138[984]; // [xsp+20060h] [xbp-FFE8h] BYREF
  __int64 v139; // [xsp+20438h] [xbp-FC10h]
  _BYTE v140[16]; // [xsp+30038h] [xbp-10h] BYREF
  __int64 v141; // [xsp+300A8h] [xbp+60h]
  _BYTE *v142; // [xsp+300B0h] [xbp+68h]
  unsigned __int64 v143; // [xsp+300B8h] [xbp+70h]
  __int64 v144; // [xsp+300C0h] [xbp+78h]
  unsigned int v145; // [xsp+300CCh] [xbp+84h]
  __int64 *v146; // [xsp+300D0h] [xbp+88h]
  int *v147; // [xsp+300D8h] [xbp+90h]
  _DWORD *v148; // [xsp+300E0h] [xbp+98h]
  __int64 v149; // [xsp+300E8h] [xbp+A0h]
  int v150; // [xsp+300F0h] [xbp+A8h]
  int v151; // [xsp+300F4h] [xbp+ACh]
  __int64 *v152; // [xsp+300F8h] [xbp+B0h]
  __int64 *v153; // [xsp+30100h] [xbp+B8h]
  __int64 v154; // [xsp+30108h] [xbp+C0h]
  unsigned int *v155; // [xsp+30110h] [xbp+C8h]
  char v156[8]; // [xsp+30118h] [xbp+D0h] BYREF
  __int64 v157; // [xsp+30120h] [xbp+D8h]
  __int64 v158; // [xsp+30130h] [xbp+E8h] BYREF
  int v159; // [xsp+30138h] [xbp+F0h]
  int v160; // [xsp+3013Ch] [xbp+F4h]
  unsigned int *v161; // [xsp+30140h] [xbp+F8h]
  char *v162; // [xsp+30148h] [xbp+100h]
  __int64 v163; // [xsp+30150h] [xbp+108h]
  _QWORD v164[2]; // [xsp+30158h] [xbp+110h] BYREF
  _BYTE v165[1024]; // [xsp+30168h] [xbp+120h] BYREF

  v13 = (unsigned int)(a3 + 2);
  v15 = 24LL * (unsigned int)v13 + 15;
  v150 = a5;
  v151 = a4;
  v16 = &v140[-(v15 & 0x3FFFFF0000LL)];
  v17 = v15 & 0xFFF0;
  if ( v140 != (_BYTE *)v16 )
  {
    do
      v139 = 0;
    while ( v134 != v16 );
  }
  v134[0] = 0;
  if ( v17 >= 0x400uLL )
    v139 = 0;
  v18 = v135;
  v135[0] = 0;
  v19 = v138;
  v136 = a1;
  v137 = v138;
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
      *((_QWORD *)v19 + 2) = &v135[6 * v21];
      v19 += 24;
      v13 = *(_WORD *)(v22 + 868) & 0xFF3F | 0x40u;
      *(_WORD *)(v22 + 868) = *(_WORD *)(v22 + 868) & 0xFF3F | 0x40;
    }
    while ( v20 != a3 );
    v23 = v136;
    v153 = (__int64 *)&v135[6 * a3];
    LODWORD(v154) = a3 + 1;
  }
  else
  {
    v23 = a1;
    v153 = (__int64 *)v135;
    LODWORD(v154) = 1;
  }
  StatusReg = _ReadStatusReg(TPIDR_EL0);
  v147 = &dword_496770;
  v148 = v135;
  v164[1] = 1024;
  v25 = v165;
  v26 = v153;
  v144 = 40;
  v27 = *(unsigned int *)(StatusReg + 40);
  *(_DWORD *)(StatusReg + 40) = 0;
  v28 = (__int64)v148;
  v26[2] = 0;
  v29 = *(_QWORD *)(v23 + 776);
  v164[0] = v165;
  *(_DWORD *)v28 = 1;
  v142 = v165;
  v143 = StatusReg;
  v145 = v27;
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
        if ( (_BYTE *)v164[0] != v142 )
          sub_40C1A0(v164[0]);
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
    if ( *v148 )
    {
      while ( 1 )
      {
        v37 = (_DWORD *)*((_QWORD *)v148 + 2);
        v148 = v37;
        if ( !v37 )
          break;
        if ( !*v37 )
          goto LABEL_18;
      }
      v38 = 0;
      goto LABEL_81;
    }
LABEL_18:
    v28 = (__int64)v148;
    v23 = *((_QWORD *)v148 + 1);
    v29 = *(_QWORD *)(v23 + 776);
    *v148 = 1;
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
        if ( (sub_42EC30(v164, *(unsigned __int16 *)(v23 + 770), 8) & 1) == 0 )
          sub_432250(12, *(_QWORD *)(a1 + 8), a6, 0, "cannot allocate dependency buffer");
        v29 = v164[0];
      }
    }
  }
  v39 = *(_BYTE *)(v23 + 870);
  v40 = *(unsigned int **)(*(_QWORD *)(v23 + 104) + 8LL);
  v155 = v40;
  if ( (v39 & 0x20) != 0 )
    v155 = (unsigned int *)((char *)v40 + *(_QWORD *)v23);
  v41 = *(__int64 **)(v23 + 16);
  v158 = v23;
  v159 = v151;
  v160 = v150;
  v42 = *v41;
  v28 = (__int64)v155;
  v161 = v155;
  if ( !v42 )
  {
    v30 = 0;
    goto LABEL_14;
  }
  v146 = (__int64 *)v148;
  v152 = &v158;
  v30 = 0;
  if ( v42 != 1 )
  {
    while ( 1 )
    {
      v28 = 2147483645;
      if ( (v42 & 0xFFFFFFFFFFFFFFFDLL) == 0x7FFFFFFD )
        break;
LABEL_52:
      v58 = v41[2];
      v41 += 2;
      v42 = v58;
      if ( !v58 )
        goto LABEL_14;
      if ( v42 == 1 )
        goto LABEL_33;
    }
    v43 = (char *)v155 + v41[1];
    v59 = sub_433614((__int64)v43);
    if ( !v59 )
    {
LABEL_134:
      v162 = v43;
      if ( (dword_496770 & 1) != 0 )
      {
        v122 = *(const char **)(v23 + 8);
        if ( !*v122 )
        {
          v122 = (const char *)off_491918;
          if ( !off_491918 )
            v122 = "<main program>";
        }
        sub_438334("load auxiliary object=%s requested by file=%s\n", v43, v122);
      }
      v38 = sub_4322A0(v156, sub_44B870, &v158);
      if ( v157 )
      {
        if ( *v41 != 2147483645 )
          goto LABEL_79;
        _kfifo_free((__kfifo *)v156);
        goto LABEL_52;
      }
      v110 = v146;
      StatusReg = (unsigned __int64)&v123;
      v111 = v146[1];
      v123 = *v146;
      v124 = v111;
      v125 = v146[2];
      v112 = v163;
      *(_DWORD *)v146 = 0;
      v110[1] = v112;
      if ( v29 )
      {
        *(_QWORD *)(v29 + 8LL * v30++) = v112;
        v112 = v163;
      }
      if ( (*(_WORD *)(v112 + 868) & 0xC0) != 0 )
      {
        v119 = &v123;
        do
        {
          v27 = (__int64)v119;
          v119 = (__int64 *)v119[2];
          if ( !v119 )
          {
            v25 = v146;
            v28 = v124;
            *v146 = v123;
            *((_QWORD *)v25 + 1) = v28;
            *((_QWORD *)v25 + 2) = v125;
            goto LABEL_52;
          }
        }
        while ( v119[1] != v112 );
        v13 = (__int64)v153;
        v146[2] = (__int64)&v123;
        v113 = *(_QWORD *)(v112 + 32);
        v120 = *(_QWORD *)(v27 + 16);
        *(_QWORD *)(v27 + 16) = *(_QWORD *)(v120 + 16);
        if ( v120 == v13 )
          v121 = (__int64 *)v27;
        else
          v121 = (__int64 *)v13;
        v153 = v121;
        if ( !v113 )
          goto LABEL_141;
      }
      else
      {
        v27 = 1;
        v146[2] = (__int64)&v123;
        LODWORD(v154) = v154 + 1;
        v113 = *(_QWORD *)(v112 + 32);
        *(_WORD *)(v112 + 868) = *(_WORD *)(v112 + 868) & 0xFF3F | 0x40;
        if ( !v113 )
        {
LABEL_141:
          v114 = *(_QWORD *)(v112 + 24);
          if ( v114 )
            *(_QWORD *)(v114 + 32) = v113;
          v115 = v124;
          *(_QWORD *)(v112 + 32) = *(_QWORD *)(v124 + 32);
          *(_QWORD *)(v115 + 32) = v112;
          v25 = *(_BYTE **)(v112 + 32);
          if ( v25 )
            *((_QWORD *)v25 + 3) = v112;
          *(_QWORD *)(v112 + 24) = v115;
          v28 = (__int64)v153;
          if ( v146 == v153 )
          {
            v146 = &v123;
            v153 = &v123;
          }
          else
          {
            v146 = &v123;
          }
          goto LABEL_52;
        }
      }
      *(_QWORD *)(v113 + 24) = *(_QWORD *)(v112 + 24);
      goto LABEL_141;
    }
    if ( dword_491570 )
      goto LABEL_175;
    v149 = v59;
    v60 = ifunc_40DFD0(v43);
    v61 = *(_QWORD *)(v23 + 912);
    v62 = v149;
    if ( v61 )
    {
      if ( v61 != -1 )
      {
        v63 = *(_QWORD *)(v23 + 912);
        v141 = v60;
        v64 = ifunc_40DFD0(v63);
        v60 = v141;
        v65 = v64;
        v62 = v149;
LABEL_60:
        v66 = qword_4967A8;
        if ( (unsigned __int64)qword_4967A8 < 0x15 )
          v66 = 21;
        if ( v66 < v65 )
          v66 = v65;
        v67 = v60 + (v66 - 4) * v62 + 15;
        v68 = v67 & 0xFFFFFFFFFFFF0000LL;
        v69 = v67 & 0xFFF0;
        v70 = (_QWORD *)((char *)v128 - v68);
        if ( v128 != v70 )
        {
          do
            v127 = 0;
          while ( &v125 != v70 );
        }
        v125 = 0;
        if ( v69 >= 0x400uLL )
          v127 = 0;
        v71 = sub_4336E0(v23, (unsigned __int8 *)v43, v126);
        if ( !*v71 )
        {
          v28 = *v41;
          if ( *v41 == 2147483645 )
            sub_432250(0, (__int64)v43, a6, 0, "empty dynamic string token substitution");
          if ( (dword_496770 & 1) != 0 )
            goto LABEL_71;
          goto LABEL_52;
        }
        v43 = v71;
        goto LABEL_134;
      }
    }
    else
    {
      v116 = **(unsigned __int8 **)(v23 + 8);
      if ( **(_BYTE **)(v23 + 8) )
        sub_41F250(
          "(l)->l_name[0] == '\\0' || IS_RTLD (l)",
          (__int64)"dl-deps.c",
          0x10Fu,
          (__int64)"_dl_map_object_deps");
      v141 = v60;
      v117 = sub_437AD0(v116);
      *(_QWORD *)(v23 + 912) = v117;
      v60 = v141;
      v62 = v149;
      if ( (unsigned __int64)(v117 - 1) <= 0xFFFFFFFFFFFFFFFDLL )
      {
        v118 = ifunc_40DFD0(v117);
        v60 = v141;
        v65 = v118;
        v62 = v149;
        goto LABEL_60;
      }
    }
    v65 = 0;
    goto LABEL_60;
  }
LABEL_33:
  v43 = (char *)v155 + v41[1];
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
  v47 = *(_QWORD *)(v23 + 912);
  v48 = v46;
  if ( !v47 )
  {
    v72 = **(unsigned __int8 **)(v23 + 8);
    if ( **(_BYTE **)(v23 + 8) )
      sub_41F250("(l)->l_name[0] == '\\0' || IS_RTLD (l)", (__int64)"dl-deps.c", 0xE4u, (__int64)"_dl_map_object_deps");
    v149 = v48;
    v73 = sub_437AD0(v72);
    *(_QWORD *)(v23 + 912) = v73;
    v48 = v149;
    if ( (unsigned __int64)(v73 - 1) <= 0xFFFFFFFFFFFFFFFDLL )
    {
      v50 = ifunc_40DFD0(v73);
      v48 = v149;
      goto LABEL_38;
    }
    goto LABEL_73;
  }
  if ( v47 == -1 )
  {
LABEL_73:
    v50 = 0;
    goto LABEL_38;
  }
  v49 = *(_QWORD *)(v23 + 912);
  v149 = v48;
  v50 = ifunc_40DFD0(v49);
  v48 = v149;
LABEL_38:
  v51 = qword_4967A8;
  if ( (unsigned __int64)qword_4967A8 < 0x15 )
    v51 = 21;
  if ( v51 < v50 )
    v51 = v50;
  v52 = v48 + (v51 - 4) * v44 + 15;
  v53 = v52 & 0xFFFFFFFFFFFF0000LL;
  v54 = v52 & 0xFFF0;
  v55 = (_QWORD *)((char *)v134 - v53);
  if ( v134 != v55 )
  {
    do
      v133 = 0;
    while ( &v131 != v55 );
  }
  v131 = 0;
  if ( v54 >= 0x400uLL )
    v133 = 0;
  v25 = sub_4336E0(v23, (unsigned __int8 *)v43, v132);
  if ( !*v25 )
  {
    if ( (*v147 & 1) == 0 )
      goto LABEL_52;
LABEL_71:
    sub_438334("cannot load auxiliary `%s' because of empty dynamic string token substitution\n", v43);
    goto LABEL_52;
  }
LABEL_47:
  v162 = v25;
  v38 = sub_4322A0(v156, sub_44B870, v152);
  if ( !v157 )
  {
    v56 = v163;
    v28 = *(unsigned __int16 *)(v163 + 868);
    if ( (v28 & 0xC0) == 0 )
    {
      v128[1] = 0;
      v25 = v153;
      v129 = 0;
      v57 = v154;
      v130 = v163;
      v131 = 0;
      v153[2] = (__int64)&v129;
      v153 = (__int64 *)&v129;
      LODWORD(v154) = v57 + 1;
      StatusReg = 1;
      v28 = *(_WORD *)(v56 + 868) & 0xFF3F | 0x40u;
      *(_WORD *)(v56 + 868) = *(_WORD *)(v56 + 868) & 0xFF3F | 0x40;
    }
    if ( v29 )
      *(_QWORD *)(v29 + 8LL * v30++) = v56;
    goto LABEL_52;
  }
LABEL_79:
  if ( !v38 )
    v38 = -1;
LABEL_81:
  if ( (_BYTE *)v164[0] != v142 )
    sub_40C1A0(v164[0]);
  v74 = v144;
  if ( *(_DWORD *)(v143 + v144) )
    v75 = 1;
  else
    v75 = v145 == 0;
  if ( !v75 )
  {
    StatusReg = v145;
    *(_DWORD *)(v143 + v144) = v145;
  }
  v153 = *(__int64 **)(a1 + 1032);
  if ( v153 )
  {
    if ( (*(_WORD *)(a1 + 868) & 3) == 2 )
    {
      if ( *(_QWORD *)(a1 + 776) )
        sub_41F250("map->l_searchlist.r_list == NULL", (__int64)"dl-deps.c", 0x1C8u, (__int64)"_dl_map_object_deps");
    }
    else
    {
      v153 = 0;
    }
  }
  v77 = sub_40B890(
          8LL * (unsigned int)(2 * v154 + 1),
          a6,
          a7,
          a8,
          a9,
          a10,
          a11,
          a12,
          a13,
          v74,
          (__int16 *)StatusReg,
          (__int64)v25,
          v27,
          v13);
  if ( !v77 )
    sub_432250(12, *(_QWORD *)(a1 + 8), v78, 0, "cannot allocate symbol search list");
  v86 = v154;
  v87 = 0;
  v88 = -1;
  *(_DWORD *)(a1 + 784) = v154;
  v89 = (__int64 *)(v77 + 8LL * (unsigned int)(v86 + 1));
  *(_QWORD *)(a1 + 776) = v89;
  do
  {
    v90 = *((_QWORD *)v18 + 1);
    if ( v151 && (*(_WORD *)(v90 + 868) & 0x4000) != 0 )
    {
      --*(_DWORD *)(a1 + 784);
    }
    else
    {
      v89[v87] = v90;
      if ( a1 == v90 )
        v88 = v87;
      ++v87;
    }
    v91 = (__int16 *)(*(_WORD *)(v90 + 868) & 0xFF3F);
    *(_WORD *)(v90 + 868) &= 0xFF3Fu;
    v18 = (_DWORD *)*((_QWORD *)v18 + 2);
  }
  while ( v18 );
  v92 = *(unsigned int **)(a1 + 1040);
  if ( !v92 )
    goto LABEL_118;
  v93 = *v92;
  if ( !v87 )
  {
    v97 = v92 + 2;
    *(_WORD *)(a1 + 868) &= 0xFF3Fu;
    if ( (_DWORD)v93 )
    {
LABEL_103:
      v98 = 0;
      v152 = (__int64 *)(v97 + 4);
      do
      {
        while ( 1 )
        {
          if ( (*(_WORD *)(*(_QWORD *)&v97[2 * v98] + 868LL) & 0xC0) != 0 )
          {
            v99 = *(unsigned int *)(a1 + 1048);
            v154 = v98;
            v155 = v92;
            v100 = sub_40B890(8 * (v99 + 1), v78, v79, v80, v81, v82, v83, v84, v85, v90, v91, v98, v76, v93);
            v92 = v155;
            v18 = (_DWORD *)v100;
            if ( v100 )
              break;
          }
          if ( *v92 <= ++v98 )
            goto LABEL_114;
        }
        j_ifunc_40DC90(v100 + 8, v97, 8LL * v98);
        v92 = v155;
        v101 = *v155;
        if ( *v155 <= v98 + 1 )
        {
          *v18 = v98;
          v102 = v98 + 1;
        }
        else
        {
          v90 = (__int64)v152;
          v91 = (__int16 *)&v97[2 * v98 + 2];
          v93 = (__int64)&v152[v101 - 2 - v98 + v154];
          do
          {
            v76 = *(unsigned __int16 *)(*(_QWORD *)v91 + 868LL);
            if ( (v76 & 0xC0) == 0 )
            {
              v76 = (__int64)&v18[2 * v98++];
              *(_QWORD *)(v76 + 8) = *(_QWORD *)v91;
            }
            v91 += 4;
          }
          while ( (__int16 *)v93 != v91 );
          *v18 = v98;
          v102 = v101;
        }
        v98 = v102 + 1;
      }
      while ( *v92 > v98 );
LABEL_114:
      if ( v87 )
      {
        v95 = &v89[v87];
        goto LABEL_116;
      }
    }
    goto LABEL_162;
  }
  v94 = (__int64 *)(v77 + 8LL * (unsigned int)(v86 + 1));
  v95 = &v89[v87];
  v76 = 1;
  do
  {
    v96 = *v94++;
    v90 = v96;
    v91 = (__int16 *)(*(_WORD *)(v96 + 868) & 0xFF3F | 0x40u);
    *(_WORD *)(v96 + 868) = *(_WORD *)(v96 + 868) & 0xFF3F | 0x40;
  }
  while ( v94 != v95 );
  v97 = v92 + 2;
  *(_WORD *)(a1 + 868) &= 0xFF3Fu;
  if ( (_DWORD)v93 )
    goto LABEL_103;
LABEL_116:
  v103 = v89;
  do
  {
    v104 = *v103++;
    *(_WORD *)(v104 + 868) &= 0xFF3Fu;
  }
  while ( v103 != v95 );
LABEL_118:
  if ( v88 >= v87 )
LABEL_162:
    sub_41F250("map_index < nlist", (__int64)"dl-deps.c", 0x214u, (__int64)"_dl_map_object_deps");
  if ( v88 )
  {
    v105 = 0;
    *(_QWORD *)v77 = v89[v88];
    do
    {
      *(_QWORD *)(v77 + 8 + v105 * 8) = v89[v105];
      ++v105;
    }
    while ( v88 != v105 );
    if ( v88 + 1 < v87 )
    {
      v106 = v88 + 1;
      do
      {
        *(_QWORD *)(v77 + v106 * 8) = v89[v106];
        ++v106;
      }
      while ( v87 - 2 - v88 + v88 + 1 + 1LL != v106 );
    }
  }
  else
  {
    j_ifunc_40DC90(v77, v89, 8LL * v87);
  }
  sub_4472F0(v77, v87, (&off_4914A8)[21 * *(_QWORD *)(*(_QWORD *)v77 + 48LL) + 4] != *(__int64 **)v77, 0);
  *(_QWORD *)(v77 + 8LL * v87) = 0;
  __dmb(0xBu);
  v107 = *(_BYTE *)(a1 + 870);
  *(_QWORD *)(a1 + 1032) = v77;
  *(_BYTE *)(a1 + 870) = v107 | 0x10;
  if ( v18 )
  {
    __dmb(0xBu);
    v108 = *(_QWORD *)(a1 + 1040);
    *(_QWORD *)(a1 + 1040) = v18;
    sub_439EF0(v108);
  }
  result = v153;
  if ( v153 )
    result = (__int64 *)sub_439EF0(v153);
  if ( v38 )
  {
    if ( v38 == -1 )
      v38 = 0;
    sub_432204(v38, v156, 0);
  }
  return result;
}
