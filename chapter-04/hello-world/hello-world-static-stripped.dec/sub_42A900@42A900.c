__int64 __fastcall sub_42A900(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        double a4,
        double a5,
        double a6,
        double a7,
        double a8,
        double a9,
        double a10,
        double a11)
{
  __int64 v11; // x20
  __int64 v12; // x21
  __int64 v13; // x22
  _BYTE *v14; // x24
  __int64 v15; // x25
  __int64 v16; // x26
  __int64 v17; // x27
  __int64 v18; // x28
  __int64 v19; // x30
  __int64 v21; // x23
  __int64 v22; // x21
  _BYTE *v23; // x5
  __int64 *v24; // x6
  _BYTE *i; // x28
  __int64 v26; // x1
  double v27; // d0
  int v28; // w0
  int v29; // w22
  double v30; // d1
  double v31; // d2
  double v32; // d3
  double v33; // d4
  double v34; // d5
  double v35; // d6
  double v36; // d7
  bool v37; // zf
  __int64 result; // x0
  _QWORD *v39; // x1
  int v40; // w4
  __int64 v41; // x2
  __int64 v42; // x1
  __int64 v43; // x19
  double v44; // d0
  double v45; // d1
  double v46; // d2
  double v47; // d3
  double v48; // d4
  double v49; // d5
  double v50; // d6
  double v51; // d7
  int v52; // w1
  unsigned int **v53; // x1
  _BYTE *v54; // x2
  unsigned __int64 v55; // x3
  __int64 v56; // x24
  __int64 v57; // x0
  __int64 v58; // x1
  int *v59; // x21
  int v60; // w0
  unsigned __int64 v61; // x23
  __int64 v62; // x20
  unsigned __int64 v63; // x23
  int v64; // w1
  __int64 v65; // x2
  __int64 v66; // x1
  __int64 v67; // x2
  __int64 v68; // x3
  void *v69; // x4
  void *v70; // x5
  void *v71; // x6
  int *v72; // x1
  int v73; // w0
  int v74; // w0
  double v75; // d0
  double v76; // d1
  double v77; // d2
  double v78; // d3
  double v79; // d4
  double v80; // d5
  double v81; // d6
  double v82; // d7
  _QWORD *v83; // x0
  unsigned __int64 v84; // x21
  __int64 v85; // x1
  __int64 v86; // x20
  __int64 v87; // x0
  __int64 v88; // x1
  __int64 v89; // x20
  __int64 v90; // x2
  int v91; // w0
  _BYTE *v92; // x3
  unsigned __int64 v93; // x1
  unsigned int **v94; // x2
  unsigned int *v95; // x5
  unsigned int *v96; // x4
  unsigned __int64 v97; // x20
  unsigned __int64 v98; // x27
  int v99; // w1
  __int64 v100; // x20
  __int64 v101; // x28
  _BYTE *v102; // x27
  _BYTE *v103; // x0
  __int64 v104; // x27
  unsigned __int64 v105; // x0
  __int64 v106; // x20
  unsigned __int64 v107; // x2
  int v108; // w0
  unsigned int *v109; // x5
  unsigned int *v110; // x0
  unsigned int **v111; // x1
  int v112; // w0
  unsigned int **v113; // x3
  unsigned int *v114; // x2
  unsigned __int64 v115; // x3
  __int64 v116; // x4
  __int64 v117; // x0
  __int64 v118; // x2
  __int64 v119; // x1
  __int64 v120; // x2
  unsigned __int64 v121; // x0
  __int64 v122; // x0
  unsigned __int64 v123; // x0
  unsigned __int64 StatusReg; // x2
  __int64 v125; // x1
  __int64 v126; // x2
  __int64 v127; // x3
  void *v128; // x4
  void *v129; // x5
  void *v130; // x6
  unsigned __int64 v131; // x3
  int v132; // w1
  _BYTE *v133; // [xsp+0h] [xbp-B0h]
  _BYTE v134[16]; // [xsp+8h] [xbp-A8h] BYREF
  __int64 v135; // [xsp+18h] [xbp-98h]
  __int64 *v136; // [xsp+20h] [xbp-90h]
  __int64 v137; // [xsp+28h] [xbp-88h]
  __int64 v138; // [xsp+30h] [xbp-80h]
  __int64 v139; // [xsp+38h] [xbp-78h]
  __int64 v140; // [xsp+40h] [xbp-70h]
  __int64 v141; // [xsp+48h] [xbp-68h]
  __int64 v142; // [xsp+50h] [xbp-60h]
  _BYTE *v143; // [xsp+58h] [xbp-58h]
  __int64 v144; // [xsp+60h] [xbp-50h]
  __int64 v145; // [xsp+68h] [xbp-48h]
  __int64 v146; // [xsp+70h] [xbp-40h]
  __int64 v147; // [xsp+78h] [xbp-38h]
  __int64 v148; // [xsp+88h] [xbp-28h] BYREF
  _BYTE *v149; // [xsp+90h] [xbp-20h] BYREF
  _BYTE v150[16]; // [xsp+98h] [xbp-18h] BYREF
  __int64 v151; // [xsp+A8h] [xbp-8h] BYREF
  __int64 v152; // [xsp+B0h] [xbp+0h] BYREF
  __int64 v153; // [xsp+D0h] [xbp+20h]
  __int64 v154; // [xsp+D8h] [xbp+28h]
  __int64 v155; // [xsp+F0h] [xbp+40h]
  __int64 v156; // [xsp+F8h] [xbp+48h]
  __int64 v157; // [xsp+100h] [xbp+50h]
  __int64 v158; // [xsp+108h] [xbp+58h]

  v151 = qword_48DD60;
  v21 = *(_QWORD *)(a1 + 152);
  if ( a3 )
  {
    v11 = a2;
    v22 = a3;
    v23 = *(_BYTE **)(a1 + 40);
    if ( *(_BYTE **)(a1 + 48) != v23 || (v42 = *(_QWORD *)(a1 + 32), v23 == (_BYTE *)v42) )
    {
      v155 = v15;
      v156 = v16;
      v157 = v17;
      v158 = v18;
    }
    else
    {
      if ( (unsigned int)sub_402270(a1, v42, (__int64)&v23[-v42], a4, a5, a6, a7, a8, a9, a10, a11) == -1 )
      {
LABEL_31:
        result = 0xFFFFFFFFLL;
        v12 = v153;
        v13 = v154;
        goto LABEL_21;
      }
      v23 = *(_BYTE **)(a1 + 40);
      v155 = v15;
      v156 = v16;
      v157 = v17;
      v158 = v18;
    }
    v24 = *(__int64 **)(a1 + 64);
    v14 = v150;
    if ( (unsigned __int64)((char *)v24 - v23) <= 0xF )
      goto LABEL_15;
LABEL_5:
    for ( i = *(_BYTE **)(a1 + 32); ; i = v150 )
    {
      v26 = *(_QWORD *)(a1 + 160) + 88LL;
      v149 = v23;
      v27 = sub_42C220(v21, v26, v11, v11 + 4 * v22, &v148, v23, v24, &v149);
      v29 = v28;
      if ( (unsigned int)sub_402270(a1, (__int64)i, v149 - i, v27, v30, v31, v32, v33, v34, v35, v36) == -1 )
      {
        v15 = v155;
        v16 = v156;
        v17 = v157;
        v18 = v158;
        goto LABEL_31;
      }
      v22 -= (v148 - v11) >> 2;
      if ( v29 )
      {
        v37 = v148 != v11 && v29 == 1;
        if ( !v37 )
          break;
      }
      if ( !v22 )
      {
        v12 = v153;
        v13 = v154;
        v15 = v155;
        v16 = v156;
        v17 = v157;
        v18 = v158;
        goto LABEL_17;
      }
      v23 = *(_BYTE **)(a1 + 40);
      v11 = v148;
      v24 = *(__int64 **)(a1 + 64);
      if ( (unsigned __int64)((char *)v24 - v23) > 0xF )
        goto LABEL_5;
LABEL_15:
      v23 = v150;
      v24 = &v151;
    }
    v37 = v22 == 0;
    v12 = v153;
    v13 = v154;
    if ( v37 )
      result = 0;
    else
      result = 0xFFFFFFFFLL;
    v15 = v155;
    v16 = v156;
    v17 = v157;
    v18 = v158;
  }
  else
  {
LABEL_17:
    result = 0;
  }
  v39 = *(_QWORD **)(a1 + 160);
  v40 = *(_DWORD *)a1;
  v41 = v39[6];
  *v39 = v41;
  v39[1] = v41;
  v39[2] = v41;
  v39[3] = v41;
  v39[4] = v41;
  if ( (v40 & 0x202) == 0 )
    v41 = v39[7];
  v39[5] = v41;
LABEL_21:
  if ( v151 == qword_48DD60 )
    return result;
  v153 = v12;
  v154 = v13;
  v155 = v15;
  v156 = v16;
  v157 = v17;
  v158 = v18;
  v136 = &v152;
  v137 = v19;
  v138 = a1;
  v139 = v11;
  v43 = sub_412340();
  v52 = *(_DWORD *)v43;
  v135 = qword_48DD60;
  if ( (v52 & 0x10) != 0 )
    goto LABEL_74;
  if ( (v52 & 4) != 0 )
  {
    StatusReg = _ReadStatusReg(TPIDR_EL0);
    *(_DWORD *)v43 = v52 | 0x20;
    *(_DWORD *)(StatusReg + 40) = 9;
    result = 0xFFFFFFFFLL;
    goto LABEL_52;
  }
  v53 = *(unsigned int ***)(v43 + 160);
  if ( *v53 < v53[1] )
  {
    result = **v53;
    goto LABEL_52;
  }
  v54 = *(_BYTE **)(v43 + 8);
  v55 = *(_QWORD *)(v43 + 16);
  v142 = v21;
  v143 = v14;
  v56 = *(_QWORD *)(v43 + 152);
  if ( (unsigned __int64)v54 < v55 )
  {
    v109 = v53[6];
    v110 = v53[11];
    v133 = v54;
    *v53 = v109;
    v53[2] = v109;
    v111 = v53 + 11;
    v111[1] = v110;
    v112 = sub_42C310(v56, v111);
    v113 = *(unsigned int ***)(v43 + 160);
    v114 = *v113;
    v115 = (unsigned __int64)v113[1];
    v116 = *(_QWORD *)(v43 + 8);
    *(_QWORD *)(v43 + 8) = v133;
    *(_QWORD *)(v43 + 24) = v116;
    if ( (unsigned __int64)v114 < v115 )
    {
      v21 = v142;
      v14 = v143;
      result = *v114;
      goto LABEL_52;
    }
    if ( v112 == 2 )
    {
      v131 = _ReadStatusReg(TPIDR_EL0);
      v21 = v142;
      v14 = v143;
      v132 = *(_DWORD *)v43 | 0x20;
      *(_DWORD *)(v131 + 40) = 84;
      result = 0xFFFFFFFFLL;
      *(_DWORD *)v43 = v132;
      goto LABEL_52;
    }
    v117 = *(_QWORD *)(v43 + 56);
    v140 = v12;
    v141 = v13;
    v118 = *(_QWORD *)(v43 + 16);
    v144 = v15;
    v145 = v16;
    v146 = v17;
    v147 = v18;
    j_ifunc_40DD80(v117, v133, v118 - (_QWORD)v133);
    v120 = *(_QWORD *)(v43 + 8);
    v119 = *(_QWORD *)(v43 + 16);
    v57 = *(_QWORD *)(v43 + 56);
    *(_QWORD *)(v43 + 24) = v57;
    *(_QWORD *)(v43 + 8) = v57;
    *(_QWORD *)(v43 + 16) = v57 + v119 - v120;
    if ( v57 )
    {
LABEL_37:
      v58 = *(_QWORD *)(v43 + 160);
      *(_QWORD *)(v43 + 32) = v57;
      *(_QWORD *)(v43 + 40) = v57;
      *(_QWORD *)(v43 + 48) = v57;
      if ( *(_QWORD *)(v58 + 48) )
        goto LABEL_38;
      goto LABEL_100;
    }
  }
  else
  {
    v57 = *(_QWORD *)(v43 + 56);
    v140 = v12;
    v141 = v13;
    v144 = v15;
    v145 = v16;
    v146 = v17;
    v147 = v18;
    *(_QWORD *)(v43 + 8) = v57;
    *(_QWORD *)(v43 + 16) = v57;
    *(_QWORD *)(v43 + 24) = v57;
    if ( v57 )
      goto LABEL_37;
  }
  v121 = *(_QWORD *)(v43 + 72);
  if ( v121 )
  {
    sub_40C1A0(v121, v44, v45, v46, v47, v48, v49, v50, v51);
    *(_DWORD *)v43 &= ~0x100u;
  }
  sub_404C44((int *)v43, v44, v45, v46, v47, v48, v49, v50, v51);
  v58 = *(_QWORD *)(v43 + 160);
  v122 = *(_QWORD *)(v43 + 56);
  *(_QWORD *)(v43 + 8) = v122;
  *(_QWORD *)(v43 + 16) = v122;
  *(_QWORD *)(v43 + 24) = v122;
  *(_QWORD *)(v43 + 32) = v122;
  *(_QWORD *)(v43 + 40) = v122;
  *(_QWORD *)(v43 + 48) = v122;
  if ( !*(_QWORD *)(v58 + 48) )
  {
LABEL_100:
    v123 = *(_QWORD *)(v58 + 64);
    if ( v123 )
    {
      sub_40C1A0(v123, v44, v45, v46, v47, v48, v49, v50, v51);
      *(_DWORD *)v43 &= ~0x100u;
    }
    sub_429E80(v43);
  }
LABEL_38:
  if ( (*(_DWORD *)v43 & 0x202) == 0 )
    goto LABEL_55;
  v59 = off_4905B8;
  v60 = *off_4905B8;
  if ( (*off_4905B8 & 0x8000) != 0 )
  {
    if ( (*off_4905B8 & 0x288) != 0x280 )
      goto LABEL_55;
LABEL_89:
    v72 = v59;
LABEL_90:
    v106 = *((_QWORD *)v72 + 27);
    if ( (unsigned __int64)(v106 - (_QWORD)&unk_48DD70) > 0x92F )
      sub_401A50(v44, v45, v46, v47, v48, v49, v50, v51);
    (*(void (__fastcall **)(__int64, int, double, double, double, double, double, double, double, double))(v106 + 0x18))(
      (__int64)off_4905B8,
      -1,
      v44,
      v45,
      v46,
      v47,
      v48,
      v49,
      v50,
      v51);
    goto LABEL_46;
  }
  v61 = _ReadStatusReg(TPIDR_EL0);
  v62 = *((_QWORD *)v59 + 17);
  v63 = v61 - 1856;
  v64 = (unsigned __int8)byte_490F08;
  v65 = *(_QWORD *)(v62 + 8);
  if ( byte_490F08 && !v65 )
  {
    *(_DWORD *)v62 = 1;
    *(_QWORD *)(v62 + 8) = v63;
    if ( (v60 & 0x288) != 0x280 )
    {
      v74 = *(_DWORD *)(v62 + 4);
      goto LABEL_107;
    }
    goto LABEL_89;
  }
  if ( v63 == v65 )
  {
    ++*(_DWORD *)(v62 + 4);
    if ( (v60 & 0x288) != 0x280 )
    {
LABEL_48:
      v74 = *(_DWORD *)(v62 + 4);
      if ( !v64 )
      {
        if ( !v74 )
        {
          *(_QWORD *)(v62 + 8) = 0;
          if ( (int)_aarch64_swp4_rel(0, (atomic_uint *)v62) > 1 )
            sub_407040((void *)v62, v125, v126, v127, v128, v129, v130);
          goto LABEL_55;
        }
LABEL_50:
        *(_DWORD *)(v62 + 4) = v74 - 1;
        goto LABEL_55;
      }
LABEL_107:
      if ( !v74 )
      {
        *(_DWORD *)v62 = 0;
        *(_QWORD *)(v62 + 8) = 0;
        goto LABEL_55;
      }
      goto LABEL_50;
    }
    goto LABEL_89;
  }
  if ( _aarch64_cas4_acq(0, 1u, *((atomic_uint **)v59 + 17)) )
    sub_406F40((_DWORD *)v62, v44, v45, v46, v47, v48, v49, v50, v51, v66, v67, v68, v69, v70, v71);
  v72 = off_4905B8;
  v73 = *off_4905B8 & 0x288;
  *(_QWORD *)(*((_QWORD *)v59 + 17) + 8LL) = v63;
  if ( v73 == 640 )
    goto LABEL_90;
LABEL_46:
  if ( (*v59 & 0x8000) == 0 )
  {
    v62 = *((_QWORD *)v59 + 17);
    v64 = (unsigned __int8)byte_490F08;
    goto LABEL_48;
  }
LABEL_55:
  sub_4047E0((unsigned int *)v43, v44, v45, v46, v47, v48, v49, v50, v51);
  v83 = *(_QWORD **)(v43 + 160);
  v84 = 0;
  v85 = v83[6];
  *v83 = v85;
  v83[1] = v85;
  v83[2] = v85;
  v83[3] = v85;
  v83[4] = v85;
  v83[5] = v85;
LABEL_56:
  v86 = *(_QWORD *)(v43 + 216);
  if ( (unsigned __int64)(v86 - (_QWORD)&unk_48DD70) > 0x92F )
  {
    while ( 1 )
    {
      sub_401A50(v75, v76, v77, v78, v79, v80, v81, v82);
      v87 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(v86 + 112))(
              v43,
              *(_QWORD *)(v43 + 16),
              *(_QWORD *)(v43 + 64) - *(_QWORD *)(v43 + 16));
      if ( v87 <= 0 )
        goto LABEL_72;
LABEL_58:
      v88 = *(_QWORD *)(v43 + 144);
      *(_QWORD *)(v43 + 16) += v87;
      if ( v88 != -1 )
        *(_QWORD *)(v43 + 144) = v88 + v87;
      v89 = *(_QWORD *)(v43 + 160);
      v90 = *(_QWORD *)(v43 + 8);
      *(_QWORD *)(v89 + 96) = *(_QWORD *)(v89 + 88);
      *(_QWORD *)(v43 + 24) = v90;
      if ( !v84 )
        break;
      v101 = 16 - v84;
      v102 = &v134[v84];
      if ( 16 - v84 > v87 )
        v101 = v87;
      v103 = &v134[v84];
      v84 += v101;
      j_ifunc_40DC90(v103, v90, v101);
      v91 = sub_42C310(v56, v89 + 88);
      if ( !v84 )
        goto LABEL_62;
      v92 = v133;
      v104 = v133 - v102;
      if ( v104 < 0 )
        v104 = 0;
      v93 = *(_QWORD *)(v43 + 8) + v104;
LABEL_63:
      v94 = *(unsigned int ***)(v43 + 160);
      v95 = v94[1];
      v96 = v94[6];
      *(_QWORD *)(v43 + 8) = v93;
      if ( v95 != v96 )
      {
        v12 = v140;
        v13 = v141;
        v21 = v142;
        v14 = v143;
        v15 = v144;
        v16 = v145;
        v17 = v146;
        v18 = v147;
        result = **v94;
        goto LABEL_52;
      }
      if ( v91 == 2 )
        goto LABEL_93;
      if ( v91 != 1 )
      {
        if ( v135 == qword_48DD60 )
          sub_41F250("status == __codecvt_partial", (__int64)"wfileops.c", 0x120u, (__int64)"_IO_wfile_underflow");
        goto LABEL_116;
      }
      if ( v84 )
      {
        if ( v92 != v134 )
        {
          v84 -= v92 - v134;
          sub_431EF0(v134, v92, v84, 16);
        }
        if ( v84 == 16 )
          goto LABEL_93;
        v100 = *(_QWORD *)(v43 + 24);
        *(_QWORD *)(v43 + 8) = v100;
        *(_QWORD *)(v43 + 16) = v100;
      }
      else
      {
        v97 = *(_QWORD *)(v43 + 24);
        v98 = *(_QWORD *)(v43 + 16) - v93;
        if ( v97 < v93 )
        {
          j_ifunc_40DD80(*(_QWORD *)(v43 + 24), v93, *(_QWORD *)(v43 + 16) - v93);
          v105 = *(_QWORD *)(v43 + 16) - v98;
          *(_QWORD *)(v43 + 8) = *(_QWORD *)(v43 + 24);
          *(_QWORD *)(v43 + 16) = v105;
          goto LABEL_56;
        }
        if ( v98 > 0xF )
        {
LABEL_93:
          v107 = _ReadStatusReg(TPIDR_EL0);
          v12 = v140;
          v13 = v141;
          v108 = *(_DWORD *)v43 | 0x20;
          v21 = v142;
          v14 = v143;
          v15 = v144;
          v16 = v145;
          v17 = v146;
          v18 = v147;
          *(_DWORD *)(v107 + 40) = 84;
          *(_DWORD *)v43 = v108;
          result = 0xFFFFFFFFLL;
          goto LABEL_52;
        }
        v84 = *(_QWORD *)(v43 + 16) - v93;
        j_ifunc_40DC90(v134, v93, v84);
        *(_QWORD *)(v43 + 8) = v97;
        *(_QWORD *)(v43 + 16) = v97;
      }
      v86 = *(_QWORD *)(v43 + 216);
      if ( (unsigned __int64)(v86 - (_QWORD)&unk_48DD70) <= 0x92F )
        goto LABEL_57;
    }
    v91 = sub_42C310(v56, v89 + 88);
LABEL_62:
    v92 = v133;
    v84 = 0;
    v93 = (unsigned __int64)v133;
    goto LABEL_63;
  }
