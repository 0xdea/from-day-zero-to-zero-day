__int64 __fastcall sub_40A0A0(
        _QWORD *a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        long double a5,
        double a6,
        double a7,
        double a8,
        double a9,
        double a10,
        double a11,
        double a12,
        __int64 a13,
        __int64 a14)
{
  char *v14; // x22
  unsigned __int64 v17; // x19
  unsigned __int64 v18; // x19
  unsigned __int64 v19; // x19
  unsigned int v20; // w26
  __int64 v21; // x23
  _QWORD *v22; // x24
  unsigned __int64 v23; // x25
  atomic_ullong *v24; // x23
  unsigned __int64 v25; // x20
  unsigned __int64 v26; // x25
  unsigned __int64 v27; // x19
  __int64 v28; // x0
  unsigned __int64 v29; // x0
  __int64 v30; // x19
  unsigned __int64 v31; // x4
  unsigned __int64 v32; // x5
  __int64 v33; // x1
  unsigned __int64 v34; // x6
  unsigned __int16 v35; // w0
  unsigned __int64 v36; // x27
  __int64 v37; // x0
  unsigned __int64 v38; // x28
  unsigned __int64 v39; // x2
  unsigned __int64 v40; // x1
  unsigned __int64 v41; // x0
  __int64 v42; // x0
  unsigned __int64 StatusReg; // x25
  unsigned __int64 v44; // x27
  unsigned __int64 v45; // x24
  _QWORD *v46; // x3
  _QWORD *v47; // x23
  unsigned __int64 v48; // x4
  __int64 v49; // x6
  __int64 v50; // x7
  unsigned __int64 v51; // x2
  unsigned __int64 *v52; // x5
  unsigned __int64 v53; // x1
  unsigned __int64 v54; // x0
  _QWORD *v56; // x1
  bool v57; // zf
  __int64 v58; // x5
  __int64 v59; // x0
  _QWORD *v60; // x0
  _QWORD *v61; // x0
  _QWORD *v62; // x8
  _QWORD *v63; // t1
  _QWORD *v64; // x1
  unsigned __int64 v65; // x2
  unsigned __int64 v66; // x9
  __int64 v67; // x2
  unsigned __int64 v68; // x0
  __int64 v69; // x0
  unsigned __int64 v70; // x2
  unsigned __int64 v71; // x1
  __int64 v72; // x1
  _QWORD *v73; // x1
  _QWORD *v74; // x20
  __int64 v75; // x0
  __int64 v76; // x5
  unsigned __int64 v77; // x4
  unsigned __int64 v78; // x3
  unsigned int v79; // w7
  _QWORD *v80; // x2
  int v81; // w1
  unsigned __int64 v82; // x2
  __int64 v83; // x1
  unsigned __int64 v84; // x0
  __int64 v85; // x1
  unsigned __int16 v86; // w0
  _QWORD *v88; // x1
  _QWORD *v89; // t1
  bool v90; // cf
  _QWORD *v91; // x1
  _QWORD *v92; // x0
  _QWORD *v93; // x1
  _QWORD *v94; // t1
  __int64 v95; // x6
  _QWORD *v96; // x2
  int v97; // w1
  __int64 v98; // x3
  _QWORD *v99; // x26
  __int64 v100; // x8
  __int64 v101; // x7
  __int64 v102; // x12
  __int64 v103; // x0
  __int64 v104; // x8
  __int64 v105; // x9
  unsigned int v106; // w0
  char *v107; // x1
  __int64 v108; // x1
  unsigned __int64 v109; // x0
  unsigned __int64 v110; // x26
  unsigned __int64 v111; // x0
  __int64 v112; // x0
  unsigned __int64 v113; // x5
  unsigned __int64 i; // x20
  unsigned __int64 v115; // x24
  double v116; // d0
  double v117; // d1
  double v118; // d2
  double v119; // d3
  double v120; // d4
  double v121; // d5
  double v122; // d6
  double v123; // d7
  __int64 v124; // x1
  _QWORD *v125; // x0
  __int64 v126; // x0
  __int64 v127; // x2
  __int64 v128; // x24
  __int64 v129; // x8
  unsigned __int64 v130; // x26
  _QWORD *v131; // x4
  unsigned __int64 v132; // x2
  __int64 v133; // x2
  unsigned __int64 v134; // x24
  double v135; // d0
  double v136; // d1
  double v137; // d2
  double v138; // d3
  double v139; // d4
  double v140; // d5
  double v141; // d6
  double v142; // d7
  __int64 v143; // x1
  _QWORD *v144; // x0
  __int64 v145; // x0
  unsigned __int64 v146; // [xsp+68h] [xbp+68h]
  __int64 v147; // [xsp+78h] [xbp+78h]

  if ( (a2 & 0x8000000000000000LL) != 0 )
  {
    *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40) = 12;
    return 0;
  }
  v14 = (char *)&unk_496000;
  v17 = a2;
  if ( (byte_4966A1 & 1) != 0 )
    v17 = (a2 + 15) & 0xFFFFFFFFFFFFFFF0LL;
  v18 = v17 + 23;
  if ( v18 <= 0x1F )
  {
    if ( a1 )
    {
      if ( (unsigned __int8)byte_496688 <= 0x1Fu )
      {
        v72 = 16;
        v20 = 2;
        v19 = 32;
        goto LABEL_72;
      }
      v21 = 2;
      v22 = a1;
      v20 = 2;
      v19 = 32;
      v23 = a1[2];
      if ( v23 )
        goto LABEL_8;
      goto LABEL_85;
    }
    v19 = 32;
    goto LABEL_97;
  }
  v19 = v18 & 0xFFFFFFFFFFFFFFF0LL;
  if ( !a1 )
  {
LABEL_97:
    v84 = sub_4098C0(v19, 0, a5, a6, a7, a8, a9, a10, a11, a12, a3, a4, a13, a14);
    v25 = v84;
    if ( v84 )
    {
      if ( !dword_49668C )
        return v25;
      v82 = a2;
      v83 = dword_49668C ^ 0xFFu;
      goto LABEL_100;
    }
    return 0;
  }
  if ( (unsigned __int8)byte_496688 >= v19 )
  {
    v20 = (unsigned int)v19 >> 4;
    v21 = (unsigned int)v19 >> 4;
    v22 = &a1[((unsigned int)v19 >> 4) - 2];
    v23 = v22[2];
    if ( v23 )
    {
LABEL_8:
      if ( (v23 & 0xF) != 0 )
        sub_407374(
          (__int64)"malloc(): unaligned fastbin chunk detected 2",
          *(double *)&a5,
          a6,
          a7,
          a8,
          a9,
          a10,
          a11,
          a12);
      v24 = (atomic_ullong *)&a1[v21];
      if ( byte_490F08 )
      {
        v25 = v23 + 16;
        v22[2] = *(_QWORD *)(v23 + 16) ^ ((v23 + 16) >> 12);
      }
      else
      {
        while ( 1 )
        {
          v69 = *(_QWORD *)(v23 + 16);
          v25 = v23 + 16;
          v70 = (v23 + 16) >> 12;
          v71 = v70 ^ v69;
          if ( v70 != v69 && (v71 & 0xF) != 0 )
LABEL_26:
            sub_407374(
              (__int64)"malloc(): unaligned fastbin chunk detected",
              *(double *)&a5,
              a6,
              a7,
              a8,
              a9,
              a10,
              a11,
              a12);
          v68 = _aarch64_cas8_acq(v23, v71, v24);
          if ( v23 == v68 )
            break;
          if ( !v68 )
            goto LABEL_85;
          v23 = v68;
        }
      }
      if ( v20 != (unsigned int)*(_QWORD *)(v23 + 8) >> 4 )
        sub_407374((__int64)"malloc(): memory corruption (fast)", *(double *)&a5, a6, a7, a8, a9, a10, a11, a12);
      v26 = _ReadStatusReg(TPIDR_EL0) + 48;
      v27 = (v19 - 17) >> 4;
      v28 = *(_QWORD *)(v26 + 8);
      if ( !v28
        || qword_490638 <= v27
        || (v29 = *(unsigned __int16 *)(v28 + 2 * v27), v147 = 8 * v27, v30 = 2 * v27, v29 >= qword_490648) )
      {
LABEL_90:
        v81 = dword_49668C;
        if ( !dword_49668C )
          return v25;
        goto LABEL_83;
      }
      while ( 1 )
      {
        v36 = v22[2];
        if ( !v36 )
          goto LABEL_90;
        if ( (v36 & 0xF) != 0 )
          sub_407374(
            (__int64)"malloc(): unaligned fastbin chunk detected 3",
            *(double *)&a5,
            a6,
            a7,
            a8,
            a9,
            a10,
            a11,
            a12);
        if ( byte_490F08 )
        {
          v31 = v36 + 16;
          v32 = (v36 + 16) >> 12;
          v22[2] = *(_QWORD *)(v36 + 16) ^ v32;
        }
        else
        {
          v37 = *(_QWORD *)(v36 + 16);
          v38 = v36 + 16;
          v39 = (v36 + 16) >> 12;
          v40 = v39 ^ v37;
          if ( v39 != v37 )
          {
LABEL_25:
            if ( (v40 & 0xF) != 0 )
              goto LABEL_26;
          }
          while ( 1 )
          {
            v41 = _aarch64_cas8_acq(v36, v40, v24);
            if ( v36 == v41 )
              break;
            if ( !v41 )
              goto LABEL_90;
            v36 = v41;
            v38 = v41 + 16;
            v42 = *(_QWORD *)(v41 + 16);
            v40 = (v38 >> 12) ^ v42;
            if ( v38 >> 12 != v42 )
              goto LABEL_25;
          }
          v31 = v38;
          v32 = v38 >> 12;
        }
        v33 = *(_QWORD *)(v26 + 8);
        v34 = qword_490648;
        *(_QWORD *)(v36 + 24) = qword_496698;
        *(_QWORD *)(v36 + 16) = *(_QWORD *)(v33 + v147 + 128) ^ v32;
        *(_QWORD *)(v33 + v147 + 128) = v31;
        v35 = *(_WORD *)(v33 + v30) + 1;
        *(_WORD *)(v33 + v30) = v35;
        if ( v34 <= v35 )
          goto LABEL_90;
      }
    }
LABEL_85:
    v72 = 2 * v20 + 12;
    goto LABEL_72;
  }
  if ( v19 <= 0x3FF )
  {
    v20 = (unsigned int)v19 >> 4;
    v72 = ((unsigned int)v19 >> 3) + 12;
LABEL_72:
    v73 = &a1[v72 - 2];
    v74 = (_QWORD *)v73[3];
    if ( v73 != v74 )
    {
      v75 = v74[3];
      if ( *(_QWORD **)(v75 + 16) != v74 )
        sub_407374(
          (__int64)"malloc(): smallbin double linked list corrupted",
          *(double *)&a5,
          a6,
          a7,
          a8,
          a9,
          a10,
          a11,
          a12);
      *(_QWORD *)((char *)v74 + v19 + 8) |= 1uLL;
      v73[3] = v75;
      *(_QWORD *)(v75 + 16) = v73;
      if ( a1 != (_QWORD *)&dword_490670 )
        v74[1] |= 4uLL;
      v76 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 48 + 8);
      if ( v76 )
      {
        v77 = (v19 - 17) >> 4;
        if ( qword_490638 > v77 )
        {
          v78 = qword_490648;
          v79 = *(unsigned __int16 *)(v76 + 2 * v77);
          while ( v79 < v78 )
          {
            v80 = (_QWORD *)v73[3];
            if ( v73 == v80 )
              break;
            if ( v80 )
            {
              v102 = v80[3];
              *(_QWORD *)((char *)v80 + v19 + 8) |= 1uLL;
              if ( a1 != (_QWORD *)&dword_490670 )
                v80[1] |= 4uLL;
              v103 = v76 + 8 * v77;
              v79 = (unsigned __int16)(v79 + 1);
              v104 = *(_QWORD *)(v103 + 128);
              v73[3] = v102;
              v105 = qword_496698;
              *(_QWORD *)(v102 + 16) = v73;
              v80[2] = v104 ^ ((unsigned __int64)(v80 + 2) >> 12);
              v80[3] = v105;
              *(_QWORD *)(v103 + 128) = v80 + 2;
              *(_WORD *)(v76 + 2 * v77) = v79;
            }
          }
        }
      }
      v25 = (unsigned __int64)(v74 + 2);
      v81 = dword_49668C;
      if ( !dword_49668C )
        return v25;
      goto LABEL_83;
    }
    goto LABEL_33;
  }
  v20 = (v19 >> 6) + 48;
  if ( v19 > 0xC3F )
  {
    if ( v19 >> 9 > 0x14 )
    {
      if ( v19 >> 12 <= 0xA )
      {
        v20 = (v19 >> 12) + 110;
      }
      else if ( v19 >> 15 > 4 )
      {
        v110 = v19 >> 18;
        if ( v19 >> 18 > 2 )
          LODWORD(v110) = 2;
        v20 = v110 + 124;
      }
      else
      {
        v20 = (v19 >> 15) + 119;
      }
    }
    else
    {
      v20 = (v19 >> 9) + 91;
    }
  }
  if ( *((_DWORD *)a1 + 2) )
    sub_407D40((__int64)a1);
