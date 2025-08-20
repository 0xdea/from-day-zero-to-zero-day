__int64 __fastcall int_malloc(
        int *a1,
        unsigned __int64 a2,
        double a3,
        double a4,
        double a5,
        double a6,
        double a7,
        double a8,
        double a9,
        double a10)
{
  char *v10; // x22
  unsigned __int64 v13; // x19
  unsigned __int64 v14; // x19
  unsigned __int64 v15; // x19
  unsigned int v16; // w26
  __int64 v17; // x23
  int *v18; // x24
  unsigned __int64 v19; // x25
  atomic_ullong *v20; // x23
  unsigned __int64 v21; // x20
  unsigned __int64 v22; // x25
  unsigned __int64 v23; // x19
  __int64 v24; // x0
  unsigned __int64 v25; // x0
  __int64 v26; // x19
  unsigned __int64 v27; // x4
  unsigned __int64 v28; // x5
  __int64 v29; // x1
  unsigned __int64 v30; // x6
  unsigned __int16 v31; // w0
  unsigned __int64 v32; // x27
  __int64 v33; // x0
  unsigned __int64 v34; // x28
  unsigned __int64 v35; // x2
  unsigned __int64 v36; // x1
  unsigned __int64 v37; // x0
  __int64 v38; // x0
  unsigned __int64 StatusReg; // x25
  unsigned __int64 v40; // x27
  unsigned __int64 v41; // x24
  int *v42; // x3
  int *v43; // x23
  unsigned __int64 v44; // x4
  int v45; // w6
  int v46; // w7
  unsigned __int64 v47; // x2
  unsigned __int64 *v48; // x5
  unsigned __int64 v49; // x1
  unsigned __int64 v50; // x0
  int *v52; // x1
  bool v53; // zf
  signed int v54; // w5
  __int64 v55; // x0
  int *v56; // x0
  int *v57; // x0
  int *v58; // x8
  int *v59; // t1
  int *v60; // x1
  unsigned __int64 v61; // x2
  unsigned __int64 v62; // x9
  __int64 v63; // x2
  unsigned __int64 v64; // x0
  __int64 v65; // x0
  unsigned __int64 v66; // x2
  unsigned __int64 v67; // x1
  __int64 v68; // x1
  __int64 v69; // x1
  __int64 v70; // x20
  __int64 v71; // x0
  __int64 v72; // x5
  unsigned __int64 v73; // x4
  unsigned __int64 v74; // x3
  unsigned int v75; // w7
  _QWORD *v76; // x2
  int v77; // w1
  unsigned __int64 v78; // x2
  __int64 v79; // x1
  __int64 v80; // x0
  __int64 v81; // x1
  unsigned __int16 v82; // w0
  int *v84; // x1
  int *v85; // t1
  bool v86; // cf
  __int64 *v87; // x1
  __int64 v88; // x0
  __int64 *v89; // x1
  __int64 v90; // t1
  unsigned int v91; // w6
  int *v92; // x2
  int v93; // w1
  unsigned int v94; // w3
  __int64 v95; // x26
  __int64 v96; // x8
  __int64 v97; // x7
  __int64 v98; // x12
  __int64 v99; // x0
  __int64 v100; // x8
  __int64 v101; // x9
  unsigned int v102; // w0
  int *v103; // x1
  __int64 v104; // x1
  unsigned __int64 v105; // x0
  unsigned __int64 v106; // x26
  unsigned __int64 v107; // x0
  __int64 v108; // x0
  unsigned __int64 v109; // x5
  unsigned __int64 i; // x20
  unsigned __int64 v111; // x24
  double v112; // d0
  double v113; // d1
  double v114; // d2
  double v115; // d3
  double v116; // d4
  double v117; // d5
  double v118; // d6
  double v119; // d7
  __int64 v120; // x1
  _QWORD *v121; // x0
  __int64 v122; // x0
  __int64 v123; // x2
  __int64 v124; // x24
  __int64 v125; // x8
  unsigned __int64 v126; // x26
  __int64 v127; // x0
  __int64 v128; // x1
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
  __int64 v143; // x3
  __int64 v144; // x0
  unsigned __int64 v145; // [xsp+68h] [xbp+68h]
  __int64 v146; // [xsp+78h] [xbp+78h]

  if ( (a2 & 0x8000000000000000LL) != 0 )
  {
    *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40) = 12;
    return 0;
  }
  v10 = (char *)&unk_496000;
  v13 = a2;
  if ( (mtag_enabled & 1) != 0 )
    v13 = (a2 + 15) & 0xFFFFFFFFFFFFFFF0LL;
  v14 = v13 + 23;
  if ( v14 <= 0x1F )
  {
    if ( a1 )
    {
      if ( (unsigned __int8)global_max_fast <= 0x1Fu )
      {
        v68 = 32;
        v16 = 2;
        v15 = 32;
        goto LABEL_72;
      }
      v17 = 4;
      v18 = a1;
      v16 = 2;
      v15 = 32;
      v19 = *((_QWORD *)a1 + 2);
      if ( v19 )
        goto LABEL_8;
      goto LABEL_85;
    }
    v15 = 32;
    goto LABEL_97;
  }
  v15 = v14 & 0xFFFFFFFFFFFFFFF0LL;
  if ( !a1 )
  {
LABEL_97:
    v80 = sysmalloc(v15, 0, a3, a4, a5, a6, a7, a8, a9, a10);
    v21 = v80;
    if ( v80 )
    {
      if ( !perturb_byte )
        return v21;
      v78 = a2;
      v79 = perturb_byte ^ 0xFFu;
      goto LABEL_100;
    }
    return 0;
  }
  if ( (unsigned __int8)global_max_fast >= v15 )
  {
    v16 = (unsigned int)v15 >> 4;
    v17 = 2LL * ((unsigned int)v15 >> 4);
    v18 = &a1[2 * ((unsigned int)v15 >> 4) - 4];
    v19 = *((_QWORD *)v18 + 2);
    if ( v19 )
    {
LABEL_8:
      if ( (v19 & 0xF) != 0 )
        malloc_printerr((__int64)"malloc(): unaligned fastbin chunk detected 2", a3, a4, a5, a6, a7, a8, a9, a10);
      v20 = (atomic_ullong *)&a1[v17];
      if ( _libc_single_threaded )
      {
        v21 = v19 + 16;
        *((_QWORD *)v18 + 2) = *(_QWORD *)(v19 + 16) ^ ((v19 + 16) >> 12);
      }
      else
      {
        while ( 1 )
        {
          v65 = *(_QWORD *)(v19 + 16);
          v21 = v19 + 16;
          v66 = (v19 + 16) >> 12;
          v67 = v66 ^ v65;
          if ( v66 != v65 && (v67 & 0xF) != 0 )
LABEL_26:
            malloc_printerr((__int64)"malloc(): unaligned fastbin chunk detected", a3, a4, a5, a6, a7, a8, a9, a10);
          v64 = _aarch64_cas8_acq(v19, v67, v20);
          if ( v19 == v64 )
            break;
          if ( !v64 )
            goto LABEL_85;
          v19 = v64;
        }
      }
      if ( v16 != (unsigned int)*(_QWORD *)(v19 + 8) >> 4 )
        malloc_printerr((__int64)"malloc(): memory corruption (fast)", a3, a4, a5, a6, a7, a8, a9, a10);
      v22 = _ReadStatusReg(TPIDR_EL0) + 48;
      v23 = (v15 - 17) >> 4;
      v24 = *(_QWORD *)(v22 + 8);
      if ( !v24
        || qword_490638 <= v23
        || (v25 = *(unsigned __int16 *)(v24 + 2 * v23), v146 = 8 * v23, v26 = 2 * v23, v25 >= qword_490648) )
      {
LABEL_90:
        v77 = perturb_byte;
        if ( !perturb_byte )
          return v21;
        goto LABEL_83;
      }
      while ( 1 )
      {
        v32 = *((_QWORD *)v18 + 2);
        if ( !v32 )
          goto LABEL_90;
        if ( (v32 & 0xF) != 0 )
          malloc_printerr((__int64)"malloc(): unaligned fastbin chunk detected 3", a3, a4, a5, a6, a7, a8, a9, a10);
        if ( _libc_single_threaded )
        {
          v27 = v32 + 16;
          v28 = (v32 + 16) >> 12;
          *((_QWORD *)v18 + 2) = *(_QWORD *)(v32 + 16) ^ v28;
        }
        else
        {
          v33 = *(_QWORD *)(v32 + 16);
          v34 = v32 + 16;
          v35 = (v32 + 16) >> 12;
          v36 = v35 ^ v33;
          if ( v35 != v33 )
          {
LABEL_25:
            if ( (v36 & 0xF) != 0 )
              goto LABEL_26;
          }
          while ( 1 )
          {
            v37 = _aarch64_cas8_acq(v32, v36, v20);
            if ( v32 == v37 )
              break;
            if ( !v37 )
              goto LABEL_90;
            v32 = v37;
            v34 = v37 + 16;
            v38 = *(_QWORD *)(v37 + 16);
            v36 = (v34 >> 12) ^ v38;
            if ( v34 >> 12 != v38 )
              goto LABEL_25;
          }
          v27 = v34;
          v28 = v34 >> 12;
        }
        v29 = *(_QWORD *)(v22 + 8);
        v30 = qword_490648;
        *(_QWORD *)(v32 + 24) = tcache_key;
        *(_QWORD *)(v32 + 16) = *(_QWORD *)(v29 + v146 + 128) ^ v28;
        *(_QWORD *)(v29 + v146 + 128) = v27;
        v31 = *(_WORD *)(v29 + v26) + 1;
        *(_WORD *)(v29 + v26) = v31;
        if ( v30 <= v31 )
          goto LABEL_90;
      }
    }
LABEL_85:
    v68 = 2LL * (2 * v16 + 12);
    goto LABEL_72;
  }
  if ( v15 <= 0x3FF )
  {
    v16 = (unsigned int)v15 >> 4;
    v68 = 2LL * (((unsigned int)v15 >> 3) + 12);
LABEL_72:
    v69 = (__int64)&a1[v68 - 4];
    v70 = *(_QWORD *)(v69 + 24);
    if ( v69 != v70 )
    {
      v71 = *(_QWORD *)(v70 + 24);
      if ( *(_QWORD *)(v71 + 16) != v70 )
        malloc_printerr((__int64)"malloc(): smallbin double linked list corrupted", a3, a4, a5, a6, a7, a8, a9, a10);
      *(_QWORD *)(v70 + v15 + 8) |= 1uLL;
      *(_QWORD *)(v69 + 24) = v71;
      *(_QWORD *)(v71 + 16) = v69;
      if ( a1 != &main_arena )
        *(_QWORD *)(v70 + 8) |= 4uLL;
      v72 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 48 + 8);
      if ( v72 )
      {
        v73 = (v15 - 17) >> 4;
        if ( qword_490638 > v73 )
        {
          v74 = qword_490648;
          v75 = *(unsigned __int16 *)(v72 + 2 * v73);
          while ( v75 < v74 )
          {
            v76 = *(_QWORD **)(v69 + 24);
            if ( (_QWORD *)v69 == v76 )
              break;
            if ( v76 )
            {
              v98 = v76[3];
              *(_QWORD *)((char *)v76 + v15 + 8) |= 1uLL;
              if ( a1 != &main_arena )
                v76[1] |= 4uLL;
              v99 = v72 + 8 * v73;
              v75 = (unsigned __int16)(v75 + 1);
              v100 = *(_QWORD *)(v99 + 128);
              *(_QWORD *)(v69 + 24) = v98;
              v101 = tcache_key;
              *(_QWORD *)(v98 + 16) = v69;
              v76[2] = v100 ^ ((unsigned __int64)(v76 + 2) >> 12);
              v76[3] = v101;
              *(_QWORD *)(v99 + 128) = v76 + 2;
              *(_WORD *)(v72 + 2 * v73) = v75;
            }
          }
        }
      }
      v21 = v70 + 16;
      v77 = perturb_byte;
      if ( !perturb_byte )
        return v21;
      goto LABEL_83;
    }
    goto LABEL_33;
  }
  v16 = (v15 >> 6) + 48;
  if ( v15 > 0xC3F )
  {
    if ( v15 >> 9 > 0x14 )
    {
      if ( v15 >> 12 <= 0xA )
      {
        v16 = (v15 >> 12) + 110;
      }
      else if ( v15 >> 15 > 4 )
      {
        v106 = v15 >> 18;
        if ( v15 >> 18 > 2 )
          LODWORD(v106) = 2;
        v16 = v106 + 124;
      }
      else
      {
        v16 = (v15 >> 15) + 119;
      }
    }
    else
    {
      v16 = (v15 >> 9) + 91;
    }
  }
  if ( a1[2] )
    malloc_consolidate((__int64)a1);
