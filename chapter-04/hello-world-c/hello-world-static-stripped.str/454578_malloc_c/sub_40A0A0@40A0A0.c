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
        double a12)
{
  char *v12; // x22
  unsigned __int64 v15; // x19
  unsigned __int64 v16; // x19
  unsigned __int64 v17; // x19
  unsigned int v18; // w26
  __int64 v19; // x23
  _QWORD *v20; // x24
  unsigned __int64 v21; // x25
  atomic_ullong *v22; // x23
  unsigned __int64 v23; // x20
  unsigned __int64 v24; // x25
  unsigned __int64 v25; // x19
  __int64 v26; // x0
  unsigned __int64 v27; // x0
  __int64 v28; // x19
  unsigned __int64 v29; // x4
  unsigned __int64 v30; // x5
  __int64 v31; // x1
  unsigned __int64 v32; // x6
  unsigned __int16 v33; // w0
  unsigned __int64 v34; // x27
  __int64 v35; // x0
  unsigned __int64 v36; // x28
  unsigned __int64 v37; // x2
  unsigned __int64 v38; // x1
  unsigned __int64 v39; // x0
  __int64 v40; // x0
  unsigned __int64 StatusReg; // x25
  unsigned __int64 v42; // x27
  unsigned __int64 v43; // x24
  _QWORD *v44; // x3
  _QWORD *v45; // x23
  unsigned __int64 v46; // x4
  int v47; // w6
  int v48; // w7
  unsigned __int64 v49; // x2
  unsigned __int64 *v50; // x5
  unsigned __int64 v51; // x1
  unsigned __int64 v52; // x0
  _QWORD *v54; // x1
  bool v55; // zf
  signed int v56; // w5
  __int64 v57; // x0
  _QWORD *v58; // x0
  _QWORD *v59; // x0
  _QWORD *v60; // x8
  _QWORD *v61; // t1
  _QWORD *v62; // x1
  unsigned __int64 v63; // x2
  unsigned __int64 v64; // x9
  __int64 v65; // x2
  unsigned __int64 v66; // x0
  __int64 v67; // x0
  unsigned __int64 v68; // x2
  unsigned __int64 v69; // x1
  __int64 v70; // x1
  _QWORD *v71; // x1
  _QWORD *v72; // x20
  __int64 v73; // x0
  __int64 v74; // x5
  unsigned __int64 v75; // x4
  unsigned __int64 v76; // x3
  unsigned int v77; // w7
  _QWORD *v78; // x2
  int v79; // w1
  unsigned __int64 v80; // x2
  __int64 v81; // x1
  unsigned __int64 v82; // x0
  __int64 v83; // x1
  unsigned __int16 v84; // w0
  _QWORD *v86; // x1
  _QWORD *v87; // t1
  bool v88; // cf
  _QWORD *v89; // x1
  _QWORD *v90; // x0
  _QWORD *v91; // x1
  _QWORD *v92; // t1
  unsigned int v93; // w6
  _QWORD *v94; // x2
  int v95; // w1
  __int64 v96; // x3
  _QWORD *v97; // x26
  __int64 v98; // x8
  __int64 v99; // x7
  __int64 v100; // x12
  __int64 v101; // x0
  __int64 v102; // x8
  __int64 v103; // x9
  unsigned int v104; // w0
  char *v105; // x1
  __int64 v106; // x1
  unsigned __int64 v107; // x0
  unsigned __int64 v108; // x26
  unsigned __int64 v109; // x0
  __int64 v110; // x0
  unsigned __int64 v111; // x5
  unsigned __int64 i; // x20
  unsigned __int64 v113; // x24
  double v114; // d0
  double v115; // d1
  double v116; // d2
  double v117; // d3
  double v118; // d4
  double v119; // d5
  double v120; // d6
  double v121; // d7
  __int64 v122; // x1
  _QWORD *v123; // x0
  __int64 v124; // x0
  __int64 v125; // x2
  __int64 v126; // x24
  __int64 v127; // x8
  unsigned __int64 v128; // x26
  _QWORD *v129; // x4
  unsigned __int64 v130; // x2
  __int64 v131; // x2
  unsigned __int64 v132; // x24
  double v133; // d0
  double v134; // d1
  double v135; // d2
  double v136; // d3
  double v137; // d4
  double v138; // d5
  double v139; // d6
  double v140; // d7
  __int64 v141; // x1
  _QWORD *v142; // x0
  __int64 v143; // x0
  unsigned __int64 v144; // [xsp+68h] [xbp+68h]
  __int64 v145; // [xsp+78h] [xbp+78h]

  if ( (a2 & 0x8000000000000000LL) != 0 )
  {
    *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40) = 12;
    return 0;
  }
  v12 = (char *)&unk_496000;
  v15 = a2;
  if ( (byte_4966A1 & 1) != 0 )
    v15 = (a2 + 15) & 0xFFFFFFFFFFFFFFF0LL;
  v16 = v15 + 23;
  if ( v16 <= 0x1F )
  {
    if ( a1 )
    {
      if ( (unsigned __int8)byte_496688 <= 0x1Fu )
      {
        v70 = 16;
        v18 = 2;
        v17 = 32;
        goto LABEL_72;
      }
      v19 = 2;
      v20 = a1;
      v18 = 2;
      v17 = 32;
      v21 = a1[2];
      if ( v21 )
        goto LABEL_8;
      goto LABEL_85;
    }
    v17 = 32;
    goto LABEL_97;
  }
  v17 = v16 & 0xFFFFFFFFFFFFFFF0LL;
  if ( !a1 )
  {
LABEL_97:
    v82 = sub_4098C0(v17, 0, *(double *)&a5, a6, a7, a8, a9, a10, a11, a12);
    v23 = v82;
    if ( v82 )
    {
      if ( !dword_49668C )
        return v23;
      v80 = a2;
      v81 = dword_49668C ^ 0xFFu;
      goto LABEL_100;
    }
    return 0;
  }
  if ( (unsigned __int8)byte_496688 >= v17 )
  {
    v18 = (unsigned int)v17 >> 4;
    v19 = (unsigned int)v17 >> 4;
    v20 = &a1[((unsigned int)v17 >> 4) - 2];
    v21 = v20[2];
    if ( v21 )
    {
LABEL_8:
      if ( (v21 & 0xF) != 0 )
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
      v22 = (atomic_ullong *)&a1[v19];
      if ( byte_490F08 )
      {
        v23 = v21 + 16;
        v20[2] = *(_QWORD *)(v21 + 16) ^ ((v21 + 16) >> 12);
      }
      else
      {
        while ( 1 )
        {
          v67 = *(_QWORD *)(v21 + 16);
          v23 = v21 + 16;
          v68 = (v21 + 16) >> 12;
          v69 = v68 ^ v67;
          if ( v68 != v67 && (v69 & 0xF) != 0 )
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
          v66 = _aarch64_cas8_acq(v21, v69, v22);
          if ( v21 == v66 )
            break;
          if ( !v66 )
            goto LABEL_85;
          v21 = v66;
        }
      }
      if ( v18 != (unsigned int)*(_QWORD *)(v21 + 8) >> 4 )
        sub_407374((__int64)"malloc(): memory corruption (fast)", *(double *)&a5, a6, a7, a8, a9, a10, a11, a12);
      v24 = _ReadStatusReg(TPIDR_EL0) + 48;
      v25 = (v17 - 17) >> 4;
      v26 = *(_QWORD *)(v24 + 8);
      if ( !v26
        || qword_490638 <= v25
        || (v27 = *(unsigned __int16 *)(v26 + 2 * v25), v145 = 8 * v25, v28 = 2 * v25, v27 >= qword_490648) )
      {
LABEL_90:
        v79 = dword_49668C;
        if ( !dword_49668C )
          return v23;
        goto LABEL_83;
      }
      while ( 1 )
      {
        v34 = v20[2];
        if ( !v34 )
          goto LABEL_90;
        if ( (v34 & 0xF) != 0 )
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
          v29 = v34 + 16;
          v30 = (v34 + 16) >> 12;
          v20[2] = *(_QWORD *)(v34 + 16) ^ v30;
        }
        else
        {
          v35 = *(_QWORD *)(v34 + 16);
          v36 = v34 + 16;
          v37 = (v34 + 16) >> 12;
          v38 = v37 ^ v35;
          if ( v37 != v35 )
          {
LABEL_25:
            if ( (v38 & 0xF) != 0 )
              goto LABEL_26;
          }
          while ( 1 )
          {
            v39 = _aarch64_cas8_acq(v34, v38, v22);
            if ( v34 == v39 )
              break;
            if ( !v39 )
              goto LABEL_90;
            v34 = v39;
            v36 = v39 + 16;
            v40 = *(_QWORD *)(v39 + 16);
            v38 = (v36 >> 12) ^ v40;
            if ( v36 >> 12 != v40 )
              goto LABEL_25;
          }
          v29 = v36;
          v30 = v36 >> 12;
        }
        v31 = *(_QWORD *)(v24 + 8);
        v32 = qword_490648;
        *(_QWORD *)(v34 + 24) = qword_496698;
        *(_QWORD *)(v34 + 16) = *(_QWORD *)(v31 + v145 + 128) ^ v30;
        *(_QWORD *)(v31 + v145 + 128) = v29;
        v33 = *(_WORD *)(v31 + v28) + 1;
        *(_WORD *)(v31 + v28) = v33;
        if ( v32 <= v33 )
          goto LABEL_90;
      }
    }
