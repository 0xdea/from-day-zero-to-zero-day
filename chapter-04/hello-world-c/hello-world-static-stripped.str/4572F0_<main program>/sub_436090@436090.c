__int64 __fastcall sub_436090(
        const char *a1,
        unsigned int a2,
        unsigned __int64 *a3,
        __int64 a4,
        __int64 *a5,
        __int64 *a6,
        __int64 a7,
        __int64 a8,
        unsigned int a9,
        __int64 *a10,
        unsigned int a11,
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
  __int64 *v32; // x23
  const char *v33; // x2
  unsigned __int64 v34; // x0
  __int64 *v35; // x21
  unsigned int v36; // w23
  __int64 v37; // x0
  __int64 v38; // x3
  int v39; // w0
  bool v40; // zf
  int v41; // w0
  unsigned int v43; // w24
  int *v44; // x21
  unsigned int v45; // w24
  int v46; // w26
  int v47; // w0
  __int64 v48; // x6
  __int64 v49; // x0
  long double v50; // q0
  int *v51; // x24
  __int64 v52; // x20
  __int64 v53; // x4
  unsigned int v54; // w22
  __int64 **v55; // x26
  __int64 v56; // x2
  __int64 v57; // x5
  long double v58; // q0
  long double v59; // q1
  long double v60; // q2
  long double v61; // q3
  long double v62; // q4
  long double v63; // q5
  long double v64; // q6
  long double v65; // q7
  unsigned __int64 v66; // x25
  __int64 v67; // x4
  __int64 v68; // x3
  int v69; // w11
  __int64 *v70; // x26
  unsigned int *v71; // x27
  unsigned __int64 v72; // x20
  __int64 v73; // x21
  unsigned __int64 v74; // x28
  unsigned int v75; // w25
  unsigned __int64 v76; // x22
  int v77; // w24
  __int64 *v78; // x23
  __int64 v79; // x0
  __int128 v80; // q0
  unsigned __int64 v81; // x1
  __int64 v82; // x4
  __int64 v83; // x12
  unsigned __int64 v84; // x25
  __int64 v85; // x10
  int v86; // w11
  unsigned int *v87; // x3
  __int64 v88; // x6
  __int64 v89; // x7
  unsigned __int64 v90; // x0
  __int64 **v91; // x1
  unsigned __int64 v92; // x0
  char v93; // w1
  unsigned __int64 v94; // x1
  unsigned int v95; // w6
  unsigned __int64 v96; // x0
  unsigned __int8 *v97; // x14
  __int64 v98; // x1
  unsigned int v99; // t1
  unsigned __int64 v100; // x19
  __int64 v101; // x2
  __int64 v102; // x3
  __int64 v103; // x4
  __int64 v104; // x5
  long double v105; // q0
  long double v106; // q1
  long double v107; // q2
  long double v108; // q3
  long double v109; // q4
  long double v110; // q5
  long double v111; // q6
  long double v112; // q7
  __int64 v113; // x26
  unsigned __int64 v114; // x27
  unsigned int *v115; // x3
  __int64 v116; // x4
  unsigned int *v117; // x1
  __int64 v118; // x10
  __int64 v119; // x14
  __int64 v120; // x15
  unsigned __int64 v121; // x7
  unsigned __int64 v122; // x2
  unsigned __int64 v123; // x0
  __int64 **v124; // x28
  __int64 v125; // x0
  long double v126; // q0
  __int64 v127; // [xsp+80h] [xbp+60h]
  unsigned int *v129; // [xsp+88h] [xbp+68h]
  unsigned int *v130; // [xsp+88h] [xbp+68h]
  unsigned int *v131; // [xsp+88h] [xbp+68h]
  __int64 v132; // [xsp+90h] [xbp+70h]
  __int64 v133; // [xsp+90h] [xbp+70h]
  atomic_uint *v137; // [xsp+A8h] [xbp+88h]
  unsigned __int64 v138; // [xsp+B0h] [xbp+90h]
  unsigned __int64 v139; // [xsp+B0h] [xbp+90h]
  __int64 v140; // [xsp+B0h] [xbp+90h]
  __int64 *v141; // [xsp+B0h] [xbp+90h]
  unsigned __int64 v142; // [xsp+B0h] [xbp+90h]
  unsigned int *v143; // [xsp+B0h] [xbp+90h]
  __int64 v144; // [xsp+B0h] [xbp+90h]
  unsigned int *v145; // [xsp+B0h] [xbp+90h]
  int v146; // [xsp+B8h] [xbp+98h]
  __int64 v147; // [xsp+B8h] [xbp+98h]
  int v148; // [xsp+B8h] [xbp+98h]
  __int64 v149; // [xsp+B8h] [xbp+98h]
  int v150; // [xsp+B8h] [xbp+98h]
  __int64 v151; // [xsp+B8h] [xbp+98h]
  unsigned int *v152; // [xsp+B8h] [xbp+98h]
  __int64 v153; // [xsp+B8h] [xbp+98h]
  int *v154; // [xsp+C0h] [xbp+A0h]
  unsigned __int64 v155; // [xsp+C0h] [xbp+A0h]
  int *v156; // [xsp+C0h] [xbp+A0h]
  __int64 v157; // [xsp+C0h] [xbp+A0h]
  __int64 v158; // [xsp+C0h] [xbp+A0h]
  int *v159; // [xsp+C0h] [xbp+A0h]
  __int64 *v160; // [xsp+C0h] [xbp+A0h]
  int v161; // [xsp+C0h] [xbp+A0h]
  int v162; // [xsp+C8h] [xbp+A8h]
  __int64 v163; // [xsp+C8h] [xbp+A8h]
  int v164; // [xsp+C8h] [xbp+A8h]
  int v165; // [xsp+C8h] [xbp+A8h]
  unsigned __int64 v166; // [xsp+C8h] [xbp+A8h]
  int v167; // [xsp+C8h] [xbp+A8h]
  unsigned __int64 v168; // [xsp+D0h] [xbp+B0h]
  int *v169; // [xsp+D0h] [xbp+B0h]
  __int64 v170; // [xsp+D0h] [xbp+B0h]
  __int64 v171; // [xsp+D0h] [xbp+B0h]
  int v172; // [xsp+D0h] [xbp+B0h]
  int v173; // [xsp+D8h] [xbp+B8h]
  int *v174; // [xsp+D8h] [xbp+B8h]
  int *v175; // [xsp+E0h] [xbp+C0h]
  int v176; // [xsp+ECh] [xbp+CCh]
  int v177; // [xsp+F4h] [xbp+D4h] BYREF
  __int64 v178; // [xsp+F8h] [xbp+D8h] BYREF
  __int64 *v179; // [xsp+108h] [xbp+E8h]
  __int64 *v180; // [xsp+108h] [xbp+E8h]
  __int64 *v181; // [xsp+108h] [xbp+E8h]
  __int64 *v182; // [xsp+108h] [xbp+E8h]
  __int64 *v183; // [xsp+108h] [xbp+E8h]
  __int64 v184; // [xsp+118h] [xbp+F8h]
  __int64 v185; // [xsp+118h] [xbp+F8h]
  __int64 v186; // [xsp+118h] [xbp+F8h]
  __int64 v187; // [xsp+118h] [xbp+F8h]
  __int64 v188; // [xsp+118h] [xbp+F8h]
  __int64 v189; // [xsp+118h] [xbp+F8h]

  v15 = *((unsigned int *)a6 + 2);
  v17 = a11 & 2;
  v18 = a2 >> 6;
  v19 = a2;
  v21 = &dword_496770;
  v22 = a2 & 0x3F;
  v23 = *a6;
  while ( 1 )
  {
    v32 = *(__int64 **)(*(_QWORD *)(v23 + 8 * a7) + 40LL);
    if ( v32 == a10
      || v17 && (*((_WORD *)v32 + 434) & 3LL) == 0
      || (*((_BYTE *)v32 + 870) & 4) != 0 && (!a12 || (*(_BYTE *)(a12 + 870) & 4) == 0) )
    {
      goto LABEL_7;
    }
    if ( (*v21 & 8) != 0 )
    {
      v33 = (const char *)v32[1];
      if ( !*v33 )
      {
        v33 = (const char *)off_491918;
        if ( !off_491918 )
          v33 = "<main program>";
      }
      v138 = v15;
      v146 = v17;
      v154 = v21;
      v162 = v22;
      v179 = a10;
      v184 = a12;
      sub_438334("symbol=%s;  lookup in file=%s [%lu]\n", a1, v33, v32[6]);
      v15 = v138;
      v21 = v154;
      a10 = v179;
      a12 = v184;
      v17 = v146;
      v22 = v162;
    }
    v24 = *((_DWORD *)v32 + 207);
    if ( !v24 )
      goto LABEL_7;
    v25 = v32[14];
    v177 = 0;
    v26 = *((_BYTE *)v32 + 870);
    v27 = 0;
    v178 = 0;
    v28 = *(_QWORD *)(v25 + 8);
    if ( (v26 & 0x20) != 0 )
    {
      v27 = *v32;
      v28 += *v32;
    }
    v29 = v32[105];
    v30 = v27 + *(_QWORD *)(v32[13] + 8);
    if ( v29 )
    {
      v31 = *(_QWORD *)(v29 + 8LL * (v18 & (_DWORD)v32[104]));
      if ( ((unsigned int)(v31 >> (v19 >> *((_DWORD *)v32 + 209))) & (unsigned int)(v31 >> v22) & 1) != 0 )
      {
        v43 = *(_DWORD *)(v32[106] + 4LL * (v19 % v24));
        if ( v43 )
        {
          v147 = a7;
          v155 = v15;
          v44 = (int *)(v32[107] + 4LL * v43);
          v45 = v19;
          v46 = v22;
          v164 = v17;
          v169 = v21;
          v181 = a10;
          v186 = a12;
          while ( 1 )
          {
            v47 = *v44;
            if ( !((*v44 ^ v45) >> 1) )
            {
              v48 = (unsigned int)(((unsigned __int64)v44 - v32[107]) >> 2);
              v49 = sub_435F10(a1, a4, a8, a9, a11, v28 + 24 * v48, v48, v30, v32, &v178, &v177);
              if ( v49 )
              {
                a7 = v147;
                v15 = v155;
                v22 = v46;
                v21 = v169;
                v38 = v49;
                a10 = v181;
                v19 = v45;
                a12 = v186;
                v17 = v164;
                goto LABEL_27;
              }
              v47 = *v44;
            }
            ++v44;
            if ( (v47 & 1) != 0 )
            {
              a7 = v147;
              v15 = v155;
              v22 = v46;
              v21 = v169;
              v19 = v45;
              a10 = v181;
              a12 = v186;
              v17 = v164;
              goto LABEL_64;
            }
          }
        }
      }
      goto LABEL_7;
    }
    if ( *a3 == 0xFFFFFFFF )
    {
      v94 = *(unsigned __int8 *)a1;
      v34 = 0;
      if ( *a1 )
      {
        if ( a1[1] )
        {
          v94 = *((unsigned __int8 *)a1 + 1) + 16 * v94;
          if ( a1[2] )
          {
            v94 = *((unsigned __int8 *)a1 + 2) + 16 * v94;
            if ( a1[3] )
            {
              v94 = *((unsigned __int8 *)a1 + 3) + 16 * v94;
              if ( a1[4] )
              {
                v95 = *((unsigned __int8 *)a1 + 5);
                v96 = *((unsigned __int8 *)a1 + 4) + 16 * v94;
                v97 = (unsigned __int8 *)(a1 + 5);
                if ( a1[5] )
                {
                  do
                  {
                    v98 = v95;
                    v99 = *++v97;
                    v95 = v99;
                    v96 = (v98 + 16 * v96) ^ (((v98 + 16 * v96) & 0xF0000000) >> 24);
                  }
                  while ( v99 );
                }
                v94 = v96 & 0xFFFFFFF;
              }
            }
          }
        }
        v34 = 4 * (v94 % v24);
      }
      *a3 = v94;
    }
    else
    {
      v34 = 4 * (*a3 % v24);
    }
    if ( !*(_DWORD *)(v32[107] + v34) )
      goto LABEL_7;
    v163 = a7;
    v168 = v15;
    v35 = v32;
    v36 = *(_DWORD *)(v32[107] + v34);
    v173 = v17;
    v175 = v21;
    v176 = v22;
    v180 = a10;
    v185 = a12;
    do
    {
      v37 = sub_435F10(a1, a4, a8, a9, a11, v28 + 24LL * v36, v36, v30, v35, &v178, &v177);
      if ( v37 )
      {
        v32 = v35;
        a7 = v163;
        v15 = v168;
        v38 = v37;
        v21 = v175;
        a10 = v180;
        a12 = v185;
        v17 = v173;
        v22 = v176;
        goto LABEL_27;
      }
      v36 = *(_DWORD *)(v35[106] + 4LL * v36);
    }
    while ( v36 );
    v32 = v35;
    a7 = v163;
    v15 = v168;
    v21 = v175;
    a10 = v180;
    a12 = v185;
    v17 = v173;
    v22 = v176;
LABEL_64:
    if ( v177 != 1 )
      goto LABEL_7;
    v38 = v178;
    if ( !v178 )
      goto LABEL_7;
LABEL_27:
    v39 = *(_BYTE *)(v38 + 5) & 3;
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
        v142 = v15;
        v150 = v17;
        v159 = v21;
        v167 = v22;
        v171 = v38;
        v183 = a10;
        v189 = a12;
        sub_438540(
          "warning: copy relocation against non-copyable protected symbol `%s' in `%s'\n",
          a1,
          (const char *)v32[1]);
        v15 = v142;
        v21 = v159;
        v38 = v171;
        a10 = v183;
        a12 = v189;
        v17 = v150;
        v22 = v167;
      }
      else
      {
        if ( (a11 & 1) == 0 || !*(_QWORD *)(a4 + 8) || *(_WORD *)(a4 + 6) )
          goto LABEL_32;
        v139 = v15;
        v156 = v21;
        v165 = v22;
        v170 = v38;
        v182 = a10;
        v187 = a12;
        sub_438540(
          "warning: direct reference to protected function `%s' in `%s' may break pointer equality\n",
          a1,
          (const char *)v32[1]);
        v15 = v139;
        v21 = v156;
        v38 = v170;
        a10 = v182;
        a12 = v187;
        v17 = 0;
        v22 = v165;
      }
      if ( (*((_DWORD *)v32 + 219) & 1) != 0 )
        sub_432250(0, v32[1], v50, (__int64)a1, "error due to GNU_PROPERTY_1_NEEDED_INDIRECT_EXTERN_ACCESS");
    }
