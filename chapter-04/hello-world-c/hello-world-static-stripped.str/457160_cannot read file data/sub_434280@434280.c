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
  unsigned __int64 v16; // x5
  __int64 *v17; // x19
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
  __int64 *v36; // x2
  unsigned __int64 v37; // x10
  int v38; // w28
  int v39; // w9
  int v40; // w7
  __int64 v41; // x17
  __int64 v42; // x15
  unsigned __int64 v43; // x11
  __int64 v44; // x20
  __int64 v45; // x1
  __int64 v46; // x3
  __int64 v47; // x5
  __int64 v48; // x30
  unsigned __int64 v49; // x13
  __int64 *v50; // x8
  __int64 v51; // x5
  __int64 v52; // x0
  unsigned int v53; // w0
  unsigned __int64 *v54; // x1
  __int64 i; // x0
  __int64 v56; // x0
  __int64 v57; // x28
  char *v58; // x27
  __int64 v59; // x1
  __int64 v60; // x0
  __int64 v61; // x2
  unsigned __int64 v62; // x3
  int v63; // w7
  __int64 v64; // x2
  unsigned __int64 v65; // x1
  int v66; // w0
  unsigned __int64 *v67; // x7
  unsigned __int64 v68; // x0
  unsigned __int64 v69; // x2
  __int64 v70; // x1
  unsigned __int64 v71; // x28
  int v72; // w5
  unsigned __int64 v73; // x0
  unsigned __int64 v74; // x1
  unsigned __int64 v75; // x1
  unsigned __int64 v76; // x5
  __int64 v77; // x2
  unsigned __int64 v78; // x0
  __int64 v79; // x0
  const char *v80; // x27
  __int64 v81; // x0
  char v82; // w1
  __int64 v83; // x0
  int v84; // w1
  __int64 v85; // x0
  int v86; // w3
  unsigned __int64 v87; // x0
  unsigned __int64 v89; // x0
  unsigned __int64 v90; // x2
  __int64 v91; // x0
  __int64 v92; // x0
  __int64 v93; // x0
  __int64 v94; // x0
  long double v95; // q0
  __int64 v96; // x0
  __int64 v97; // x1
  unsigned __int64 v98; // x0
  unsigned __int64 v99; // t1
  __int64 v100; // x0
  __int64 v101; // x0
  __int64 v102; // x0
  __int64 v103; // x0
  __int64 v104; // x0
  __int64 v105; // x1
  __int64 v106; // x1
  __int64 v107; // x1
  __int64 v108; // x1
  __int64 v109; // x0
  __int64 v110; // x0
  __int64 v111; // x1
  __int64 v112; // x0
  __int64 v113; // x0
  int v114; // w0
  int v115; // w0
  bool v117; // zf
  __int64 v118; // x0
  __int64 v119; // x0
  __int64 v120; // x3
  __int64 j; // x20
  int v122; // t1
  __int64 v123; // x4
  int v124; // w1
  __int64 v125; // x0
  __int64 v126; // x3
  __int64 v127; // x20
  int v128; // w0
  __int64 v129; // x2
  __int64 v130; // x0
  __int64 v131; // x1
  __int64 v132; // x2
  __int64 v133; // x0
  char *v134; // x1
  __int64 v135; // x0
  __int64 v136; // x0
  __int64 v137; // x10
  __int64 v138; // x0
  __int64 v139; // x0
  unsigned __int64 v140; // x10
  __int64 v141; // x0
  __int64 v142; // x1
  unsigned int v143; // w20
  unsigned __int64 v144; // x20
  __int64 v145; // x0
  __int64 **v146; // x1
  __int64 v147; // x2
  __int64 v148; // x0
  __int64 v149; // [xsp+0h] [xbp-10030h] BYREF
  __int64 v150; // [xsp+30h] [xbp-10000h] BYREF
  unsigned __int64 v151; // [xsp+38h] [xbp-FFF8h]
  __int64 v152; // [xsp+48h] [xbp-FFE8h]
  unsigned __int64 v153; // [xsp+50h] [xbp-FFE0h] BYREF
  __int64 v154; // [xsp+58h] [xbp-FFD8h]
  unsigned int v155[232]; // [xsp+60h] [xbp-FFD0h]
  __int64 v156; // [xsp+400h] [xbp-FC30h]
  _QWORD v157[6]; // [xsp+10000h] [xbp-30h] BYREF
  __int64 v158; // [xsp+10030h] [xbp+0h] BYREF
  unsigned __int64 v159; // [xsp+10090h] [xbp+60h]
  __int64 *v160; // [xsp+10098h] [xbp+68h]
  unsigned __int64 v161; // [xsp+100A0h] [xbp+70h]
  unsigned __int64 v162; // [xsp+100A8h] [xbp+78h]
  unsigned __int64 *v163; // [xsp+100B0h] [xbp+80h]
  unsigned __int64 v164; // [xsp+100B8h] [xbp+88h]
  unsigned __int64 *v165; // [xsp+100C0h] [xbp+90h]
  __int64 *v166; // [xsp+100C8h] [xbp+98h]
  int *v167; // [xsp+100D0h] [xbp+A0h]
  __int64 v168; // [xsp+100D8h] [xbp+A8h]
  __int64 *v169; // [xsp+100E0h] [xbp+B0h]
  int v170; // [xsp+100ECh] [xbp+BCh]
  __int64 *v171; // [xsp+100F0h] [xbp+C0h]
  int v172; // [xsp+100F8h] [xbp+C8h]
  int v173; // [xsp+100FCh] [xbp+CCh]
  __int64 v174; // [xsp+10100h] [xbp+D0h]
  __int64 v175; // [xsp+10108h] [xbp+D8h]
  __int64 v176; // [xsp+10110h] [xbp+E0h] BYREF
  __int64 v177; // [xsp+10118h] [xbp+E8h]

  v168 = a8;
  v170 = a7 & 0x20000000;
  if ( (a7 & 0x20000000) != 0 )
  {
    if ( a9 )
      sub_41F250("nsid == LM_ID_BASE", (__int64)"dl-load.c", 0x3C1u, (__int64)"_dl_map_object_from_fd");
    v174 = 0;
    v175 = 0;
LABEL_4:
    v173 = a7 & 4;
    if ( (a7 & 4) != 0 )
    {
      sub_40C1A0(a4);
      v17 = 0;
      sub_410CD0(a2);
      return v17;
    }
    v167 = &dword_496770;
    if ( (dword_496770 & 0x40) != 0 )
      sub_438334("file=%s [%lu];  generating link map\n", a1, a9);
    v17 = (__int64 *)sub_437850(a4, a1, a6, a5, a7, a9);
    if ( !v17 )
    {
      v173 = *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
      if ( a2 != -1 )
        sub_410CD0(a2);
      v80 = "cannot create shared object descriptor";
      goto LABEL_102;
    }
    v26 = (__int64 *)(a3 + 8);
    v27 = *(_WORD *)(a3 + 64);
    v28 = *(_QWORD *)a3;
    v30 = *(_QWORD *)(a3 + 32);
    v29 = *(_QWORD *)(a3 + 40);
    v31 = 56LL * v27;
    v172 = *((unsigned __int16 *)v26 + 8);
    v17[95] = v30;
    *((_WORD *)v17 + 384) = v27;
    if ( v31 + v29 > v28 )
    {
      while ( v157 != (_QWORD *)((char *)v157 - (((_DWORD)v31 + 15) & 0x7F0000)) )
        v156 = 0;
      v157[0] = 0;
      if ( (((_WORD)v31 + 15) & 0xFFF0u) >= 0x400uLL )
        STACK[0x10400] = 0;
      v169 = v26;
      v171 = &v158;
      v91 = sub_430F90(a2, &v158, v31, v29);
      v26 = v169;
      if ( v91 != v31 )
      {
        v173 = *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
        if ( a2 != -1 )
          sub_410CD0(a2);
        v80 = "cannot read file data";
        goto LABEL_94;
      }
    }
    else
    {
      v171 = (__int64 *)((char *)v26 + v29);
    }
    v32 = *((unsigned __int16 *)v17 + 384);
    v169 = v157;
    v33 = 7LL * v32;
    v34 = (_QWORD *)((char *)v157 - (((_DWORD)(v33 * 8) + 15) & 0x7F0000));
    if ( v157 != v34 )
    {
      do
        v156 = 0;
      while ( &v149 != v34 );
    }
    v149 = 0;
    if ( (((_WORD)(v33 * 8) + 15) & 0xFFF0u) >= 0x400uLL )
    {
      v156 = 0;
      v35 = (unsigned __int64)&v171[v33];
      if ( (unsigned __int64)v171 >= v35 )
        goto LABEL_214;
    }
    else
    {
      v35 = (unsigned __int64)&v171[v33];
      if ( (unsigned __int64)v171 >= v35 )
        goto LABEL_214;
    }
    v36 = v171;
    v37 = qword_490F10;
    v38 = 0;
    v39 = 6;
    v40 = 0;
    v41 = qword_490F10 - 1;
    v42 = -qword_490F10;
    v43 = 0;
    v44 = 0;
    v166 = &qword_490F10;
    while ( 1 )
    {
      v53 = *(_DWORD *)v36;
      if ( *(_DWORD *)v36 == 7 )
      {
        v81 = v36[5];
        if ( v81 )
        {
          v17[143] = v81;
          v82 = *((_WORD *)v17 + 434);
          v83 = v36[6];
          v17[144] = v83;
          v84 = v82 & 3;
          v16 = v36[2];
          if ( v83 )
            v83 = (v83 - 1) & v16;
          v17[145] = v83;
          v85 = v36[4];
          v17[141] = v16;
          v17[142] = v85;
          if ( v84 != 1 && !qword_4921A8 )
            sub_41F250(
              "false && \"TLS not initialized in static application\"",
              (__int64)"dl-load.c",
              0x4B3u,
              (__int64)"_dl_map_object_from_fd");
        }
        goto LABEL_26;
      }
      if ( v53 <= 7 )
        break;
      if ( v53 == 1685382481 )
      {
        v39 = *((_DWORD *)v36 + 1);
        goto LABEL_26;
      }
      if ( v53 == 1685382482 )
      {
        v17[149] = v36[2];
        v36 += 7;
        v17[150] = *(v36 - 2);
        if ( (unsigned __int64)v36 >= v35 )
        {
LABEL_32:
          if ( v44 )
          {
            v54 = &v153;
            for ( i = 0; i != v44; ++i )
            {
              *v54 = v43;
              v54 += 7;
            }
            if ( v172 == 3 )
            {
              if ( v17[2] && !v38 )
              {
                v56 = i - 1;
                v57 = v150;
                v58 = (char *)(*(&v152 + 7 * v56) - v150);
                if ( v37 >= v153 )
                {
                  v59 = *(&v152 + 7 * v56) - v150;
                  v163 = (unsigned __int64 *)v26;
                  LODWORD(v164) = v39;
                  LODWORD(v165) = v40;
                  v60 = sub_4117E0(v150, v59, v155[0], 2050, a2, v154);
                  v17[115] = v60;
                  v61 = v60;
                  if ( v60 != -1 )
                  {
                    v26 = (__int64 *)v163;
                    v62 = (unsigned __int64)&v58[v60];
                    v39 = v164;
                    LOBYTE(v63) = (_BYTE)v165;
                    goto LABEL_41;
                  }
LABEL_57:
                  v80 = "failed to map segment from shared object";
LABEL_206:
                  v17[115] = 0;
                  v17[116] = 0;
LABEL_92:
                  if ( a2 != -1 )
                    sub_410CD0(a2);
LABEL_94:
                  v92 = v17[115];
                  if ( v92 )
                    sub_4118C0(v92, v17[116] - v92);
                  v93 = v17[114];
                  if ( v93 != -1 )
                    sub_40C1A0(v93);
                  v94 = v17[7];
                  if ( !*(_DWORD *)(v94 + 16) )
                    sub_40C1A0(v94);
                  if ( (*((_WORD *)v17 + 434) & 0x1000) != 0 )
                    sub_40C1A0(v17[94]);
LABEL_102:
                  sub_40C1A0(v17);
                  sub_40C1A0(a4);
                  sub_432250(v173, (__int64)a1, v95, 0, v80);
                }
                v135 = (__int64)&v58[v153];
                if ( v153 > (unsigned __int64)v58 )
                  v135 = 2 * v153;
                v161 = (unsigned __int64)v26;
                LODWORD(v162) = v39;
                LODWORD(v163) = v40;
                v164 = v153;
                v165 = (unsigned __int64 *)v135;
                v136 = sub_4117E0(v150, v135, 0, 2082, 0xFFFFFFFFLL, 0);
                v137 = v136;
                if ( v136 == -1 )
                  goto LABEL_57;
                v138 = (v164 - 1 + v136) & -(__int64)v164;
                v164 = v137;
                v139 = sub_4117E0(v138, v58, v155[0], 2066, a2, v154);
                v61 = v139;
                v26 = (__int64 *)v161;
                v62 = (unsigned __int64)&v58[v139];
                v140 = v164;
                v39 = v162;
                v63 = (int)v163;
                if ( v139 == -1 )
                {
                  sub_4118C0(v164, v165);
                  goto LABEL_57;
                }
                if ( v139 != v164 )
                {
                  v159 = (unsigned __int64)&v58[v139];
                  v160 = (__int64 *)v161;
                  LODWORD(v161) = v162;
                  LODWORD(v162) = (_DWORD)v163;
                  v163 = (unsigned __int64 *)v139;
                  sub_4118C0(v164, v139 - v164);
                  v39 = v161;
                  v62 = v159;
                  v26 = v160;
                  v61 = (__int64)v163;
                  v140 = v164;
                  v63 = v162;
                }
                v35 = (unsigned __int64)v165 + v140;
                v141 = (*v166 - 1 + v62) & -*v166;
                v142 = (__int64)v165 + v140 - v141;
                if ( (unsigned __int64 *)((char *)v165 + v140) == (unsigned __int64 *)v141 )
                {
                  v17[115] = v61;
                }
                else
                {
                  v161 = v62;
                  v162 = (unsigned __int64)v26;
                  LODWORD(v163) = v39;
                  LODWORD(v164) = v63;
                  v165 = (unsigned __int64 *)v61;
                  sub_4118C0(v141, v142);
                  v61 = (__int64)v165;
                  v17[115] = (__int64)v165;
                  v62 = v161;
                  v26 = (__int64 *)v162;
                  v39 = (int)v163;
                  LOBYTE(v63) = v164;
                }
LABEL_41:
                v64 = v61 - v57;
                *v17 = v64;
                v17[116] = v62;
                if ( (v63 & 1) != 0 )
                {
                  v164 = (unsigned __int64)v26;
                  LODWORD(v165) = v39;
                  v65 = *(&v150 + 7 * v44 - 7);
                  if ( v65 < v151 )
                  {
                    v80 = "ELF load command address/offset not page-aligned";
                    goto LABEL_206;
                  }
                  v66 = sub_411880(v64 + v151, v65 - v151, 0);
                  v26 = (__int64 *)v164;
                  v39 = (int)v165;
                  if ( v66 < 0 )
                  {
LABEL_210:
                    v80 = "cannot change memory protections";
                    goto LABEL_206;
                  }
                }
                v67 = (unsigned __int64 *)&v150;
                *((_BYTE *)v17 + 870) |= 8u;
                while ( 1 )
                {
                  if ( !v17[94] )
                  {
                    v89 = v26[4];
                    v90 = v67[5];
                    if ( v90 <= v89 )
                    {
                      v35 = *v67;
                      v16 = *((unsigned __int16 *)v26 + 28);
                      v62 = v89 + 56 * v16;
                      if ( v90 + v67[1] - *v67 >= v62 )
                        v17[94] = v89 + v35 - v90;
                    }
                  }
                  v69 = v67[2];
                  v68 = v67[3];
                  if ( v68 > v69 )
                  {
                    v70 = *v166;
                    v35 = v69 + *v17;
                    v62 = v68 + *v17;
                    v71 = (v70 - 1 + v35) & -v70;
                    if ( v71 > v62 )
                      v71 = v68 + *v17;
                    if ( v35 < v71 )
                    {
                      v72 = *((_DWORD *)v67 + 12);
                      if ( (v72 & 2) != 0 )
                      {
                        v162 = (unsigned __int64)v26;
                        LODWORD(v163) = v39;
                        v164 = v62;
                        v165 = v67;
                        ifunc_40DE70(v35, 0, v71 - v35);
                        v39 = (int)v163;
                        v62 = v164;
                        v67 = v165;
                        v26 = (__int64 *)v162;
                      }
                      else
                      {
                        v160 = v26;
                        LODWORD(v161) = v39;
                        v162 = v62;
                        v163 = v67;
                        v164 = v35;
                        LODWORD(v165) = v72;
                        if ( (sub_411880(v35 & -v70, v70, v72 | 2u) & 0x80000000) != 0 )
                          goto LABEL_210;
                        v148 = ifunc_40DE70(v164, 0, v71 - v164);
                        sub_411880(-*v166 & v148, *v166, (unsigned int)v165);
                        v26 = v160;
                        v62 = v162;
                        v67 = v163;
                        v39 = v161;
                      }
                    }
                    if ( v62 > v71 )
                    {
                      v129 = *((unsigned int *)v67 + 12);
                      v163 = (unsigned __int64 *)v26;
                      LODWORD(v164) = v39;
                      v165 = v67;
                      v130 = sub_4117E0(v71, v62 - v71, v129, 50, 0xFFFFFFFFLL, 0);
                      v26 = (__int64 *)v163;
                      v67 = v165;
                      v39 = v164;
                      if ( v130 == -1 )
                      {
                        v80 = "cannot map zero-fill pages";
                        goto LABEL_206;
                      }
                    }
                  }
                  v67 += 7;
LABEL_54:
                  if ( v67 >= (unsigned __int64 *)&v150 + 7 * v44 )
                    break;
                  v73 = *v67;
                  v74 = v67[1];
                  if ( v74 > *v67 )
                  {
                    v75 = v74 - v73;
                    v76 = v67[5];
                    v77 = *((unsigned int *)v67 + 12);
                    v78 = v73 + *v17;
                    v163 = (unsigned __int64 *)v26;
                    LODWORD(v164) = v39;
                    v165 = v67;
                    v79 = sub_4117E0(v78, v75, v77, 2066, a2, v76);
                    v26 = (__int64 *)v163;
                    v67 = v165;
                    v39 = v164;
                    if ( v79 == -1 )
                      goto LABEL_57;
                  }
                }
                v96 = v17[2];
                v97 = (__int64)v169;
                if ( v96 && (v69 = *v17, v97 = v96 + *v17, (v17[2] = v97) != 0) )
                {
                  v98 = *(_QWORD *)(v96 + v69);
                  v62 = (unsigned __int64)(v17 + 8);
                  if ( v98 )
                  {
                    v35 = -1879048192;
                    do
                    {
                      if ( v98 > 0x25 )
                      {
                        v16 = v98 - 1879048192;
                        if ( v98 - 1879048192 > 5 )
                        {
                          v16 = 1879048191 - v98;
                          if ( 1879048191 - v98 > 0xF )
                          {
                            v16 = (unsigned int)(2 * v98);
                            if ( (unsigned int)v16 <= 0xFFFFFFF8 )
                            {
                              if ( 1879047679 - v98 <= 0xB )
                              {
                                v16 = 1879047742;
                                v98 = 1879047742 - v98;
                              }
                              else
                              {
                                v16 = 1879047935;
                                if ( 1879047935 - v98 > 0xA )
                                  goto LABEL_111;
                                v16 = 1879048010;
                                v98 = 1879048010 - v98;
                              }
                            }
                            else
                            {
                              v98 = (unsigned int)(59 - ((int)v16 >> 1));
                            }
                          }
                          else
                          {
                            v98 = 1879048235 - v98;
                          }
                        }
                        else
                        {
                          v98 -= 1879048154LL;
                        }
                      }
                      *(_QWORD *)(v62 + 8 * v98) = v97;
LABEL_111:
                      v99 = *(_QWORD *)(v97 + 16);
                      v97 += 16;
                      v98 = v99;
                    }
                    while ( v99 );
                  }
                  if ( !v69 || (*((_BYTE *)v17 + 870) & 0x20) != 0 )
                  {
                    v108 = v17[28];
                    if ( v108 )
                      goto LABEL_136;
                    goto LABEL_137;
                  }
                  v100 = v17[12];
                  if ( v100 )
                    *(_QWORD *)(v100 + 8) += v69;
                  v101 = v17[11];
                  if ( v101 )
                    *(_QWORD *)(v101 + 8) += v69;
                  v102 = v17[13];
                  if ( v102 )
                    *(_QWORD *)(v102 + 8) += v69;
                  v103 = v17[14];
                  if ( v103 )
                    *(_QWORD *)(v103 + 8) += v69;
                  v104 = v17[44];
                  if ( v104 )
                    *(_QWORD *)(v104 + 8) += v69;
                  v105 = v17[31];
                  if ( v105 )
                    *(_QWORD *)(v105 + 8) += v69;
                  v106 = v17[67];
                  if ( v106 )
                    *(_QWORD *)(v106 + 8) += v69;
                  v107 = v17[93];
                  if ( v107 )
                    *(_QWORD *)(v107 + 8) += v69;
                  v62 = v17[15];
                  v108 = v17[28];
                  if ( v62 )
                  {
                    v109 = *(_QWORD *)(v62 + 8);
                    if ( v109 )
                      *(_QWORD *)(v62 + 8) = v69 + v109;
                    if ( !v108 )
                    {
LABEL_138:
                      if ( *(_QWORD *)(v17[17] + 8) != 24 )
                        sub_41F250(
                          "info[DT_RELAENT]->d_un.d_val == sizeof (ElfW(Rela))",
                          (__int64)"get-dynamic-info.h",
                          0x7Bu,
                          (__int64)"elf_get_dynamic_info");
                      goto LABEL_139;
                    }
LABEL_136:
                    if ( *(_QWORD *)(v108 + 8) != 7 )
                      sub_41F250(
                        "info[DT_PLTREL]->d_un.d_val == DT_RELA",
                        (__int64)"get-dynamic-info.h",
                        0x73u,
                        (__int64)"elf_get_dynamic_info");
LABEL_137:
                    if ( v17[15] )
                      goto LABEL_138;
LABEL_139:
                    v104 = v17[44];
                  }
                  else if ( v108 )
                  {
                    goto LABEL_136;
                  }
                  if ( v104 && *(_QWORD *)(v17[45] + 8) != 8 )
                    sub_41F250(
                      "info[DT_RELRENT]->d_un.d_val == sizeof (ElfW(Relr))",
                      (__int64)"get-dynamic-info.h",
                      0x82u,
                      (__int64)"elf_get_dynamic_info");
                  v110 = v17[38];
                  if ( v110 )
                  {
                    v111 = *(_QWORD *)(v110 + 8);
                    *((_DWORD *)v17 + 266) = v111;
                    if ( (v111 & 2) != 0 )
                      v17[24] = v110;
                    if ( (v111 & 4) != 0 )
                      v17[30] = v110;
                    if ( (v111 & 8) != 0 )
                      v17[32] = v110;
                  }
                  v112 = v17[56];
                  if ( v112 )
                  {
                    v113 = *(_QWORD *)(v112 + 8);
                    *((_DWORD *)v17 + 265) = v113;
                    v69 = (unsigned int)v113;
                    if ( (v113 & 8) != 0 )
                      *((_BYTE *)v17 + 872) = 1;
                    if ( (*v167 & 0x40) != 0 && (v113 & 0xF7FFF716) != 0 )
                    {
                      v166 = v26;
                      LODWORD(v169) = v39;
                      sub_438334("\nWARNING: Unsupported flag value(s) of 0x%x in DT_FLAGS_1.\n", v113 & 0xF7FFF716);
                      v69 = *((unsigned int *)v17 + 265);
                      v26 = v166;
                      v114 = v69;
                      v39 = (int)v169;
                      if ( (v69 & 1) != 0 )
LABEL_203:
                        v17[32] = v17[56];
                    }
                    else
                    {
                      v114 = *((_DWORD *)v17 + 265);
                      if ( (v69 & 1) != 0 )
                        goto LABEL_203;
                    }
                  }
                  else
                  {
                    v114 = *((_DWORD *)v17 + 265);
                  }
                  v97 = v17[37];
                  if ( v97 )
                    v17[23] = 0;
                }
                else
                {
                  v114 = *((_DWORD *)v17 + 265);
                }
                v117 = (v114 & 0x40) == 0;
                v115 = v114 & 0x8000000;
                if ( !v117 && (a7 & 0x80000000) != 0 )
                {
                  if ( !v115 )
                  {
                    if ( a2 != -1 )
                      sub_410CD0(a2);
                    v80 = "shared object cannot be dlopen()ed";
                    goto LABEL_94;
                  }
                }
                else
                {
                  if ( v115 )
                    v117 = v170 == 0;
                  else
                    v117 = 0;
                  if ( !v117 )
                  {
                    v118 = v17[94];
                    if ( v118 )
                    {
                      v17[94] = v118 + *v17;
                    }
                    else
                    {
                      v143 = *((unsigned __int16 *)v26 + 28);
                      v173 = v39;
                      v144 = 56LL * v143;
                      v145 = sub_40B890(
                               v144,
                               v18,
                               v19,
                               v20,
                               v21,
                               v22,
                               v23,
                               v24,
                               v25,
                               v97,
                               (__int16 *)v69,
                               v62,
                               v35,
                               v16);
                      if ( !v145 )
                      {
                        v173 = *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
                        if ( a2 != -1 )
                          sub_410CD0(a2);
                        v80 = "cannot allocate memory for program header";
                        goto LABEL_94;
                      }
                      v17[94] = j_ifunc_40DC90(v145, v171, v144);
                      *((_WORD *)v17 + 434) |= 0x1000u;
                      v39 = v173;
                    }
                    if ( (v39 & ~dword_490F28 & 1) != 0 )
                    {
                      dword_48FB18 |= 7u;
                      v173 = sub_444F80(v168);
                      if ( v173 )
                      {
                        if ( a2 != -1 )
                          sub_410CD0(a2);
                        v80 = "cannot enable executable stack as shared object requires";
                        goto LABEL_94;
                      }
                    }
                    v119 = v17[141];
                    if ( v119 )
                      v17[141] = v119 + *v17;
                    v120 = v17[94];
                    for ( j = v120 + 56LL * *((unsigned __int16 *)v17 + 384); j != v120; v120 = v17[94] )
                    {
                      while ( 1 )
                      {
                        v122 = *(_DWORD *)(j - 56);
                        j -= 56;
                        if ( v122 == 1685382483 )
                          break;
                        if ( j == v120 )
                          goto LABEL_174;
                      }
                      sub_434150(v17, a2, j);
                    }
LABEL_174:
                    if ( (unsigned int)sub_410CD0(a2) )
                    {
                      v173 = *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
                      if ( a2 != -1 )
                        sub_410CD0(a2);
                      v80 = "cannot close file descriptor";
                      goto LABEL_94;
                    }
                    if ( v172 == 2 && (*((_WORD *)v17 + 434) & 3LL) != 0 )
                      sub_41F250(
                        "type != ET_EXEC || l->l_type == lt_executable",
                        (__int64)"dl-load.c",
                        0x571u,
                        (__int64)"_dl_map_object_from_fd");
                    v123 = *v17;
                    v124 = *v167;
                    v125 = *v17 + v17[95];
                    v17[95] = v125;
                    if ( (v124 & 0x40) != 0 )
                      sub_438334(
                        "  dynamic: 0x%0*lx  base: 0x%0*lx   size: 0x%0*zx\n"
                        "    entry: 0x%0*lx  phdr: 0x%0*lx  phnum:   %*u\n"
                        "\n",
                        16,
                        v17[2],
                        16,
                        v123,
                        16,
                        (size_t)v58,
                        16,
                        v125,
                        16,
                        v17[94],
                        16,
                        *((unsigned __int16 *)v17 + 384));
                    sub_439FD0(v17);
                    if ( (a7 & 8) == 0 )
                    {
                      if ( v17[24] )
                      {
                        v146 = (__int64 **)v17[122];
                        if ( *v146 != v17 + 97 )
                        {
                          v147 = v17[121];
                          *(_QWORD *)v17[99] = v17;
                          *((_DWORD *)v17 + 200) = 1;
                          j_ifunc_40DD80(v146 + 1, v146, 8 * (v147 - 1));
                          *(_QWORD *)v17[122] = v17 + 99;
                        }
                      }
                    }
                    if ( (*((_DWORD *)v17 + 265) & 0x20) != 0 )
                      qword_496808 = (__int64)v17;
                    v126 = v175;
                    v17[125] = v174;
                    v17[126] = v126;
                    if ( !(&off_4914A8)[21 * a9 + 4] )
                    {
                      v131 = v17[22];
                      if ( v131 )
                      {
                        v132 = 0;
                        if ( (*((_BYTE *)v17 + 870) & 0x20) != 0 )
                          v132 = *v17;
                        if ( !(unsigned int)sub_42F240(
                                              *(_QWORD *)(v131 + 8) + *(_QWORD *)(v17[13] + 8) + v132,
                                              "libc.so.6") )
                          (&off_4914A8)[21 * a9 + 4] = v17;
                      }
                    }
                    if ( v17[143] && ((*((_WORD *)v17 + 434) & 3) == 1 || qword_4921A8) )
                      sub_412800((unsigned __int64)v17);
                    sub_4377B0(v17, a9);
                    if ( (a7 & 0x40000000) == 0 )
                    {
                      v127 = sub_412370(a9);
                      v128 = *(_DWORD *)(v127 + 24);
                      if ( v128 )
                      {
                        if ( v128 != 1 )
                          sub_41F250(
                            "r->r_state == RT_ADD",
                            (__int64)"dl-load.c",
                            0x5E6u,
                            (__int64)"_dl_map_object_from_fd");
                      }
                      else
                      {
                        *(_DWORD *)(v127 + 24) = 1;
                        sub_412360(1);
                      }
                    }
                    return v17;
                  }
                }
                if ( a2 != -1 )
                  sub_410CD0(a2);
                v80 = "cannot dynamically load position-independent executable";
                goto LABEL_94;
              }
LABEL_202:
              v80 = "object file has no dynamic section";
              goto LABEL_92;
            }
            if ( !v170 )
            {
              v80 = "cannot dynamically load executable";
              goto LABEL_92;
            }
            if ( v17[2] )
            {
              v80 = "object file has no dynamic section";
              if ( v38 )
                goto LABEL_92;
            }
            else if ( v38 )
            {
              goto LABEL_202;
            }
            v133 = v150;
            v62 = *((_BYTE *)v17 + 870) & 0xF7 | (8 * (((unsigned __int8)v40 ^ 1) & 1u));
            v67 = (unsigned __int64 *)&v150;
            v69 = *(&v152 + 7 * v44 - 7);
            *((_BYTE *)v17 + 870) = v62;
            v58 = (char *)(v69 - v133);
            v134 = (char *)(*v17 + v69);
            v17[115] = *v17 + v133;
            v17[116] = (__int64)v134;
            goto LABEL_54;
          }
LABEL_214:
          v80 = "object file has no loadable segments";
          goto LABEL_92;
        }
      }
      else
      {
LABEL_26:
        v36 += 7;
        if ( (unsigned __int64)v36 >= v35 )
          goto LABEL_32;
      }
    }
    switch ( v53 )
    {
      case 2u:
        if ( v36[4] )
        {
          v16 = v36[2];
          v86 = *((_BYTE *)v17 + 870) & 0xDF | (32 * (((*((unsigned int *)v36 + 1) ^ 2uLL) >> 1) & 1));
          v87 = (unsigned __int64)v36[5] >> 4;
          v17[2] = v16;
          *((_WORD *)v17 + 385) = v87;
          *((_BYTE *)v17 + 870) = v86;
        }
        else
        {
          v38 = 1;
        }
        break;
      case 6u:
        v17[94] = v36[2];
        break;
      case 1u:
        v46 = v36[1];
        v45 = v36[2];
        if ( ((v45 - v46) & v41) != 0 )
        {
          v80 = "ELF load command address/offset not page-aligned";
          goto LABEL_92;
        }
        v47 = v36[4];
        v48 = v36[5];
        v49 = v36[6];
        v50 = &v150 + 7 * v44;
        *v50 = v45 & v42;
        v51 = v45 + v47;
        v50[3] = v48 + v45;
        v50[1] = (v41 + v51) & v42;
        v50[2] = v51;
        v16 = v44 + 1;
        if ( ((v49 - 1) & v49) == 0 && v43 < v49 )
          v43 = v49;
        *(_QWORD *)&v155[14 * v44 - 2] = v46 & v42;
        if ( v16 > 1 && (v45 & v42) != *(v50 - 6) )
          v40 = 1;
        v52 = 7 * v44++;
        v155[2 * v52] = (1934713408 >> (4 * (*((_BYTE *)v36 + 4) & 7))) & 0xF;
        break;
    }
    goto LABEL_26;
  }
  if ( (sub_410930(a2, &v176) & 0x80000000) != 0 )
  {
    v173 = *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
    if ( a2 != -1 )
      sub_410CD0(a2);
    v17 = 0;
    v80 = "cannot stat shared object";
    goto LABEL_102;
  }
  v174 = v176;
  v175 = v177;
  v17 = (&off_4914A8)[21 * a9];
  if ( !v17 )
    goto LABEL_4;
  while ( (*((_BYTE *)v17 + 870) & 4) != 0 || v17[125] != v176 || v17[126] != v177 )
  {
    v17 = (__int64 *)v17[3];
    if ( !v17 )
      goto LABEL_4;
  }
  sub_410CD0(a2);
  sub_40C1A0(a4);
  sub_433530(v17[7], a1);
  return v17;
}
