__int64 __fastcall malloc(unsigned __int64 a1, __int64 a2, __int16 *a3, __int64 a4)
{
  unsigned __int64 v5; // x0
  unsigned __int64 StatusReg; // x20
  unsigned __int64 v7; // x0
  unsigned __int64 v8; // x23
  bool v9; // cc
  unsigned __int64 v10; // x19
  __int64 v11; // x0
  unsigned __int64 v12; // x19
  atomic_uint *retry; // x19
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  void *v17; // x4
  void *v18; // x5
  void *v19; // x6
  unsigned __int64 v20; // x20
  unsigned __int64 v21; // x1
  unsigned __int64 v22; // x2
  __int64 v23; // x0
  atomic_uint *v24; // x0
  __int64 v26; // x0
  __int16 v27; // w1
  __int64 v28; // x19
  char v29; // w3
  __int64 v35; // x2
  unsigned __int64 v39; // x1
  __int64 v40; // x0
  __int64 v41; // x2
  __int64 v42; // x3
  __int64 v44; // x2
  __int64 v45; // x3
  __int64 v48; // x2
  __int64 v54; // x2
  __int64 v66; // x0

  if ( (_malloc_initialized & 1) != 0 )
  {
    if ( (a1 & 0x8000000000000000LL) == 0 )
      goto LABEL_3;
LABEL_26:
    *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40) = 12;
    return 0;
  }
  ptmalloc_init_part_0();
  if ( (a1 & 0x8000000000000000LL) != 0 )
    goto LABEL_26;