LABEL_85:
    v70 = 2 * v18 + 12;
    goto LABEL_72;
  }
  if ( v17 <= 0x3FF )
  {
    v18 = (unsigned int)v17 >> 4;
    v70 = ((unsigned int)v17 >> 3) + 12;
LABEL_72:
    v71 = &a1[v70 - 2];
    v72 = (_QWORD *)v71[3];
    if ( v71 != v72 )
    {
      v73 = v72[3];
      if ( *(_QWORD **)(v73 + 16) != v72 )
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
      *(_QWORD *)((char *)v72 + v17 + 8) |= 1uLL;
      v71[3] = v73;
      *(_QWORD *)(v73 + 16) = v71;
      if ( a1 != (_QWORD *)&unk_490670 )
        v72[1] |= 4uLL;
      v74 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 48 + 8);
      if ( v74 )
      {
        v75 = (v17 - 17) >> 4;
        if ( qword_490638 > v75 )
        {
          v76 = qword_490648;
          v77 = *(unsigned __int16 *)(v74 + 2 * v75);
          while ( v77 < v76 )
          {
            v78 = (_QWORD *)v71[3];
            if ( v71 == v78 )
              break;
            if ( v78 )
            {
              v100 = v78[3];
              *(_QWORD *)((char *)v78 + v17 + 8) |= 1uLL;
              if ( a1 != (_QWORD *)&unk_490670 )
                v78[1] |= 4uLL;
              v101 = v74 + 8 * v75;
              v77 = (unsigned __int16)(v77 + 1);
              v102 = *(_QWORD *)(v101 + 128);
              v71[3] = v100;
              v103 = qword_496698;
              *(_QWORD *)(v100 + 16) = v71;
              v78[2] = v102 ^ ((unsigned __int64)(v78 + 2) >> 12);
              v78[3] = v103;
              *(_QWORD *)(v101 + 128) = v78 + 2;
              *(_WORD *)(v74 + 2 * v75) = v77;
            }
          }
        }
      }
      v23 = (unsigned __int64)(v72 + 2);
      v79 = dword_49668C;
      if ( !dword_49668C )
        return v23;
      goto LABEL_83;
    }
    goto LABEL_33;
  }
  v18 = (v17 >> 6) + 48;
  if ( v17 > 0xC3F )
  {
    if ( v17 >> 9 > 0x14 )
    {
      if ( v17 >> 12 <= 0xA )
      {
        v18 = (v17 >> 12) + 110;
      }
      else if ( v17 >> 15 > 4 )
      {
        v108 = v17 >> 18;
        if ( v17 >> 18 > 2 )
          LODWORD(v108) = 2;
        v18 = v108 + 124;
      }
      else
      {
        v18 = (v17 >> 15) + 119;
      }
    }
    else
    {
      v18 = (v17 >> 9) + 91;
    }
  }
  if ( *((_DWORD *)a1 + 2) )
    sub_407D40(a1, a2, a3, a4);
