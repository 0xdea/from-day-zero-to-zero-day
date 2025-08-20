__int64 __fastcall sub_42B7F4(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        int a4,
        double a5,
        double a6,
        double a7,
        double a8,
        double a9,
        double a10,
        double a11,
        double a12)
{
  __int64 v12; // x23
  __int64 v13; // x24
  __int64 v14; // x25
  __int64 v15; // x26
  unsigned __int64 *v18; // x1
  unsigned __int64 v20; // x0
  unsigned __int64 v21; // x2
  _BOOL4 v22; // w24
  __int64 v23; // x23
  double v24; // d0
  double v25; // d1
  double v26; // d2
  double v27; // d3
  double v28; // d4
  double v29; // d5
  double v30; // d6
  double v31; // d7
  __int64 v32; // x0
  unsigned int v33; // w1
  __int64 v34; // x0
  __int64 v35; // x2
  __int64 v36; // x25
  __int64 v37; // x23
  __int64 v38; // x25
  double v39; // d0
  double v40; // d1
  double v41; // d2
  double v42; // d3
  double v43; // d4
  double v44; // d5
  double v45; // d6
  double v46; // d7
  __int64 v47; // x26
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x0
  __int64 v51; // x24
  _QWORD *v52; // x2
  __int64 v53; // x4
  __int64 v54; // x3
  __int64 v55; // x24
  __int64 result; // x0
  __int64 v57; // x22
  int v58; // w0
  double v59; // d0
  double v60; // d1
  double v61; // d2
  double v62; // d3
  double v63; // d4
  double v64; // d5
  double v65; // d6
  double v66; // d7
  __int64 v67; // x0
  double v68; // d0
  double v69; // d1
  double v70; // d2
  double v71; // d3
  double v72; // d4
  double v73; // d5
  double v74; // d6
  double v75; // d7
  __int64 v76; // x23
  _QWORD *v77; // x1
  __int64 v78; // x3
  __int64 v79; // x2
  unsigned __int64 v80; // x0
  _QWORD *v81; // x0
  __int64 v82; // x2
  __int64 v83; // x1
  unsigned __int64 v84; // x20
  unsigned __int64 v85; // x22
  unsigned int v86; // w2
  int v87; // w21
  bool v88; // cc
  __int64 v89; // x23
  __int64 v90; // x0
  unsigned __int64 v91; // x25
  unsigned __int64 v92; // x26
  unsigned __int64 v93; // x24
  __int64 v94; // x23
  int v95; // w0
  __int64 v96; // x1
  __int64 v97; // x2
  __int64 v98; // x3
  void *v99; // x4
  void *v100; // x5
  void *v101; // x6
  __int64 v102; // x3
  __int64 v103; // x0
  __int64 v104; // x20
  __int64 v105; // x0
  __int64 v106; // x3
  __int64 v107; // x0
  _QWORD *v109; // x2
  __int64 v110; // x4
  double v111; // d0
  double v112; // d1
  double v113; // d2
  double v114; // d3
  double v115; // d4
  double v116; // d5
  double v117; // d6
  double v118; // d7
  __int64 v119; // x1
  __int64 v120; // x21
  __int64 v121; // x2
  __int64 v122; // x3
  _QWORD *v123; // x1
  __int64 v124; // x4
  int v125; // w0
  __int64 v126; // x2
  __int64 *v127; // x3
  __int64 v128; // x1
  __int64 v129; // x2
  __int64 v130; // x1
  __int64 v131; // x0
  _QWORD *v132; // x22
  __int64 v133; // x24
  __int64 v134; // x25
  __int64 v135; // x20
  __int64 v136; // x20
  __int64 v137; // x1
  __int64 v138; // x21
  __int64 v139; // x0
  __int64 v140; // x8
  unsigned __int64 v141; // x22
  double v142; // d0
  double v143; // d1
  double v144; // d2
  double v145; // d3
  double v146; // d4
  double v147; // d5
  double v148; // d6
  double v149; // d7
  int v150; // w0
  __int64 v151; // x2
  int v152; // w0
  _QWORD *v153; // x0
  unsigned int *v154; // x1
  unsigned __int64 v155; // x2
  double v156; // d0
  double v157; // d1
  double v158; // d2
  double v159; // d3
  double v160; // d4
  double v161; // d5
  double v162; // d6
  double v163; // d7
  unsigned __int64 v164; // x23
  __int64 v165; // x21
  unsigned __int64 v166; // x20
  unsigned int *v167; // x19
  _QWORD *v168; // x23
  __int64 v169; // x2
  __int64 v170; // x0
  int v171; // w24
  unsigned __int64 v172; // x1
  unsigned __int64 v173; // x22
  __int64 v174; // x0
  __int64 v175; // x1
  __int64 v176; // x2
  unsigned int *v177; // x2
  int v178; // t1
  __int64 v179; // x3
  unsigned __int64 v180; // x22
  __int64 v181; // x0
  unsigned int *v182; // x1
  __int64 v183; // [xsp+58h] [xbp-98h] BYREF
  __int64 v184; // [xsp+60h] [xbp-90h] BYREF
  _QWORD v185[2]; // [xsp+68h] [xbp-88h] BYREF
  int v186; // [xsp+78h] [xbp-78h]
  __int64 v187; // [xsp+98h] [xbp-58h]
  __int64 v188; // [xsp+E8h] [xbp-8h]
  __int64 v189; // [xsp+120h] [xbp+30h]
  __int64 v190; // [xsp+128h] [xbp+38h]
  __int64 v191; // [xsp+130h] [xbp+40h]
  __int64 v192; // [xsp+138h] [xbp+48h]

  v188 = qword_48DD60;
  v18 = *(unsigned __int64 **)(a1 + 160);
  if ( !a4 )
  {
    if ( v18[6] )
    {
      v84 = v18[3];
      v85 = v18[4];
      v189 = v12;
      v190 = v13;
      v86 = *(_DWORD *)a1;
      v87 = *(_DWORD *)a1 & 0x1000;
      if ( v87 )
        v88 = v85 > v84;
      else
        v88 = 0;
      if ( v88 )
      {
        v89 = *(_QWORD *)(a1 + 216);
        if ( (unsigned __int64)(v89 - (_QWORD)&unk_48DD70) > 0x92F )
          sub_401A50(a5, a6, a7, a8, a9, a10, a11, a12);
        v90 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(v89 + 128))(a1, 0, 2);
        if ( v90 == -1 )
        {
          v12 = v189;
          v13 = v190;
          result = -1;
          goto LABEL_43;
        }
        v18 = *(unsigned __int64 **)(a1 + 160);
        v191 = v14;
        v192 = v15;
        v86 = *(_DWORD *)a1;
        *(_QWORD *)(a1 + 144) = v90;
      }
      else
      {
        v191 = v14;
        v192 = v15;
      }
      v92 = *v18;
      v91 = v18[1];
      if ( (v86 & 0x100) != 0 )
      {
        if ( v92 < v91 )
        {
          v12 = v189;
          v13 = v190;
          v14 = v191;
          v15 = v192;
          goto LABEL_67;
        }
        v93 = v18[8];
        v91 = v18[10];
        v92 = v93;
      }
      else
      {
        v93 = v18[2];
      }
      v94 = *(_QWORD *)(a1 + 152);
      v95 = ((__int64 (__fastcall *)(__int64))loc_42C400)(v94);
      if ( v85 > v84 )
      {
        v132 = *(_QWORD **)(a1 + 160);
        v133 = v132[3];
        v134 = v132[4];
        v135 = v134 - v133;
        if ( v95 <= 0 )
        {
          v139 = sub_40B890(v134 - v133, a5, a6, a7, a8, a9, a10, a11, a12, v96, v97, v98, v99, v100, v101);
          v140 = v132[12];
          v141 = v139;
          v183 = v139;
          v184 = v133;
          v185[0] = v140;
          v142 = sub_42C220(v94, v185, v133, v134, &v184, v183, v183 + v135, &v183);
          if ( v150 )
          {
            sub_40C1A0(v141, v142, v143, v144, v145, v146, v147, v148, v149);
            v14 = v191;
            v15 = v192;
            goto LABEL_97;
          }
          v136 = v183 - v141;
          sub_40C1A0(v141, v142, v143, v144, v145, v146, v147, v148, v149);
        }
        else
        {
          v136 = (v135 >> 2) * v95;
        }
        if ( v87 )
          v137 = *(_QWORD *)(a1 + 32);
        else
          v137 = *(_QWORD *)(a1 + 16);
        v12 = v189;
        v13 = v190;
        v14 = v191;
        v15 = v192;
        v104 = *(_QWORD *)(a1 + 40) - v137 + v136;
      }
      else
      {
        v102 = *(_QWORD *)(a1 + 16);
        if ( v95 <= 0 )
        {
          v151 = *(_QWORD *)(a1 + 24);
          v185[0] = *(_QWORD *)(*(_QWORD *)(a1 + 160) + 96LL);
          v152 = sub_42C430(v94, v185, v151, v102, (__int64)(v92 - v93) >> 2);
          v12 = v189;
          v13 = v190;
          v14 = v191;
          v15 = v192;
          v104 = v152 - (*(_QWORD *)(a1 + 16) - *(_QWORD *)(a1 + 24));
        }
        else
        {
          v12 = v189;
          v13 = v190;
          v103 = -(v95 * ((__int64)(v91 - v92) >> 2));
          v14 = v191;
          v15 = v192;
          v104 = v103 - (v102 - *(_QWORD *)(a1 + 8));
        }
      }
    }
    else
    {
      v104 = 0;
    }
    v105 = *(_QWORD *)(a1 + 144);
    if ( v105 == -1 )
    {
      v138 = *(_QWORD *)(a1 + 216);
      if ( (unsigned __int64)(v138 - (_QWORD)&unk_48DD70) > 0x92F )
        sub_401A50(a5, a6, a7, a8, a9, a10, a11, a12);
      v105 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(v138 + 128))(a1, 0, 1);
      if ( v105 == -1 )
      {
        result = -1;
        goto LABEL_43;
      }
    }
    result = v104 + v105;
    if ( result >= 0 )
      goto LABEL_43;
