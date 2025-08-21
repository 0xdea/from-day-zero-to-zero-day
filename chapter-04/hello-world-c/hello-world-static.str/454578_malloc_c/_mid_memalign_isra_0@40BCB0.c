__int64 __fastcall mid_memalign_isra_0(unsigned __int64 a1, unsigned __int64 a2, __int16 *a3, __int64 a4)
{
  atomic_uint *retry; // x24
  unsigned __int64 i; // x19
  unsigned __int64 v7; // x0
  int v8; // w6
  unsigned __int64 v9; // x0
  unsigned __int64 v10; // x3
  __int64 v11; // x2
  __int64 v12; // x8
  __int16 v13; // w7
  unsigned __int64 v14; // x20
  unsigned __int64 v15; // x0
  unsigned __int64 v16; // x1
  unsigned __int64 *v17; // x5
  unsigned __int64 StatusReg; // x1
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  void *v22; // x4
  void *v23; // x5
  void *v24; // x6
  unsigned __int64 v25; // x1
  __int64 v26; // x0
  atomic_uint *v27; // x0
  __int64 v29; // x3
  __int64 v31; // x3
  char *v32; // x0
  char *v33; // x1
  char *v34; // x2
  __int64 v35; // x0
  __int64 v41; // x2
  unsigned __int64 v45; // x1
  __int64 v48; // x2
  __int64 v51; // x1
  __int64 v60; // x0

  if ( a1 <= 0x10 )
    return malloc(a2, a2, a3, a4);
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
  v7 = a2;
  v8 = mtag_enabled & 1;
  if ( v8 )
    v7 = (a2 + 15) & 0xFFFFFFFFFFFFFFF0LL;
  v9 = v7 + 23;
  v10 = ((v9 & 0xFFFFFFFFFFFFFFF0LL) - 17) >> 4;
  if ( v9 <= 0x1F )
    v10 = 0;
  if ( qword_490638 > v10 )
  {
    v11 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 48 + 8);
    if ( v11 )
    {
      v12 = 2 * v10;
      v13 = *(_WORD *)(v11 + 2 * v10);
      if ( v13 )
      {
        v10 += 16LL;
        v14 = *(_QWORD *)(v11 + 8 * v10);
        if ( v14 )
        {
          v15 = *(_QWORD *)(v11 + 8 * v10);
          if ( (v14 & (i - 1)) == 0 )
          {
LABEL_75:
            if ( (v15 & 0xF) == 0 )
            {
              v14 = v15;
              *(_QWORD *)(v11 + 8 * v10) = *(_QWORD *)v15 ^ (v15 >> 12);
LABEL_64:
              *(_WORD *)(v11 + v12) = v13 - 1;
              *(_QWORD *)(v14 + 8) = 0;
              _X0 = (char *)(v14 - 16);
              if ( v8 )
                goto LABEL_65;
              return v14;
            }
LABEL_71:
            malloc_printerr("malloc(): unaligned tcache chunk detected");
LABEL_72:
            _lll_lock_wait_private(retry, v19, v20, v21, v22, v23, v24);
LABEL_24:
            v14 = (unsigned __int64)int_memalign(retry, i, a2, v21);
            if ( v14 )
              goto LABEL_25;
            goto LABEL_44;
          }
          while ( 1 )
          {
            v15 = *(_QWORD *)v14;
            v16 = v14 >> 12;
            v17 = (unsigned __int64 *)v14;
            v14 = (v14 >> 12) ^ *(_QWORD *)v14;
            if ( v16 == v15 )
              break;
            if ( (v14 & (i - 1)) == 0 )
            {
              if ( (unsigned __int64 *)(v11 + 8 * v10) == v17 )
                goto LABEL_75;
              if ( (v14 & 0xF) == 0 )
              {
                *v17 = *(_QWORD *)v14 ^ v16 ^ (v14 >> 12);
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
    v32 = int_memalign(&main_arena, i, a2, v10);
    v14 = (unsigned __int64)v32;
    if ( !v32 )
      return 0;
    v33 = v32 - 16;
    if ( (mtag_enabled & 1) != 0 )
    {
      _X0 = v32 - 16;
      __asm { LDG             X0, [X0] }
      if ( (*(_QWORD *)(_X0 + 8) & 2) != 0 )
        goto LABEL_57;
      _X0 = (char *)(v14 - 16);
      __asm { LDG             X0, [X0] }
      v34 = _X0;
    }
    else
    {
      v34 = v32 - 16;
      if ( (*((_QWORD *)v32 - 1) & 2) != 0 )
        return v14;
    }
    if ( (*((_QWORD *)v34 + 1) & 4) != 0 )
    {
      v35 = -4 * qword_490600;
      if ( !qword_490600 )
        v35 = -67108864;
      if ( *(_UNKNOWN **)((unsigned __int64)v34 & v35) != &main_arena )
        _libc_assert_fail(
          "!p || chunk_is_mmapped (mem2chunk (p)) || &main_arena == arena_for_chunk (mem2chunk (p))",
          "malloc.c",
          3641,
          "_mid_memalign");
    }
    if ( (mtag_enabled & 1) == 0 )
      return v14;
LABEL_57:
    _X0 = v33;
LABEL_65:
    __asm { LDG             X0, [X0] }
    v41 = _X0;
    _X0 = v14;
    __asm
    {
      GMI             X1, X0, XZR
      IRG             X0, X0, X1
    }
    if ( (mtag_enabled & 1) != 0 )
      v45 = (*(_QWORD *)(v41 + 8) & 0xFFFFFFFFFFFFFFF8LL) - 16;
    else
      v45 = (*(_QWORD *)(v41 + 8) & 0xFFFFFFFFFFFFFFF8LL) - 16 + 8 * (((*(_QWORD *)(v41 + 8) ^ 2uLL) >> 1) & 1);
    return _libc_mtag_tag_region(_X0, v45);
  }
  StatusReg = _ReadStatusReg(TPIDR_EL0);
  retry = *(atomic_uint **)(StatusReg + 48);
  if ( retry )
  {
    if ( !_aarch64_cas4_acq(0, 1u, *(atomic_uint **)(StatusReg + 48)) )
      goto LABEL_24;
    goto LABEL_72;
  }
  retry = (atomic_uint *)arena_get2(a2 + 32 + i, 0);
  v14 = (unsigned __int64)int_memalign(retry, i, a2, v29);
  if ( v14 )
    _ZF = 1;
  else
    _ZF = retry == 0;
  if ( !_ZF )
  {
LABEL_44:
    retry = (atomic_uint *)arena_get_retry(retry, a2);
    v14 = (unsigned __int64)int_memalign(retry, i, a2, v31);
  }
  if ( !retry )
  {
    if ( v14 )
      goto LABEL_28;
    return 0;
  }
LABEL_25:
  if ( (int)_aarch64_swp4_rel(0, retry) > 1 )
    _lll_lock_wake_private(retry);
  if ( !v14 )
    return 0;
LABEL_28:
  if ( (mtag_enabled & 1) != 0 )
  {
    _X0 = (char *)(v14 - 16);
    __asm { LDG             X0, [X0] }
    if ( (*(_QWORD *)(_X0 + 8) & 2) != 0 )
      goto LABEL_69;
    _X0 = (char *)(v14 - 16);
    __asm { LDG             X0, [X0] }
    v25 = (unsigned __int64)_X0;
  }
  else
  {
    if ( (*(_QWORD *)(v14 - 8) & 2) != 0 )
      return v14;
    v25 = v14 - 16;
  }
  if ( (*(_QWORD *)(v25 + 8) & 4) != 0 )
  {
    v26 = -4 * qword_490600;
    if ( !qword_490600 )
      v26 = -67108864;
    v27 = *(atomic_uint **)(v25 & v26);
  }
  else
  {
    v27 = (atomic_uint *)&main_arena;
  }
  if ( retry == v27 )
  {
    if ( (mtag_enabled & 1) == 0 )
      return v14;
LABEL_69:
    _X0 = (char *)(v14 - 16);
    __asm { LDG             X0, [X0] }
    v48 = _X0;
    _X0 = v14;
    __asm
    {
      GMI             X1, X0, XZR
      IRG             X0, X0, X1
    }
    v51 = *(_QWORD *)(v48 + 8);
    if ( (mtag_enabled & 1) != 0 )
      v45 = (v51 & 0xFFFFFFFFFFFFFFF8LL) - 16;
    else
      v45 = (v51 & 0xFFFFFFFFFFFFFFF8LL) - 16 + 8 * (((v51 ^ 2uLL) >> 1) & 1);
    return _libc_mtag_tag_region(_X0, v45);
  }
  v60 = _libc_assert_fail(
          "!p || chunk_is_mmapped (mem2chunk (p)) || ar_ptr == arena_for_chunk (mem2chunk (p))",
          "malloc.c",
          3659,
          "_mid_memalign");
  return free(v60);
}