LABEL_33:
  StatusReg = _ReadStatusReg(TPIDR_EL0);
  v42 = 0;
  v43 = (v17 - 17) >> 4;
  if ( *(_QWORD *)(StatusReg + 48 + 8) )
  {
    if ( qword_490638 <= v43 )
      v42 = 0;
    else
      v42 = v17;
  }
  v44 = (_QWORD *)a1[15];
  v45 = a1 + 12;
  v46 = 0;
  if ( v44 == a1 + 12 )
    goto LABEL_111;
LABEL_38:
  v47 = 0;
  v48 = 0;
  do
  {
    while ( 1 )
    {
      v49 = v44[1] & 0xFFFFFFFFFFFFFFF8LL;
      v50 = (_QWORD *)((char *)v44 + v49);
      if ( v49 <= 0x10 || (v51 = a1[273], v51 < v49) )
        sub_407374((__int64)"malloc(): invalid size (unsorted)", *(double *)&a5, a6, a7, a8, a9, a10, a11, a12);
      v52 = v50[1];
      if ( v51 < v52 || v52 <= 0xF )
        sub_407374((__int64)"malloc(): invalid next size (unsorted)", *(double *)&a5, a6, a7, a8, a9, a10, a11, a12);
      if ( (*v50 & 0xFFFFFFFFFFFFFFF8LL) != v49 )
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
      v54 = (_QWORD *)v44[3];
      if ( (_QWORD *)v54[2] != v44 || (_QWORD *)v44[2] != v45 )
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
      if ( (v52 & 1) != 0 )
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
      v55 = v17 <= 0x3FF && v54 == v45;
      if ( v55 && (_QWORD *)a1[13] == v44 )
        break;
      a1[15] = v54;
      v54[2] = v45;
      if ( v17 != v49 )
      {
        if ( v49 <= 0x3FF )
          goto LABEL_101;
        if ( v49 <= 0xC3F )
        {
          v56 = (v49 >> 6) + 48;
          v57 = 2 * v56 + 12;
        }
        else if ( v49 >> 9 > 0x14 )
        {
          if ( v49 >> 12 > 0xA )
          {
            if ( v49 >> 15 > 4 )
            {
              v111 = v49 >> 18;
              if ( v49 >> 18 > 2 )
                LODWORD(v111) = 2;
              v56 = v111 + 124;
              v57 = 2 * v56 + 12;
            }
            else
            {
              v56 = (v49 >> 15) + 119;
              v57 = 2 * v56 + 12;
            }
          }
          else
          {
            v56 = (v49 >> 12) + 110;
            v57 = 2 * v56 + 12;
          }
        }
        else
        {
          v56 = (v49 >> 9) + 91;
          v57 = 2 * v56 + 12;
        }
        goto LABEL_59;
      }
LABEL_86:
      v50[1] = v52 | 1;
      if ( a1 != (_QWORD *)&unk_490670 )
        v44[1] |= 4uLL;
      v23 = (unsigned __int64)(v44 + 2);
      if ( !v42 )
        goto LABEL_90;
      v83 = *(_QWORD *)(StatusReg + 56);
      v84 = *(_WORD *)(v83 + 2 * v43);
      if ( qword_490648 <= (unsigned __int64)v84 )
        goto LABEL_90;
      v98 = 8 * v43;
      v99 = v83 + 8 * v43;
      v44[3] = qword_496698;
      v44[2] = *(_QWORD *)(v99 + 128) ^ (v23 >> 12);
      v44 = (_QWORD *)a1[15];
      *(_QWORD *)(v99 + 128) = v23;
      *(_WORD *)(v83 + 2 * v43) = v84 + 1;
      if ( v44 == v45 )
        goto LABEL_209;
      v48 = 1;
    }
    if ( v17 + 32 < v49 )
    {
      v129 = (_QWORD *)((char *)v44 + v17);
      a1[14] = (char *)v44 + v17;
      a1[15] = (char *)v44 + v17;
      v130 = v49 - v17;
      a1[13] = (char *)v44 + v17;
      v129[2] = v45;
      v129[3] = v45;
      if ( v130 > 0x3FF )
      {
        v129[4] = 0;
        v129[5] = 0;
      }
      v23 = (unsigned __int64)(v44 + 2);
      v44[1] = v17 | (4LL * (a1 != (_QWORD *)&unk_490670)) | 1;
      v129[1] = v130 | 1;
      *v50 = v130;
      goto LABEL_216;
    }
    a1[15] = v54;
    v54[2] = v45;
    if ( v17 == v49 )
      goto LABEL_86;
    if ( v49 <= 0x3FF )
    {
LABEL_101:
      v56 = (unsigned int)v49 >> 4;
      v86 = &a1[2 * ((unsigned int)v49 >> 4) + 12];
      v87 = (_QWORD *)*v86;
      v62 = v86 - 2;
      v59 = v87;
      goto LABEL_102;
    }
    v57 = 140;
    v56 = 64;
LABEL_59:
    v58 = &a1[v57];
    v61 = (_QWORD *)*v58;
    v59 = v58 - 2;
    v60 = v61;
    if ( v59 == v61 )
    {
      v62 = v59;
      v44[4] = v44;
      v44[5] = v44;
    }
    else
    {
      v62 = (_QWORD *)v59[3];
      v63 = v49 | 1;
      v64 = v62[1];
      if ( (v64 & 4) != 0 )
      {
        sub_41F250("chunk_main_arena (bck->bk)", "malloc.c", 4179, "_int_malloc");
LABEL_241:
        sub_41F250("chunk_main_arena (fwd)", "malloc.c", 4192, "_int_malloc");
        return sub_40AF50(v143);
      }
      if ( v64 <= v63 )
      {
        v109 = v60[1];
        if ( (v109 & 4) != 0 )
          goto LABEL_241;
        while ( v63 < v109 )
        {
          v60 = (_QWORD *)v60[4];
          v109 = v60[1];
          if ( (v109 & 4) != 0 )
          {
            sub_41F250("chunk_main_arena (fwd)", "malloc.c", 4196, "_int_malloc");
LABEL_221:
            for ( i = v90[5]; ; i = *(_QWORD *)(i + 40) )
            {
              v131 = *(_QWORD *)(i + 8);
              v12 = (char *)(v131 & 0xFFFFFFFFFFFFFFF8LL);
              if ( v17 <= (v131 & 0xFFFFFFFFFFFFFFF8LL) )
                break;
            }
            if ( v91[3] != i && v131 == *(_QWORD *)(*(_QWORD *)(i + 16) + 8LL) )
              i = *(_QWORD *)(i + 16);
            v132 = (unsigned __int64)&v12[-v17];
            sub_407C70(i);
            if ( (unsigned __int64)&v12[-v17] > 0x1F )
            {
              v141 = a1[14];
              v142 = (_QWORD *)(i + v17);
              if ( *(_QWORD **)(v141 + 24) != v45 )
                sub_407374(
                  (__int64)"malloc(): corrupted unsorted chunks",
                  v133,
                  v134,
                  v135,
                  v136,
                  v137,
                  v138,
                  v139,
                  v140);
              v142[2] = v141;
              v142[3] = v45;
              a1[14] = v142;
              *(_QWORD *)(v141 + 24) = v142;
              if ( v132 > 0x3FF )
              {
                v142[4] = 0;
                v142[5] = 0;
              }
              *(_QWORD *)(i + 8) = v17 | (4LL * (a1 != (_QWORD *)&unk_490670)) | 1;
              v142[1] = v132 | 1;
              *(_QWORD *)&v12[i] = v132;
LABEL_232:
              v23 = i + 16;
LABEL_216:
              sub_4075F4();
              return v23;
            }
LABEL_238:
            *(_QWORD *)&v12[i + 8] |= 1uLL;
            if ( a1 != (_QWORD *)&unk_490670 )
              *(_QWORD *)(i + 8) |= 4uLL;
            goto LABEL_232;
          }
        }
        if ( v63 == v109 )
        {
          v59 = (_QWORD *)v60[2];
        }
        else
        {
          v110 = v60[5];
          v44[4] = v60;
          v44[5] = v110;
          if ( *(_QWORD **)(v110 + 32) != v60 )
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
          v60[5] = v44;
          v59 = v60;
          *(_QWORD *)(v44[5] + 32LL) = v44;
        }
        v62 = (_QWORD *)v59[3];
        if ( (_QWORD *)v62[2] != v59 )
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
        v65 = v60[5];
        v44[4] = v60;
        v44[5] = v65;
        *(_QWORD *)(v65 + 32) = v44;
        v60[5] = v44;
      }
    }
LABEL_102:
    ++v46;
    *((_DWORD *)a1 + (v56 >> 5) + 536) |= 1 << v56;
    v44[2] = v59;
    v44[3] = v62;
    v59[3] = v44;
    v62[2] = v44;
    if ( v48 )
    {
      if ( qword_490650 )
        v88 = qword_490650 >= v46;
      else
        v88 = 1;
      if ( !v88 )
      {
        v124 = *(_QWORD *)(StatusReg + 56);
        v125 = v124 + 8 * v43;
        v23 = *(_QWORD *)(v125 + 128);
        if ( (v23 & 0xF) == 0 )
        {
          v126 = 2 * v43;
          *(_QWORD *)(v125 + 128) = *(_QWORD *)v23 ^ (v23 >> 12);
          goto LABEL_203;
        }
        goto LABEL_235;
      }
      if ( ++v47 > 9999 )
        goto LABEL_208;
    }
    else if ( ++v47 > 9999 )
    {
      goto LABEL_111;
    }
    v44 = (_QWORD *)a1[15];
  }
  while ( v44 != v45 );
  if ( v48 )
    goto LABEL_208;
