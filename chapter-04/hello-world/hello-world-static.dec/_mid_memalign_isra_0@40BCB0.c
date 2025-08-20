__int64 __fastcall mid_memalign_isra_0(
        unsigned __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        void *a5,
        void *a6,
        void *a7,
        double a8,
        double a9,
        double a10,
        double a11,
        double a12,
        double a13,
        double a14,
        double a15)
{
  unsigned __int64 i; // x19
  unsigned __int64 v17; // x0
  int v18; // w6
  unsigned __int64 v19; // x0
  unsigned __int64 v20; // x3
  __int64 v21; // x2
  __int64 v22; // x8
  __int16 v23; // w7
  unsigned __int64 v24; // x3
  unsigned __int64 v25; // x20
  unsigned __int64 v26; // x0
  unsigned __int64 v27; // x1
  _QWORD *v28; // x5
  unsigned __int64 StatusReg; // x1
  int *retry; // x24
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x3
  void *v34; // x4
  void *v35; // x5
  void *v36; // x6
  double v37; // d0
  double v38; // d1
  double v39; // d2
  double v40; // d3
  double v41; // d4
  double v42; // d5
  double v43; // d6
  double v44; // d7
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x3
  void *v48; // x4
  void *v49; // x5
  void *v50; // x6
  unsigned __int64 v51; // x1
  __int64 v52; // x0
  int *v53; // x0
  double v55; // d0
  double v56; // d1
  double v57; // d2
  double v58; // d3
  double v59; // d4
  double v60; // d5
  double v61; // d6
  double v62; // d7
  double v64; // d0
  double v65; // d1
  double v66; // d2
  double v67; // d3
  double v68; // d4
  double v69; // d5
  double v70; // d6
  double v71; // d7
  __int64 v72; // x0
  __int64 v73; // x1
  __int64 v74; // x2
  __int64 v75; // x0
  __int64 v81; // x2
  unsigned __int64 v85; // x1
  __int64 v88; // x2
  __int64 v91; // x1
  __int64 v100; // x0

  if ( a1 <= 0x10 )
    return malloc(a2, a8, a9, a10, a11, a12, a13, a14, a15, a2, a3, a4, a5, a6, a7);
  if ( a1 <= 0x1F )
  {
    i = 32;
  }
  else
  {
    if ( a1 > 0x8000000000000000LL )
    {
      *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40) = 22;
      return 0;
    }
    if ( ((a1 - 1) & a1) == 0 || a1 == 32 )
    {
      i = a1;
    }
    else
    {
      for ( i = 32; i < a1; i *= 2LL )
        ;
    }
  }
  if ( (a2 & 0x8000000000000000LL) != 0 )
  {
    *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40) = 12;
    return 0;
  }
  v17 = a2;
  v18 = mtag_enabled & 1;
  if ( v18 )
    v17 = (a2 + 15) & 0xFFFFFFFFFFFFFFF0LL;
  v19 = v17 + 23;
  v20 = ((v19 & 0xFFFFFFFFFFFFFFF0LL) - 17) >> 4;
  if ( v19 <= 0x1F )
    v20 = 0;
  if ( qword_490638 > v20 )
  {
    v21 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 48 + 8);
    if ( v21 )
    {
      v22 = 2 * v20;
      v23 = *(_WORD *)(v21 + 2 * v20);
      if ( v23 )
      {
        v24 = v20 + 16;
        v25 = *(_QWORD *)(v21 + 8 * v24);
        if ( v25 )
        {
          v26 = *(_QWORD *)(v21 + 8 * v24);
          if ( (v25 & (i - 1)) == 0 )
            goto LABEL_75;
          do
          {
            v26 = *(_QWORD *)v25;
            v27 = v25 >> 12;
            v28 = (_QWORD *)v25;
            v25 = (v25 >> 12) ^ *(_QWORD *)v25;
            if ( v27 == v26 )
              goto LABEL_21;
          }
          while ( (v25 & (i - 1)) != 0 );
          if ( (_QWORD *)(v21 + 8 * v24) == v28 )
          {
LABEL_75:
            if ( (v26 & 0xF) == 0 )
            {
              v25 = v26;
              *(_QWORD *)(v21 + 8 * v24) = *(_QWORD *)v26 ^ (v26 >> 12);
LABEL_65:
              *(_WORD *)(v21 + v22) = v23 - 1;
              *(_QWORD *)(v25 + 8) = 0;
              _X0 = v25 - 16;
              if ( v18 )
              {
LABEL_66:
                __asm { LDG             X0, [X0] }
                v81 = _X0;
                _X0 = v25;
                __asm
                {
                  GMI             X1, X0, XZR
                  IRG             X0, X0, X1
                }
                if ( (mtag_enabled & 1) != 0 )
                  v85 = (*(_QWORD *)(v81 + 8) & 0xFFFFFFFFFFFFFFF8LL) - 16;
                else
                  v85 = (*(_QWORD *)(v81 + 8) & 0xFFFFFFFFFFFFFFF8LL)
                      - 16
                      + 8 * (((*(_QWORD *)(v81 + 8) ^ 2uLL) >> 1) & 1);
                return _libc_mtag_tag_region(_X0, v85);
              }
              return v25;
            }
          }
          else if ( (v25 & 0xF) == 0 )
          {
            *v28 = *(_QWORD *)v25 ^ v27 ^ (v25 >> 12);
            goto LABEL_65;
          }
          malloc_printerr((__int64)"malloc(): unaligned tcache chunk detected", a8, a9, a10, a11, a12, a13, a14, a15);
        }
      }
    }
  }
