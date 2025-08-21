__int64 __fastcall mid_memalign_isra_0(
        unsigned __int64 a1,
        unsigned __int64 a2,
        __int16 *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  int *retry; // x24
  unsigned __int64 i; // x19
  unsigned __int64 v9; // x0
  int v10; // w6
  unsigned __int64 v11; // x0
  unsigned __int64 v12; // x3
  __int64 v13; // x2
  __int64 v14; // x8
  __int16 v15; // w7
  unsigned __int64 v16; // x20
  unsigned __int64 v17; // x0
  unsigned __int64 v18; // x1
  unsigned __int64 *v19; // x5
  unsigned __int64 StatusReg; // x1
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  void *v24; // x4
  void *v25; // x5
  void *v26; // x6
  unsigned __int64 v27; // x1
  __int64 v28; // x0
  int *v29; // x0
  __int64 v31; // x3
  __int64 v33; // x3
  char *v34; // x0
  char *v35; // x1
  char *v36; // x2
  __int64 v37; // x0
  __int64 v43; // x2
  unsigned __int64 v47; // x1
  __int64 v50; // x2
  __int64 v53; // x1
  __int64 v62; // x0

  if ( a1 <= 0x10 )
    return malloc(a2, a2, a3, a4, a5, a6);
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
  v9 = a2;
  v10 = mtag_enabled & 1;
  if ( v10 )
    v9 = (a2 + 15) & 0xFFFFFFFFFFFFFFF0LL;
  v11 = v9 + 23;
  v12 = ((v11 & 0xFFFFFFFFFFFFFFF0LL) - 17) >> 4;
  if ( v11 <= 0x1F )
    v12 = 0;
  if ( qword_490638 > v12 )
  {
    v13 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 48 + 8);
    if ( v13 )
    {
      v14 = 2 * v12;
      v15 = *(_WORD *)(v13 + 2 * v12);
      if ( v15 )
      {
        v12 += 16LL;
        v16 = *(_QWORD *)(v13 + 8 * v12);
        if ( v16 )
        {
          v17 = *(_QWORD *)(v13 + 8 * v12);
          if ( (v16 & (i - 1)) == 0 )
          {
LABEL_75:
            if ( (v17 & 0xF) == 0 )
            {
              v16 = v17;
              *(_QWORD *)(v13 + 8 * v12) = *(_QWORD *)v17 ^ (v17 >> 12);
LABEL_64:
              *(_WORD *)(v13 + v14) = v15 - 1;
              *(_QWORD *)(v16 + 8) = 0;
              _X0 = (char *)(v16 - 16);
              if ( v10 )
                goto LABEL_65;
              return v16;
            }
LABEL_71:
            malloc_printerr("malloc(): unaligned tcache chunk detected");
LABEL_72:
            _lll_lock_wait_private(retry, v21, v22, v23, v24, v25, v26);
LABEL_24:
            v16 = (unsigned __int64)int_memalign(retry, i, a2, v23);
            if ( v16 )
              goto LABEL_25;
            goto LABEL_44;
          }
          while ( 1 )
          {
            v17 = *(_QWORD *)v16;
            v18 = v16 >> 12;
            v19 = (unsigned __int64 *)v16;
            v16 = (v16 >> 12) ^ *(_QWORD *)v16;
            if ( v18 == v17 )
              break;
            if ( (v16 & (i - 1)) == 0 )
            {
              if ( (unsigned __int64 *)(v13 + 8 * v12) == v19 )
                goto LABEL_75;
              if ( (v16 & 0xF) == 0 )
              {
                *v19 = *(_QWORD *)v16 ^ v18 ^ (v16 >> 12);
                goto LABEL_64;
              }
              goto LABEL_71;
            }
          }
        }
      }
    }
  }
  if ( _libc_single_threaded )
  {
    v34 = int_memalign(&main_arena, i, a2, v12);
    v16 = (unsigned __int64)v34;
    if ( !v34 )
      return 0;
    v35 = v34 - 16;
    if ( (mtag_enabled & 1) != 0 )
    {
      _X0 = v34 - 16;
      __asm { LDG             X0, [X0] }
      if ( (*(_QWORD *)(_X0 + 8) & 2) != 0 )
        goto LABEL_57;
      _X0 = (char *)(v16 - 16);
      __asm { LDG             X0, [X0] }
      v36 = _X0;
    }
    else
    {
      v36 = v34 - 16;
      if ( (*((_QWORD *)v34 - 1) & 2) != 0 )
        return v16;
    }
    if ( (*((_QWORD *)v36 + 1) & 4) != 0 )
    {
      v37 = -4 * qword_490600;
      if ( !qword_490600 )
        v37 = -67108864;
      if ( *(_UNKNOWN **)((unsigned __int64)v36 & v37) != &main_arena )
        _libc_assert_fail(
          "!p || chunk_is_mmapped (mem2chunk (p)) || &main_arena == arena_for_chunk (mem2chunk (p))",
          "malloc.c",
          3641,
          "_mid_memalign");
    }
    if ( (mtag_enabled & 1) == 0 )
      return v16;
LABEL_57:
    _X0 = v35;
LABEL_65:
    __asm { LDG             X0, [X0] }
    v43 = _X0;
    _X0 = v16;
    __asm
    {
      GMI             X1, X0, XZR
      IRG             X0, X0, X1
    }
    if ( (mtag_enabled & 1) != 0 )
      v47 = (*(_QWORD *)(v43 + 8) & 0xFFFFFFFFFFFFFFF8LL) - 16;
    else
      v47 = (*(_QWORD *)(v43 + 8) & 0xFFFFFFFFFFFFFFF8LL) - 16 + 8 * (((*(_QWORD *)(v43 + 8) ^ 2uLL) >> 1) & 1);
    return _libc_mtag_tag_region(_X0, v47);
  }
  StatusReg = _ReadStatusReg(TPIDR_EL0);
  retry = *(int **)(StatusReg + 48);
  if ( retry )
  {
    if ( !_aarch64_cas4_acq(0, 1u, *(atomic_uint **)(StatusReg + 48)) )
      goto LABEL_24;
    goto LABEL_72;
  }
  retry = arena_get2((int *)(a2 + 32 + i), 0);
  v16 = (unsigned __int64)int_memalign(retry, i, a2, v31);
  if ( v16 )
    _ZF = 1;
  else
    _ZF = retry == 0;
  if ( !_ZF )
  {
LABEL_44:
    retry = (int *)arena_get_retry(retry, a2);
    v16 = (unsigned __int64)int_memalign(retry, i, a2, v33);
  }
  if ( !retry )
  {
    if ( v16 )
      goto LABEL_28;
    return 0;
  }