LABEL_33:
  StatusReg = _ReadStatusReg(TPIDR_EL0);
  v44 = 0;
  v45 = (v19 - 17) >> 4;
  if ( *(_QWORD *)(StatusReg + 48 + 8) )
  {
    if ( qword_490638 <= v45 )
      v44 = 0;
    else
      v44 = v19;
  }
  v46 = (_QWORD *)a1[15];
  v47 = a1 + 12;
  v48 = 0;
  if ( v46 == a1 + 12 )
    goto LABEL_111;
LABEL_38:
  v49 = 0;
  v50 = 0;
  do
  {
    while ( 1 )
    {
      v51 = v46[1] & 0xFFFFFFFFFFFFFFF8LL;
      v52 = (_QWORD *)((char *)v46 + v51);
      if ( v51 <= 0x10 || (v53 = a1[273], v53 < v51) )
        sub_407374((__int64)"malloc(): invalid size (unsorted)", *(double *)&a5, a6, a7, a8, a9, a10, a11, a12);
      v54 = v52[1];
      if ( v53 < v54 || v54 <= 0xF )
        sub_407374((__int64)"malloc(): invalid next size (unsorted)", *(double *)&a5, a6, a7, a8, a9, a10, a11, a12);
      if ( (*v52 & 0xFFFFFFFFFFFFFFF8LL) != v51 )
        sub_407374(
          (__int64)"malloc(): mismatching next->prev_size (unsorted)",
          *(double *)&a5,
          a6,
          a7,
          a8,
          a9,
          a10,
          a11,
          a12);
      v56 = (_QWORD *)v46[3];
      if ( (_QWORD *)v56[2] != v46 || (_QWORD *)v46[2] != v47 )
        sub_407374(
          (__int64)"malloc(): unsorted double linked list corrupted",
          *(double *)&a5,
          a6,
          a7,
          a8,
          a9,
          a10,
          a11,
          a12);
      if ( (v54 & 1) != 0 )
        sub_407374(
          (__int64)"malloc(): invalid next->prev_inuse (unsorted)",
          *(double *)&a5,
          a6,
          a7,
          a8,
          a9,
          a10,
          a11,
          a12);
      v57 = v19 <= 0x3FF && v56 == v47;
      if ( v57 && (_QWORD *)a1[13] == v46 )
        break;
      a1[15] = v56;
      v56[2] = v47;
      if ( v19 != v51 )
      {
        if ( v51 <= 0x3FF )
          goto LABEL_101;
        if ( v51 <= 0xC3F )
        {
          v58 = (unsigned int)(v51 >> 6) + 48;
          v59 = 2 * (int)v58 + 12;
        }
        else if ( v51 >> 9 > 0x14 )
        {
          if ( v51 >> 12 > 0xA )
          {
            if ( v51 >> 15 > 4 )
            {
              v113 = v51 >> 18;
              if ( v51 >> 18 > 2 )
                LODWORD(v113) = 2;
              v58 = (unsigned int)(v113 + 124);
              v59 = 2 * (int)v58 + 12;
            }
            else
            {
              v58 = (unsigned int)(v51 >> 15) + 119;
              v59 = 2 * (int)v58 + 12;
            }
          }
          else
          {
            v58 = (unsigned int)(v51 >> 12) + 110;
            v59 = 2 * (int)v58 + 12;
          }
        }
        else
        {
          v58 = (unsigned int)(v51 >> 9) + 91;
          v59 = 2 * (int)v58 + 12;
        }
        goto LABEL_59;
      }
LABEL_86:
      v52[1] = v54 | 1;
      if ( a1 != (_QWORD *)&dword_490670 )
        v46[1] |= 4uLL;
      v25 = (unsigned __int64)(v46 + 2);
      if ( !v44 )
        goto LABEL_90;
      v85 = *(_QWORD *)(StatusReg + 56);
      v86 = *(_WORD *)(v85 + 2 * v45);
      if ( qword_490648 <= (unsigned __int64)v86 )
        goto LABEL_90;
      v100 = 8 * v45;
      v101 = v85 + 8 * v45;
      v46[3] = qword_496698;
      v46[2] = *(_QWORD *)(v101 + 128) ^ (v25 >> 12);
      v46 = (_QWORD *)a1[15];
      *(_QWORD *)(v101 + 128) = v25;
      *(_WORD *)(v85 + 2 * v45) = v86 + 1;
      if ( v46 == v47 )
        goto LABEL_209;
      v50 = 1;
    }
    if ( v19 + 32 < v51 )
    {
      v131 = (_QWORD *)((char *)v46 + v19);
      a1[14] = (char *)v46 + v19;
      a1[15] = (char *)v46 + v19;
      v132 = v51 - v19;
      a1[13] = (char *)v46 + v19;
      v131[2] = v47;
      v131[3] = v47;
      if ( v132 > 0x3FF )
      {
        v131[4] = 0;
        v131[5] = 0;
      }
      v25 = (unsigned __int64)(v46 + 2);
      v46[1] = v19 | (4LL * (a1 != (_QWORD *)&dword_490670)) | 1;
      v131[1] = v132 | 1;
      *v52 = v132;
      goto LABEL_216;
    }
    a1[15] = v56;
    v56[2] = v47;
    if ( v19 == v51 )
      goto LABEL_86;
    if ( v51 <= 0x3FF )
    {
LABEL_101:
      LODWORD(v58) = (unsigned int)v51 >> 4;
      v88 = &a1[2 * ((unsigned int)v51 >> 4) + 12];
      v89 = (_QWORD *)*v88;
      v64 = v88 - 2;
      v61 = v89;
      goto LABEL_102;
    }
    v59 = 140;
    v58 = 64;
LABEL_59:
    v60 = &a1[v59];
    v63 = (_QWORD *)*v60;
    v61 = v60 - 2;
    v62 = v63;
    if ( v61 == v63 )
    {
      v64 = v61;
      v46[4] = v46;
      v46[5] = v46;
    }
    else
    {
      v64 = (_QWORD *)v61[3];
      v65 = v51 | 1;
      v66 = v64[1];
      if ( (v66 & 4) != 0 )
      {
        a5 = sub_41F250(
               "chunk_main_arena (bck->bk)",
               "malloc.c",
               4179,
               "_int_malloc",
               v48,
               v58,
               v49,
               v50,
               *(double *)&a5,
               a6,
               a7,
               a8,
               a9,
               a10,
               a11,
               a12);
LABEL_241:
        sub_41F250(
          "chunk_main_arena (fwd)",
          "malloc.c",
          4192,
          "_int_malloc",
          v48,
          v58,
          v49,
          v50,
          *(double *)&a5,
          a6,
          a7,
          a8,
          a9,
          a10,
          a11,
          a12);
        return sub_40AF50(v145);
      }
      if ( v66 <= v65 )
      {
        v111 = v62[1];
        if ( (v111 & 4) != 0 )
          goto LABEL_241;
        while ( v65 < v111 )
        {
          v62 = (_QWORD *)v62[4];
          v111 = v62[1];
          if ( (v111 & 4) != 0 )
          {
            a5 = sub_41F250(
                   "chunk_main_arena (fwd)",
                   "malloc.c",
                   4196,
                   "_int_malloc",
                   v48,
                   v58,
                   v49,
                   v50,
                   *(double *)&a5,
                   a6,
                   a7,
                   a8,
                   a9,
                   a10,
                   a11,
                   a12);
LABEL_221:
            for ( i = v92[5]; ; i = *(_QWORD *)(i + 40) )
            {
              v133 = *(_QWORD *)(i + 8);
              v14 = (char *)(v133 & 0xFFFFFFFFFFFFFFF8LL);
              if ( v19 <= (v133 & 0xFFFFFFFFFFFFFFF8LL) )
                break;
            }
            if ( v93[3] != i && v133 == *(_QWORD *)(*(_QWORD *)(i + 16) + 8LL) )
              i = *(_QWORD *)(i + 16);
            v134 = (unsigned __int64)&v14[-v19];
            sub_407C70((_QWORD *)i, *(double *)&a5, a6, a7, a8, a9, a10, a11, a12);
            if ( (unsigned __int64)&v14[-v19] > 0x1F )
            {
              v143 = a1[14];
              v144 = (_QWORD *)(i + v19);
              if ( *(_QWORD **)(v143 + 24) != v47 )
                sub_407374(
                  (__int64)"malloc(): corrupted unsorted chunks",
                  v135,
                  v136,
                  v137,
                  v138,
                  v139,
                  v140,
                  v141,
                  v142);
              v144[2] = v143;
              v144[3] = v47;
              a1[14] = v144;
              *(_QWORD *)(v143 + 24) = v144;
              if ( v134 > 0x3FF )
              {
                v144[4] = 0;
                v144[5] = 0;
              }
              *(_QWORD *)(i + 8) = v19 | (4LL * (a1 != (_QWORD *)&dword_490670)) | 1;
              v144[1] = v134 | 1;
              *(_QWORD *)&v14[i] = v134;
LABEL_232:
              v25 = i + 16;
LABEL_216:
              sub_4075F4();
              return v25;
            }
LABEL_238:
            *(_QWORD *)&v14[i + 8] |= 1uLL;
            if ( a1 != (_QWORD *)&dword_490670 )
              *(_QWORD *)(i + 8) |= 4uLL;
            goto LABEL_232;
          }
        }
        if ( v65 == v111 )
        {
          v61 = (_QWORD *)v62[2];
        }
        else
        {
          v112 = v62[5];
          v46[4] = v62;
          v46[5] = v112;
          if ( *(_QWORD **)(v112 + 32) != v62 )
            sub_407374(
              (__int64)"malloc(): largebin double linked list corrupted (nextsize)",
              *(double *)&a5,
              a6,
              a7,
              a8,
              a9,
              a10,
              a11,
              a12);
          v62[5] = v46;
          v61 = v62;
          *(_QWORD *)(v46[5] + 32LL) = v46;
        }
        v64 = (_QWORD *)v61[3];
        if ( (_QWORD *)v64[2] != v61 )
          sub_407374(
            (__int64)"malloc(): largebin double linked list corrupted (bk)",
            *(double *)&a5,
            a6,
            a7,
            a8,
            a9,
            a10,
            a11,
            a12);
      }
      else
      {
        v67 = v62[5];
        v46[4] = v62;
        v46[5] = v67;
        *(_QWORD *)(v67 + 32) = v46;
        v62[5] = v46;
      }
    }
LABEL_102:
    ++v48;
    *((_DWORD *)a1 + ((int)v58 >> 5) + 536) |= 1 << v58;
    v46[2] = v61;
    v46[3] = v64;
    v61[3] = v46;
    v64[2] = v46;
    if ( (_DWORD)v50 )
    {
      if ( qword_490650 )
        v90 = qword_490650 >= v48;
      else
        v90 = 1;
      if ( !v90 )
      {
        v126 = *(_QWORD *)(StatusReg + 56);
        v127 = v126 + 8 * v45;
        v25 = *(_QWORD *)(v127 + 128);
        if ( (v25 & 0xF) == 0 )
        {
          v128 = 2 * v45;
          *(_QWORD *)(v127 + 128) = *(_QWORD *)v25 ^ (v25 >> 12);
          goto LABEL_203;
        }
        goto LABEL_235;
      }
      v49 = (unsigned int)(v49 + 1);
      if ( (int)v49 > 9999 )
        goto LABEL_208;
    }
    else
    {
      v49 = (unsigned int)(v49 + 1);
      if ( (int)v49 > 9999 )
        goto LABEL_111;
    }
    v46 = (_QWORD *)a1[15];
  }
  while ( v46 != v47 );
  if ( (_DWORD)v50 )
    goto LABEL_208;