LABEL_21:
  if ( _libc_single_threaded )
  {
    v72 = int_memalign(&main_arena, i, a2, a8, a9, a10, a11, a12, a13, a14, a15);
    v25 = v72;
    if ( !v72 )
      return 0;
    v73 = v72 - 16;
    if ( (mtag_enabled & 1) != 0 )
    {
      _X0 = v72 - 16;
      __asm { LDG             X0, [X0] }
      if ( (*(_QWORD *)(_X0 + 8) & 2) != 0 )
        goto LABEL_58;
      _X0 = v25 - 16;
      __asm { LDG             X0, [X0] }
      v74 = _X0;
    }
    else
    {
      v74 = v72 - 16;
      if ( (*(_QWORD *)(v72 - 8) & 2) != 0 )
        return v25;
    }
    if ( (*(_QWORD *)(v74 + 8) & 4) != 0 )
    {
      v75 = -4 * qword_490600;
      if ( !qword_490600 )
        v75 = -67108864;
      if ( *(int **)(v74 & v75) != &main_arena )
        _libc_assert_fail(
          "!p || chunk_is_mmapped (mem2chunk (p)) || &main_arena == arena_for_chunk (mem2chunk (p))",
          "malloc.c",
          3641,
          "_mid_memalign");
    }
    if ( (mtag_enabled & 1) == 0 )
      return v25;
LABEL_58:
    _X0 = v73;
    goto LABEL_66;
  }
  StatusReg = _ReadStatusReg(TPIDR_EL0);
  retry = *(int **)(StatusReg + 48);
  if ( !retry )
  {
    retry = arena_get2((int *)(a2 + 32 + i), 0);
    v25 = int_memalign(retry, i, a2, v55, v56, v57, v58, v59, v60, v61, v62);
    if ( v25 )
      _ZF = 1;
    else
      _ZF = retry == 0;
    if ( _ZF )
      goto LABEL_46;
    goto LABEL_45;
  }
  if ( _aarch64_cas4_acq(0, 1u, *(atomic_uint **)(StatusReg + 48)) )
    _lll_lock_wait_private(retry, v37, v38, v39, v40, v41, v42, v43, v44, v31, v32, v33, v34, v35, v36);
  v25 = int_memalign(retry, i, a2, v37, v38, v39, v40, v41, v42, v43, v44);
  if ( !v25 )
  {
LABEL_45:
    retry = arena_get_retry(retry, (int *)a2);
    v25 = int_memalign(retry, i, a2, v64, v65, v66, v67, v68, v69, v70, v71);
LABEL_46:
    if ( retry )
      goto LABEL_26;
    if ( v25 )
      goto LABEL_29;
    return 0;
  }
LABEL_26:
  if ( (int)_aarch64_swp4_rel(0, (atomic_uint *)retry) > 1 )
    _lll_lock_wake_private(retry, v45, v46, v47, v48, v49, v50);
  if ( !v25 )
    return 0;
LABEL_29:
  if ( (mtag_enabled & 1) != 0 )
  {
    _X0 = v25 - 16;
    __asm { LDG             X0, [X0] }
    if ( (*(_QWORD *)(_X0 + 8) & 2) != 0 )
      goto LABEL_70;
    _X0 = v25 - 16;
    __asm { LDG             X0, [X0] }
    v51 = _X0;
  }
  else
  {
    if ( (*(_QWORD *)(v25 - 8) & 2) != 0 )
      return v25;
    v51 = v25 - 16;
  }
  if ( (*(_QWORD *)(v51 + 8) & 4) != 0 )
  {
    v52 = -4 * qword_490600;
    if ( !qword_490600 )
      v52 = -67108864;
    v53 = *(int **)(v51 & v52);
  }
  else
  {
    v53 = &main_arena;
  }
  if ( retry == v53 )
  {
    if ( (mtag_enabled & 1) == 0 )
      return v25;
LABEL_70:
    _X0 = v25 - 16;
    __asm { LDG             X0, [X0] }
    v88 = _X0;
    _X0 = v25;
    __asm
    {
      GMI             X1, X0, XZR
      IRG             X0, X0, X1
    }
    v91 = *(_QWORD *)(v88 + 8);
    if ( (mtag_enabled & 1) != 0 )
      v85 = (v91 & 0xFFFFFFFFFFFFFFF8LL) - 16;
    else
      v85 = (v91 & 0xFFFFFFFFFFFFFFF8LL) - 16 + 8 * (((v91 ^ 2uLL) >> 1) & 1);
    return _libc_mtag_tag_region(_X0, v85);
  }
  v100 = _libc_assert_fail(
           "!p || chunk_is_mmapped (mem2chunk (p)) || ar_ptr == arena_for_chunk (mem2chunk (p))",
           "malloc.c",
           3659,
           "_mid_memalign");
  return free(v100);
}
