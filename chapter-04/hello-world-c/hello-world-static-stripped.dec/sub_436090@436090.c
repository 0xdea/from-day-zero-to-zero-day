__int64 __fastcall sub_436090(
        const char *a1,
        unsigned int a2,
        unsigned __int64 *a3,
        __int64 a4,
        unsigned int **a5,
        __int64 *a6,
        __int64 a7,
        __int64 a8,
        char a9,
        __int64 a10,
        unsigned __int8 a11,
        __int64 a12)
{
  unsigned __int64 v15; // x5
  int v17; // w11
  unsigned int v18; // w25
  unsigned int v19; // w26
  int *v21; // x4
  int v22; // w13
  __int64 v23; // x27
  unsigned int v24; // w3
  __int64 v25; // x1
  char v26; // w0
  __int64 v27; // x7
  __int64 v28; // x20
  __int64 v29; // x6
  __int64 v30; // x22
  unsigned __int64 v31; // x1
  __int64 v32; // x23
  const char *v33; // x2
  unsigned __int64 v34; // x0
  __int64 v35; // x21
  unsigned int v36; // w23
  unsigned int *v37; // x0
  unsigned int *v38; // x3
  int v39; // w0
  bool v40; // zf
  int v41; // w0
  unsigned int v43; // w24
  int *v44; // x21
  unsigned int v45; // w24
  int v46; // w26
  int v47; // w0
  __int64 v48; // x6
  unsigned int *v49; // x0
  int *v50; // x24
  __int64 v51; // x20
  void *v52; // x4
  unsigned int v53; // w22
  __int64 **v54; // x26
  __int64 v55; // x2
  void *v56; // x5
  double v57; // d0
  double v58; // d1
  double v59; // d2
  double v60; // d3
  double v61; // d4
  double v62; // d5
  double v63; // d6
  double v64; // d7
  unsigned __int64 v65; // x25
  void *v66; // x4
  __int64 v67; // x3
  int v68; // w11
  __int64 *v69; // x26
  unsigned int *v70; // x27
  unsigned __int64 v71; // x20
  __int64 v72; // x21
  unsigned __int64 v73; // x28
  unsigned int v74; // w25
  unsigned __int64 v75; // x22
  int v76; // w24
  __int64 *v77; // x23
  unsigned __int64 *v78; // x0
  __int128 v79; // q0
  unsigned __int64 v80; // x1
  void *v81; // x4
  __int64 v82; // x12
  unsigned __int64 v83; // x25
  __int64 v84; // x10
  int v85; // w11
  unsigned int *v86; // x3
  __int64 v87; // x6
  __int64 v88; // x7
  unsigned __int64 v89; // x0
  __int64 **v90; // x1
  unsigned __int64 v91; // x0
  char v92; // w1
  unsigned __int64 v93; // x1
  unsigned int v94; // w6
  unsigned __int64 v95; // x0
  unsigned __int8 *v96; // x14
  __int64 v97; // x1
  unsigned int v98; // t1
  unsigned __int64 v99; // x19
  __int64 v100; // x2
  __int64 v101; // x3
  void *v102; // x4
  void *v103; // x5
  void *v104; // x6
  double v105; // d0
  double v106; // d1
  double v107; // d2
  double v108; // d3
  double v109; // d4
  double v110; // d5
  double v111; // d6
  double v112; // d7
  __int64 v113; // x26
  unsigned __int64 v114; // x27
  unsigned int *v115; // x3
  void *v116; // x4
  unsigned int *v117; // x1
  __int64 v118; // x10
  __int64 v119; // x14
  __int64 v120; // x15
  unsigned __int64 v121; // x7
  unsigned __int64 v122; // x2
  unsigned __int64 v123; // x0
  __int64 **v124; // x28
  __int64 v125; // x0
  __int64 v126; // [xsp+80h] [xbp+60h]
  unsigned int *v128; // [xsp+88h] [xbp+68h]
  unsigned int *v129; // [xsp+88h] [xbp+68h]
  unsigned int *v130; // [xsp+88h] [xbp+68h]
  void *v131; // [xsp+90h] [xbp+70h]
  void *v132; // [xsp+90h] [xbp+70h]
  __int64 **v136; // [xsp+A8h] [xbp+88h]
  unsigned __int64 v137; // [xsp+B0h] [xbp+90h]
  unsigned __int64 v138; // [xsp+B0h] [xbp+90h]
  void *v139; // [xsp+B0h] [xbp+90h]
  __int64 v140; // [xsp+B0h] [xbp+90h]
  unsigned __int64 v141; // [xsp+B0h] [xbp+90h]
  unsigned int *v142; // [xsp+B0h] [xbp+90h]
  void *v143; // [xsp+B0h] [xbp+90h]
  unsigned int *v144; // [xsp+B0h] [xbp+90h]
  int v145; // [xsp+B8h] [xbp+98h]
  __int64 v146; // [xsp+B8h] [xbp+98h]
  int v147; // [xsp+B8h] [xbp+98h]
  __int64 v148; // [xsp+B8h] [xbp+98h]
  int v149; // [xsp+B8h] [xbp+98h]
  void *v150; // [xsp+B8h] [xbp+98h]
  unsigned int *v151; // [xsp+B8h] [xbp+98h]
  void *v152; // [xsp+B8h] [xbp+98h]
  int *v153; // [xsp+C0h] [xbp+A0h]
  unsigned __int64 v154; // [xsp+C0h] [xbp+A0h]
  int *v155; // [xsp+C0h] [xbp+A0h]
  unsigned int *v156; // [xsp+C0h] [xbp+A0h]
  void *v157; // [xsp+C0h] [xbp+A0h]
  int *v158; // [xsp+C0h] [xbp+A0h]
  __int64 *v159; // [xsp+C0h] [xbp+A0h]
  int v160; // [xsp+C0h] [xbp+A0h]
  int v161; // [xsp+C8h] [xbp+A8h]
  __int64 v162; // [xsp+C8h] [xbp+A8h]
  int v163; // [xsp+C8h] [xbp+A8h]
  int v164; // [xsp+C8h] [xbp+A8h]
  unsigned __int64 v165; // [xsp+C8h] [xbp+A8h]
  int v166; // [xsp+C8h] [xbp+A8h]
  unsigned __int64 v167; // [xsp+D0h] [xbp+B0h]
  int *v168; // [xsp+D0h] [xbp+B0h]
  unsigned int *v169; // [xsp+D0h] [xbp+B0h]
  unsigned int *v170; // [xsp+D0h] [xbp+B0h]
  int v171; // [xsp+D0h] [xbp+B0h]
  int v172; // [xsp+D8h] [xbp+B8h]
  int *v173; // [xsp+D8h] [xbp+B8h]
  int *v174; // [xsp+E0h] [xbp+C0h]
  int v175; // [xsp+ECh] [xbp+CCh]
  int v176; // [xsp+F4h] [xbp+D4h] BYREF
  unsigned int *v177; // [xsp+F8h] [xbp+D8h] BYREF
  __int64 v178; // [xsp+108h] [xbp+E8h]
  __int64 v179; // [xsp+108h] [xbp+E8h]
  __int64 v180; // [xsp+108h] [xbp+E8h]
  __int64 v181; // [xsp+108h] [xbp+E8h]
  __int64 v182; // [xsp+108h] [xbp+E8h]
  __int64 v183; // [xsp+118h] [xbp+F8h]
  __int64 v184; // [xsp+118h] [xbp+F8h]
  __int64 v185; // [xsp+118h] [xbp+F8h]
  __int64 v186; // [xsp+118h] [xbp+F8h]
  __int64 v187; // [xsp+118h] [xbp+F8h]
  __int64 v188; // [xsp+118h] [xbp+F8h]

  v15 = *((unsigned int *)a6 + 2);
  v17 = a11 & 2;
  v18 = a2 >> 6;
  v19 = a2;
  v21 = &dword_496770;
  v22 = a2 & 0x3F;
  v23 = *a6;
  while ( 1 )
  {
    v32 = *(_QWORD *)(*(_QWORD *)(v23 + 8 * a7) + 40LL);
    if ( v32 == a10
      || v17 && (*(_WORD *)(v32 + 868) & 3LL) == 0
      || (*(_BYTE *)(v32 + 870) & 4) != 0 && (!a12 || (*(_BYTE *)(a12 + 870) & 4) == 0) )
    {
      goto LABEL_7;
    }
    if ( (*v21 & 8) != 0 )
    {
      v33 = *(const char **)(v32 + 8);
      if ( !*v33 )
      {
        v33 = (const char *)off_491918;
        if ( !off_491918 )
          v33 = "<main program>";
      }
      v137 = v15;
      v145 = v17;
      v153 = v21;
      v161 = v22;
      v178 = a10;
      v183 = a12;
      sub_438334("symbol=%s;  lookup in file=%s [%lu]\n", a1, v33, *(_QWORD *)(v32 + 48));
      v15 = v137;
      v21 = v153;
      a10 = v178;
      a12 = v183;
      v17 = v145;
      v22 = v161;
    }
    v24 = *(_DWORD *)(v32 + 828);
    if ( !v24 )
      goto LABEL_7;
    v25 = *(_QWORD *)(v32 + 112);
    v176 = 0;
    v26 = *(_BYTE *)(v32 + 870);
    v27 = 0;
    v177 = 0;
    v28 = *(_QWORD *)(v25 + 8);
    if ( (v26 & 0x20) != 0 )
    {
      v27 = *(_QWORD *)v32;
      v28 += *(_QWORD *)v32;
    }
    v29 = *(_QWORD *)(v32 + 840);
    v30 = v27 + *(_QWORD *)(*(_QWORD *)(v32 + 104) + 8LL);
    if ( v29 )
    {
      v31 = *(_QWORD *)(v29 + 8LL * (v18 & *(_DWORD *)(v32 + 832)));
      if ( ((unsigned int)(v31 >> (v19 >> *(_DWORD *)(v32 + 836))) & (unsigned int)(v31 >> v22) & 1) != 0 )
      {
        v43 = *(_DWORD *)(*(_QWORD *)(v32 + 848) + 4LL * (v19 % v24));
        if ( v43 )
        {
          v146 = a7;
          v154 = v15;
          v44 = (int *)(*(_QWORD *)(v32 + 856) + 4LL * v43);
          v45 = v19;
          v46 = v22;
          v163 = v17;
          v168 = v21;
          v180 = a10;
          v185 = a12;
          while ( 1 )
          {
            v47 = *v44;
            if ( !((*v44 ^ v45) >> 1) )
            {
              v48 = (unsigned int)(((unsigned __int64)v44 - *(_QWORD *)(v32 + 856)) >> 2);
              v49 = sub_435F10(
                      (unsigned __int64)a1,
                      (unsigned int *)a4,
                      a8,
                      a9,
                      a11,
                      (unsigned int *)(v28 + 24 * v48),
                      v48,
                      v30,
                      v32,
                      &v177,
                      &v176);
              if ( v49 )
              {
                a7 = v146;
                v15 = v154;
                v22 = v46;
                v21 = v168;
                v38 = v49;
                a10 = v180;
                v19 = v45;
                a12 = v185;
                v17 = v163;
                goto LABEL_27;
              }
              v47 = *v44;
            }
            ++v44;
            if ( (v47 & 1) != 0 )
            {
              a7 = v146;
              v15 = v154;
              v22 = v46;
              v21 = v168;
              v19 = v45;
              a10 = v180;
              a12 = v185;
              v17 = v163;
              goto LABEL_64;
            }
          }
        }
      }
      goto LABEL_7;
    }
    if ( *a3 == 0xFFFFFFFF )
    {
      v93 = *(unsigned __int8 *)a1;
      v34 = 0;
      if ( *a1 )
      {
        if ( a1[1] )
        {
          v93 = *((unsigned __int8 *)a1 + 1) + 16 * v93;
          if ( a1[2] )
          {
            v93 = *((unsigned __int8 *)a1 + 2) + 16 * v93;
            if ( a1[3] )
            {
              v93 = *((unsigned __int8 *)a1 + 3) + 16 * v93;
              if ( a1[4] )
              {
                v94 = *((unsigned __int8 *)a1 + 5);
                v95 = *((unsigned __int8 *)a1 + 4) + 16 * v93;
                v96 = (unsigned __int8 *)(a1 + 5);
                if ( a1[5] )
                {
                  do
                  {
                    v97 = v94;
                    v98 = *++v96;
                    v94 = v98;
                    v95 = (v97 + 16 * v95) ^ (((v97 + 16 * v95) & 0xF0000000) >> 24);
                  }
                  while ( v98 );
                }
                v93 = v95 & 0xFFFFFFF;
              }
            }
          }
        }
        v34 = 4 * (v93 % v24);
      }
      *a3 = v93;
    }
    else
    {
      v34 = 4 * (*a3 % v24);
    }
    if ( !*(_DWORD *)(*(_QWORD *)(v32 + 856) + v34) )
      goto LABEL_7;
    v162 = a7;
    v167 = v15;
    v35 = v32;
    v36 = *(_DWORD *)(*(_QWORD *)(v32 + 856) + v34);
    v172 = v17;
    v174 = v21;
    v175 = v22;
    v179 = a10;
    v184 = a12;
    do
    {
      v37 = sub_435F10(
              (unsigned __int64)a1,
              (unsigned int *)a4,
              a8,
              a9,
              a11,
              (unsigned int *)(v28 + 24LL * v36),
              v36,
              v30,
              v35,
              &v177,
              &v176);
      if ( v37 )
      {
        v32 = v35;
        a7 = v162;
        v15 = v167;
        v38 = v37;
        v21 = v174;
        a10 = v179;
        a12 = v184;
        v17 = v172;
        v22 = v175;
        goto LABEL_27;
      }
      v36 = *(_DWORD *)(*(_QWORD *)(v35 + 848) + 4LL * v36);
    }
    while ( v36 );
    v32 = v35;
    a7 = v162;
    v15 = v167;
    v21 = v174;
    a10 = v179;
    a12 = v184;
    v17 = v172;
    v22 = v175;
LABEL_64:
    if ( v176 != 1 )
      goto LABEL_7;
    v38 = v177;
    if ( !v177 )
      goto LABEL_7;
LABEL_27:
    v39 = *((_BYTE *)v38 + 5) & 3;
    if ( (unsigned int)(v39 - 1) <= 1 )
      goto LABEL_7;
    if ( a12 )
      v40 = v39 == 3;
    else
      v40 = 0;
    if ( v40 && (*(_WORD *)(a12 + 868) & 3LL) == 0 )
    {
      if ( v17 )
      {
        v141 = v15;
        v149 = v17;
        v158 = v21;
        v166 = v22;
        v170 = v38;
        v182 = a10;
        v188 = a12;
        sub_438540(
          "warning: copy relocation against non-copyable protected symbol `%s' in `%s'\n",
          a1,
          *(const char **)(v32 + 8));
        v15 = v141;
        v21 = v158;
        v38 = v170;
        a10 = v182;
        a12 = v188;
        v17 = v149;
        v22 = v166;
      }
      else
      {
        if ( (a11 & 1) == 0 || !*(_QWORD *)(a4 + 8) || *(_WORD *)(a4 + 6) )
          goto LABEL_32;
        v138 = v15;
        v155 = v21;
        v164 = v22;
        v169 = v38;
        v181 = a10;
        v186 = a12;
        sub_438540(
          "warning: direct reference to protected function `%s' in `%s' may break pointer equality\n",
          a1,
          *(const char **)(v32 + 8));
        v15 = v138;
        v21 = v155;
        v38 = v169;
        a10 = v181;
        a12 = v186;
        v17 = 0;
        v22 = v164;
      }
      if ( (*(_DWORD *)(v32 + 876) & 1) != 0 )
        sub_432250(0, *(const char **)(v32 + 8), a1, "error due to GNU_PROPERTY_1_NEEDED_INDIRECT_EXTERN_ACCESS");
    }
LABEL_32:
    v41 = *((unsigned __int8 *)v38 + 4) >> 4;
    if ( v41 != 2 )
      break;
    if ( !dword_4967A0 )
    {
LABEL_35:
      *a5 = v38;
      a5[1] = (unsigned int *)v32;
      return 1;
    }
    if ( !*a5 )
    {
      *a5 = v38;
      a5[1] = (unsigned int *)v32;
    }
LABEL_7:
    if ( v15 <= ++a7 )
      return 0;
  }
  if ( v41 != 10 )
  {
    if ( v41 == 1 )
      goto LABEL_35;
    goto LABEL_7;
  }
  v50 = v21;
  v51 = v30;
  v52 = *(void **)(v32 + 48);
  v53 = v19;
  v126 = 4LL * (_QWORD)v52;
  v139 = v52;
  v147 = v17;
  v156 = v38;
  v187 = a12;
  v54 = &(&off_4914A8)[21 * (_QWORD)v52];
  v136 = &(&off_4914A8)[21 * (_QWORD)v52 + 5];
  sub_42D0B0(v136);
  v65 = (unsigned __int64)v54[12];
  v66 = v139;
  v67 = (__int64)v156;
  v68 = v147;
  if ( !v54[11] )
  {
    v144 = v156;
    v152 = v66;
    v160 = v68;
    v125 = sub_40CCB0(0x20u, 0x1Fu, v57, v58, v59, v60, v61, v62, v63, v64, v55, v67, v66, v56, 0);
    v87 = v125;
    if ( v125 )
    {
      v83 = 31;
      v54[11] = (__int64 *)v125;
      v54[12] = (__int64 *)31;
      v85 = v160;
      v72 = v53
          - (v53 / 29LL
           + 4 * (((((unsigned __int128)v53 * 0x469EE58469EE5847LL) >> 64) & 0xFFFFFFFFFFFFFFF8LL) - v53 / 29LL))
          + 1;
      v73 = v53 % 0x1FuLL;
      v84 = 32 * v72;
      v86 = v144;
      v81 = v152;
      v54[14] = (__int64 *)sub_40C1A0;
      v82 = v187;
      goto LABEL_68;
    }
LABEL_119:
    sub_42DA40((int *)v136);
    sub_4385C0("out of memory\n");
  }
  v69 = v54[11];
  v70 = v156;
  v140 = v32;
  v148 = v51;
  v71 = v65;
  v157 = v66;
  v165 = v53;
  v72 = v53 % (v65 - 2) + 1;
  v73 = v53 % v65;
  v74 = v53;
  v173 = v50;
  v75 = v73;
  v76 = v68;
  while ( 2 )
  {
    v77 = &v69[4 * v75];
LABEL_57:
    v78 = (unsigned __int64 *)v77[1];
    if ( v74 == *(_DWORD *)v77 )
    {
      if ( !(unsigned int)sub_42F240(v78, (unsigned __int64)a1) )
      {
        if ( v76 )
        {
          *(_QWORD *)&v79 = v70;
          *((_QWORD *)&v79 + 1) = v140;
        }
        else
        {
          v79 = *((_OWORD *)v77 + 1);
        }
        *(_OWORD *)a5 = v79;
        sub_42DA40((int *)v136);
        return 1;
      }
LABEL_56:
      v75 += v72;
      v77 += 4 * v72;
      if ( v71 <= v75 )
      {
        v75 -= v71;
        continue;
      }
      goto LABEL_57;
    }
    break;
  }
  if ( v78 )
    goto LABEL_56;
  v80 = 3 * v71;
  v81 = v157;
  v53 = v74;
  v82 = v187;
  v83 = v71;
  v84 = 32 * v72;
  v85 = v76;
  v32 = v140;
  v51 = v148;
  v86 = v70;
  v87 = (__int64)v69;
  v50 = v173;
  if ( v80 <= 4 * (__int64)(&off_4914A8)[(_QWORD)v157 + 4 * ((_QWORD)v157 + v126) + 13] )
  {
    v142 = v70;
    v150 = v157;
    v159 = v69;
    v171 = v85;
    v99 = sub_4375D0(v83 + 1, v80, &off_4914A8, v70);
    v113 = sub_40CCB0(0x20u, v99, v105, v106, v107, v108, v109, v110, v111, v112, v100, v101, v102, v103, v104);
    if ( v113 )
    {
      v114 = v99 - 2;
      v115 = v142;
      v116 = v150;
      v117 = (unsigned int *)v159;
      if ( v83 )
      {
        do
        {
          v118 = *((_QWORD *)v117 + 1);
          if ( v118 )
          {
            v120 = *((_QWORD *)v117 + 2);
            v119 = *((_QWORD *)v117 + 3);
            v121 = *v117 % v114 + 1;
            v122 = *v117 % v99;
LABEL_104:
            v123 = v113 + 32 * v122;
            while ( *(_QWORD *)(v123 + 8) )
            {
              v122 += v121;
              v123 += 32 * v121;
              if ( v99 <= v122 )
              {
                v122 -= v99;
                goto LABEL_104;
              }
            }
            *(_DWORD *)v123 = *v117;
            *(_QWORD *)(v123 + 8) = v118;
            *(_QWORD *)(v123 + 16) = v120;
            *(_QWORD *)(v123 + 24) = v119;
          }
          v117 += 8;
        }
        while ( v117 != (unsigned int *)&v159[4 * v83] );
      }
      v143 = v150;
      v151 = v115;
      v83 = v99;
      v124 = &(&off_4914A8)[(_QWORD)v116 + 4 * ((_QWORD)v116 + v126)];
      ((void (__fastcall *)(__int64 *))v124[14])(v159);
      v124[11] = (__int64 *)v113;
      v124[12] = (__int64 *)v99;
      v85 = v171;
      v87 = v113;
      v124[14] = (__int64 *)sub_40C1A0;
      v81 = v143;
      v86 = v151;
      v82 = v187;
      v72 = v165 % v114 + 1;
      v73 = v165 % v99;
      v84 = 32 * v72;
      goto LABEL_68;
    }
    goto LABEL_119;
  }
LABEL_68:
  v88 = v51 + *v86;
  if ( v85 )
  {
LABEL_69:
    v89 = v87 + 32 * v73;
    while ( *(_QWORD *)(v89 + 8) )
    {
      v73 += v72;
      v89 += v84;
      if ( v83 <= v73 )
      {
        v73 -= v83;
        goto LABEL_69;
      }
    }
    *(_DWORD *)v89 = v53;
    *(_QWORD *)(v89 + 8) = v88;
    *(_QWORD *)(v89 + 16) = a4;
    *(_QWORD *)(v89 + 24) = v82;
  }
  else
  {
LABEL_75:
    v91 = v87 + 32 * v73;
    while ( *(_QWORD *)(v91 + 8) )
    {
      v73 += v72;
      v91 += v84;
      if ( v83 <= v73 )
      {
        v73 -= v83;
        goto LABEL_75;
      }
    }
    v92 = *(_WORD *)(v32 + 868);
    *(_DWORD *)v91 = v53;
    *(_QWORD *)(v91 + 8) = v88;
    *(_QWORD *)(v91 + 16) = v86;
    *(_QWORD *)(v91 + 24) = v32;
    if ( (v92 & 3) == 2 && (*(_BYTE *)(v32 + 871) & 1) == 0 )
    {
      if ( (a9 & 8) != 0 )
      {
        if ( (*(_BYTE *)(v32 + 872) & 1) == 0 )
        {
          if ( (*v50 & 4) != 0 )
          {
            v130 = v86;
            v132 = v81;
            sub_438334(
              "marking %s [%lu] as NODELETE due to unique symbol\n",
              *(const char **)(v32 + 8),
              *(_QWORD *)(v32 + 48));
            v86 = v130;
            v81 = v132;
          }
          *(_BYTE *)(v32 + 872) = 1;
        }
      }
      else
      {
        if ( (*v50 & 4) != 0 )
        {
          v129 = v86;
          v131 = v81;
          sub_438334(
            "marking %s [%lu] as NODELETE due to unique symbol\n",
            *(const char **)(v32 + 8),
            *(_QWORD *)(v32 + 48));
          v86 = v129;
          v81 = v131;
        }
        *(_BYTE *)(v32 + 871) = 1;
      }
    }
  }
  v128 = v86;
  v90 = &(&off_4914A8)[(_QWORD)v81 + 4 * ((_QWORD)v81 + v126)];
  v90[13] = (__int64 *)((char *)v90[13] + 1);
  sub_42DA40((int *)v136);
  *a5 = v128;
  a5[1] = (unsigned int *)v32;
  return 1;
}