LABEL_111:
  if ( v19 <= 0x3FF )
    goto LABEL_114;
LABEL_112:
  v91 = &a1[2 * ((v20 - 1) & 0x7FFFFFFF) + 14];
  v94 = (_QWORD *)*v91;
  v93 = v91 - 2;
  v92 = v94;
  if ( v94 != v93 && v19 <= v92[1] )
    goto LABEL_221;
LABEL_114:
  v95 = (v20 + 1) >> 5;
  v96 = &a1[2 * v20 + 12];
  v97 = 1 << (v20 + 1);
  v98 = *((unsigned int *)a1 + v95 + 536);
  while ( 2 )
  {
    if ( (unsigned int)v98 > v97 - 1 )
      goto LABEL_118;
    v106 = v95 + 1;
    v107 = (char *)a1 + 4 * (unsigned int)(v95 + 1);
    while ( 1 )
    {
      v95 = v106;
      if ( v106 > 3 )
      {
        v108 = a1[12];
        v109 = *(_QWORD *)(v108 + 8) & 0xFFFFFFFFFFFFFFF8LL;
        if ( a1[273] < v109 )
          sub_407374((__int64)"malloc(): corrupted top size", *(double *)&a5, a6, a7, a8, a9, a10, a11, a12);
        if ( v19 + 32 <= v109 )
        {
          a1[12] = v108 + v19;
          v25 = v108 + 16;
          *(_QWORD *)(v108 + 8) = v19 | (4LL * (a1 != (_QWORD *)&dword_490670)) | 1;
          *(_QWORD *)(v108 + v19 + 8) = (v109 - v19) | 1;
          goto LABEL_216;
        }
        v146 = v48;
        if ( !*((_DWORD *)a1 + 2) )
        {
          v25 = sub_4098C0(v19, a1, a5, a6, a7, a8, a9, a10, a11, a12, v19 + 32, v98, v48, -16);
          if ( !v25 )
            return v25;
          goto LABEL_216;
        }
        sub_407D40((__int64)a1);
        v48 = v146;
        if ( v19 > 0x3FF )
        {
          if ( v19 > 0xC3F )
          {
            if ( v19 >> 9 > 0x14 )
            {
              if ( v19 >> 12 > 0xA )
              {
                v46 = (_QWORD *)a1[15];
                if ( v19 >> 15 > 4 )
                {
                  v130 = v19 >> 18;
                  if ( v19 >> 18 > 2 )
                    LODWORD(v130) = 2;
                  v20 = v130 + 124;
                  if ( v46 != v47 )
                    goto LABEL_38;
                }
                else
                {
                  v20 = (v19 >> 15) + 119;
                  if ( v46 != v47 )
                    goto LABEL_38;
                }
              }
              else
              {
                v46 = (_QWORD *)a1[15];
                v20 = (v19 >> 12) + 110;
                if ( v46 != v47 )
                  goto LABEL_38;
              }
            }
            else
            {
              v46 = (_QWORD *)a1[15];
              v20 = (v19 >> 9) + 91;
              if ( v46 != v47 )
                goto LABEL_38;
            }
          }
          else
          {
            v46 = (_QWORD *)a1[15];
            v20 = (v19 >> 6) + 48;
            if ( v46 != v47 )
              goto LABEL_38;
          }
          goto LABEL_112;
        }
        v46 = (_QWORD *)a1[15];
        v20 = (unsigned int)v19 >> 4;
        if ( v46 != v47 )
          goto LABEL_38;
        goto LABEL_114;
      }
      v98 = *((unsigned int *)v107 + 536);
      v107 += 4;
      if ( (_DWORD)v98 )
        break;
      ++v106;
    }
    v97 = 1;
    v96 = &a1[64 * v106 + 10];
LABEL_118:
    if ( (v97 & (unsigned int)v98) != 0 )
    {
      v99 = (_QWORD *)v96[3];
      if ( v96 == v99 )
      {
        v98 = (unsigned int)v98 & ~v97;
        v96 += 2;
        v97 *= 2;
        *((_DWORD *)a1 + (unsigned int)v95 + 536) = v98;
        continue;
      }
      i = v99[1] & 0xFFFFFFFFFFFFFFF8LL;
      if ( v19 > i )
      {
        sub_41F250(
          "(unsigned long) (size) >= (unsigned long) (nb)",
          "malloc.c",
          4376,
          "_int_malloc",
          v48,
          -16,
          v95,
          *(double *)&a5,
          a6,
          a7,
          a8,
          a9,
          a10,
          a11,
          a12);
        goto LABEL_238;
      }
      v115 = i - v19;
      sub_407C70((_QWORD *)v96[3], *(double *)&a5, a6, a7, a8, a9, a10, a11, a12);
      if ( i - v19 <= 0x1F )
      {
        *(_QWORD *)((char *)v99 + i + 8) |= 1uLL;
        if ( a1 != (_QWORD *)&dword_490670 )
          v99[1] |= 4uLL;
      }
      else
      {
        v124 = a1[14];
        v125 = (_QWORD *)((char *)v99 + v19);
        if ( *(_QWORD **)(v124 + 24) != v47 )
          sub_407374((__int64)"malloc(): corrupted unsorted chunks 2", v116, v117, v118, v119, v120, v121, v122, v123);
        v125[2] = v124;
        v125[3] = v47;
        a1[14] = v125;
        *(_QWORD *)(v124 + 24) = v125;
        if ( v19 <= 0x3FF )
          a1[13] = v125;
        if ( v115 > 0x3FF )
        {
          v125[4] = 0;
          v125[5] = 0;
        }
        v99[1] = v19 | (4LL * (a1 != (_QWORD *)&dword_490670)) | 1;
        v125[1] = v115 | 1;
        *(_QWORD *)((char *)v99 + i) = v115;
      }
      v25 = (unsigned __int64)(v99 + 2);
      v81 = dword_49668C;
      if ( !dword_49668C )
        return v25;
LABEL_83:
      v82 = a2;
      v83 = v81 ^ 0xFFu;
      v84 = v25;
LABEL_100:
      ifunc_40DE70(v84, v83, v82);
      return v25;
    }
    break;
  }
  v96 += 2;
  v97 *= 2;
  if ( v97 )
    goto LABEL_118;
  a5 = sub_41F250(
         "bit != 0",
         "malloc.c",
         4357,
         "_int_malloc",
         v48,
         -16,
         v95,
         *(double *)&a5,
         a6,
         a7,
         a8,
         a9,
         a10,
         a11,
         a12);
LABEL_208:
  v100 = 8 * v45;
LABEL_209:
  v126 = *(_QWORD *)(StatusReg + 56);
  v129 = v126 + v100;
  v25 = *(_QWORD *)(v129 + 128);
  if ( (v25 & 0xF) != 0 )
LABEL_235:
    sub_407374((__int64)"malloc(): unaligned tcache chunk detected", *(double *)&a5, a6, a7, a8, a9, a10, a11, a12);
  v128 = 2 * v45;
  *(_QWORD *)(v129 + 128) = *(_QWORD *)v25 ^ (v25 >> 12);
LABEL_203:
  --*(_WORD *)(v126 + v128);
  *(_QWORD *)(v25 + 8) = 0;
  return v25;
}