LABEL_32:
    v41 = *(unsigned __int8 *)(v38 + 4) >> 4;
    if ( v41 != 2 )
      break;
    if ( !dword_4967A0 )
    {
LABEL_35:
      *a5 = v38;
      a5[1] = (__int64)v32;
      return 1;
    }
    if ( !*a5 )
    {
      *a5 = v38;
      a5[1] = (__int64)v32;
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
  v51 = v21;
  v52 = v30;
  v53 = v32[6];
  v54 = v19;
  v127 = 4 * v53;
  v140 = v53;
  v148 = v17;
  v157 = v38;
  v188 = a12;
  v55 = &(&off_4914A8)[21 * v53];
  v137 = (atomic_uint *)&(&off_4914A8)[21 * v53 + 5];
  sub_42D0B0(v137);
  v66 = (unsigned __int64)v55[12];
  v67 = v140;
  v68 = v157;
  v69 = v148;
  if ( !v55[11] )
  {
    v145 = (unsigned int *)v157;
    v153 = v67;
    v161 = v69;
    v125 = sub_40CCB0(0x20u, 0x1Fu, v58, v59, v60, v61, v62, v63, v64, v65, v56, v68, v67, v57);
    v88 = v125;
    if ( v125 )
    {
      v84 = 31;
      v55[11] = (__int64 *)v125;
      v55[12] = (__int64 *)31;
      v86 = v161;
      v73 = v54
          - (v54 / 29LL
           + 4 * (((((unsigned __int128)v54 * 0x469EE58469EE5847LL) >> 64) & 0xFFFFFFFFFFFFFFF8LL) - v54 / 29LL))
          + 1;
      v74 = v54 % 0x1FuLL;
      v85 = 32 * v73;
      v87 = v145;
      v82 = v153;
      v55[14] = (__int64 *)sub_40C1A0;
      v83 = v188;
      goto LABEL_68;
    }
LABEL_119:
    sub_42DA40((__int64)v137);
    sub_4385C0("out of memory\n", v126);
  }
  v70 = v55[11];
  v71 = (unsigned int *)v157;
  v141 = v32;
  v149 = v52;
  v72 = v66;
  v158 = v67;
  v166 = v54;
  v73 = v54 % (v66 - 2) + 1;
  v74 = v54 % v66;
  v75 = v54;
  v174 = v51;
  v76 = v74;
  v77 = v69;
  while ( 2 )
  {
    v78 = &v70[4 * v76];
LABEL_57:
    v79 = v78[1];
    if ( v75 == *(_DWORD *)v78 )
    {
      if ( !(unsigned int)sub_42F240(v79, a1) )
      {
        if ( v77 )
        {
          *(_QWORD *)&v80 = v71;
          *((_QWORD *)&v80 + 1) = v141;
        }
        else
        {
          v80 = *((_OWORD *)v78 + 1);
        }
        *(_OWORD *)a5 = v80;
        sub_42DA40((__int64)v137);
        return 1;
      }
LABEL_56:
      v76 += v73;
      v78 += 4 * v73;
      if ( v72 <= v76 )
      {
        v76 -= v72;
        continue;
      }
      goto LABEL_57;
    }
    break;
  }
  if ( v79 )
    goto LABEL_56;
  v81 = 3 * v72;
  v82 = v158;
  v54 = v75;
  v83 = v188;
  v84 = v72;
  v85 = 32 * v73;
  v86 = v77;
  v32 = v141;
  v52 = v149;
  v87 = v71;
  v88 = (__int64)v70;
  v51 = v174;
  if ( v81 <= 4 * (__int64)(&(&(&off_4914A8)[4 * v127])[4 * v158])[v158 + 13] )
  {
    v143 = v71;
    v151 = v158;
    v160 = v70;
    v172 = v86;
    v100 = sub_4375D0(v84 + 1, v81, &off_4914A8, v71);
    v113 = sub_40CCB0(0x20u, v100, v105, v106, v107, v108, v109, v110, v111, v112, v101, v102, v103, v104);
    if ( v113 )
    {
      v114 = v100 - 2;
      v115 = v143;
      v116 = v151;
      v117 = (unsigned int *)v160;
      if ( v84 )
      {
        do
        {
          v118 = *((_QWORD *)v117 + 1);
          if ( v118 )
          {
            v120 = *((_QWORD *)v117 + 2);
            v119 = *((_QWORD *)v117 + 3);
            v121 = *v117 % v114 + 1;
            v122 = *v117 % v100;
LABEL_104:
            v123 = v113 + 32 * v122;
            while ( *(_QWORD *)(v123 + 8) )
            {
              v122 += v121;
              v123 += 32 * v121;
              if ( v100 <= v122 )
              {
                v122 -= v100;
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
        while ( v117 != (unsigned int *)&v160[4 * v84] );
      }
      v144 = v151;
      v152 = v115;
      v84 = v100;
      v124 = &(&(&(&off_4914A8)[4 * v127])[4 * v116])[v116];
      ((void (__fastcall *)(__int64 *))v124[14])(v160);
      v124[11] = (__int64 *)v113;
      v124[12] = (__int64 *)v100;
      v86 = v172;
      v88 = v113;
      v124[14] = (__int64 *)sub_40C1A0;
      v82 = v144;
      v87 = v152;
      v83 = v188;
      v73 = v166 % v114 + 1;
      v74 = v166 % v100;
      v85 = 32 * v73;
      goto LABEL_68;
    }
    goto LABEL_119;
  }
LABEL_68:
  v89 = v52 + *v87;
  if ( v86 )
  {
LABEL_69:
    v90 = v88 + 32 * v74;
    while ( *(_QWORD *)(v90 + 8) )
    {
      v74 += v73;
      v90 += v85;
      if ( v84 <= v74 )
      {
        v74 -= v84;
        goto LABEL_69;
      }
    }
    *(_DWORD *)v90 = v54;
    *(_QWORD *)(v90 + 8) = v89;
    *(_QWORD *)(v90 + 16) = a4;
    *(_QWORD *)(v90 + 24) = v83;
  }
  else
  {
LABEL_75:
    v92 = v88 + 32 * v74;
    while ( *(_QWORD *)(v92 + 8) )
    {
      v74 += v73;
      v92 += v85;
      if ( v84 <= v74 )
      {
        v74 -= v84;
        goto LABEL_75;
      }
    }
    v93 = *((_WORD *)v32 + 434);
    *(_DWORD *)v92 = v54;
    *(_QWORD *)(v92 + 8) = v89;
    *(_QWORD *)(v92 + 16) = v87;
    *(_QWORD *)(v92 + 24) = v32;
    if ( (v93 & 3) == 2 && (*((_BYTE *)v32 + 871) & 1) == 0 )
    {
      if ( (a9 & 8) != 0 )
      {
        if ( (v32[109] & 1) == 0 )
        {
          if ( (*v51 & 4) != 0 )
          {
            v131 = v87;
            v133 = v82;
            sub_438334("marking %s [%lu] as NODELETE due to unique symbol\n", (const char *)v32[1], v32[6]);
            v87 = v131;
            v82 = v133;
          }
          *((_BYTE *)v32 + 872) = 1;
        }
      }
      else
      {
        if ( (*v51 & 4) != 0 )
        {
          v130 = v87;
          v132 = v82;
          sub_438334("marking %s [%lu] as NODELETE due to unique symbol\n", (const char *)v32[1], v32[6]);
          v87 = v130;
          v82 = v132;
        }
        *((_BYTE *)v32 + 871) = 1;
      }
    }
  }
  v129 = v87;
  v91 = &(&(&(&off_4914A8)[4 * v127])[4 * v82])[v82];
  v91[13] = (__int64 *)((char *)v91[13] + 1);
  sub_42DA40((__int64)v137);
  *a5 = (__int64)v129;
  a5[1] = (__int64)v32;
  return 1;
}
