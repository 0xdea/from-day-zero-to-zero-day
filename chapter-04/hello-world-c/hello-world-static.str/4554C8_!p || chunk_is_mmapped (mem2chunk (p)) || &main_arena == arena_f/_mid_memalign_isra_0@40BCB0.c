__int64 __fastcall mid_memalign_isra_0(
        unsigned __int64 a1,
        unsigned __int64 a2,
        __int16 *a3,
        __int64 a4,
        __int64 a5,
        unsigned __int64 *a6)
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
  unsigned __int64 StatusReg; // x1
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  void *v23; // x4
  void *v24; // x5
  void *v25; // x6
  unsigned __int64 v26; // x1
  __int64 v27; // x0
  int *v28; // x0
  __int64 v30; // x3
  __int64 v31; // x4
  __int64 v32; // x5
  __int64 v34; // x3
  __int64 v35; // x4
  __int64 v36; // x5
  char *v37; // x0
  char *v38; // x1
  char *v39; // x2
  __int64 v40; // x0
  __int64 v46; // x2
  unsigned __int64 v50; // x1
  __int64 v53; // x2
  __int64 v56; // x1
  __int64 v65; // x0

  if ( a1 <= 0x10 )
    return malloc(a2, a2, a3, a4, a5, (__int64)a6);
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
          a5 = i - 1;
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
              _X0 = (unsigned __int64 *)(v16 - 16);
              if ( v10 )
                goto LABEL_65;
              return v16;
            }
LABEL_71:
            malloc_printerr("malloc(): unaligned tcache chunk detected");
LABEL_72:
            _lll_lock_wait_private(retry, v20, v21, v22, v23, v24, v25);
LABEL_24:
            v16 = (unsigned __int64)int_memalign(retry, i, a2, v22, (__int64)v23, (__int64)v24);
            if ( v16 )
              goto LABEL_25;
            goto LABEL_44;
          }
          while ( 1 )
          {
            v17 = *(_QWORD *)v16;
            v18 = v16 >> 12;
            a6 = (unsigned __int64 *)v16;
            v16 = (v16 >> 12) ^ *(_QWORD *)v16;
            if ( v18 == v17 )
              break;
            if ( (v16 & a5) == 0 )
            {
              if ( (unsigned __int64 *)(v13 + 8 * v12) == a6 )
                goto LABEL_75;
              if ( (v16 & 0xF) == 0 )
              {
                *a6 = *(_QWORD *)v16 ^ v18 ^ (v16 >> 12);
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
    v37 = int_memalign(&main_arena, i, a2, v12, a5, (__int64)a6);
    v16 = (unsigned __int64)v37;
    if ( !v37 )
      return 0;
    v38 = v37 - 16;
    if ( (mtag_enabled & 1) != 0 )
    {
      _X0 = v37 - 16;
      __asm { LDG             X0, [X0] }
      if ( (*(_QWORD *)(_X0 + 8) & 2) != 0 )
        goto LABEL_57;
      _X0 = (unsigned __int64 *)(v16 - 16);
      __asm { LDG             X0, [X0] }
      v39 = _X0;
    }
    else
    {
      v39 = v37 - 16;
      if ( (*((_QWORD *)v37 - 1) & 2) != 0 )
        return v16;
    }
    if ( (*((_QWORD *)v39 + 1) & 4) != 0 )
    {
      v40 = -4 * qword_490600;
      if ( !qword_490600 )
        v40 = -67108864;
      if ( *(_UNKNOWN **)((unsigned __int64)v39 & v40) != &main_arena )
        _libc_assert_fail(
          "!p || chunk_is_mmapped (mem2chunk (p)) || &main_arena == arena_for_chunk (mem2chunk (p))",
          "malloc.c",
          3641,
          "_mid_memalign");
    }
    if ( (mtag_enabled & 1) == 0 )
      return v16;
LABEL_57:
    _X0 = (unsigned __int64 *)v38;
LABEL_65:
    __asm { LDG             X0, [X0] }
    v46 = _X0;
    _X0 = v16;
    __asm
    {
      GMI             X1, X0, XZR
      IRG             X0, X0, X1
    }
    if ( (mtag_enabled & 1) != 0 )
      v50 = (*(_QWORD *)(v46 + 8) & 0xFFFFFFFFFFFFFFF8LL) - 16;
    else
      v50 = (*(_QWORD *)(v46 + 8) & 0xFFFFFFFFFFFFFFF8LL) - 16 + 8 * (((*(_QWORD *)(v46 + 8) ^ 2uLL) >> 1) & 1);
    return _libc_mtag_tag_region(_X0, v50);
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
  v16 = (unsigned __int64)int_memalign(retry, i, a2, v30, v31, v32);
  if ( v16 )
    _ZF = 1;
  else
    _ZF = retry == 0;
  if ( !_ZF )
  {
LABEL_44:
    retry = (int *)arena_get_retry(retry, a2);
    v16 = (unsigned __int64)int_memalign(retry, i, a2, v34, v35, v36);
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
    _X0 = (unsigned __int64 *)(v16 - 16);
    __asm { LDG             X0, [X0] }
    if ( (*(_QWORD *)(_X0 + 8) & 2) != 0 )
      goto LABEL_69;
    _X0 = (unsigned __int64 *)(v16 - 16);
    __asm { LDG             X0, [X0] }
    v26 = (unsigned __int64)_X0;
  }
  else
  {
    if ( (*(_QWORD *)(v16 - 8) & 2) != 0 )
      return v16;
    v26 = v16 - 16;
  }
  if ( (*(_QWORD *)(v26 + 8) & 4) != 0 )
  {
    v27 = -4 * qword_490600;
    if ( !qword_490600 )
      v27 = -67108864;
    v28 = *(int **)(v26 & v27);
  }
  else
  {
    v28 = (int *)&main_arena;
  }
  if ( retry == v28 )
  {
    if ( (mtag_enabled & 1) == 0 )
      return v16;
LABEL_69:
    _X0 = (unsigned __int64 *)(v16 - 16);
    __asm { LDG             X0, [X0] }
    v53 = _X0;
    _X0 = v16;
    __asm
    {
      GMI             X1, X0, XZR
      IRG             X0, X0, X1
    }
    v56 = *(_QWORD *)(v53 + 8);
    if ( (mtag_enabled & 1) != 0 )
      v50 = (v56 & 0xFFFFFFFFFFFFFFF8LL) - 16;
    else
      v50 = (v56 & 0xFFFFFFFFFFFFFFF8LL) - 16 + 8 * (((v56 ^ 2uLL) >> 1) & 1);
    return _libc_mtag_tag_region(_X0, v50);
  }
  v65 = _libc_assert_fail(
          "!p || chunk_is_mmapped (mem2chunk (p)) || ar_ptr == arena_for_chunk (mem2chunk (p))",
          "malloc.c",
          3659,
          "_mid_memalign");
  return free(v65);
}
