// write access to const memory has been detected, the output may be wrong!
__int64 *__fastcall sub_434280(
        const char *a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        unsigned int a7,
        __int64 a8,
        __int64 a9)
{
  __int64 *i; // x19
  __int64 **v12; // x21
  unsigned __int64 v17; // x5
  long double v18; // q0
  long double v19; // q1
  long double v20; // q2
  long double v21; // q3
  long double v22; // q4
  long double v23; // q5
  long double v24; // q6
  long double v25; // q7
  __int64 *v26; // x6
  unsigned __int16 v27; // w0
  unsigned __int64 v28; // x1
  __int64 v29; // x3
  __int64 v30; // x4
  __int64 v31; // x20
  unsigned int v32; // w4
  __int64 v33; // x4
  __int64 *v34; // x1
  unsigned __int64 v35; // x4
  int v36; // w14
  __int64 *v37; // x2
  unsigned __int64 v38; // x10
  int v39; // w28
  int v40; // w9
  int v41; // w7
  __int64 v42; // x17
  __int64 v43; // x15
  unsigned __int64 v44; // x11
  __int64 v45; // x20
  __int64 v46; // x1
  __int64 v47; // x3
  __int64 v48; // x5
  __int64 v49; // x30
  unsigned __int64 v50; // x13
  __int64 *v51; // x8
  __int64 v52; // x5
  __int64 v53; // x0
  unsigned int v54; // w0
  unsigned __int64 *v55; // x1
  __int64 j; // x0
  __int64 v57; // x0
  __int64 v58; // x28
  char *v59; // x27
  __int64 v60; // x1
  __int64 v61; // x0
  __int64 v62; // x2
  unsigned __int64 v63; // x3
  int v64; // w7
  __int64 v65; // x2
  unsigned __int64 v66; // x1
  int v67; // w0
  unsigned __int64 *v68; // x7
  unsigned __int64 v69; // x0
  unsigned __int64 v70; // x2
  __int64 v71; // x1
  unsigned __int64 v72; // x28
  int v73; // w5
  unsigned __int64 v74; // x0
  unsigned __int64 v75; // x1
  unsigned __int64 v76; // x1
  unsigned __int64 v77; // x5
  __int64 v78; // x2
  unsigned __int64 v79; // x0
  __int64 v80; // x0
  const char *v81; // x27
  __int64 v82; // x0
  char v83; // w1
  __int64 v84; // x0
  int v85; // w1
  __int64 v86; // x0
  int v87; // w3
  unsigned __int64 v88; // x0
  unsigned __int64 v90; // x0
  unsigned __int64 v91; // x2
  __int64 v92; // x0
  __int64 v93; // x0
  __int64 v94; // x0
  __int64 v95; // x0
  long double v96; // q0
  __int64 v97; // x0
  __int64 v98; // x1
  unsigned __int64 v99; // x0
  __int64 v100; // x7
  __int64 v101; // x11
  __int64 v102; // x10
  unsigned __int64 v103; // t1
  __int64 v104; // x0
  __int64 v105; // x0
  __int64 v106; // x0
  __int64 v107; // x0
  __int64 v108; // x0
  __int64 v109; // x1
  __int64 v110; // x1
  __int64 v111; // x1
  __int64 v112; // x1
  __int64 v113; // x0
  __int64 v114; // x0
  __int64 v115; // x1
  __int64 v116; // x0
  __int64 v117; // x0
  int v118; // w0
  int v119; // w0
  bool v121; // zf
  __int64 v122; // x0
  __int64 v123; // x0
  __int64 v124; // x3
  __int64 k; // x20
  int v126; // t1
  __int64 v127; // x4
  int v128; // w1
  __int64 v129; // x0
  __int64 v130; // x3
  __int64 v131; // x20
  int v132; // w0
  __int64 v133; // x2
  __int64 v134; // x0
  __int64 v135; // x1
  __int64 v136; // x2
  __int64 v137; // x0
  char *v138; // x1
  __int64 v139; // x0
  __int64 v140; // x0
  __int64 v141; // x10
  __int64 v142; // x0
  __int64 v143; // x0
  unsigned __int64 v144; // x10
  __int64 v145; // x0
  __int64 v146; // x1
  unsigned int v147; // w20
  unsigned __int64 v148; // x20
  __int64 v149; // x0
  __int64 **v150; // x1
  __int64 v151; // x2
  __int64 v152; // x0
  __int64 v153; // x0
  __int64 v154; // x1
  __int64 v155; // x2
  __int64 v156; // x3
  __int64 v157; // x4
  __int64 v158; // x5
  __int64 v159; // [xsp+0h] [xbp-10030h] BYREF
  __int64 v160; // [xsp+30h] [xbp-10000h] BYREF
  unsigned __int64 v161; // [xsp+38h] [xbp-FFF8h]
  __int64 v162; // [xsp+48h] [xbp-FFE8h]
  unsigned __int64 v163; // [xsp+50h] [xbp-FFE0h] BYREF
  __int64 v164; // [xsp+58h] [xbp-FFD8h]
  unsigned int v165[232]; // [xsp+60h] [xbp-FFD0h]
  __int64 v166; // [xsp+400h] [xbp-FC30h]
  _QWORD v167[6]; // [xsp+10000h] [xbp-30h] BYREF
  __int64 v168; // [xsp+10030h] [xbp+0h] BYREF
  unsigned __int64 v169; // [xsp+10090h] [xbp+60h]
  __int64 *v170; // [xsp+10098h] [xbp+68h]
  unsigned __int64 v171; // [xsp+100A0h] [xbp+70h]
  unsigned __int64 v172; // [xsp+100A8h] [xbp+78h]
  unsigned __int64 *v173; // [xsp+100B0h] [xbp+80h]
  unsigned __int64 v174; // [xsp+100B8h] [xbp+88h]
  unsigned __int64 *v175; // [xsp+100C0h] [xbp+90h]
  __int64 *v176; // [xsp+100C8h] [xbp+98h]
  int *v177; // [xsp+100D0h] [xbp+A0h]
  __int64 v178; // [xsp+100D8h] [xbp+A8h]
  __int64 *v179; // [xsp+100E0h] [xbp+B0h]
  int v180; // [xsp+100ECh] [xbp+BCh]
  __int64 *v181; // [xsp+100F0h] [xbp+C0h]
  int v182; // [xsp+100F8h] [xbp+C8h]
  unsigned int v183; // [xsp+100FCh] [xbp+CCh]
  __int64 v184; // [xsp+10100h] [xbp+D0h]
  __int64 v185; // [xsp+10108h] [xbp+D8h]
  __int64 v186; // [xsp+10110h] [xbp+E0h] BYREF
  __int64 v187; // [xsp+10118h] [xbp+E8h]

  v178 = a8;
  v12 = (__int64 **)a2;
  v180 = a7 & 0x20000000;
  if ( (a7 & 0x20000000) != 0 )
  {
    if ( a9 )
    {
      v18 = sub_41F250("nsid == LM_ID_BASE", "dl-load.c", 961, "_dl_map_object_from_fd");
LABEL_268:
      sub_41F250(
        "info[DT_RELRENT]->d_un.d_val == sizeof (ElfW(Relr))",
        "get-dynamic-info.h",
        130,
        "elf_get_dynamic_info",
        *(double *)&v18);
LABEL_269:
      v183 = *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
      if ( (_DWORD)v12 != -1 )
        sub_410CD0((unsigned int)v12);
      v81 = "cannot allocate memory for program header";
      goto LABEL_94;
    }
    v184 = 0;
    v185 = 0;
  }
  else
  {
    if ( (sub_410930(a2, &v186) & 0x80000000) != 0 )
    {
      v183 = *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
      if ( (_DWORD)v12 != -1 )
        sub_410CD0((unsigned int)v12);
      i = 0;
      v81 = "cannot stat shared object";
LABEL_102:
      sub_40C1A0(i);
      sub_40C1A0(a4);
      sub_432250(v183, a1, 0, v81, v96);
    }
    v184 = v186;
    v185 = v187;
    for ( i = (&off_4914A8)[21 * a9]; i; i = (__int64 *)i[3] )
    {
      if ( (*((_BYTE *)i + 870) & 4) == 0 && i[125] == v186 && i[126] == v187 )
      {
        sub_410CD0((unsigned int)v12);
        sub_40C1A0(a4);
        sub_433530(i[7], a1);
        return i;
      }
    }
  }
  v183 = a7 & 4;
  if ( (a7 & 4) != 0 )
  {
    sub_40C1A0(a4);
    i = 0;
    sub_410CD0((unsigned int)v12);
    return i;
  }
  v177 = &dword_496770;
  if ( (dword_496770 & 0x40) != 0 )
    sub_438334("file=%s [%lu];  generating link map\n", a1, a9);
  i = (__int64 *)sub_437850(a4, a1, a6, a5, a7, a9);
  if ( !i )
  {
    v183 = *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
    if ( (_DWORD)v12 != -1 )
      sub_410CD0((unsigned int)v12);
    v81 = "cannot create shared object descriptor";
    goto LABEL_102;
  }
  v26 = (__int64 *)(a3 + 8);
  v27 = *(_WORD *)(a3 + 64);
  v28 = *(_QWORD *)a3;
  v30 = *(_QWORD *)(a3 + 32);
  v29 = *(_QWORD *)(a3 + 40);
  v31 = 56LL * v27;
  v182 = *((unsigned __int16 *)v26 + 8);
  i[95] = v30;
  *((_WORD *)i + 384) = v27;
  if ( v31 + v29 > v28 )
  {
    while ( v167 != (_QWORD *)((char *)v167 - (((_DWORD)v31 + 15) & 0x7F0000)) )
      v166 = 0;
    v167[0] = 0;
    if ( (((_WORD)v31 + 15) & 0xFFF0u) >= 0x400uLL )
      STACK[0x10400] = 0;
    v179 = v26;
    v181 = &v168;
    v92 = sub_430F90((unsigned int)v12, &v168, v31, v29);
    v26 = v179;
    if ( v92 != v31 )
    {
      v183 = *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
      if ( (_DWORD)v12 != -1 )
        sub_410CD0((unsigned int)v12);
      v81 = "cannot read file data";
      goto LABEL_94;
    }
  }
  else
  {
    v181 = (__int64 *)((char *)v26 + v29);
  }
  v32 = *((unsigned __int16 *)i + 384);
  v179 = v167;
  v33 = 7LL * v32;
  v34 = (_QWORD *)((char *)v167 - (((_DWORD)(v33 * 8) + 15) & 0x7F0000));
  if ( v167 != v34 )
  {
    do
      v166 = 0;
    while ( &v159 != v34 );
  }
  v159 = 0;
  if ( (((_WORD)(v33 * 8) + 15) & 0xFFF0u) >= 0x400uLL )
  {
    v166 = 0;
    v35 = (unsigned __int64)&v181[v33];
    if ( (unsigned __int64)v181 >= v35 )
      goto LABEL_214;
  }
  else
  {
    v35 = (unsigned __int64)&v181[v33];
    if ( (unsigned __int64)v181 >= v35 )
    {
LABEL_214:
      v81 = "object file has no loadable segments";
      goto LABEL_92;
    }
  }
  v36 = 1685382481;
  v37 = v181;
  v38 = qword_490F10;
  v39 = 0;
  v40 = 6;
  v41 = 0;
  v42 = qword_490F10 - 1;
  v43 = -qword_490F10;
  v44 = 0;
  v45 = 0;
  v176 = &qword_490F10;
  do
  {
    while ( 1 )
    {
      v54 = *(_DWORD *)v37;
      if ( *(_DWORD *)v37 == 7 )
      {
        v82 = v37[5];
        if ( !v82 )
          goto LABEL_26;
        i[143] = v82;
        v83 = *((_WORD *)i + 434);
        v84 = v37[6];
        i[144] = v84;
        v85 = v83 & 3;
        v17 = v37[2];
        if ( v84 )
          v84 = (v84 - 1) & v17;
        i[145] = v84;
        v86 = v37[4];
        i[141] = v17;
        i[142] = v86;
        if ( v85 == 1 || qword_4921A8 )
          goto LABEL_26;
        v18 = sub_41F250(
                "false && \"TLS not initialized in static application\"",
                "dl-load.c",
                1203,
                "_dl_map_object_from_fd");
LABEL_68:
        if ( v37[4] )
        {
          v17 = v37[2];
          v87 = *((_BYTE *)i + 870) & 0xDF | (32 * (((*((unsigned int *)v37 + 1) ^ 2uLL) >> 1) & 1));
          v88 = (unsigned __int64)v37[5] >> 4;
          i[2] = v17;
          *((_WORD *)i + 385) = v88;
          *((_BYTE *)i + 870) = v87;
        }
        else
        {
          v39 = 1;
        }
        goto LABEL_26;
      }
      if ( v54 <= 7 )
      {
        switch ( v54 )
        {
          case 2u:
            goto LABEL_68;
          case 6u:
            i[94] = v37[2];
            break;
          case 1u:
            v47 = v37[1];
            v46 = v37[2];
            if ( ((v46 - v47) & v42) != 0 )
            {
              v81 = "ELF load command address/offset not page-aligned";
              goto LABEL_92;
            }
            v48 = v37[4];
            v49 = v37[5];
            v50 = v37[6];
            v51 = &v160 + 7 * v45;
            *v51 = v46 & v43;
            v52 = v46 + v48;
            v51[3] = v49 + v46;
            v51[1] = (v42 + v52) & v43;
            v51[2] = v52;
            v17 = v45 + 1;
            if ( ((v50 - 1) & v50) == 0 && v44 < v50 )
              v44 = v50;
            *(_QWORD *)&v165[14 * v45 - 2] = v47 & v43;
            if ( v17 > 1 && (v46 & v43) != *(v51 - 6) )
              v41 = 1;
            v53 = 7 * v45++;
            v165[2 * v53] = (1934713408 >> (4 * (*((_BYTE *)v37 + 4) & 7))) & 0xF;
            break;
        }
        goto LABEL_26;
      }
      if ( v54 == v36 )
      {
        v40 = *((_DWORD *)v37 + 1);
        goto LABEL_26;
      }
      if ( v54 == 1685382482 )
        break;
LABEL_26:
      v37 += 7;
      if ( (unsigned __int64)v37 >= v35 )
        goto LABEL_32;
    }
    i[149] = v37[2];
    v37 += 7;
    i[150] = *(v37 - 2);
  }
  while ( (unsigned __int64)v37 < v35 );
LABEL_32:
  if ( !v45 )
    goto LABEL_214;
  v55 = &v163;
  for ( j = 0; j != v45; ++j )
  {
    *v55 = v44;
    v55 += 7;
  }
  if ( v182 != 3 )
  {
    if ( !v180 )
    {
      v81 = "cannot dynamically load executable";
      goto LABEL_92;
    }
    if ( i[2] )
    {
      v81 = "object file has no dynamic section";
      if ( v39 )
        goto LABEL_92;
    }
    else if ( v39 )
    {
LABEL_202:
      v81 = "object file has no dynamic section";
      goto LABEL_92;
    }
    v137 = v160;
    v63 = *((_BYTE *)i + 870) & 0xF7 | (8 * (((unsigned __int8)v41 ^ 1) & 1u));
    v68 = (unsigned __int64 *)&v160;
    v70 = *(&v162 + 7 * v45 - 7);
    *((_BYTE *)i + 870) = v63;
    v59 = (char *)(v70 - v137);
    v138 = (char *)(*i + v70);
    i[115] = *i + v137;
    i[116] = (__int64)v138;
    goto LABEL_54;
  }
  if ( !i[2] || v39 )
    goto LABEL_202;
  v57 = j - 1;
  v58 = v160;
  v59 = (char *)(*(&v162 + 7 * v57) - v160);
  if ( v38 >= v163 )
  {
    v60 = *(&v162 + 7 * v57) - v160;
    v173 = (unsigned __int64 *)v26;
    LODWORD(v174) = v40;
    LODWORD(v175) = v41;
    v61 = sub_4117E0(v160, v60, v165[0], 2050, (unsigned int)v12, v164);
    i[115] = v61;
    v62 = v61;
    if ( v61 != -1 )
    {
      v26 = (__int64 *)v173;
      v63 = (unsigned __int64)&v59[v61];
      v40 = v174;
      LOBYTE(v64) = (_BYTE)v175;
      goto LABEL_41;
    }
LABEL_57:
    v81 = "failed to map segment from shared object";
LABEL_206:
    i[115] = 0;
    i[116] = 0;
LABEL_92:
    if ( (_DWORD)v12 != -1 )
      sub_410CD0((unsigned int)v12);
    goto LABEL_94;
  }
  v139 = (__int64)&v59[v163];
  if ( v163 > (unsigned __int64)v59 )
    v139 = 2 * v163;
  v171 = (unsigned __int64)v26;
  LODWORD(v172) = v40;
  LODWORD(v173) = v41;
  v174 = v163;
  v175 = (unsigned __int64 *)v139;
  v140 = sub_4117E0(v160, v139, 0, 2082, 0xFFFFFFFFLL, 0);
  v141 = v140;
  if ( v140 == -1 )
    goto LABEL_57;
  v142 = (v174 - 1 + v140) & -(__int64)v174;
  v174 = v141;
  v143 = sub_4117E0(v142, v59, v165[0], 2066, (unsigned int)v12, v164);
  v62 = v143;
  v26 = (__int64 *)v171;
  v63 = (unsigned __int64)&v59[v143];
  v144 = v174;
  v40 = v172;
  v64 = (int)v173;
  if ( v143 == -1 )
  {
    sub_4118C0(v174, v175);
    goto LABEL_57;
  }
  if ( v143 != v174 )
  {
    v169 = (unsigned __int64)&v59[v143];
    v170 = (__int64 *)v171;
    LODWORD(v171) = v172;
    LODWORD(v172) = (_DWORD)v173;
    v173 = (unsigned __int64 *)v143;
    sub_4118C0(v174, v143 - v174);
    v40 = v171;
    v63 = v169;
    v26 = v170;
    v62 = (__int64)v173;
    v144 = v174;
    v64 = v172;
  }
  v35 = (unsigned __int64)v175 + v144;
  v145 = (*v176 - 1 + v63) & -*v176;
  v146 = (__int64)v175 + v144 - v145;
  if ( (unsigned __int64 *)((char *)v175 + v144) == (unsigned __int64 *)v145 )
  {
    i[115] = v62;
  }
  else
  {
    v171 = v63;
    v172 = (unsigned __int64)v26;
    LODWORD(v173) = v40;
    LODWORD(v174) = v64;
    v175 = (unsigned __int64 *)v62;
    sub_4118C0(v145, v146);
    v62 = (__int64)v175;
    i[115] = (__int64)v175;
    v63 = v171;
    v26 = (__int64 *)v172;
    v40 = (int)v173;
    LOBYTE(v64) = v174;
  }
LABEL_41:
  v65 = v62 - v58;
  *i = v65;
  i[116] = v63;
  if ( (v64 & 1) != 0 )
  {
    v174 = (unsigned __int64)v26;
    LODWORD(v175) = v40;
    v66 = *(&v160 + 7 * v45 - 7);
    if ( v66 < v161 )
    {
      v81 = "ELF load command address/offset not page-aligned";
      goto LABEL_206;
    }
    v67 = sub_411880(v65 + v161, v66 - v161, 0);
    v26 = (__int64 *)v174;
    v40 = (int)v175;
    if ( v67 < 0 )
    {
LABEL_210:
      v81 = "cannot change memory protections";
      goto LABEL_206;
    }
  }
  v68 = (unsigned __int64 *)&v160;
  *((_BYTE *)i + 870) |= 8u;
  while ( 1 )
  {
    if ( !i[94] )
    {
      v90 = v26[4];
      v91 = v68[5];
      if ( v91 <= v90 )
      {
        v35 = *v68;
        v17 = *((unsigned __int16 *)v26 + 28);
        v63 = v90 + 56 * v17;
        if ( v91 + v68[1] - *v68 >= v63 )
          i[94] = v90 + v35 - v91;
      }
    }
    v70 = v68[2];
    v69 = v68[3];
    if ( v69 > v70 )
    {
      v71 = *v176;
      v35 = v70 + *i;
      v63 = v69 + *i;
      v72 = (v71 - 1 + v35) & -v71;
      if ( v72 > v63 )
        v72 = v69 + *i;
      if ( v35 < v72 )
      {
        v73 = *((_DWORD *)v68 + 12);
        if ( (v73 & 2) != 0 )
        {
          v172 = (unsigned __int64)v26;
          LODWORD(v173) = v40;
          v174 = v63;
          v175 = v68;
          ifunc_40DE70(v35, 0, v72 - v35);
          v40 = (int)v173;
          v63 = v174;
          v68 = v175;
          v26 = (__int64 *)v172;
        }
        else
        {
          v170 = v26;
          LODWORD(v171) = v40;
          v172 = v63;
          v173 = v68;
          v174 = v35;
          LODWORD(v175) = v73;
          if ( (sub_411880(v35 & -v71, v71, v73 | 2u) & 0x80000000) != 0 )
            goto LABEL_210;
          v152 = ifunc_40DE70(v174, 0, v72 - v174);
          sub_411880(-*v176 & v152, *v176, (unsigned int)v175);
          v26 = v170;
          v63 = v172;
          v68 = v173;
          v40 = v171;
        }
      }
      if ( v63 > v72 )
      {
        v133 = *((unsigned int *)v68 + 12);
        v173 = (unsigned __int64 *)v26;
        LODWORD(v174) = v40;
        v175 = v68;
        v134 = sub_4117E0(v72, v63 - v72, v133, 50, 0xFFFFFFFFLL, 0);
        v26 = (__int64 *)v173;
        v68 = v175;
        v40 = v174;
        if ( v134 == -1 )
        {
          v81 = "cannot map zero-fill pages";
          goto LABEL_206;
        }
      }
    }
    v68 += 7;
LABEL_54:
    if ( v68 >= (unsigned __int64 *)&v160 + 7 * v45 )
      break;
    v74 = *v68;
    v75 = v68[1];
    if ( v75 > *v68 )
    {
      v76 = v75 - v74;
      v77 = v68[5];
      v78 = *((unsigned int *)v68 + 12);
      v79 = v74 + *i;
      v173 = (unsigned __int64 *)v26;
      LODWORD(v174) = v40;
      v175 = v68;
      v80 = sub_4117E0(v79, v76, v78, 2066, (unsigned int)v12, v77);
      v26 = (__int64 *)v173;
      v68 = v175;
      v40 = v174;
      if ( v80 == -1 )
        goto LABEL_57;
    }
  }
  v97 = i[2];
  v98 = (__int64)v179;
  if ( !v97 || (v70 = *i, v98 = v97 + *i, (i[2] = v98) == 0) )
  {
    v118 = *((_DWORD *)i + 265);
    goto LABEL_156;
  }
  v99 = *(_QWORD *)(v97 + v70);
  v63 = (unsigned __int64)(i + 8);
  if ( !v99 )
    goto LABEL_112;
  v100 = 1879048191;
  v35 = -1879048192;
  v101 = 1879048235;
  v102 = -1879048154;
  while ( 2 )
  {
    if ( v99 <= 0x25 )
    {
LABEL_110:
      *(_QWORD *)(v63 + 8 * v99) = v98;
      goto LABEL_111;
    }
    v17 = v99 + v35;
    if ( v99 + v35 <= 5 )
    {
      v99 += v102;
      goto LABEL_110;
    }
LABEL_190:
    v17 = v100 - v99;
    if ( v100 - v99 <= 0xF )
    {
      v99 = v101 - v99;
      goto LABEL_110;
    }
    v17 = (unsigned int)(2 * v99);
    if ( (unsigned int)v17 > 0xFFFFFFF8 )
    {
      v99 = (unsigned int)(59 - ((int)v17 >> 1));
      goto LABEL_110;
    }
    if ( 1879047679 - v99 <= 0xB )
    {
      v17 = 1879047742;
      v99 = 1879047742 - v99;
      goto LABEL_110;
    }
    v17 = 1879047935;
    if ( 1879047935 - v99 <= 0xA )
    {
      v17 = 1879048010;
      v99 = 1879048010 - v99;
      goto LABEL_110;
    }
LABEL_111:
    v103 = *(_QWORD *)(v98 + 16);
    v98 += 16;
    v99 = v103;
    if ( v103 )
      continue;
    break;
  }
LABEL_112:
  if ( !v70 || (*((_BYTE *)i + 870) & 0x20) != 0 )
  {
    v112 = i[28];
    if ( v112 )
      goto LABEL_136;
    goto LABEL_137;
  }
  v104 = i[12];
  if ( v104 )
    *(_QWORD *)(v104 + 8) += v70;
  v105 = i[11];
  if ( v105 )
    *(_QWORD *)(v105 + 8) += v70;
  v106 = i[13];
  if ( v106 )
    *(_QWORD *)(v106 + 8) += v70;
  v107 = i[14];
  if ( v107 )
    *(_QWORD *)(v107 + 8) += v70;
  v108 = i[44];
  if ( v108 )
    *(_QWORD *)(v108 + 8) += v70;
  v109 = i[31];
  if ( v109 )
    *(_QWORD *)(v109 + 8) += v70;
  v110 = i[67];
  if ( v110 )
    *(_QWORD *)(v110 + 8) += v70;
  v111 = i[93];
  if ( v111 )
    *(_QWORD *)(v111 + 8) += v70;
  v63 = i[15];
  v112 = i[28];
  if ( v63 )
  {
    v113 = *(_QWORD *)(v63 + 8);
    if ( v113 )
      *(_QWORD *)(v63 + 8) = v70 + v113;
    if ( !v112 )
      goto LABEL_138;
LABEL_136:
    if ( *(_QWORD *)(v112 + 8) != 7 )
      goto LABEL_273;
LABEL_137:
    if ( i[15] )
    {
LABEL_138:
      if ( *(_QWORD *)(i[17] + 8) != 24 )
      {
        v18 = sub_41F250(
                "info[DT_RELAENT]->d_un.d_val == sizeof (ElfW(Rela))",
                "get-dynamic-info.h",
                123,
                "elf_get_dynamic_info");
LABEL_273:
        sub_41F250(
          "info[DT_PLTREL]->d_un.d_val == DT_RELA",
          "get-dynamic-info.h",
          115,
          "elf_get_dynamic_info",
          *(double *)&v18);
        return (__int64 *)sub_435460(v153, v154, v155, v156, v157, v158);
      }
    }
    v108 = i[44];
  }
  else if ( v112 )
  {
    goto LABEL_136;
  }
  if ( v108 && *(_QWORD *)(i[45] + 8) != 8 )
    goto LABEL_268;
  v114 = i[38];
  if ( v114 )
  {
    v115 = *(_QWORD *)(v114 + 8);
    *((_DWORD *)i + 266) = v115;
    if ( (v115 & 2) != 0 )
      i[24] = v114;
    if ( (v115 & 4) != 0 )
      i[30] = v114;
    if ( (v115 & 8) != 0 )
      i[32] = v114;
  }
  v116 = i[56];
  if ( v116 )
  {
    v117 = *(_QWORD *)(v116 + 8);
    *((_DWORD *)i + 265) = v117;
    v70 = (unsigned int)v117;
    if ( (v117 & 8) != 0 )
      *((_BYTE *)i + 872) = 1;
    if ( (*v177 & 0x40) != 0 && (v117 & 0xF7FFF716) != 0 )
    {
      v176 = v26;
      LODWORD(v179) = v40;
      sub_438334("\nWARNING: Unsupported flag value(s) of 0x%x in DT_FLAGS_1.\n", v117 & 0xF7FFF716);
      v70 = *((unsigned int *)i + 265);
      v26 = v176;
      v118 = v70;
      v40 = (int)v179;
      if ( (v70 & 1) != 0 )
LABEL_203:
        i[32] = i[56];
    }
    else
    {
      v118 = *((_DWORD *)i + 265);
      if ( (v70 & 1) != 0 )
        goto LABEL_203;
    }
  }
  else
  {
    v118 = *((_DWORD *)i + 265);
  }
  v98 = i[37];
  if ( v98 )
    i[23] = 0;
LABEL_156:
  v121 = (v118 & 0x40) == 0;
  v119 = v118 & 0x8000000;
  if ( !v121 && (a7 & 0x80000000) != 0 )
  {
    if ( v119 )
    {
LABEL_259:
      if ( (_DWORD)v12 != -1 )
        sub_410CD0((unsigned int)v12);
      v81 = "cannot dynamically load position-independent executable";
    }
    else
    {
      if ( (_DWORD)v12 != -1 )
        sub_410CD0((unsigned int)v12);
      v81 = "shared object cannot be dlopen()ed";
    }
    goto LABEL_94;
  }
  if ( v119 )
    v121 = v180 == 0;
  else
    v121 = 0;
  if ( v121 )
    goto LABEL_259;
  v122 = i[94];
  if ( v122 )
  {
    i[94] = v122 + *i;
  }
  else
  {
    v147 = *((unsigned __int16 *)v26 + 28);
    v183 = v40;
    v148 = 56LL * v147;
    v149 = sub_40B890(v148, v18, v19, v20, v21, v22, v23, v24, v25, v98, (__int16 *)v70, v63, v35, v17);
    if ( !v149 )
      goto LABEL_269;
    i[94] = j_ifunc_40DC90(v149, v181, v148);
    *((_WORD *)i + 434) |= 0x1000u;
    v40 = v183;
  }
  if ( (v40 & ~dword_490F28 & 1) != 0 )
  {
    dword_48FB18 |= 7u;
    v183 = sub_444F80(v178);
    if ( v183 )
    {
      if ( (_DWORD)v12 != -1 )
        sub_410CD0((unsigned int)v12);
      v81 = "cannot enable executable stack as shared object requires";
      goto LABEL_94;
    }
  }
  v123 = i[141];
  if ( v123 )
    i[141] = v123 + *i;
  v124 = i[94];
  for ( k = v124 + 56LL * *((unsigned __int16 *)i + 384); k != v124; v124 = i[94] )
  {
    while ( 1 )
    {
      v126 = *(_DWORD *)(k - 56);
      k -= 56;
      if ( v126 == 1685382483 )
        break;
      if ( k == v124 )
        goto LABEL_174;
    }
    sub_434150(i, (unsigned int)v12, k);
  }
LABEL_174:
  if ( (unsigned int)sub_410CD0((unsigned int)v12) )
  {
    v183 = *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
    if ( (_DWORD)v12 != -1 )
      sub_410CD0((unsigned int)v12);
    v81 = "cannot close file descriptor";
LABEL_94:
    v93 = i[115];
    if ( v93 )
      sub_4118C0(v93, i[116] - v93);
    v94 = i[114];
    if ( v94 != -1 )
      sub_40C1A0(v94);
    v95 = i[7];
    if ( !*(_DWORD *)(v95 + 16) )
      sub_40C1A0(v95);
    if ( (*((_WORD *)i + 434) & 0x1000) != 0 )
      sub_40C1A0(i[94]);
    goto LABEL_102;
  }
  if ( v182 == 2 && (*((_WORD *)i + 434) & 3LL) != 0 )
  {
    sub_41F250("type != ET_EXEC || l->l_type == lt_executable", "dl-load.c", 1393, "_dl_map_object_from_fd");
    goto LABEL_218;
  }
  v127 = *i;
  v128 = *v177;
  v129 = *i + i[95];
  i[95] = v129;
  if ( (v128 & 0x40) != 0 )
    sub_438334(
      "  dynamic: 0x%0*lx  base: 0x%0*lx   size: 0x%0*zx\n    entry: 0x%0*lx  phdr: 0x%0*lx  phnum:   %*u\n\n",
      16,
      i[2],
      16,
      v127,
      16,
      (size_t)v59,
      16,
      v129,
      16,
      i[94],
      16,
      *((unsigned __int16 *)i + 384));
  sub_439FD0(i);
  if ( (a7 & 8) == 0 )
  {
    if ( i[24] )
    {
      v150 = (__int64 **)i[122];
      if ( *v150 != i + 97 )
      {
        v151 = i[121];
        *(_QWORD *)i[99] = i;
        *((_DWORD *)i + 200) = 1;
        j_ifunc_40DD80(v150 + 1, v150, 8 * (v151 - 1));
        *(_QWORD *)i[122] = i + 99;
      }
    }
  }
  if ( (*((_DWORD *)i + 265) & 0x20) != 0 )
    qword_496808 = (__int64)i;
  k = 4 * a9;
  v12 = &off_4914A8;
  v130 = v185;
  i[125] = v184;
  i[126] = v130;
  if ( !(&off_4914A8)[21 * a9 + 4] )
  {
LABEL_218:
    v135 = i[22];
    if ( v135 )
    {
      v136 = 0;
      if ( (*((_BYTE *)i + 870) & 0x20) != 0 )
        v136 = *i;
      if ( !(unsigned int)sub_42F240(*(_QWORD *)(v135 + 8) + *(_QWORD *)(i[13] + 8) + v136, "libc.so.6") )
        (&(&v12[4 * k])[4 * a9])[a9 + 4] = i;
    }
  }
  if ( i[143] && ((*((_WORD *)i + 434) & 3) == 1 || qword_4921A8) )
    sub_412800((unsigned __int64)i);
  sub_4377B0(i, a9);
  if ( (a7 & 0x40000000) != 0 )
    return i;
  v131 = sub_412370(a9);
  v132 = *(_DWORD *)(v131 + 24);
  if ( v132 )
  {
    if ( v132 == 1 )
      return i;
    v18 = sub_41F250("r->r_state == RT_ADD", "dl-load.c", 1510, "_dl_map_object_from_fd");
    goto LABEL_190;
  }
  *(_DWORD *)(v131 + 24) = 1;
  sub_412360(1);
  return i;
}
