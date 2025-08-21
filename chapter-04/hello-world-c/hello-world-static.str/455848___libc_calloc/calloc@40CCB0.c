__int64 __fastcall calloc(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // x2
  unsigned __int64 v7; // x19
  _BOOL8 v8; // x0
  unsigned __int64 StatusReg; // x20
  int *v10; // x24
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  void *v14; // x4
  void *v15; // x5
  void *v16; // x6
  __int64 v17; // x26
  unsigned __int64 v18; // x25
  __int64 v19; // x1
  unsigned __int64 v20; // x1
  __int64 v21; // x0
  __int64 v22; // x20
  __int64 v23; // x23
  __int64 v25; // x2
  unsigned __int64 v26; // x2
  __int64 v28; // x25
  atomic_uint *retry; // x22
  __int64 v30; // x2
  __int64 v31; // x3
  __int64 v32; // x4
  __int64 v33; // x5
  unsigned __int64 v34; // x2
  __int64 v36; // x1
  __int64 v42; // x2
  __int64 v46; // x0
  int *v47; // x0
  __int64 v51; // x0

  v6 = (a1 * (unsigned __int128)a2) >> 64;
  v7 = a1 * a2;
  v8 = !is_mul_ok(a1, a2);
  if ( (v7 & 0x8000000000000000LL) != 0 || v8 )
  {
    *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40) = 12;
    return 0;
  }
  if ( (_malloc_initialized & 1) == 0 )
    ptmalloc_init_part_0((unsigned __int8)_malloc_initialized);
  StatusReg = _ReadStatusReg(TPIDR_EL0);
  if ( !*(_QWORD *)(StatusReg + 48 + 8) )
  {
    v46 = *(unsigned __int8 *)(StatusReg + 48 + 0x10);
    if ( (v46 & 1) == 0 )
      tcache_init_part_0(v46);
  }
  if ( !_libc_single_threaded )
  {
    v10 = *(int **)(StatusReg + 48);
    if ( v10 )
    {
      if ( _aarch64_cas4_acq(0, 1u, *(atomic_uint **)(StatusReg + 48)) )
        _lll_lock_wait_private(v10, v11, v12, v13, v14, v15, v16);
    }
    else
    {
      v18 = 0;
      v47 = arena_get2((int *)v7, 0);
      v17 = (__int64)v47;
      if ( !v47 )
        goto LABEL_15;
      v10 = v47;
    }
    v17 = *((_QWORD *)v10 + 12);
    v18 = *(_QWORD *)(v17 + 8) & 0xFFFFFFFFFFFFFFF8LL;
    if ( v10 != (int *)&main_arena )
    {
      v19 = -4 * qword_490600;
      if ( !qword_490600 )
        v19 = -67108864;
      v20 = (v17 & v19) + *(_QWORD *)((v17 & v19) + 0x18) - v17;
      if ( v18 < v20 )
        v18 = v20;
    }
LABEL_15:
    v21 = int_malloc((unsigned __int64)v10, v7, v12, v13, (__int64)v14, (__int64)v15);
    v22 = v21;
    if ( v21 )
      goto LABEL_16;
    goto LABEL_28;
  }
  v10 = (int *)&main_arena;
  v17 = qword_4906D0;
  v28 = *(_QWORD *)(qword_4906D0 + 8);
  v21 = int_malloc((unsigned __int64)&main_arena, v7, v6, a4, a5, a6);
  v22 = v21;
  v18 = v28 & 0xFFFFFFFFFFFFFFF8LL;
  if ( !v21 )
  {
LABEL_28:
    if ( !_libc_single_threaded && v10 )
    {
      retry = (atomic_uint *)arena_get_retry(v10, v7);
      v22 = int_malloc((unsigned __int64)retry, v7, v30, v31, v32, v33);
      if ( retry && (int)_aarch64_swp4_rel(0, retry) > 1 )
        _lll_lock_wake_private(retry);
      if ( v22 )
      {
        v23 = v22 - 16;
        if ( (mtag_enabled & 1) == 0 )
          goto LABEL_24;
LABEL_58:
        _X0 = v23;
        __asm { LDG             X0, [X0] }
        v42 = _X0;
        _X0 = v22;
        __asm
        {
          GMI             X1, X0, XZR
          IRG             X0, X0, X1
        }
        return _libc_mtag_tag_zero_region(_X0, (*(_QWORD *)(v42 + 8) & 0xFFFFFFFFFFFFFFF8LL) - 16);
      }
    }
    return 0;
  }
LABEL_16:
  v23 = v21 - 16;
  if ( (mtag_enabled & 1) != 0 )
  {
    _X0 = v21 - 16;
    __asm { LDG             X0, [X0] }
    if ( (*(_QWORD *)(_X0 + 8) & 2) != 0 )
      goto LABEL_54;
    _X0 = v23;
    __asm { LDG             X0, [X0] }
LABEL_19:
    if ( (*(_QWORD *)(_X0 + 8) & 4) == 0 )
    {
      if ( v10 == (int *)&main_arena )
      {
        if ( _libc_single_threaded || (int)_aarch64_swp4_rel(0, (atomic_uint *)v10) <= 1 )
          goto LABEL_23;
LABEL_37:
        _lll_lock_wake_private(v10);
        goto LABEL_23;
      }
LABEL_69:
      _libc_assert_fail(
        "!mem || chunk_is_mmapped (mem2chunk (mem)) || av == arena_for_chunk (mem2chunk (mem))",
        "malloc.c",
        3756,
        "__libc_calloc");
      goto LABEL_70;
    }
    v36 = -4 * qword_490600;
    if ( !qword_490600 )
      v36 = -67108864;
    if ( v10 != *(int **)(_X0 & v36) )
      goto LABEL_69;
LABEL_54:
    if ( !_libc_single_threaded && v10 )
      goto LABEL_36;
    goto LABEL_23;
  }
  if ( (*(_QWORD *)(v21 - 8) & 2) == 0 )
  {
    _X0 = v21 - 16;
    goto LABEL_19;
  }
  if ( _libc_single_threaded )
    goto LABEL_24;
  if ( v10 )
  {
LABEL_36:
    if ( (int)_aarch64_swp4_rel(0, (atomic_uint *)v10) <= 1 )
      goto LABEL_23;
    goto LABEL_37;
  }
LABEL_23:
  if ( (mtag_enabled & 1) != 0 )
    goto LABEL_58;
LABEL_24:
  v25 = *(_QWORD *)(v23 + 8);
  if ( (v25 & 2) != 0 )
  {
    v26 = v7;
    if ( !perturb_byte )
      return v22;
    return memset(v22, 0, v26);
  }
  v34 = v25 & 0xFFFFFFFFFFFFFFF8LL;
  if ( !perturb_byte && v17 == v23 && v18 < v34 )
    v34 = v18;
  v26 = v34 - 8;
  if ( v26 > 0x17 )
  {
    if ( v26 <= 0x4F )
    {
      *(_QWORD *)(v22 + 16) = 0;
      *(_OWORD *)v22 = 0u;
      if ( v26 > 0x27 )
      {
        *(_OWORD *)(v22 + 24) = 0u;
        if ( v26 > 0x37 )
        {
          *(_OWORD *)(v22 + 40) = 0u;
          if ( v26 > 0x47 )
            *(_OWORD *)(v22 + 56) = 0u;
        }
      }
      return v22;
    }
    return memset(v22, 0, v26);
  }
LABEL_70:
  v51 = _libc_assert_fail("nclears >= 3", "malloc.c", 3809, "__libc_calloc");
  return malloc_trim(v51);
}