LABEL_67:
    *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40) = 22;
    result = -1;
    goto LABEL_43;
  }
  v21 = v18[3];
  v20 = v18[4];
  v22 = 0;
  if ( v18[2] == v18[1] )
    v22 = v21 == v20;
  if ( v21 < v20 || (*(_DWORD *)a1 & 0x800) != 0 )
  {
    if ( !(unsigned int)IO_switch_to_wget_mode((unsigned int *)a1) )
    {
      v18 = *(unsigned __int64 **)(a1 + 160);
      goto LABEL_8;
    }
LABEL_97:
    result = 0xFFFFFFFFLL;
    v12 = v189;
    v13 = v190;
    goto LABEL_43;
  }
LABEL_8:
  if ( v18[6] )
  {
    if ( a3 != 1 )
      goto LABEL_10;
  }
  else
  {
    v80 = v18[2];
    if ( v80 )
    {
      sub_40C1A0(v80, a5, a6, a7, a8, a9, a10, a11, a12);
      *(_DWORD *)a1 &= ~0x100u;
    }
    sub_404C44((int *)a1, a5, a6, a7, a8, a9, a10, a11, a12);
    v81 = *(_QWORD **)(a1 + 160);
    v82 = *(_QWORD *)(a1 + 56);
    v83 = v81[6];
    *(_QWORD *)(a1 + 8) = v82;
    *(_QWORD *)(a1 + 16) = v82;
    *(_QWORD *)(a1 + 24) = v82;
    *(_QWORD *)(a1 + 32) = v82;
    *(_QWORD *)(a1 + 40) = v82;
    *(_QWORD *)(a1 + 48) = v82;
    *v81 = v83;
    v81[1] = v83;
    v81[2] = v83;
    v81[3] = v83;
    v81[4] = v83;
    v81[5] = v83;
    if ( a3 != 1 )
    {
LABEL_10:
      if ( a3 == 2 )
      {
        v23 = *(_QWORD *)(a1 + 216);
        if ( (unsigned __int64)(v23 - (_QWORD)&unk_48DD70) > 0x92F )
          sub_401A50(a5, a6, a7, a8, a9, a10, a11, a12);
        if ( (*(unsigned int (__fastcall **)(__int64, _QWORD *))(v23 + 144))(a1, v185) || (v186 & 0xF000) != 0x8000 )
          goto LABEL_39;
        a3 = 0;
        a2 += v187;
      }
      sub_42A030((unsigned int *)a1, a5, a6, a7, a8, a9, a10, a11, a12);
      v32 = *(_QWORD *)(a1 + 144);
      if ( v32 != -1 )
        goto LABEL_17;
      goto LABEL_38;
    }
  }
  v57 = *(_QWORD *)(a1 + 152);
  v58 = ((__int64 (__fastcall *)(__int64))loc_42C400)(v57);
  if ( v58 <= 0 )
  {
    v122 = *(_QWORD *)(a1 + 16);
    v121 = *(_QWORD *)(a1 + 24);
    v123 = *(_QWORD **)(a1 + 160);
    v124 = *v123 - v123[2];
    v123[11] = v123[12];
    v125 = sub_42C430(v57, v123 + 11, v121, v122, v124 >> 2);
    v126 = *(_QWORD *)(a1 + 24);
    v127 = *(__int64 **)(a1 + 160);
    v128 = *(_QWORD *)(a1 + 16) - v126;
    v129 = v126 + v125;
    v130 = v128 - v125;
    v131 = *v127;
    *(_QWORD *)(a1 + 8) = v129;
    a2 -= v130;
    v127[1] = v131;
  }
  else
  {
    a2 = a2
       - ((__int64)(*(_QWORD *)(*(_QWORD *)(a1 + 160) + 8LL) - **(_QWORD **)(a1 + 160)) >> 2) * v58
       - (*(_QWORD *)(a1 + 16)
        - *(_QWORD *)(a1 + 8));
  }
  v67 = *(_QWORD *)(a1 + 144);
  if ( v67 == -1 )
    goto LABEL_39;
  a2 += v67;
  sub_42A030((unsigned int *)a1, v59, v60, v61, v62, v63, v64, v65, v66);
  a3 = 0;
  v32 = *(_QWORD *)(a1 + 144);
  if ( v32 != -1 )
  {
LABEL_17:
    v33 = *(_DWORD *)a1;
    if ( *(_QWORD *)(a1 + 24) && (v33 & 0x100) == 0 )
    {
      v88 = v32 <= a2;
      v106 = *(_QWORD *)(a1 + 56);
      v107 = v32 - (*(_QWORD *)(a1 + 16) - v106);
      if ( !v88 && a2 >= v107 )
      {
        v109 = *(_QWORD **)(a1 + 160);
        v110 = v109[6];
        *(_QWORD *)(a1 + 8) = v106 + a2 - v107;
        *(_QWORD *)(a1 + 24) = v106;
        *(_QWORD *)(a1 + 32) = v106;
        *(_QWORD *)(a1 + 40) = v106;
        *(_QWORD *)(a1 + 48) = v106;
        *v109 = v110;
        v109[1] = v110;
        v109[2] = v110;
        v109[3] = v110;
        v109[4] = v110;
        v109[5] = v110;
        if ( !(unsigned int)sub_42A7E0(a1, 0) )
        {
          v119 = *(_QWORD *)(a1 + 144);
          *(_DWORD *)a1 &= ~0x10u;
          if ( (v119 & 0x8000000000000000LL) == 0 )
          {
            v120 = *(_QWORD *)(a1 + 216);
            if ( (unsigned __int64)(v120 - (_QWORD)&unk_48DD70) > 0x92F )
              sub_401A50(v111, v112, v113, v114, v115, v116, v117, v118);
            (*(void (__fastcall **)(__int64))(v120 + 128))(a1);
          }
          goto LABEL_33;
        }
        goto LABEL_39;
      }
    }
    if ( (v33 & 4) != 0 )
      goto LABEL_39;
    goto LABEL_20;
  }