LABEL_57:
  v87 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(v86 + 112))(
          v43,
          *(_QWORD *)(v43 + 16),
          *(_QWORD *)(v43 + 64) - *(_QWORD *)(v43 + 16));
  if ( v87 > 0 )
    goto LABEL_58;
LABEL_72:
  v99 = *(_DWORD *)v43;
  if ( !(v84 | v87) )
  {
    v12 = v140;
    v13 = v141;
    v21 = v142;
    v14 = v143;
    v15 = v144;
    v16 = v145;
    v17 = v146;
    v18 = v147;
    *(_DWORD *)v43 = v99 | 0x10;
    *(_QWORD *)(v43 + 144) = -1;
LABEL_74:
    result = 0xFFFFFFFFLL;
    goto LABEL_52;
  }
  *(_DWORD *)v43 = v99 | 0x20;
  if ( !v84 )
    goto LABEL_117;
  v12 = v140;
  v13 = v141;
  v21 = v142;
  v14 = v143;
  *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40) = 84;
  v15 = v144;
  v16 = v145;
  result = 0xFFFFFFFFLL;
  v17 = v146;
  v18 = v147;
LABEL_52:
  while ( v135 != qword_48DD60 )
  {
    v140 = v12;
    v141 = v13;
    v142 = v21;
    v143 = v14;
    v144 = v15;
    v145 = v16;
    v146 = v17;
    v147 = v18;
LABEL_116:
    sub_412340();
LABEL_117:
    v12 = v140;
    v13 = v141;
    result = 0xFFFFFFFFLL;
    v21 = v142;
    v14 = v143;
    v15 = v144;
    v16 = v145;
    v17 = v146;
    v18 = v147;
  }
  return result;
}
