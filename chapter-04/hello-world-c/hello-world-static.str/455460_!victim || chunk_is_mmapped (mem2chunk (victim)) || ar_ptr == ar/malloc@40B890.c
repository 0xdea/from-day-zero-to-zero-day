__int64 __fastcall malloc(unsigned __int64 a1, __int64 a2, __int16 *a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v7; // x0
  unsigned __int64 StatusReg; // x20
  unsigned __int64 v9; // x0
  unsigned __int64 v10; // x23
  bool v11; // cc
  unsigned __int64 v12; // x19
  __int64 v13; // x0
  unsigned __int64 v14; // x19
  int *retry; // x19
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  void *v19; // x4
  void *v20; // x5
  void *v21; // x6
  unsigned __int64 v22; // x20
  unsigned __int64 v23; // x1
  unsigned __int64 v24; // x2
  __int64 v25; // x0
  int *v26; // x0
  __int64 v28; // x0
  __int16 v29; // w1
  __int64 v30; // x19
  char v31; // w3
  __int64 v37; // x2
  unsigned __int64 v41; // x1
  __int64 v42; // x0
  __int64 v43; // x2
  __int64 v44; // x3
  __int64 v45; // x4
  __int64 v46; // x5
  __int64 v48; // x2
  __int64 v49; // x3
  __int64 v50; // x4
  __int64 v51; // x5
  __int64 v54; // x2
  __int64 v60; // x2
  unsigned __int64 v72; // x0
  unsigned __int64 v73; // x1
  __int16 *v74; // x2
  __int64 v75; // x3
  __int64 v76; // x4
  __int64 v77; // x5

  if ( (_malloc_initialized & 1) != 0 )
  {
    if ( (a1 & 0x8000000000000000LL) == 0 )
      goto LABEL_3;
LABEL_26:
    *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40) = 12;
    return 0;
  }
  ptmalloc_init_part_0((unsigned __int8)_malloc_initialized);
  if ( (a1 & 0x8000000000000000LL) != 0 )
    goto LABEL_26;
