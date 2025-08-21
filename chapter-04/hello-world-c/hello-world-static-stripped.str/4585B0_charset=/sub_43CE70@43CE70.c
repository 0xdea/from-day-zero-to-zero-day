__int64 __fastcall sub_43CE70(__int64 a1, __int64 a2, __int64 a3, int a4, _QWORD *a5)
{
  _DWORD *v5; // x19
  unsigned __int64 v6; // x21
  int *v7; // x24
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
  __int64 v39; // x25
  __int64 v40; // x27
  __int64 v41; // x28
  __int64 v42; // x0
  unsigned __int64 *v43; // x0
  _BYTE *v44; // x0
  _BYTE *v45; // x28
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x3
  void *v49; // x4
  void *v50; // x5
  void *v51; // x6
  long double v52; // q0
  long double v53; // q1
  long double v54; // q2
  long double v55; // q3
  long double v56; // q4
  long double v57; // q5
  long double v58; // q6
  long double v59; // q7
  __int64 v60; // x1
  __int16 *v61; // x2
  int v62; // w28
  _QWORD *v63; // x0
  int v64; // w0
  __int64 *v65; // x25
  __int64 v66; // x1
  __int64 v67; // x4
  __int64 v68; // x5
  long double v69; // q0
  long double v70; // q1
  long double v71; // q2
  long double v72; // q3
  long double v73; // q4
  long double v74; // q5
  long double v75; // q6
  long double v76; // q7
  __int64 v77; // x27
  __int64 v78; // x20
  __int64 v79; // x3
  int *v80; // x28
  __int64 v81; // t1
  __int64 v82; // x27
  __int64 v83; // x0
  __int64 v84; // x25
  __int64 v85; // x1
  __int64 v86; // x0
  __int64 v87; // x0
  __int64 v88; // x1
  __int64 v89; // x0
  __int64 v90; // x20
  __int64 v91; // x2
  __int64 v92; // x4
  __int64 *v93; // x1
  int v94; // w27
  __int64 v95; // x0
  __int64 v96; // x1
  __int64 v97; // x2
  __int64 v98; // x3
  void *v99; // x4
  void *v100; // x5
  void *v101; // x6
  long double v102; // q0
  long double v103; // q1
  long double v104; // q2
  long double v105; // q3
  long double v106; // q4
  long double v107; // q5
  long double v108; // q6
  long double v109; // q7
  __int64 v110; // x1
  __int16 *v111; // x2
  __int64 v112; // x4
  __int64 v113; // x5
  long double v114; // q0
  long double v115; // q1
  long double v116; // q2
  long double v117; // q3
  long double v118; // q4
  long double v119; // q5
  long double v120; // q6
  long double v121; // q7
  __int64 v122; // x0
  __int64 v123; // x3
  __int64 v124; // x4
  __int64 v125; // x7
  __int64 v126; // x2
  __int64 v127; // x0
  __int64 v128; // [xsp+0h] [xbp-10070h] BYREF
  _BYTE v129[1008]; // [xsp+10h] [xbp-10060h] BYREF
  __int64 v130; // [xsp+400h] [xbp-FC70h]
  _BYTE v131[16]; // [xsp+10000h] [xbp-70h] BYREF
  __int64 v132; // [xsp+10010h] [xbp-60h]
  _QWORD *v133; // [xsp+10018h] [xbp-58h]
  int v134; // [xsp+10024h] [xbp-4Ch]
  __int64 v135; // [xsp+10028h] [xbp-48h]
  __int64 *v136; // [xsp+10030h] [xbp-40h]
  __int64 v137; // [xsp+10038h] [xbp-38h]
  __int64 v138; // [xsp+10040h] [xbp-30h] BYREF
  __int64 v139; // [xsp+10048h] [xbp-28h] BYREF
  _BYTE v140[24]; // [xsp+10050h] [xbp-20h] BYREF
  __int64 v141; // [xsp+10068h] [xbp-8h]

  v135 = a1;
  v10 = *(_DWORD *)(a1 + 8);
  v141 = qword_48DD60;
  v132 = a2;
  v133 = a5;
  v134 = a4;
  if ( v10 <= 0 )
    sub_41F630();
  v11 = *(int **)(v135 + 16);
  if ( !v11 )
    goto LABEL_31;
  LODWORD(v5) = v11[10];
  if ( *((_QWORD *)v11 + 12) )
  {
    LODWORD(v136) = ifunc_40DFD0(a3);
    v12 = sub_422650(a3);
    v13 = v11[22];
    v137 = (unsigned int)v136;
    v8 = (unsigned int)v11[26];
    v14 = *((_QWORD *)v11 + 12);
    v7 = (int *)(v12 % (v13 - 2) + 1);
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
          if ( (unsigned int)v136 > bswap32(v18) )
            goto LABEL_10;
          v19 = *(_QWORD *)v11;
          v20 = bswap32(v17[1]);
        }
        else
        {
          if ( (unsigned int)v136 > v18 )
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
        if ( *v26 > (unsigned __int64)v137 && !(unsigned int)sub_42F240(a3, v26[1]) )
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
  if ( v134 )
  {
    if ( v132 )
    {
      v39 = *(_QWORD *)(v132 + 16);
      if ( v39 )
        goto LABEL_42;
    }
    v7 = &dword_496B30;
    if ( dword_496B30 )
    {
      v39 = qword_496B38;
    }
    else
    {
      v44 = (_BYTE *)sub_422890("OUTPUT_CHARSET");
      v45 = v44;
      if ( v44 && *v44 )
      {
        v137 = ifunc_40DFD0(v44) + 1;
        v122 = sub_40B890(v137, v114, v115, v116, v117, v118, v119, v120, v121, v110, v111, v137, v112, v113);
        v39 = v122;
        if ( v122 )
        {
          sub_412300(v122, v45, v137, v137);
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
      v137 = (__int64)(v11 + 32);
      sub_42DD20((unsigned int *)v11 + 32);
      v40 = *((_QWORD *)v11 + 15);
      v41 = 24 * v40 - 24;
      while ( v40 )
      {
        --v40;
        v7 = (int *)(*((_QWORD *)v11 + 14) + v41);
        v41 -= 24;
        if ( !(unsigned int)sub_42F240(*(_QWORD *)v7, v39) )
          goto LABEL_45;
      }
      sub_42DFB0((unsigned int *)v137);
      sub_42E1E0(v137);
      v77 = *((_QWORD *)v11 + 15);
      v136 = (__int64 *)*((_QWORD *)v11 + 14);
      v78 = 24 * v77;
      v79 = 24 * v77 - 24;
      v80 = (int *)((char *)v136 + v79);
      while ( v77 )
      {
        v7 = v80;
        --v77;
        v81 = *(_QWORD *)v80;
        v80 -= 6;
        if ( !(unsigned int)sub_42F240(v81, v39) )
          goto LABEL_45;
      }
      if ( v136 )
        v82 = (__int64)sub_40C434(
                         (__int64)v136,
                         v78 + 24,
                         v69,
                         v70,
                         v71,
                         v72,
                         v73,
                         v74,
                         v75,
                         v76,
                         (__int64)v136,
                         v79,
                         v67,
                         v68);
      else
        v82 = sub_40B890(v78 + 24, v69, v70, v71, v72, v73, v74, v75, v76, v66, 0, v79, v67, v68);
      if ( v82 && (*((_QWORD *)v11 + 14) = v82, v83 = sub_42F380(v39), (v84 = v83) != 0) )
      {
        v7 = (int *)(v82 + v78);
        *(_QWORD *)(v82 + v78) = v83;
        v85 = v132;
        v86 = v135;
        *(_QWORD *)(v82 + v78 + 8) = -1;
        v87 = sub_43CE70(v86, v85, (__int64)"", 0, &v139);
        v88 = v87;
        if ( v87 != -1 )
        {
          if ( !v87 )
            goto LABEL_90;
          v89 = ((__int64 (__fastcall *)(__int64, const char *))loc_40E470)(v87, "charset=");
          if ( !v89 )
            goto LABEL_90;
          v90 = v89 + 8;
          v91 = sub_4431F0(v89 + 8, " \t\n");
          v93 = (__int64 *)&v131[-((v91 + 16) & 0xFFFFFFFFFFFF0000LL)];
          if ( v131 != (_BYTE *)v93 )
          {
            do
              v130 = 0;
            while ( &v128 != v93 );
          }
          v128 = 0;
          if ( (((_WORD)v91 + 16) & 0xFFF0u) >= 0x400uLL )
            v130 = 0;
          *(_BYTE *)_mempcpy_chk(v129, v90, v91, v91 + 1, v92) = 0;
          sub_4488D0(v140, v129, v84);
          v140[16] = 1;
          v94 = sub_4481D0(v140, v7 + 2, 1);
          QV4::ESTable::~ESTable((QV4::ESTable *)v140);
          if ( !v94 )
            goto LABEL_90;
          if ( v94 == -1 )
            goto LABEL_113;
          sub_42DFB0((unsigned int *)v137);
          sub_40C1A0(v84);
          v88 = 0;
        }
        v28 = v88;
      }
      else
      {
        v28 = -1;
        sub_42DFB0((unsigned int *)v137);
      }
      goto LABEL_32;
    }
LABEL_53:
    v39 = *(_QWORD *)(**(_QWORD **)(_ReadStatusReg(TPIDR_EL0) + 16) + 168LL);
    goto LABEL_42;
  }
LABEL_22:
  *v133 = v8;
LABEL_32:
  while ( v141 != qword_48DD60 )
  {
    sub_412340();
LABEL_113:
    *((_QWORD *)v7 + 1) = -1;
LABEL_90:
    v95 = *((_QWORD *)v11 + 15);
    *((_QWORD *)v7 + 2) = 0;
    *((_QWORD *)v11 + 15) = v95 + 1;
LABEL_45:
    sub_42DFB0((unsigned int *)v137);
    if ( *((_QWORD *)v7 + 1) == -1 )
      goto LABEL_22;
    v42 = *((_QWORD *)v7 + 2);
    if ( !v42 )
    {
      if ( _aarch64_cas4_acq(0, 1u, (atomic_uint *)dword_496B40) )
        sub_406F40(dword_496B40, v96, v97, v98, v99, v100, v101);
      if ( !*((_QWORD *)v7 + 2) )
      {
        v127 = sub_40CCB0(
                 (unsigned int)((_DWORD)v5 + v11[16]),
                 8u,
                 v102,
                 v103,
                 v104,
                 v105,
                 v106,
                 v107,
                 v108,
                 v109,
                 v97,
                 v98,
                 (__int64)v99,
                 (__int64)v100);
        *((_QWORD *)v7 + 2) = v127;
        if ( v127 )
          goto LABEL_60;
        *((_QWORD *)v7 + 2) = -1;
      }
      v5 = dword_496B40;
      if ( (int)_aarch64_swp4_rel(0, (atomic_uint *)dword_496B40) > 1 )
        sub_407040(dword_496B40);
      v42 = *((_QWORD *)v7 + 2);
    }
    if ( v42 == -1 )
      goto LABEL_76;
    v43 = *(unsigned __int64 **)(v42 + 8 * v6);
    if ( v43 )
    {
LABEL_49:
      v28 = (__int64)(v43 + 1);
      v8 = *v43;
      goto LABEL_22;
    }
    if ( _aarch64_cas4_acq(0, 1u, (atomic_uint *)dword_496B40) )
      sub_406F40(dword_496B40, v46, v47, v48, v49, v50, v51);
LABEL_60:
    v61 = (__int16 *)qword_496B48;
    v60 = qword_496B50;
    v138 = v28;
    v139 = qword_496B48 + 8;
    if ( (unsigned __int64)qword_496B50 > 7 )
    {
      v62 = 0;
      v136 = &v139;
      v137 = (__int64)&v138;
      goto LABEL_65;
    }
LABEL_62:
    qword_496B50 = 4080;
    v63 = (_QWORD *)sub_40B890(
                      0xFF0u,
                      v52,
                      v53,
                      v54,
                      v55,
                      v56,
                      v57,
                      v58,
                      v59,
                      v60,
                      v61,
                      v48,
                      (__int64)v49,
                      (__int64)v50);
    if ( v63 )
    {
      v60 = 4072;
      v62 = 1;
      v136 = &v139;
      v137 = (__int64)&v138;
      *v63 = qword_496B58;
      while ( 1 )
      {
        v139 = (__int64)(v63 + 2);
        qword_496B48 = (__int64)(v63 + 1);
        qword_496B50 = v60;
        qword_496B58 = (__int64)v63;
LABEL_65:
        v64 = sub_448590(*((_QWORD *)v7 + 1), v137, v138 + v8, v136, v139 + v60 - 8, v140);
        if ( (v64 & 0xFFFFFFFB) == 0 )
        {
          LODWORD(v5) = 8 * v6;
          v123 = v139;
          v124 = qword_496B48;
          v125 = *((_QWORD *)v7 + 2);
          v126 = qword_496B50 - (v139 - qword_496B48);
          *(_QWORD *)qword_496B48 = v139 - qword_496B48 - 8;
          *(_QWORD *)(v125 + 8 * v6) = v124;
          qword_496B48 = v123 + (v126 & 7);
          qword_496B50 = v126 & 0xFFFFFFFFFFFFFFF8LL;
          if ( (int)_aarch64_swp4_rel(0, (atomic_uint *)dword_496B40) > 1 )
            sub_407040(dword_496B40);
          v43 = *(unsigned __int64 **)(*((_QWORD *)v7 + 2) + 8 * v6);
          goto LABEL_49;
        }
        if ( v64 != 5 )
          break;
        v138 = v28;
        if ( !v62 )
          goto LABEL_62;
        ++v62;
        v11 = &dword_496B30;
        v65 = (__int64 *)qword_496B58;
        qword_496B50 = 4080 * v62;
        v63 = sub_40C434(
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
                (__int64)v61,
                v48,
                (__int64)v49,
                (__int64)v50);
        if ( !v63 )
        {
          qword_496B58 = *v65;
          sub_40C1A0(v65);
          goto LABEL_75;
        }
        v60 = 4080 * v62 - 8LL;
      }
      v5 = dword_496B40;
      if ( (int)_aarch64_swp4_rel(0, (atomic_uint *)dword_496B40) > 1 )
        sub_407040(dword_496B40);
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
        sub_407040(dword_496B40);
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
