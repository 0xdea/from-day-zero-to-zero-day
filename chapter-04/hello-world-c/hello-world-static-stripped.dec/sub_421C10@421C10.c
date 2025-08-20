__int64 __fastcall sub_421C10(
        __int64 a1,
        __int64 a2,
        double a3,
        double a4,
        double a5,
        double a6,
        double a7,
        double a8,
        double a9,
        double a10,
        __int64 a11,
        __int64 a12,
        unsigned __int64 a13,
        void *a14,
        unsigned __int64 i)
{
  __int64 v15; // x2
  unsigned __int64 *v16; // x20
  _BYTE *v17; // x24
  _BYTE *v18; // x19
  _BYTE *v19; // x23
  __int64 v20; // x26
  int v21; // w27
  int v22; // w28
  __int64 v23; // x8
  __int64 v24; // x19
  __int64 v25; // x0
  _BYTE *v26; // x22
  __int64 v27; // x20
  __int64 v28; // x2
  _BYTE *v29; // x1
  signed int v30; // w0
  signed int v31; // w11
  __int64 v32; // x27
  __int64 v33; // x2
  _QWORD *v34; // x12
  unsigned int v35; // w19
  int v36; // t1
  signed int v37; // w0
  _DWORD *v38; // x4
  _DWORD *v39; // x9
  bool v40; // zf
  __int64 v41; // x0
  char *v42; // x19
  int v43; // w0
  int v44; // w0
  int v45; // w9
  _BYTE *v46; // x10
  _BYTE *v47; // x12
  bool v48; // zf
  int v49; // w2
  int v50; // w4
  bool v51; // zf
  double v52; // d0
  double v53; // d1
  double v54; // d2
  double v55; // d3
  double v56; // d4
  double v57; // d5
  double v58; // d6
  double v59; // d7
  _DWORD *v60; // x4
  _DWORD *v61; // x1
  _DWORD *v62; // x9
  bool v63; // zf
  _QWORD *v65; // x0
  _DWORD *v66; // x4
  _DWORD *v67; // x1
  bool v68; // zf
  _QWORD *v69; // x0
  bool v70; // zf
  _QWORD *v71; // x0
  _DWORD *v72; // x1
  _QWORD *v73; // x0
  double v74; // d0
  double v75; // d1
  double v76; // d2
  double v77; // d3
  double v78; // d4
  double v79; // d5
  double v80; // d6
  double v81; // d7
  _QWORD *v83; // x0
  _QWORD *v84; // x0
  int v85; // w4
  unsigned __int64 v86; // x2
  int v87; // t1
  __int64 v88; // x7
  unsigned int v89; // w2
  unsigned int v90; // w2
  _BYTE *v91; // x12
  unsigned int v92; // w2
  unsigned int v93; // w2
  double v94; // d0
  double v95; // d1
  double v96; // d2
  double v97; // d3
  double v98; // d4
  double v99; // d5
  double v100; // d6
  double v101; // d7
  double v102; // d0
  double v103; // d1
  double v104; // d2
  double v105; // d3
  double v106; // d4
  double v107; // d5
  double v108; // d6
  double v109; // d7
  __int64 v110; // x0
  __int64 v111; // x1
  __int64 v112; // x2
  unsigned __int64 v114; // [xsp+10h] [xbp-740h]
  unsigned int v115; // [xsp+18h] [xbp-738h]
  int v116; // [xsp+1Ch] [xbp-734h]
  int v117; // [xsp+1Ch] [xbp-734h]
  int v118; // [xsp+1Ch] [xbp-734h]
  int v119; // [xsp+1Ch] [xbp-734h]
  int v120; // [xsp+1Ch] [xbp-734h]
  int v121; // [xsp+1Ch] [xbp-734h]
  int v122; // [xsp+1Ch] [xbp-734h]
  int v123; // [xsp+1Ch] [xbp-734h]
  int v124; // [xsp+1Ch] [xbp-734h]
  int v125; // [xsp+1Ch] [xbp-734h]
  int v126; // [xsp+1Ch] [xbp-734h]
  _DWORD *v127; // [xsp+20h] [xbp-730h]
  _DWORD *v128; // [xsp+28h] [xbp-728h]
  _DWORD *v129; // [xsp+30h] [xbp-720h]
  __int64 v130; // [xsp+38h] [xbp-718h]
  _BYTE v131[960]; // [xsp+40h] [xbp-710h] BYREF
  __int64 v132; // [xsp+400h] [xbp-350h]
  _BYTE v133[200]; // [xsp+680h] [xbp-D0h] BYREF
  __int64 v134; // [xsp+748h] [xbp-8h]

  v132 = 0;
  v15 = (__int64)&qword_48DD60;
  v16 = (unsigned __int64 *)v131;
  v134 = qword_48DD60;
  v17 = v131;
  v18 = v133;
  v19 = v133;
  v20 = 200;
  v21 = 0;
  v22 = -2;
  v23 = 199;
  v115 = 0;
  while ( 1 )
  {
    *v18 = v21;
    if ( v18 >= &v19[v23] )
      break;
LABEL_12:
    if ( v21 == 9 )
    {
      v35 = 0;
      goto LABEL_96;
    }
    v30 = byte_45AA00[v21];
    v31 = v30;
    if ( v30 == -4 )
    {
      a13 = (unsigned int)byte_45B500[v21 + 64];
      if ( byte_45B500[v21 + 64] )
        goto LABEL_22;
      if ( v115 == 3 )
      {
        if ( v22 > 0 )
          goto LABEL_27;
        if ( !v22 )
        {
          v35 = 1;
          goto LABEL_96;
        }
      }
LABEL_28:
      a2 = (__int64)"dl_open_worker_begin";
      v15 = (__int64)byte_45AA00;
      while ( 1 )
      {
        if ( v30 != -4 )
        {
          v37 = v30 + 1;
          if ( (unsigned int)v37 <= 0x38 )
          {
            a13 = (unsigned int)byte_45B4C0[v37];
            if ( (_DWORD)a13 == 1 )
            {
              v21 = byte_45B500[v37];
              if ( v21 > 0 )
                break;
            }
          }
        }
        if ( v19 == v18 )
          goto LABEL_26;
        v36 = (char)*--v18;
        --v16;
        v30 = byte_45AA00[v36];
      }
      v115 = 3;
      ++v16;
      ++v18;
      *v16 = v114;
    }
    else
    {
      if ( v22 == -2 )
      {
        v46 = *(_BYTE **)a1;
        do
        {
          v49 = (unsigned __int8)*v46;
          if ( !*v46 )
          {
            a2 = a1;
            *(_QWORD *)a1 = v46;
            goto LABEL_53;
          }
          v47 = v46;
          v48 = v49 == 32 || v49 == 9;
          ++v46;
        }
        while ( v48 );
        v22 = v49;
        switch ( v49 )
        {
          case 10:
          case 59:
            a2 = a1;
            *(_QWORD *)a1 = v47;
            goto LABEL_53;
          case 33:
            if ( v47[1] == 61 )
            {
              v91 = v47 + 2;
              v92 = 13;
LABEL_120:
              v50 = 7;
              v22 = 258;
              v31 = v30 + 7;
              v114 = v114 & 0xFFFFFFFF00000000LL | v92;
              a2 = a1;
              *(_QWORD *)a1 = v91;
            }
            else
            {
              a2 = a1;
              v50 = 6;
              v22 = 33;
              v31 = v30 + 6;
              *(_QWORD *)a1 = v46;
            }
            break;
          case 37:
            v89 = 5;
            goto LABEL_112;
          case 38:
          case 124:
            if ( (unsigned __int8)v47[1] != v49 )
              goto LABEL_92;
            a2 = a1;
            v50 = byte_45B3B0[v49];
            v31 = v30 + v50;
            *(_QWORD *)a1 = v47 + 2;
            break;
          case 40:
          case 41:
          case 58:
          case 63:
          case 110:
            a2 = a1;
            v50 = byte_45B3B0[v49];
            v31 = v30 + v50;
            *(_QWORD *)a1 = v46;
            break;
          case 42:
            v89 = 3;
            goto LABEL_112;
          case 43:
            v93 = 6;
            goto LABEL_125;
          case 45:
            v93 = 7;
LABEL_125:
            v50 = 9;
            v22 = 260;
            v31 = v30 + 9;
            v114 = v114 & 0xFFFFFFFF00000000LL | v93;
            a2 = a1;
            *(_QWORD *)a1 = v46;
            break;
          case 47:
            v89 = 4;
LABEL_112:
            v50 = 10;
            v22 = 261;
            v31 = v30 + 10;
            v114 = v114 & 0xFFFFFFFF00000000LL | v89;
            a2 = a1;
            *(_QWORD *)a1 = v46;
            break;
          case 48:
          case 49:
          case 50:
          case 51:
          case 52:
          case 53:
          case 54:
          case 55:
          case 56:
          case 57:
            v85 = (unsigned __int8)v47[1] - 48;
            v86 = v49 - 48;
            for ( i = (unsigned __int8)(v47[1] - 48); (unsigned int)i <= 9; v86 = v88 + 10 * v86 )
            {
              v87 = (unsigned __int8)*++v46;
              v88 = v85;
              v85 = v87 - 48;
              i = (unsigned __int8)(v87 - 48);
            }
            a2 = a1;
            v50 = 11;
            v22 = 262;
            v31 = v30 + 11;
            v114 = v86;
            *(_QWORD *)a1 = v46;
            break;
          case 60:
            v90 = 8;
            if ( v47[1] == 61 )
            {
              v46 = v47 + 2;
              v90 = 10;
            }
            goto LABEL_117;
          case 61:
            if ( v47[1] != 61 )
              goto LABEL_92;
            v91 = v47 + 2;
            v92 = 12;
            goto LABEL_120;
          case 62:
            v90 = 9;
            if ( v47[1] == 61 )
            {
              v46 = v47 + 2;
              v90 = 11;
            }
LABEL_117:
            v50 = 8;
            v22 = 259;
            v31 = v30 + 8;
            v114 = v114 & 0xFFFFFFFF00000000LL | v90;
            a2 = a1;
            *(_QWORD *)a1 = v46;
            break;
          default:
LABEL_92:
            a2 = a1;
            v50 = 2;
            v22 = 257;
            v31 = v30 + 2;
            *(_QWORD *)a1 = v46;
            break;
        }
      }
      else if ( v22 <= 0 )
      {
LABEL_53:
        v50 = 0;
        v22 = 0;
      }
      else
      {
        v50 = byte_45B3B0[v22];
        v31 = v30 + v50;
      }
      if ( (unsigned int)v31 > 0x38 || byte_45B4C0[v31] != v50 )
      {
        a13 = (unsigned int)byte_45B500[v21 + 64];
        if ( byte_45B500[v21 + 64] )
          goto LABEL_22;
        if ( v115 == 3 )
        {
          if ( !v22 )
          {
LABEL_26:
            v35 = 1;
            goto LABEL_96;
          }
LABEL_27:
          v22 = -2;
          goto LABEL_28;
        }
        goto LABEL_28;
      }
      v21 = byte_45B500[v31];
      a13 = (unsigned int)-v21;
      if ( v21 <= 0 )
      {
LABEL_22:
        v32 = (int)a13;
        v33 = (unsigned int)byte_45B500[(int)a13 + 96];
        v34 = (_QWORD *)v16[1 - (int)v33];
        switch ( (int)a13 )
        {
          case 2:
            if ( !*v16 )
              goto LABEL_26;
            *(_QWORD *)(a1 + 8) = *v16;
            goto LABEL_42;
          case 3:
            v60 = (_DWORD *)*(v16 - 2);
            v61 = (_DWORD *)*v16;
            v62 = (_DWORD *)*(v16 - 4);
            if ( v60 )
              v63 = v61 == 0;
            else
              v63 = 1;
            if ( v63 || v62 == 0 )
              goto LABEL_129;
            v118 = v33;
            v127 = (_DWORD *)*(v16 - 4);
            v128 = v60;
            v129 = v61;
            v130 = v23;
            v65 = (_QWORD *)sub_40B890(
                              0x20u,
                              a3,
                              a4,
                              a5,
                              a6,
                              a7,
                              a8,
                              a9,
                              a10,
                              (__int64)v61,
                              v33,
                              a12,
                              v60,
                              a14,
                              (void *)i);
            LODWORD(v33) = v118;
            v62 = v127;
            v60 = v128;
            v34 = v65;
            v61 = v129;
            v23 = v130;
            if ( !v65 )
            {
LABEL_129:
              v126 = v33;
              v127 = v62;
              v128 = v60;
              v129 = (_DWORD *)v23;
              sub_421BB0(v61, a3, a4, a5, a6, a7, a8, a9, a10);
              sub_421BB0(v128, v94, v95, v96, v97, v98, v99, v100, v101);
              sub_421BB0(v127, v102, v103, v104, v105, v106, v107, v108, v109);
              v23 = (__int64)v129;
              v34 = 0;
              LODWORD(v33) = v126;
            }
            else
            {
              v65[2] = v128;
              v65[3] = v61;
              *v65 = 0x1000000003LL;
              v65[1] = v62;
            }
            goto LABEL_42;
          case 4:
            v66 = (_DWORD *)*(v16 - 2);
            v67 = (_DWORD *)*v16;
            if ( v66 )
              v68 = v67 == 0;
            else
              v68 = 1;
            if ( v68 )
              goto LABEL_94;
            v119 = v33;
            v127 = (_DWORD *)*(v16 - 2);
            v128 = v67;
            v129 = (_DWORD *)v23;
            v69 = (_QWORD *)sub_40B890(
                              0x20u,
                              a3,
                              a4,
                              a5,
                              a6,
                              a7,
                              a8,
                              a9,
                              a10,
                              (__int64)v67,
                              v33,
                              a12,
                              v66,
                              a14,
                              (void *)i);
            v66 = v127;
            v67 = v128;
            v34 = v69;
            v23 = (__int64)v129;
            LODWORD(v33) = v119;
            if ( !v69 )
              goto LABEL_94;
            v69[2] = v128;
            *v69 = 0xF00000002LL;
            v69[1] = v66;
            goto LABEL_42;
          case 5:
            v66 = (_DWORD *)*(v16 - 2);
            v67 = (_DWORD *)*v16;
            if ( v66 )
              v70 = v67 == 0;
            else
              v70 = 1;
            if ( v70 )
              goto LABEL_94;
            v120 = v33;
            v127 = (_DWORD *)*(v16 - 2);
            v128 = v67;
            v129 = (_DWORD *)v23;
            v71 = (_QWORD *)sub_40B890(
                              0x20u,
                              a3,
                              a4,
                              a5,
                              a6,
                              a7,
                              a8,
                              a9,
                              a10,
                              (__int64)v67,
                              v33,
                              a12,
                              v66,
                              a14,
                              (void *)i);
            v66 = v127;
            v67 = v128;
            v34 = v71;
            v23 = (__int64)v129;
            LODWORD(v33) = v120;
            if ( !v71 )
            {
LABEL_94:
              v122 = v33;
              v127 = v66;
              v128 = (_DWORD *)v23;
              sub_421BB0(v67, a3, a4, a5, a6, a7, a8, a9, a10);
              sub_421BB0(v127, v74, v75, v76, v77, v78, v79, v80, v81);
              v23 = (__int64)v128;
              v34 = 0;
              LODWORD(v33) = v122;
            }
            else
            {
              v71[2] = v128;
              *v71 = 0xE00000002LL;
              v71[1] = v66;
            }
            goto LABEL_42;
          case 6:
            v39 = (_DWORD *)*(v16 - 2);
            v38 = (_DWORD *)*v16;
            LODWORD(v130) = *((_DWORD *)v16 - 2);
            if ( v39 )
              v51 = v38 == 0;
            else
              v51 = 1;
            if ( v51 )
              goto LABEL_64;
            goto LABEL_40;
          case 7:
          case 8:
          case 9:
            v38 = (_DWORD *)*v16;
            v39 = (_DWORD *)*(v16 - 2);
            v40 = *v16 == 0;
            LODWORD(v130) = *((_DWORD *)v16 - 2);
            v40 = v40 || v39 == 0;
            if ( v40 )
              goto LABEL_64;
LABEL_40:
            v116 = v33;
            v127 = v39;
            v128 = v38;
            v129 = (_DWORD *)v23;
            v41 = sub_40B890(0x20u, a3, a4, a5, a6, a7, a8, a9, a10, a2, v33, a12, v38, a14, (void *)i);
            v39 = v127;
            v38 = v128;
            v34 = (_QWORD *)v41;
            v23 = (__int64)v129;
            LODWORD(v33) = v116;
            if ( v41 )
            {
              *(_DWORD *)(v41 + 4) = v130;
              *(_DWORD *)v41 = 2;
              *(_QWORD *)(v41 + 8) = v39;
              *(_QWORD *)(v41 + 16) = v38;
            }
            else
            {
LABEL_64:
              v117 = v33;
              v127 = v39;
              v128 = (_DWORD *)v23;
              sub_421BB0(v38, a3, a4, a5, a6, a7, a8, a9, a10);
              sub_421BB0(v127, v52, v53, v54, v55, v56, v57, v58, v59);
              v23 = (__int64)v128;
              v34 = 0;
              LODWORD(v33) = v117;
            }
LABEL_42:
            a13 = (unsigned __int64)byte_45B3B0;
            a2 = (__int64)byte_456A50;
            v42 = &v18[-(int)v33];
            v43 = byte_45B500[v32 + 112];
            v16 = &v16[-(int)v33 + 1];
            *v16 = (unsigned __int64)v34;
            v44 = v43 - 16;
            v45 = *v42;
            v15 = (unsigned int)(byte_456A50[v44] + v45);
            if ( (unsigned int)v15 <= 0x38 && byte_45B4C0[(int)v15] == v45 )
            {
              a13 = (unsigned __int64)byte_45B500;
              v18 = v42 + 1;
              v21 = byte_45B500[(int)v15];
            }
            else
            {
              v18 = v42 + 1;
              v21 = byte_45B500[v44 + 128];
            }
            break;
          case 10:
            v72 = (_DWORD *)*v16;
            if ( !*v16 )
              goto LABEL_128;
            v121 = byte_45B500[(int)a13 + 96];
            v127 = (_DWORD *)*v16;
            v128 = (_DWORD *)v23;
            v73 = (_QWORD *)sub_40B890(
                              0x20u,
                              a3,
                              a4,
                              a5,
                              a6,
                              a7,
                              a8,
                              a9,
                              a10,
                              (__int64)v72,
                              v33,
                              a12,
                              (void *)a13,
                              a14,
                              (void *)i);
            LODWORD(v33) = v121;
            v72 = v127;
            v23 = (__int64)v128;
            v34 = v73;
            if ( v73 )
            {
              *v73 = 0x200000001LL;
              v73[1] = v72;
            }
            else
            {
LABEL_128:
              v125 = v33;
              v127 = (_DWORD *)v23;
              sub_421BB0(v72, a3, a4, a5, a6, a7, a8, a9, a10);
              v23 = (__int64)v127;
              v34 = 0;
              LODWORD(v33) = v125;
            }
            goto LABEL_42;
          case 11:
            v123 = byte_45B500[(int)a13 + 96];
            v127 = (_DWORD *)v23;
            v83 = (_QWORD *)sub_40B890(
                              0x20u,
                              a3,
                              a4,
                              a5,
                              a6,
                              a7,
                              a8,
                              a9,
                              a10,
                              a2,
                              v33,
                              a12,
                              (void *)a13,
                              a14,
                              (void *)i);
            v23 = (__int64)v127;
            v34 = v83;
            LODWORD(v33) = v123;
            if ( v83 )
              *v83 = 0;
            goto LABEL_42;
          case 12:
            v124 = byte_45B500[(int)a13 + 96];
            v127 = (_DWORD *)v23;
            v84 = (_QWORD *)sub_40B890(
                              0x20u,
                              a3,
                              a4,
                              a5,
                              a6,
                              a7,
                              a8,
                              a9,
                              a10,
                              a2,
                              v33,
                              a12,
                              (void *)a13,
                              a14,
                              (void *)i);
            v23 = (__int64)v127;
            v34 = v84;
            LODWORD(v33) = v124;
            if ( v84 )
            {
              v84[1] = *v16;
              *v84 = 0x100000000LL;
            }
            goto LABEL_42;
          case 13:
            v34 = (_QWORD *)*(v16 - 1);
            goto LABEL_42;
          default:
            goto LABEL_42;
        }
      }
      else
      {
        a2 = v115;
        ++v16;
        v15 = v114;
        ++v18;
        v22 = -2;
        *v16 = v114;
        v115 -= v115 != 0;
      }
    }
  }
  v24 = v18 - v19;
  if ( v20 <= 9999 )
  {
    v20 *= 2;
    if ( v20 > 10000 )
      v20 = 10000;
    v25 = sub_40B890(9 * v20 + 7, a3, a4, a5, a6, a7, a8, a9, a10, a2, v15, a12, (void *)a13, a14, (void *)i);
    v26 = (_BYTE *)v25;
    if ( v25 )
    {
      j_ifunc_40DC90(v25, v19, v24 + 1);
      v27 = 8 * (v24 + 1);
      v28 = v20 + 14;
      if ( v20 + 7 >= 0 )
        v28 = v20 + 7;
      v29 = v17;
      v17 = &v26[v28 & 0xFFFFFFFFFFFFFFF8LL];
      j_ifunc_40DC90(v17, v29, v27);
      if ( v19 != v133 )
        sub_40C1A0((unsigned __int64)v19, a3, a4, a5, a6, a7, a8, a9, a10);
      v23 = v20 - 1;
      v18 = &v26[v24];
      v16 = (unsigned __int64 *)&v17[v27 - 8];
      v19 = v26;
      if ( v18 >= &v26[v20 - 1] )
      {
        v35 = 1;
        goto LABEL_97;
      }
      goto LABEL_12;
    }
  }
  v35 = 2;
LABEL_96:
  if ( v19 == v133 )
    goto LABEL_98;
LABEL_97:
  sub_40C1A0((unsigned __int64)v19, a3, a4, a5, a6, a7, a8, a9, a10);
LABEL_98:
  if ( v134 == qword_48DD60 )
    return v35;
  v110 = sub_412340();
  return sub_422520(v110, v111, v112);
}