LABEL_3:
  v7 = a1;
  if ( (mtag_enabled & 1) != 0 )
    v7 = (a1 + 15) & 0xFFFFFFFFFFFFFFF0LL;
  StatusReg = _ReadStatusReg(TPIDR_EL0);
  v9 = v7 + 23;
  v10 = StatusReg + 48;
  v11 = v9 > 0x1F;
  v12 = (v9 & 0xFFFFFFFFFFFFFFF0LL) - 17;
  v13 = *(_QWORD *)(StatusReg + 48 + 8);
  v14 = v12 >> 4;
  if ( !v11 )
    v14 = 0;
  if ( v13 )
  {
    if ( v14 >= qword_490638 )
    {
LABEL_9:
      if ( !_libc_single_threaded )
      {
        retry = *(int **)(StatusReg + 48);
        if ( retry )
        {
          if ( _aarch64_cas4_acq(0, 1u, *(atomic_uint **)(StatusReg + 48)) )
            _lll_lock_wait_private(retry, v16, v17, v18, v19, v20, v21);
          v22 = int_malloc((unsigned __int64)retry, a1, v17, v18, (__int64)v19, (__int64)v20);
          if ( v22 )
          {
LABEL_14:
            if ( (int)_aarch64_swp4_rel(0, (atomic_uint *)retry) > 1 )
              _lll_lock_wake_private(retry);
LABEL_16:
            if ( (mtag_enabled & 1) != 0 )
              goto LABEL_57;
            v23 = v22 - 16;
            v24 = v22 - 16;
            if ( v22 )
            {
LABEL_18:
              if ( (*(_QWORD *)(v23 + 8) & 2) == 0 )
              {
                while ( 1 )
                {
                  if ( (*(_QWORD *)(v24 + 8) & 4) != 0 )
                  {
                    v25 = -4 * qword_490600;
                    if ( !qword_490600 )
                      v25 = -67108864;
                    v26 = *(int **)(v24 & v25);
                  }
                  else
                  {
                    v26 = (int *)&main_arena;
                  }
                  if ( retry == v26 )
                    break;
                  _libc_assert_fail(
                    "!victim || chunk_is_mmapped (mem2chunk (victim)) || ar_ptr == arena_for_chunk (mem2chunk (victim))",
                    "malloc.c",
                    3351,
                    "__libc_malloc");
LABEL_57:
                  if ( !v22 )
                    return 0;
                  _X0 = v22 - 16;
                  __asm { LDG             X0, [X0] }
                  v60 = _X0;
                  _X0 = v22;
                  __asm
                  {
                    GMI             X1, X0, XZR
                    IRG             X0, X0, X1
                  }
                  v22 = _libc_mtag_tag_region(_X0, (*(_QWORD *)(v60 + 8) & 0xFFFFFFFFFFFFFFF8LL) - 16);
                  if ( !v22 )
                    return 0;
                  v24 = v22 - 16;
                  v23 = v22 - 16;
                  if ( (mtag_enabled & 1) == 0 )
                    goto LABEL_18;
                  _X0 = v22 - 16;
                  __asm { LDG             X0, [X0] }
                  if ( (*(_QWORD *)(_X0 + 8) & 2) != 0 )
                    break;
                  _X0 = v22 - 16;
                  __asm { LDG             X0, [X0] }
                  v24 = _X0;
                }
              }
              return v22;
            }
            return 0;
          }
        }
        else
        {
          retry = arena_get2((int *)a1, 0);
          v22 = int_malloc((unsigned __int64)retry, a1, v43, v44, v45, v46);
          if ( v22 )
            _ZF = 1;
          else
            _ZF = retry == 0;
          if ( _ZF )
          {
LABEL_50:
            if ( !retry )
              goto LABEL_16;
            goto LABEL_14;
          }
        }
        retry = (int *)arena_get_retry(retry, a1);
        v22 = int_malloc((unsigned __int64)retry, a1, v48, v49, v50, v51);
        goto LABEL_50;
      }
      v22 = int_malloc((unsigned __int64)&main_arena, a1, (__int64)a3, a4, a5, a6);
      if ( (mtag_enabled & 1) != 0 )
      {
        if ( !v22 )
          return 0;
        _X0 = v22 - 16;
        __asm { LDG             X0, [X0] }
        v54 = _X0;
        _X0 = v22;
        __asm
        {
          GMI             X1, X0, XZR
          IRG             X0, X0, X1
        }
        v22 = _libc_mtag_tag_region(_X0, (*(_QWORD *)(v54 + 8) & 0xFFFFFFFFFFFFFFF8LL) - 16);
        if ( !v22 )
          return 0;
        goto LABEL_37;
      }
      if ( v22 )
      {
LABEL_37:
        v41 = v22 - 16;
        if ( (mtag_enabled & 1) != 0 )
        {
          _X0 = v22 - 16;
          __asm { LDG             X0, [X0] }
          if ( (*(_QWORD *)(_X0 + 8) & 2) != 0 )
            return v22;
          _X0 = v22 - 16;
          __asm { LDG             X0, [X0] }
          v41 = _X0;
        }
        else if ( (*(_QWORD *)(v22 - 8) & 2) != 0 )
        {
          return v22;
        }
        if ( (*(_QWORD *)(v41 + 8) & 4) != 0 )
        {
          v42 = -4 * qword_490600;
          if ( !qword_490600 )
            v42 = -67108864;
          if ( *(_UNKNOWN **)(v41 & v42) != &main_arena )
          {
            _libc_assert_fail(
              "!victim || chunk_is_mmapped (mem2chunk (victim)) || &main_arena == arena_for_chunk (mem2chunk (victim))",
              "malloc.c",
              3329,
              "__libc_malloc");
            return 0;
          }
        }
        return v22;
      }
      return 0;
    }
  }
  else
  {
    v28 = *(unsigned __int8 *)(v10 + 0x10);
    if ( (v28 & 1) != 0 )
      goto LABEL_9;
    tcache_init_part_0(v28);
    if ( qword_490638 <= v14 )
      goto LABEL_9;
    v13 = *(_QWORD *)(v10 + 8);
    if ( !v13 )
      goto LABEL_9;
  }
  a3 = (__int16 *)(v13 + 2 * v14);
  v29 = *a3;
  if ( !*a3 )
    goto LABEL_9;
  v30 = v13 + 8 * v14;
  v22 = *(_QWORD *)(v30 + 128);
  if ( (v22 & 0xF) != 0 )
  {
    v72 = malloc_printerr("malloc(): unaligned tcache chunk detected");
    return mid_memalign_isra_0(v72, v73, v74, v75, v76, v77);
  }
  else
  {
    v31 = mtag_enabled;
    *(_QWORD *)(v30 + 128) = *(_QWORD *)v22 ^ (v22 >> 12);
    *a3 = v29 - 1;
    *(_QWORD *)(v22 + 8) = 0;
    if ( (v31 & 1) == 0 )
      return v22;
    _X0 = v22 - 16;
    __asm { LDG             X0, [X0] }
    v37 = _X0;
    _X0 = v22;
    __asm
    {
      GMI             X1, X0, XZR
      IRG             X0, X0, X1
    }
    return _libc_mtag_tag_region(_X0, (*(_QWORD *)(v37 + 8) & 0xFFFFFFFFFFFFFFF8LL) - 16);
  }
}
