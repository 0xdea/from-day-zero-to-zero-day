__int64 __fastcall sub_43CE70(__int64 a1, unsigned __int64 a2, unsigned __int64 *a3, int a4, _QWORD *a5)
{
  _DWORD *v5; // x19
  unsigned __int64 v6; // x21
  unsigned __int64 **v7; // x24
  unsigned __int64 v8; // x26
  int v10; // w6
  int *v11; // x22
  unsigned int v12; // w0
  unsigned int v13; // w2
  __int64 v14; // x27
  unsigned int v15; // w28
  unsigned int v16; // w20
  unsigned int *v17; // x10
  unsigned int v18; // w0
  __int64 v19; // x1
  __int64 v20; // x0
  bool v21; // cc
  unsigned int v22; // w0
  unsigned int v23; // w1
  unsigned int v24; // w0
  unsigned __int64 v25; // x23
  _QWORD *v26; // x6
  unsigned __int64 *v27; // x2
  __int64 v28; // x23
  unsigned __int64 v29; // x23
  unsigned __int64 v30; // x27
  __int64 v31; // x2
  unsigned int v32; // w3
  int v33; // w0
  unsigned int *v35; // x3
  __int64 v36; // x23
  unsigned int v37; // w26
  unsigned int v38; // w0
  unsigned __int64 v39; // x25
  __int64 v40; // x27
  __int64 v41; // x28
  unsigned __int64 *v42; // x0
  unsigned __int64 *v43; // x0
  unsigned __int8 *v44; // x0
  __int64 v45; // x28
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x3
  void *v49; // x4
  void *v50; // x5
  void *v51; // x6
  double v52; // d0
  double v53; // d1
  double v54; // d2
  double v55; // d3
  double v56; // d4
  double v57; // d5
  double v58; // d6
  double v59; // d7
  __int64 v60; // x1
  __int64 v61; // x2
  int v62; // w28
  _QWORD *v63; // x0
  int v64; // w0
  __int64 *v65; // x25
  double v66; // d0
  double v67; // d1
  double v68; // d2
  double v69; // d3
  double v70; // d4
  double v71; // d5
  double v72; // d6
  double v73; // d7
  __int64 v74; // x1
  void *v75; // x4
  void *v76; // x5
  void *v77; // x6
  double v78; // d0
  double v79; // d1
  double v80; // d2
  double v81; // d3
  double v82; // d4
  double v83; // d5
  double v84; // d6
  double v85; // d7
  __int64 v86; // x27
  __int64 v87; // x20
  __int64 v88; // x3
  unsigned __int64 **v89; // x28
  unsigned __int64 *v90; // t1
  __int64 v91; // x1
  __int64 v92; // x2
  __int64 v93; // x3
  void *v94; // x4
  void *v95; // x5
  void *v96; // x6
  __int64 v97; // x27
  __int64 v98; // x0
  unsigned __int64 v99; // x25
  unsigned __int64 v100; // x1
  __int64 v101; // x0
  __int64 v102; // x0
  __int64 v103; // x1
  __int64 v104; // x0
  __int64 v105; // x20
  __int64 v106; // x2
  __int64 *v107; // x1
  int v108; // w27
  __int64 v109; // x0
  __int64 v110; // x1
  __int64 v111; // x2
  __int64 v112; // x3
  void *v113; // x4
  void *v114; // x5
  void *v115; // x6
  double v116; // d0
  double v117; // d1
  double v118; // d2
  double v119; // d3
  double v120; // d4
  double v121; // d5
  double v122; // d6
  double v123; // d7
  __int64 v124; // x1
  __int64 v125; // x2
  __int64 v126; // x3
  void *v127; // x4
  void *v128; // x5
  void *v129; // x6
  __int64 v130; // x1
  __int64 v131; // x2
  void *v132; // x4
  void *v133; // x5
  void *v134; // x6
  double v135; // d0
  double v136; // d1
  double v137; // d2
  double v138; // d3
  double v139; // d4
  double v140; // d5
  double v141; // d6
  double v142; // d7
  __int64 v143; // x0
  __int64 v144; // x1
  __int64 v145; // x2
  __int64 v146; // x3
  void *v147; // x4
  void *v148; // x5
  void *v149; // x6
  __int64 v150; // x3
  __int64 v151; // x4
  unsigned __int64 *v152; // x7
  __int64 v153; // x2
  __int64 v154; // x1
  __int64 v155; // x2
  __int64 v156; // x3
  void *v157; // x4
  void *v158; // x5
  void *v159; // x6
  __int64 v160; // x0
  double v161; // d0
  double v162; // d1
  double v163; // d2
  double v164; // d3
  double v165; // d4
  double v166; // d5
  double v167; // d6
  double v168; // d7
  __int64 v169; // [xsp+0h] [xbp-10070h] BYREF
  _BYTE v170[1008]; // [xsp+10h] [xbp-10060h] BYREF
  __int64 v171; // [xsp+400h] [xbp-FC70h]
  _BYTE v172[16]; // [xsp+10000h] [xbp-70h] BYREF
  unsigned __int64 v173; // [xsp+10010h] [xbp-60h]
  _QWORD *v174; // [xsp+10018h] [xbp-58h]
  int v175; // [xsp+10024h] [xbp-4Ch]
  __int64 v176; // [xsp+10028h] [xbp-48h]
  __int64 *v177; // [xsp+10030h] [xbp-40h]
  __int64 v178; // [xsp+10038h] [xbp-38h]
  __int64 v179; // [xsp+10040h] [xbp-30h] BYREF
  __int64 v180; // [xsp+10048h] [xbp-28h] BYREF
  _BYTE v181[24]; // [xsp+10050h] [xbp-20h] BYREF
  __int64 v182; // [xsp+10068h] [xbp-8h]

  v176 = a1;
  v10 = *(_DWORD *)(a1 + 8);
  v182 = qword_48DD60;
  v173 = a2;
  v174 = a5;
  v175 = a4;
  if ( v10 <= 0 )
    sub_41F630(a1, a2);
  v11 = *(int **)(v176 + 16);
  if ( !v11 )
    goto LABEL_31;
  LODWORD(v5) = v11[10];
  if ( *((_QWORD *)v11 + 12) )
  {
    LODWORD(v177) = ifunc_40DFD0(a3);
    v12 = sub_422650(a3);
    v13 = v11[22];
    v178 = (unsigned int)v177;
    v8 = (unsigned int)v11[26];
    v14 = *((_QWORD *)v11 + 12);
    v7 = (unsigned __int64 **)(v12 % (v13 - 2) + 1);
    v15 = v12 % v13;
    v16 = v13 - (_DWORD)v7;
    v6 = (unsigned int)v7 - v13;
    while ( 1 )
    {
      v23 = *(_DWORD *)(v14 + 4LL * v15);
      v24 = bswap32(v23);
      if ( (_DWORD)v8 )
        v23 = v24;
      if ( !v23 )
        goto LABEL_31;
      v25 = v23 - 1;
      if ( (unsigned int)v5 > (unsigned int)v25 )
      {
        v17 = (unsigned int *)(*((_QWORD *)v11 + 6) + 8LL * (v23 - 1));
        v18 = *v17;
        if ( v11[6] )
        {
          if ( (unsigned int)v177 > bswap32(v18) )
            goto LABEL_10;
          v19 = *(_QWORD *)v11;
          v20 = bswap32(v17[1]);
        }
        else
        {
          if ( (unsigned int)v177 > v18 )
            goto LABEL_10;
          v19 = *(_QWORD *)v11;
          v20 = v17[1];
        }
        if ( !(unsigned int)sub_42F240(a3, v19 + v20) )
          goto LABEL_18;
      }
      else
      {
        v26 = (_QWORD *)(*((_QWORD *)v11 + 9) + 16LL * (unsigned int)(v25 - (_DWORD)v5));
        if ( *v26 > (unsigned __int64)v178 && !(unsigned int)sub_42F240(a3, v26[1]) )
        {
LABEL_18:
          v6 = v25;
          v8 = (unsigned int)v5;
          goto LABEL_19;
        }
      }
LABEL_10:
      v21 = v16 > v15;
      v22 = v15 + v6;
      v15 += (unsigned int)v7;
      if ( !v21 )
        v15 = v22;
    }
  }
  v8 = (unsigned int)v5;
  v29 = 0;
  v30 = (unsigned int)v5;
LABEL_24:
  if ( v30 <= v29 )
    goto LABEL_31;
  while ( 1 )
  {
    v6 = (v30 + v29) >> 1;
    LODWORD(v31) = *(_DWORD *)(*((_QWORD *)v11 + 6) + 8 * v6 + 4);
    v32 = bswap32(v31);
    if ( v11[6] )
      v31 = v32;
    else
      v31 = (unsigned int)v31;
    v33 = sub_42F240(a3, *(_QWORD *)v11 + v31);
    if ( v33 < 0 )
    {
      v30 = (v30 + v29) >> 1;
      goto LABEL_24;
    }
    if ( !v33 )
      break;
    v29 = v6 + 1;
    if ( v30 <= v6 + 1 )
      goto LABEL_31;
  }
LABEL_19:
  if ( v6 < v8 )
  {
    v35 = (unsigned int *)(*((_QWORD *)v11 + 7) + 8 * v6);
    v36 = *(_QWORD *)v11;
    v37 = *v35;
    v38 = v35[1];
    if ( v11[6] )
    {
      v37 = bswap32(v37);
      v28 = v36 + bswap32(v38);
    }
    else
    {
      v28 = v36 + v38;
    }
    v8 = v37 + 1;
  }
  else
  {
    v27 = (unsigned __int64 *)(*((_QWORD *)v11 + 10) + 16 * (v6 - v8));
    v8 = *v27;
    v28 = v27[1];
  }
  if ( v175 )
  {
    if ( v173 )
    {
      v39 = *(_QWORD *)(v173 + 16);
      if ( v39 )
        goto LABEL_42;
    }
    v7 = (unsigned __int64 **)&dword_496B30;
    if ( dword_496B30 )
    {
      v39 = qword_496B38;
    }
    else
    {
      v44 = sub_422890("OUTPUT_CHARSET");
      v45 = (__int64)v44;
      if ( v44 && *v44 )
      {
        v178 = ifunc_40DFD0(v44) + 1;
        v143 = sub_40B890(v178, v135, v136, v137, v138, v139, v140, v141, v142, v130, v131, v178, v132, v133, v134);
        v39 = v143;
        if ( v143 )
        {
          sub_412300(v143, v45, v178, v178);
          qword_496B38 = v39;
          dword_496B30 = 1;
          goto LABEL_42;
        }
        dword_496B30 = 1;
        qword_496B38 = 0;
        goto LABEL_53;
      }
      dword_496B30 = 1;
      v39 = qword_496B38;
    }
    if ( v39 )
    {
LABEL_42:
      v178 = (__int64)(v11 + 32);
      sub_42DD20((unsigned int *)v11 + 32);
      v40 = *((_QWORD *)v11 + 15);
      v41 = 24 * v40 - 24;
      while ( v40 )
      {
        --v40;
        v7 = (unsigned __int64 **)(*((_QWORD *)v11 + 14) + v41);
        v41 -= 24;
        if ( !(unsigned int)sub_42F240(*v7, v39) )
          goto LABEL_45;
      }
      sub_42DFB0((unsigned int *)v178);
      sub_42E1E0(v178);
      v86 = *((_QWORD *)v11 + 15);
      v177 = (__int64 *)*((_QWORD *)v11 + 14);
      v87 = 24 * v86;
      v88 = 24 * v86 - 24;
      v89 = (unsigned __int64 **)((char *)v177 + v88);
      while ( v86 )
      {
        v7 = v89;
        --v86;
        v90 = *v89;
        v89 -= 3;
        if ( !(unsigned int)sub_42F240(v90, v39) )
          goto LABEL_45;
      }
      if ( v177 )
        v97 = sub_40C434(
                (unsigned __int64)v177,
                v87 + 24,
                v78,
                v79,
                v80,
                v81,
                v82,
                v83,
                v84,
                v85,
                (__int64)v177,
                v88,
                v75,
                v76,
                v77);
      else
        v97 = sub_40B890(v87 + 24, v78, v79, v80, v81, v82, v83, v84, v85, v74, 0, v88, v75, v76, v77);
      if ( v97 && (*((_QWORD *)v11 + 14) = v97, v98 = sub_42F380(v39), (v99 = v98) != 0) )
      {
        v7 = (unsigned __int64 **)(v97 + v87);
        *(_QWORD *)(v97 + v87) = v98;
        v100 = v173;
        v101 = v176;
        *(_QWORD *)(v97 + v87 + 8) = -1;
        v102 = sub_43CE70(v101, v100, "", 0, &v180);
        v103 = v102;
        if ( v102 != -1 )
        {
          if ( !v102 )
            goto LABEL_90;
          v104 = ((__int64 (__fastcall *)(__int64, const char *))loc_40E470)(v102, "charset=");
          if ( !v104 )
            goto LABEL_90;
          v105 = v104 + 8;
          v106 = sub_4431F0(v104 + 8, " \t\n");
          v107 = (__int64 *)&v172[-((v106 + 16) & 0xFFFFFFFFFFFF0000LL)];
          if ( v172 != (_BYTE *)v107 )
          {
            do
              v171 = 0;
            while ( &v169 != v107 );
          }
          v169 = 0;
          if ( (((_WORD)v106 + 16) & 0xFFF0u) >= 0x400uLL )
            v171 = 0;
          *(_BYTE *)_mempcpy_chk(v170, v105) = 0;
          sub_4488D0(v181, v170, v99);
          v181[16] = 1;
          v108 = sub_4481D0(v181, v7 + 1, 1);
          QV4::ESTable::~ESTable((QV4::ESTable *)v181);
          if ( !v108 )
            goto LABEL_90;
          if ( v108 == -1 )
            goto LABEL_113;
          sub_42DFB0((unsigned int *)v178);
          sub_40C1A0(v99, v161, v162, v163, v164, v165, v166, v167, v168);
          v103 = 0;
        }
        v28 = v103;
      }
      else
      {
        v28 = -1;
        sub_42DFB0((unsigned int *)v178);
      }
      goto LABEL_32;
    }
LABEL_53:
    v39 = *(_QWORD *)(**(_QWORD **)(_ReadStatusReg(TPIDR_EL0) + 16) + 168LL);
    goto LABEL_42;
  }
LABEL_22:
  *v174 = v8;
LABEL_32:
  while ( v182 != qword_48DD60 )
  {
    sub_412340();
LABEL_113:
    v7[1] = (unsigned __int64 *)-1LL;
LABEL_90:
    v109 = *((_QWORD *)v11 + 15);
    v7[2] = 0;
    *((_QWORD *)v11 + 15) = v109 + 1;
LABEL_45:
    sub_42DFB0((unsigned int *)v178);
    if ( v7[1] == (unsigned __int64 *)-1LL )
      goto LABEL_22;
    v42 = v7[2];
    if ( !v42 )
    {
      if ( _aarch64_cas4_acq(0, 1u, (atomic_uint *)dword_496B40) )
        sub_406F40(dword_496B40, v116, v117, v118, v119, v120, v121, v122, v123, v110, v111, v112, v113, v114, v115);
      if ( !v7[2] )
      {
        v160 = sub_40CCB0(
                 (unsigned int)((_DWORD)v5 + v11[16]),
                 8u,
                 v116,
                 v117,
                 v118,
                 v119,
                 v120,
                 v121,
                 v122,
                 v123,
                 v111,
                 v112,
                 v113,
                 v114,
                 v115);
        v7[2] = (unsigned __int64 *)v160;
        if ( v160 )
          goto LABEL_60;
        v7[2] = (unsigned __int64 *)-1LL;
      }
      v5 = dword_496B40;
      if ( (int)_aarch64_swp4_rel(0, (atomic_uint *)dword_496B40) > 1 )
        sub_407040(dword_496B40, v124, v125, v126, v127, v128, v129);
      v42 = v7[2];
    }
    if ( v42 == (unsigned __int64 *)-1LL )
      goto LABEL_76;
    v43 = (unsigned __int64 *)v42[v6];
    if ( v43 )
    {
LABEL_49:
      v28 = (__int64)(v43 + 1);
      v8 = *v43;
      goto LABEL_22;
    }
    if ( _aarch64_cas4_acq(0, 1u, (atomic_uint *)dword_496B40) )
      sub_406F40(dword_496B40, v52, v53, v54, v55, v56, v57, v58, v59, v46, v47, v48, v49, v50, v51);
LABEL_60:
    v61 = qword_496B48;
    v60 = qword_496B50;
    v179 = v28;
    v180 = qword_496B48 + 8;
    if ( (unsigned __int64)qword_496B50 > 7 )
    {
      v62 = 0;
      v177 = &v180;
      v178 = (__int64)&v179;
      goto LABEL_65;
    }
LABEL_62:
    qword_496B50 = 4080;
    v63 = (_QWORD *)sub_40B890(0xFF0u, v52, v53, v54, v55, v56, v57, v58, v59, v60, v61, v48, v49, v50, v51);
    if ( v63 )
    {
      v60 = 4072;
      v62 = 1;
      v177 = &v180;
      v178 = (__int64)&v179;
      *v63 = qword_496B58;
      while ( 1 )
      {
        v180 = (__int64)(v63 + 2);
        qword_496B48 = (__int64)(v63 + 1);
        qword_496B50 = v60;
        qword_496B58 = (__int64)v63;
LABEL_65:
        v64 = sub_448590(v7[1], v178, v179 + v8, v177, v180 + v60 - 8, v181);
        if ( (v64 & 0xFFFFFFFB) == 0 )
        {
          LODWORD(v5) = 8 * v6;
          v150 = v180;
          v151 = qword_496B48;
          v152 = v7[2];
          v153 = qword_496B50 - (v180 - qword_496B48);
          *(_QWORD *)qword_496B48 = v180 - qword_496B48 - 8;
          v152[v6] = v151;
          qword_496B48 = v150 + (v153 & 7);
          qword_496B50 = v153 & 0xFFFFFFFFFFFFFFF8LL;
          if ( (int)_aarch64_swp4_rel(0, (atomic_uint *)dword_496B40) > 1 )
            sub_407040(dword_496B40, v154, v155, v156, v157, v158, v159);
          v43 = (unsigned __int64 *)v7[2][v6];
          goto LABEL_49;
        }
        if ( v64 != 5 )
          break;
        v179 = v28;
        if ( !v62 )
          goto LABEL_62;
        ++v62;
        v11 = &dword_496B30;
        v65 = (__int64 *)qword_496B58;
        qword_496B50 = 4080 * v62;
        v63 = (_QWORD *)sub_40C434(
                          qword_496B58,
                          4080 * v62,
                          v52,
                          v53,
                          v54,
                          v55,
                          v56,
                          v57,
                          v58,
                          v59,
                          v61,
                          v48,
                          v49,
                          v50,
                          v51);
        if ( !v63 )
        {
          qword_496B58 = *v65;
          sub_40C1A0((unsigned __int64)v65, v66, v67, v68, v69, v70, v71, v72, v73);
          goto LABEL_75;
        }
        v60 = 4080 * v62 - 8LL;
      }
      v5 = dword_496B40;
      if ( (int)_aarch64_swp4_rel(0, (atomic_uint *)dword_496B40) > 1 )
        sub_407040(dword_496B40, v144, v145, v146, v147, v148, v149);
LABEL_31:
      v28 = 0;
    }
    else
    {
LABEL_75:
      v5 = dword_496B40;
      qword_496B48 = 0;
      qword_496B50 = 0;
      if ( (int)_aarch64_swp4_rel(0, (atomic_uint *)dword_496B40) > 1 )
      {
        v28 = -1;
        sub_407040(dword_496B40, v91, v92, v93, v94, v95, v96);
      }
      else
      {
LABEL_76:
        v28 = -1;
      }
    }
  }
  return v28;
}