LABEL_25:
  if ( (int)_aarch64_swp4_rel(0, (atomic_uint *)retry) > 1 )
    _lll_lock_wake_private(retry);
  if ( !v16 )
    return 0;
LABEL_28:
  if ( (mtag_enabled & 1) != 0 )
  {
    _X0 = (char *)(v16 - 16);
    __asm { LDG             X0, [X0] }
    if ( (*(_QWORD *)(_X0 + 8) & 2) != 0 )
      goto LABEL_69;
    _X0 = (char *)(v16 - 16);
    __asm { LDG             X0, [X0] }
    v27 = (unsigned __int64)_X0;
  }
  else
  {
    if ( (*(_QWORD *)(v16 - 8) & 2) != 0 )
      return v16;
    v27 = v16 - 16;
  }
  if ( (*(_QWORD *)(v27 + 8) & 4) != 0 )
  {
    v28 = -4 * qword_490600;
    if ( !qword_490600 )
      v28 = -67108864;
    v29 = *(int **)(v27 & v28);
  }
  else
  {
    v29 = (int *)&main_arena;
  }
  if ( retry == v29 )
  {
    if ( (mtag_enabled & 1) == 0 )
      return v16;
LABEL_69:
    _X0 = (char *)(v16 - 16);
    __asm { LDG             X0, [X0] }
    v50 = _X0;
    _X0 = v16;
    __asm
    {
      GMI             X1, X0, XZR
      IRG             X0, X0, X1
    }
    v53 = *(_QWORD *)(v50 + 8);
    if ( (mtag_enabled & 1) != 0 )
      v47 = (v53 & 0xFFFFFFFFFFFFFFF8LL) - 16;
    else
      v47 = (v53 & 0xFFFFFFFFFFFFFFF8LL) - 16 + 8 * (((v53 ^ 2uLL) >> 1) & 1);
    return _libc_mtag_tag_region(_X0, v47);
  }
  v62 = _libc_assert_fail(
          "!p || chunk_is_mmapped (mem2chunk (p)) || ar_ptr == arena_for_chunk (mem2chunk (p))",
          "malloc.c",
          3659,
          "_mid_memalign");
  return free(v62);
}