LABEL_38:
  if ( (*(_DWORD *)a1 & 4) != 0 )
    goto LABEL_39;
LABEL_20:
  v35 = *(_QWORD *)(a1 + 56);
  v34 = *(_QWORD *)(a1 + 64);
  v191 = v14;
  v192 = v15;
  v36 = *(_QWORD *)(a1 + 216);
  v37 = a2 & ~(v35 - v34);
  if ( v34 - v35 < v37 )
    v37 = 0;
  if ( (unsigned __int64)(v36 - (_QWORD)&unk_48DD70) > 0x92F )
    sub_401A50(v24, v25, v26, v27, v28, v29, v30, v31);
  v38 = (*(__int64 (__fastcall **)(__int64))(v36 + 128))(a1);
  if ( v38 < 0 )
  {
    v12 = v189;
    v13 = v190;
    result = -1;
    v14 = v191;
    v15 = v192;
    goto LABEL_43;
  }
  if ( !v37 )
  {
    v51 = 0;
    v50 = 0;
LABEL_31:
    v52 = *(_QWORD **)(a1 + 160);
    v53 = *(_QWORD *)(a1 + 56);
    v54 = v52[6];
    *(_QWORD *)(a1 + 8) = v53 + v37;
    *(_QWORD *)(a1 + 16) = v53 + v50;
    *(_QWORD *)(a1 + 24) = v53;
    *(_QWORD *)(a1 + 32) = v53;
    *(_QWORD *)(a1 + 40) = v53;
    *(_QWORD *)(a1 + 48) = v53;
    *v52 = v54;
    v52[1] = v54;
    v52[2] = v54;
    v52[3] = v54;
    v52[4] = v54;
    v52[5] = v54;
    if ( !(unsigned int)sub_42A7E0(a1, 1) )
    {
      v55 = v51 + v38;
      v14 = v191;
      v15 = v192;
      *(_DWORD *)a1 &= ~0x10u;
      *(_QWORD *)(a1 + 144) = v55;
LABEL_33:
      v12 = v189;
      v13 = v190;
      result = a2;
      goto LABEL_43;
    }
    v14 = v191;
    v15 = v192;
    goto LABEL_39;
  }
  v47 = *(_QWORD *)(a1 + 216);
  if ( (unsigned __int64)(v47 - (_QWORD)&unk_48DD70) > 0x92F )
    sub_401A50(v39, v40, v41, v42, v43, v44, v45, v46);
  v48 = *(_QWORD *)(a1 + 56);
  v49 = v37;
  if ( !v22 )
    v49 = *(_QWORD *)(a1 + 64) - v48;
  v50 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(v47 + 112))(a1, v48, v49);
  v51 = v50;
  if ( v37 <= v50 )
    goto LABEL_31;
  v14 = v191;
  v15 = v192;
  if ( v50 == -1 )
    a2 = v37;
  else
    a2 = v37 - v50;
  a3 = 1;