LABEL_111:
  if ( v17 <= 0x3FF )
    goto LABEL_114;
LABEL_112:
  v89 = &a1[2 * ((v18 - 1) & 0x7FFFFFFF) + 14];
  v92 = (_QWORD *)*v89;
  v91 = v89 - 2;
  v90 = v92;
  if ( v92 != v91 && v17 <= v90[1] )
    goto LABEL_221;
LABEL_114:
  v93 = (v18 + 1) >> 5;
  v94 = &a1[2 * v18 + 12];
  v95 = 1 << (v18 + 1);
  v96 = *((unsigned int *)a1 + v93 + 536);
  while ( 2 )
  {
    if ( (unsigned int)v96 > v95 - 1 )
      goto LABEL_118;
    v104 = v93 + 1;
    v105 = (char *)a1 + 4 * v93 + 4;
    while ( 1 )
    {
      v93 = v104;
      if ( v104 > 3 )
      {
        v106 = a1[12];
        v107 = *(_QWORD *)(v106 + 8) & 0xFFFFFFFFFFFFFFF8LL;
        if ( a1[273] < v107 )
          sub_407374((__int64)"malloc(): corrupted top size", *(double *)&a5, a6, a7, a8, a9, a10, a11, a12);
        if ( v17 + 32 <= v107 )
        {
          a1[12] = v106 + v17;
          v23 = v106 + 16;
          *(_QWORD *)(v106 + 8) = v17 | (4LL * (a1 != (_QWORD *)&unk_490670)) | 1;
          *(_QWORD *)(v106 + v17 + 8) = (v107 - v17) | 1;
          goto LABEL_216;
        }
        v144 = v46;
        if ( !*((_DWORD *)a1 + 2) )
        {
          v23 = sub_4098C0(v17, a1, *(double *)&a5, a6, a7, a8, a9, a10, a11, a12);
          if ( !v23 )
            return v23;
          goto LABEL_216;
        }
        sub_407D40(a1, v106, v17 + 32, v96);
        v46 = v144;
        if ( v17 > 0x3FF )
        {
          if ( v17 > 0xC3F )
          {
            if ( v17 >> 9 > 0x14 )
            {
              if ( v17 >> 12 > 0xA )
              {
                v44 = (_QWORD *)a1[15];
                if ( v17 >> 15 > 4 )
                {
                  v128 = v17 >> 18;
                  if ( v17 >> 18 > 2 )
                    LODWORD(v128) = 2;
                  v18 = v128 + 124;
                  if ( v44 != v45 )
                    goto LABEL_38;
                }
                else
                {
                  v18 = (v17 >> 15) + 119;
                  if ( v44 != v45 )
                    goto LABEL_38;
                }
              }
              else
              {
                v44 = (_QWORD *)a1[15];
                v18 = (v17 >> 12) + 110;
                if ( v44 != v45 )
                  goto LABEL_38;
              }
            }
            else
            {
              v44 = (_QWORD *)a1[15];
              v18 = (v17 >> 9) + 91;
              if ( v44 != v45 )
                goto LABEL_38;
            }
          }
          else
          {
            v44 = (_QWORD *)a1[15];
            v18 = (v17 >> 6) + 48;
            if ( v44 != v45 )
              goto LABEL_38;
          }
          goto LABEL_112;
        }
        v44 = (_QWORD *)a1[15];
        v18 = (unsigned int)v17 >> 4;
        if ( v44 != v45 )
          goto LABEL_38;
        goto LABEL_114;
      }
      v96 = *((unsigned int *)v105 + 536);
      v105 += 4;
      if ( (_DWORD)v96 )
        break;
      ++v104;
    }
    v95 = 1;
    v94 = &a1[64 * v104 + 10];
LABEL_118:
    if ( (v95 & (unsigned int)v96) != 0 )
    {
      v97 = (_QWORD *)v94[3];
      if ( v94 == v97 )
      {
        v96 = (unsigned int)v96 & ~v95;
        v94 += 2;
        v95 *= 2;
        *((_DWORD *)a1 + v93 + 536) = v96;
        continue;
      }
      i = v97[1] & 0xFFFFFFFFFFFFFFF8LL;
      if ( v17 > i )
      {
        sub_41F250("(unsigned long) (size) >= (unsigned long) (nb)", "malloc.c", 4376, "_int_malloc");
        goto LABEL_238;
      }
      v113 = i - v17;
      sub_407C70(v94[3]);
      if ( i - v17 <= 0x1F )
      {
        *(_QWORD *)((char *)v97 + i + 8) |= 1uLL;
        if ( a1 != (_QWORD *)&unk_490670 )
          v97[1] |= 4uLL;
      }
      else
      {
        v122 = a1[14];
        v123 = (_QWORD *)((char *)v97 + v17);
        if ( *(_QWORD **)(v122 + 24) != v45 )
          sub_407374((__int64)"malloc(): corrupted unsorted chunks 2", v114, v115, v116, v117, v118, v119, v120, v121);
        v123[2] = v122;
        v123[3] = v45;
        a1[14] = v123;
        *(_QWORD *)(v122 + 24) = v123;
        if ( v17 <= 0x3FF )
          a1[13] = v123;
        if ( v113 > 0x3FF )
        {
          v123[4] = 0;
          v123[5] = 0;
        }
        v97[1] = v17 | (4LL * (a1 != (_QWORD *)&unk_490670)) | 1;
        v123[1] = v113 | 1;
        *(_QWORD *)((char *)v97 + i) = v113;
      }
      v23 = (unsigned __int64)(v97 + 2);
      v79 = dword_49668C;
      if ( !dword_49668C )
        return v23;
LABEL_83:
      v80 = a2;
      v81 = v79 ^ 0xFFu;
      v82 = v23;
LABEL_100:
      ifunc_40DE70(v82, v81, v80);
      return v23;
    }
    break;
  }
  v94 += 2;
  v95 *= 2;
  if ( v95 )
    goto LABEL_118;
  a5 = sub_41F250("bit != 0", "malloc.c", 4357, "_int_malloc");
LABEL_208:
  v98 = 8 * v43;
LABEL_209:
  v124 = *(_QWORD *)(StatusReg + 56);
  v127 = v124 + v98;
  v23 = *(_QWORD *)(v127 + 128);
  if ( (v23 & 0xF) != 0 )
LABEL_235:
    sub_407374((__int64)"malloc(): unaligned tcache chunk detected", *(double *)&a5, a6, a7, a8, a9, a10, a11, a12);
  v126 = 2 * v43;
  *(_QWORD *)(v127 + 128) = *(_QWORD *)v23 ^ (v23 >> 12);
LABEL_203:
  --*(_WORD *)(v124 + v126);
  *(_QWORD *)(v23 + 8) = 0;
  return v23;
}