LABEL_3:
  v5 = a1;
  if ( (mtag_enabled & 1) != 0 )
    v5 = (a1 + 15) & 0xFFFFFFFFFFFFFFF0LL;
  StatusReg = _ReadStatusReg(TPIDR_EL0);
  v7 = v5 + 23;
  v8 = StatusReg + 48;
  v9 = v7 > 0x1F;
  v10 = (v7 & 0xFFFFFFFFFFFFFFF0LL) - 17;
  v11 = *(_QWORD *)(StatusReg + 48 + 8);
  v12 = v10 >> 4;
  if ( !v9 )
    v12 = 0;
  if ( v11 )
  {
    if ( v12 >= qword_490638 )
    {
LABEL_9:
      if ( !_libc_single_threaded )
      {
        retry = *(atomic_uint **)(StatusReg + 48);
        if ( retry )
        {
          if ( _aarch64_cas4_acq(0, 1u, *(atomic_uint **)(StatusReg + 48)) )
            _lll_lock_wait_private(retry, v14, v15, v16, v17, v18, v19);
          v20 = int_malloc((unsigned __int64)retry, a1, v15, v16);
          if ( v20 )
          {
LABEL_14:
            if ( (int)_aarch64_swp4_rel(0, retry) > 1 )
              _lll_lock_wake_private(retry);
LABEL_16:
            if ( (mtag_enabled & 1) != 0 )
              goto LABEL_57;
            v21 = v20 - 16;
            v22 = v20 - 16;
            if ( v20 )
            {
LABEL_18:
              if ( (*(_QWORD *)(v21 + 8) & 2) == 0 )
              {
                while ( 1 )
                {
                  if ( (*(_QWORD *)(v22 + 8) & 4) != 0 )
                  {
                    v23 = -4 * qword_490600;
                    if ( !qword_490600 )
                      v23 = -67108864;
                    v24 = *(atomic_uint **)(v22 & v23);
                  }
                  else
                  {
                    v24 = (atomic_uint *)&main_arena;
                  }
                  if ( retry == v24 )
                    break;
                  _libc_assert_fail(
                    "!victim || chunk_is_mmapped (mem2chunk (victim)) || ar_ptr == arena_for_chunk (mem2chunk (victim))",
                    "malloc.c",
                    3351,
                    "__libc_malloc");
LABEL_57:
                  if ( !v20 )
                    return 0;
                  _X0 = v20 - 16;
                  __asm { LDG             X0, [X0] }
                  v54 = _X0;
                  _X0 = v20;
                  __asm
                  {
                    GMI             X1, X0, XZR
                    IRG             X0, X0, X1
                  }
                  v20 = _libc_mtag_tag_region(_X0, (*(_QWORD *)(v54 + 8) & 0xFFFFFFFFFFFFFFF8LL) - 16);
                  if ( !v20 )
                    return 0;
                  v22 = v20 - 16;
                  v21 = v20 - 16;
                  if ( (mtag_enabled & 1) == 0 )
                    goto LABEL_18;
                  _X0 = v20 - 16;
                  __asm { LDG             X0, [X0] }
                  if ( (*(_QWORD *)(_X0 + 8) & 2) != 0 )
                    break;
                  _X0 = v20 - 16;
                  __asm { LDG             X0, [X0] }
                  v22 = _X0;
                }
              }
              return v20;
            }
            return 0;
          }
        }
        else
        {
          retry = (atomic_uint *)arena_get2(a1, 0);
          v20 = int_malloc((unsigned __int64)retry, a1, v41, v42);
          if ( v20 )
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
        retry = (atomic_uint *)arena_get_retry(retry, a1);
        v20 = int_malloc((unsigned __int64)retry, a1, v44, v45);
        goto LABEL_50;
      }
      v20 = int_malloc((unsigned __int64)&main_arena, a1, (__int64)a3, a4);
      if ( (mtag_enabled & 1) != 0 )
      {
        if ( !v20 )
          return 0;
        _X0 = v20 - 16;
        __asm { LDG             X0, [X0] }
        v48 = _X0;
        _X0 = v20;
        __asm
        {
          GMI             X1, X0, XZR
          IRG             X0, X0, X1
        }
        v20 = _libc_mtag_tag_region(_X0, (*(_QWORD *)(v48 + 8) & 0xFFFFFFFFFFFFFFF8LL) - 16);
        if ( !v20 )
          return 0;
        goto LABEL_37;
      }
      if ( v20 )
      {
LABEL_37:
        v39 = v20 - 16;
        if ( (mtag_enabled & 1) != 0 )
        {
          _X0 = v20 - 16;
          __asm { LDG             X0, [X0] }
          if ( (*(_QWORD *)(_X0 + 8) & 2) != 0 )
            return v20;
          _X0 = v20 - 16;
          __asm { LDG             X0, [X0] }
          v39 = _X0;
        }
        else if ( (*(_QWORD *)(v20 - 8) & 2) != 0 )
        {
          return v20;
        }
        if ( (*(_QWORD *)(v39 + 8) & 4) != 0 )
        {
          v40 = -4 * qword_490600;
          if ( !qword_490600 )
            v40 = -67108864;
          if ( *(_UNKNOWN **)(v39 & v40) != &main_arena )
          {
            _libc_assert_fail(
              "!victim || chunk_is_mmapped (mem2chunk (victim)) || &main_arena == arena_for_chunk (mem2chunk (victim))",
              "malloc.c",
              3329,
              "__libc_malloc");
            return 0;
          }
        }
        return v20;
      }
      return 0;
    }
  }
  else
  {
    v26 = *(unsigned __int8 *)(v8 + 0x10);
    if ( (v26 & 1) != 0 )
      goto LABEL_9;
    tcache_init_part_0(v26);
    if ( qword_490638 <= v12 )
      goto LABEL_9;
    v11 = *(_QWORD *)(v8 + 8);
    if ( !v11 )
      goto LABEL_9;
  }
  a3 = (__int16 *)(v11 + 2 * v12);
  v27 = *a3;
  if ( !*a3 )
    goto LABEL_9;
  v28 = v11 + 8 * v12;
  v20 = *(_QWORD *)(v28 + 128);
  if ( (v20 & 0xF) != 0 )
  {
    v66 = malloc_printerr("malloc(): unaligned tcache chunk detected");
    return mid_memalign_isra_0(v66);
  }
  else
  {
    v29 = mtag_enabled;
    *(_QWORD *)(v28 + 128) = *(_QWORD *)v20 ^ (v20 >> 12);
    *a3 = v27 - 1;
    *(_QWORD *)(v20 + 8) = 0;
    if ( (v29 & 1) == 0 )
      return v20;
    _X0 = v20 - 16;
    __asm { LDG             X0, [X0] }
    v35 = _X0;
    _X0 = v20;
    __asm
    {
      GMI             X1, X0, XZR
      IRG             X0, X0, X1
    }
    return _libc_mtag_tag_region(_X0, (*(_QWORD *)(v35 + 8) & 0xFFFFFFFFFFFFFFF8LL) - 16);
  }
}