LABEL_33:
  StatusReg = _ReadStatusReg(TPIDR_EL0);
  v40 = 0;
  v41 = (v15 - 17) >> 4;
  if ( *(_QWORD *)(StatusReg + 48 + 8) )
  {
    if ( qword_490638 <= v41 )
      v40 = 0;
    else
      v40 = v15;
  }
  v42 = (int *)*((_QWORD *)a1 + 15);
  v43 = a1 + 24;
  v44 = 0;
  if ( v42 == a1 + 24 )
    goto LABEL_111;
LABEL_38:
  v45 = 0;
  v46 = 0;
  do
  {
    while ( 1 )
    {
      v47 = *((_QWORD *)v42 + 1) & 0xFFFFFFFFFFFFFFF8LL;
      v48 = (unsigned __int64 *)((char *)v42 + v47);
      if ( v47 <= 0x10 || (v49 = *((_QWORD *)a1 + 273), v49 < v47) )
        malloc_printerr((__int64)"malloc(): invalid size (unsorted)", a3, a4, a5, a6, a7, a8, a9, a10);
      v50 = v48[1];
      if ( v49 < v50 || v50 <= 0xF )
        malloc_printerr((__int64)"malloc(): invalid next size (unsorted)", a3, a4, a5, a6, a7, a8, a9, a10);
      if ( (*v48 & 0xFFFFFFFFFFFFFFF8LL) != v47 )
        malloc_printerr((__int64)"malloc(): mismatching next->prev_size (unsorted)", a3, a4, a5, a6, a7, a8, a9, a10);
      v52 = (int *)*((_QWORD *)v42 + 3);
      if ( *((int **)v52 + 2) != v42 || *((int **)v42 + 2) != v43 )
        malloc_printerr((__int64)"malloc(): unsorted double linked list corrupted", a3, a4, a5, a6, a7, a8, a9, a10);
      if ( (v50 & 1) != 0 )
        malloc_printerr((__int64)"malloc(): invalid next->prev_inuse (unsorted)", a3, a4, a5, a6, a7, a8, a9, a10);
      v53 = v15 <= 0x3FF && v52 == v43;
      if ( v53 && *((int **)a1 + 13) == v42 )
        break;
      *((_QWORD *)a1 + 15) = v52;
      *((_QWORD *)v52 + 2) = v43;
      if ( v15 != v47 )
      {
        if ( v47 <= 0x3FF )
          goto LABEL_101;
        if ( v47 <= 0xC3F )
        {
          v54 = (v47 >> 6) + 48;
          v55 = 2LL * (2 * v54 + 12);
        }
        else if ( v47 >> 9 > 0x14 )
        {
          if ( v47 >> 12 > 0xA )
          {
            if ( v47 >> 15 > 4 )
            {
              v109 = v47 >> 18;
              if ( v47 >> 18 > 2 )
                LODWORD(v109) = 2;
              v54 = v109 + 124;
              v55 = 2LL * (2 * v54 + 12);
            }
            else
            {
              v54 = (v47 >> 15) + 119;
              v55 = 2LL * (2 * v54 + 12);
            }
          }
          else
          {
            v54 = (v47 >> 12) + 110;
            v55 = 2LL * (2 * v54 + 12);
          }
        }
        else
        {
          v54 = (v47 >> 9) + 91;
          v55 = 2LL * (2 * v54 + 12);
        }
        goto LABEL_59;
      }
LABEL_86:
      v48[1] = v50 | 1;
      if ( a1 != &main_arena )
        *((_QWORD *)v42 + 1) |= 4uLL;
      v21 = (unsigned __int64)(v42 + 4);
      if ( !v40 )
        goto LABEL_90;
      v81 = *(_QWORD *)(StatusReg + 56);
      v82 = *(_WORD *)(v81 + 2 * v41);
      if ( qword_490648 <= (unsigned __int64)v82 )
        goto LABEL_90;
      v96 = 8 * v41;
      v97 = v81 + 8 * v41;
      *((_QWORD *)v42 + 3) = tcache_key;
      *((_QWORD *)v42 + 2) = *(_QWORD *)(v97 + 128) ^ (v21 >> 12);
      v42 = (int *)*((_QWORD *)a1 + 15);
      *(_QWORD *)(v97 + 128) = v21;
      *(_WORD *)(v81 + 2 * v41) = v82 + 1;
      if ( v42 == v43 )
        goto LABEL_209;
      v46 = 1;
    }
    if ( v15 + 32 < v47 )
    {
      v129 = (_QWORD *)((char *)v42 + v15);
      *((_QWORD *)a1 + 14) = (char *)v42 + v15;
      *((_QWORD *)a1 + 15) = (char *)v42 + v15;
      v130 = v47 - v15;
      *((_QWORD *)a1 + 13) = (char *)v42 + v15;
      v129[2] = v43;
      v129[3] = v43;
      if ( v130 > 0x3FF )
      {
        v129[4] = 0;
        v129[5] = 0;
      }
      v21 = (unsigned __int64)(v42 + 4);
      v128 = a2;
      v127 = (__int64)(v42 + 4);
      *((_QWORD *)v42 + 1) = v15 | (4LL * (a1 != &main_arena)) | 1;
      v129[1] = v130 | 1;
      *v48 = v130;
      goto LABEL_217;
    }
    *((_QWORD *)a1 + 15) = v52;
    *((_QWORD *)v52 + 2) = v43;
    if ( v15 == v47 )
      goto LABEL_86;
    if ( v47 <= 0x3FF )
    {
LABEL_101:
      v54 = (unsigned int)v47 >> 4;
      v84 = &a1[2 * (2 * ((unsigned int)v47 >> 4) + 12)];
      v85 = *(int **)v84;
      v60 = v84 - 4;
      v57 = v85;
      goto LABEL_102;
    }
    v55 = 280;
    v54 = 64;
LABEL_59:
    v56 = &a1[v55];
    v59 = *(int **)v56;
    v57 = v56 - 4;
    v58 = v59;
    if ( v57 == v59 )
    {
      v60 = v57;
      *((_QWORD *)v42 + 4) = v42;
      *((_QWORD *)v42 + 5) = v42;
    }
    else
    {
      v60 = (int *)*((_QWORD *)v57 + 3);
      v61 = v47 | 1;
      v62 = *((_QWORD *)v60 + 1);
      if ( (v62 & 4) != 0 )
      {
        _libc_assert_fail("chunk_main_arena (bck->bk)", "malloc.c", 4179, "_int_malloc");
LABEL_242:
        v144 = _libc_assert_fail("chunk_main_arena (fwd)", "malloc.c", 4192, "_int_malloc");
        return tcache_init_part_0(v144);
      }
      if ( v62 <= v61 )
      {
        v107 = *((_QWORD *)v58 + 1);
        if ( (v107 & 4) != 0 )
          goto LABEL_242;
        while ( v61 < v107 )
        {
          v58 = (int *)*((_QWORD *)v58 + 4);
          v107 = *((_QWORD *)v58 + 1);
          if ( (v107 & 4) != 0 )
          {
            v88 = _libc_assert_fail("chunk_main_arena (fwd)", "malloc.c", 4196, "_int_malloc");
LABEL_222:
            for ( i = *(_QWORD *)(v88 + 40); ; i = *(_QWORD *)(i + 40) )
            {
              v131 = *(_QWORD *)(i + 8);
              v10 = (char *)(v131 & 0xFFFFFFFFFFFFFFF8LL);
              if ( v15 <= (v131 & 0xFFFFFFFFFFFFFFF8LL) )
                break;
            }
            if ( v89[3] != i && v131 == *(_QWORD *)(*(_QWORD *)(i + 16) + 8LL) )
              i = *(_QWORD *)(i + 16);
            v132 = (unsigned __int64)&v10[-v15];
            unlink_chunk_isra_0((_QWORD *)i, a3, a4, a5, a6, a7, a8, a9, a10);
            if ( (unsigned __int64)&v10[-v15] > 0x1F )
            {
              v141 = *((_QWORD *)a1 + 14);
              v142 = (_QWORD *)(i + v15);
              if ( *(int **)(v141 + 24) != v43 )
                malloc_printerr(
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
              v142[3] = v43;
              *((_QWORD *)a1 + 14) = v142;
              *(_QWORD *)(v141 + 24) = v142;
              if ( v132 > 0x3FF )
              {
                v142[4] = 0;
                v142[5] = 0;
              }
              *(_QWORD *)(i + 8) = v15 | (4LL * (a1 != &main_arena)) | 1;
              v142[1] = v132 | 1;
              *(_QWORD *)&v10[i] = v132;
LABEL_233:
              v21 = i + 16;
              v128 = a2;
              v127 = v21;
LABEL_217:
              alloc_perturb(v127, v128);
              return v21;
            }
LABEL_239:
            *(_QWORD *)&v10[i + 8] |= 1uLL;
            if ( a1 != &main_arena )
              *(_QWORD *)(i + 8) |= 4uLL;
            goto LABEL_233;
          }
        }
        if ( v61 == v107 )
        {
          v57 = (int *)*((_QWORD *)v58 + 2);
        }
        else
        {
          v108 = *((_QWORD *)v58 + 5);
          *((_QWORD *)v42 + 4) = v58;
          *((_QWORD *)v42 + 5) = v108;
          if ( *(int **)(v108 + 32) != v58 )
            malloc_printerr(
              (__int64)"malloc(): largebin double linked list corrupted (nextsize)",
              a3,
              a4,
              a5,
              a6,
              a7,
              a8,
              a9,
              a10);
          *((_QWORD *)v58 + 5) = v42;
          v57 = v58;
          *(_QWORD *)(*((_QWORD *)v42 + 5) + 32LL) = v42;
        }
        v60 = (int *)*((_QWORD *)v57 + 3);
        if ( *((int **)v60 + 2) != v57 )
          malloc_printerr(
            (__int64)"malloc(): largebin double linked list corrupted (bk)",
            a3,
            a4,
            a5,
            a6,
            a7,
            a8,
            a9,
            a10);
      }
      else
      {
        v63 = *((_QWORD *)v58 + 5);
        *((_QWORD *)v42 + 4) = v58;
        *((_QWORD *)v42 + 5) = v63;
        *(_QWORD *)(v63 + 32) = v42;
        *((_QWORD *)v58 + 5) = v42;
      }
    }
LABEL_102:
    ++v44;
    a1[(v54 >> 5) + 536] |= 1 << v54;
    *((_QWORD *)v42 + 2) = v57;
    *((_QWORD *)v42 + 3) = v60;
    *((_QWORD *)v57 + 3) = v42;
    *((_QWORD *)v60 + 2) = v42;
    if ( v46 )
    {
      if ( qword_490650 )
        v86 = qword_490650 >= v44;
      else
        v86 = 1;
      if ( !v86 )
      {
        v122 = *(_QWORD *)(StatusReg + 56);
        v123 = v122 + 8 * v41;
        v21 = *(_QWORD *)(v123 + 128);
        if ( (v21 & 0xF) == 0 )
        {
          v124 = 2 * v41;
          *(_QWORD *)(v123 + 128) = *(_QWORD *)v21 ^ (v21 >> 12);
          goto LABEL_203;
        }
        goto LABEL_236;
      }
      if ( ++v45 > 9999 )
        goto LABEL_208;
    }
    else if ( ++v45 > 9999 )
    {
      goto LABEL_111;
    }
    v42 = (int *)*((_QWORD *)a1 + 15);
  }
  while ( v42 != v43 );
  if ( v46 )
    goto LABEL_208;
LABEL_111:
  if ( v15 <= 0x3FF )
    goto LABEL_114;
LABEL_112:
  v87 = (__int64 *)&a1[4 * ((v16 - 1) & 0x7FFFFFFF) + 28];
  v90 = *v87;
  v89 = v87 - 2;
  v88 = v90;
  if ( (__int64 *)v90 != v89 && v15 <= *(_QWORD *)(v88 + 8) )
    goto LABEL_222;
LABEL_114:
  v91 = (v16 + 1) >> 5;
  v92 = &a1[4 * v16 + 24];
  v93 = 1 << (v16 + 1);
  v94 = a1[v91 + 536];
  while ( 2 )
  {
    if ( v94 > v93 - 1 )
      goto LABEL_118;
    v102 = v91 + 1;
    v103 = &a1[v91 + 1];
    while ( 1 )
    {
      v91 = v102;
      if ( v102 > 3 )
      {
        v104 = *((_QWORD *)a1 + 12);
        v105 = *(_QWORD *)(v104 + 8) & 0xFFFFFFFFFFFFFFF8LL;
        if ( *((_QWORD *)a1 + 273) < v105 )
          malloc_printerr((__int64)"malloc(): corrupted top size", a3, a4, a5, a6, a7, a8, a9, a10);
        if ( v15 + 32 <= v105 )
        {
          v143 = v104 + v15;
          *((_QWORD *)a1 + 12) = v104 + v15;
          v21 = v104 + 16;
          *(_QWORD *)(v104 + 8) = v15 | (4LL * (a1 != &main_arena)) | 1;
          v128 = a2;
          *(_QWORD *)(v143 + 8) = (v105 - v15) | 1;
          v127 = v21;
          goto LABEL_217;
        }
        v145 = v44;
        if ( !a1[2] )
        {
          v127 = sysmalloc(v15, a1, a3, a4, a5, a6, a7, a8, a9, a10);
          v21 = v127;
          if ( !v127 )
            return v21;
          v128 = a2;
          goto LABEL_217;
        }
        malloc_consolidate((__int64)a1);
        v44 = v145;
        if ( v15 > 0x3FF )
        {
          if ( v15 > 0xC3F )
          {
            if ( v15 >> 9 > 0x14 )
            {
              if ( v15 >> 12 > 0xA )
              {
                v42 = (int *)*((_QWORD *)a1 + 15);
                if ( v15 >> 15 > 4 )
                {
                  v126 = v15 >> 18;
                  if ( v15 >> 18 > 2 )
                    LODWORD(v126) = 2;
                  v16 = v126 + 124;
                  if ( v42 != v43 )
                    goto LABEL_38;
                }
                else
                {
                  v16 = (v15 >> 15) + 119;
                  if ( v42 != v43 )
                    goto LABEL_38;
                }
              }
              else
              {
                v42 = (int *)*((_QWORD *)a1 + 15);
                v16 = (v15 >> 12) + 110;
                if ( v42 != v43 )
                  goto LABEL_38;
              }
            }
            else
            {
              v42 = (int *)*((_QWORD *)a1 + 15);
              v16 = (v15 >> 9) + 91;
              if ( v42 != v43 )
                goto LABEL_38;
            }
          }
          else
          {
            v42 = (int *)*((_QWORD *)a1 + 15);
            v16 = (v15 >> 6) + 48;
            if ( v42 != v43 )
              goto LABEL_38;
          }
          goto LABEL_112;
        }
        v42 = (int *)*((_QWORD *)a1 + 15);
        v16 = (unsigned int)v15 >> 4;
        if ( v42 != v43 )
          goto LABEL_38;
        goto LABEL_114;
      }
      v94 = v103[536];
      ++v103;
      if ( v94 )
        break;
      ++v102;
    }
    v93 = 1;
    v92 = &a1[128 * v102 + 20];
LABEL_118:
    if ( (v93 & v94) != 0 )
    {
      v95 = *((_QWORD *)v92 + 3);
      if ( v92 == (int *)v95 )
      {
        v94 &= ~v93;
        v92 += 4;
        v93 *= 2;
        a1[v91 + 536] = v94;
        continue;
      }
      i = *(_QWORD *)(v95 + 8) & 0xFFFFFFFFFFFFFFF8LL;
      if ( v15 > i )
      {
        _libc_assert_fail("(unsigned long) (size) >= (unsigned long) (nb)", "malloc.c", 4376, "_int_malloc");
        goto LABEL_239;
      }
      v111 = i - v15;
      unlink_chunk_isra_0(*((_QWORD **)v92 + 3), a3, a4, a5, a6, a7, a8, a9, a10);
      if ( i - v15 <= 0x1F )
      {
        *(_QWORD *)(v95 + i + 8) |= 1uLL;
        if ( a1 != &main_arena )
          *(_QWORD *)(v95 + 8) |= 4uLL;
      }
      else
      {
        v120 = *((_QWORD *)a1 + 14);
        v121 = (_QWORD *)(v95 + v15);
        if ( *(int **)(v120 + 24) != v43 )
          malloc_printerr(
            (__int64)"malloc(): corrupted unsorted chunks 2",
            v112,
            v113,
            v114,
            v115,
            v116,
            v117,
            v118,
            v119);
        v121[2] = v120;
        v121[3] = v43;
        *((_QWORD *)a1 + 14) = v121;
        *(_QWORD *)(v120 + 24) = v121;
        if ( v15 <= 0x3FF )
          *((_QWORD *)a1 + 13) = v121;
        if ( v111 > 0x3FF )
        {
          v121[4] = 0;
          v121[5] = 0;
        }
        *(_QWORD *)(v95 + 8) = v15 | (4LL * (a1 != &main_arena)) | 1;
        v121[1] = v111 | 1;
        *(_QWORD *)(v95 + i) = v111;
      }
      v21 = v95 + 16;
      v77 = perturb_byte;
      if ( !perturb_byte )
        return v21;
LABEL_83:
      v78 = a2;
      v79 = v77 ^ 0xFFu;
      v80 = v21;
LABEL_100:
      memset(v80, v79, v78);
      return v21;
    }
    break;
  }
  v92 += 4;
  v93 *= 2;
  if ( v93 )
    goto LABEL_118;
  _libc_assert_fail("bit != 0", "malloc.c", 4357, "_int_malloc");
LABEL_208:
  v96 = 8 * v41;
LABEL_209:
  v122 = *(_QWORD *)(StatusReg + 56);
  v125 = v122 + v96;
  v21 = *(_QWORD *)(v125 + 128);
  if ( (v21 & 0xF) != 0 )
LABEL_236:
    malloc_printerr((__int64)"malloc(): unaligned tcache chunk detected", a3, a4, a5, a6, a7, a8, a9, a10);
  v124 = 2 * v41;
  *(_QWORD *)(v125 + 128) = *(_QWORD *)v21 ^ (v21 >> 12);
LABEL_203:
  --*(_WORD *)(v122 + v124);
  *(_QWORD *)(v21 + 8) = 0;
  return v21;
}