LABEL_39:
  sub_406170(a1);
  v76 = *(_QWORD *)(a1 + 216);
  if ( (unsigned __int64)(v76 - (_QWORD)&unk_48DD70) > 0x92F )
    sub_401A50(v68, v69, v70, v71, v72, v73, v74, v75);
  result = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(v76 + 128))(a1, a2, a3);
  if ( result == -1 )
  {
    v12 = v189;
    v13 = v190;
  }
  else
  {
    v77 = *(_QWORD **)(a1 + 160);
    v78 = *(_QWORD *)(a1 + 56);
    v79 = v77[6];
    v12 = v189;
    v13 = v190;
    *(_DWORD *)a1 &= ~0x10u;
    *(_QWORD *)(a1 + 8) = v78;
    *(_QWORD *)(a1 + 16) = v78;
    *(_QWORD *)(a1 + 24) = v78;
    *(_QWORD *)(a1 + 32) = v78;
    *(_QWORD *)(a1 + 40) = v78;
    *(_QWORD *)(a1 + 48) = v78;
    *(_QWORD *)(a1 + 144) = result;
    *v77 = v79;
    v77[1] = v79;
    v77[2] = v79;
    v77[3] = v79;
    v77[4] = v79;
    v77[5] = v79;
  }
LABEL_43:
  if ( v188 != qword_48DD60 )
  {
    v189 = v12;
    v190 = v13;
    v191 = v14;
    v192 = v15;
    v153 = (_QWORD *)sub_412340();
    v164 = 0;
    if ( !v155 )
      return v164;
    v165 = (__int64)v153;
    v166 = v155;
    v167 = v154;
    v168 = (_QWORD *)v153[20];
    v169 = *v153 & 0xA00LL;
    v170 = v168[4];
    if ( v169 == 2560 )
    {
      v172 = (v168[7] - v170) >> 2;
      if ( v166 > v172 )
      {
        v171 = 0;
      }
      else
      {
        v177 = &v167[v166];
        do
        {
          if ( v177 <= v167 )
          {
            v171 = 0;
            goto LABEL_119;
          }
          v178 = *--v177;
        }
        while ( v178 != 10 );
        v171 = 1;
        v172 = v177 - v167 + 1;
      }
    }
    else
    {
      v171 = 0;
      v172 = (v168[5] - v170) >> 2;
    }
    v173 = v166;
    if ( v172 )
    {
LABEL_119:
      v179 = 0;
      if ( v172 > v166 )
        v180 = v166;
      else
        v180 = v172;
      if ( v180 > 0x14 )
      {
        v182 = v167;
        v167 += v180;
        v181 = wmempcpy(v170, v182, v180);
      }
      else
      {
        do
        {
          *(_DWORD *)(v170 + v179 * 4) = v167[v179];
          ++v179;
        }
        while ( v179 != (unsigned int)v180 );
        v167 = (unsigned int *)((char *)v167 + v179 * 4);
        v181 = v170 + v179 * 4;
      }
      v168[4] = v181;
      v173 = v166 - v180;
      v164 = v166;
      if ( !v173 )
      {
        if ( !v171 )
          return v164;
LABEL_111:
        v174 = *(_QWORD *)(v165 + 160);
        v175 = *(_QWORD *)(v174 + 24);
        v176 = *(_QWORD *)(v174 + 32);
        if ( v176 != v175 )
        {
          sub_42A900(v165, v175, (v176 - v175) >> 2, v156, v157, v158, v159, v160, v161, v162, v163);
          return v164;
        }
        return v164;
      }
    }
    v164 = sub_429D00(v165, v167, v173, v156, v157, v158, v159, v160, v161, v162, v163) - v173 + v166;
    if ( !v171 )
      return v164;
    goto LABEL_111;
  }
  return result;
}
