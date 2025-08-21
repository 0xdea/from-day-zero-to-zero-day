__int64 __fastcall calloc(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // x2
  unsigned __int64 v5; // x19
  _BOOL8 v6; // x0
  unsigned __int64 StatusReg; // x20
  atomic_uint *v8; // x24
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  void *v12; // x4
  void *v13; // x5
  void *v14; // x6
  __int64 v15; // x26
  unsigned __int64 v16; // x25
  __int64 v17; // x1
  unsigned __int64 v18; // x1
  __int64 v19; // x0
  __int64 v20; // x20
  __int64 v21; // x23
  __int64 v23; // x2
  unsigned __int64 v24; // x2
  __int64 v26; // x25
  atomic_uint *retry; // x22
  __int64 v28; // x2
  __int64 v29; // x3
  unsigned __int64 v30; // x2
  __int64 v32; // x1
  __int64 v38; // x2
  __int64 v42; // x0
  __int64 v43; // x0
  __int64 v47; // x0

  v4 = (a1 * (unsigned __int128)a2) >> 64;
  v5 = a1 * a2;
  v6 = !is_mul_ok(a1, a2);
  if ( (v5 & 0x8000000000000000LL) != 0 || v6 )
  {
    *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40) = 12;
    return 0;
  }
  if ( (_malloc_initialized & 1) == 0 )
    ptmalloc_init_part_0();
  StatusReg = _ReadStatusReg(TPIDR_EL0);
  if ( !*(_QWORD *)(StatusReg + 48 + 8) )
  {
    v42 = *(unsigned __int8 *)(StatusReg + 48 + 0x10);
    if ( (v42 & 1) == 0 )
      tcache_init_part_0(v42);
  }
  if ( !_libc_single_threaded )
  {
    v8 = *(atomic_uint **)(StatusReg + 48);
    if ( v8 )
    {
      if ( _aarch64_cas4_acq(0, 1u, *(atomic_uint **)(StatusReg + 48)) )
        _lll_lock_wait_private(v8, v9, v10, v11, v12, v13, v14);
    }
    else
    {
      v16 = 0;
      v43 = arena_get2(v5, 0);
      v15 = v43;
      if ( !v43 )
        goto LABEL_15;
      v8 = (atomic_uint *)v43;
    }
    v15 = *((_QWORD *)v8 + 12);
    v16 = *(_QWORD *)(v15 + 8) & 0xFFFFFFFFFFFFFFF8LL;
    if ( v8 != (atomic_uint *)&main_arena )
    {
      v17 = -4 * qword_490600;
      if ( !qword_490600 )
        v17 = -67108864;
      v18 = (v15 & v17) + *(_QWORD *)((v15 & v17) + 0x18) - v15;
      if ( v16 < v18 )
        v16 = v18;
    }
LABEL_15:
    v19 = int_malloc((unsigned __int64)v8, v5, v10, v11);
    v20 = v19;
    if ( v19 )
      goto LABEL_16;
    goto LABEL_28;
  }
  v8 = (atomic_uint *)&main_arena;
  v15 = qword_4906D0;
  v26 = *(_QWORD *)(qword_4906D0 + 8);
  v19 = int_malloc((unsigned __int64)&main_arena, v5, v4, a4);
  v20 = v19;
  v16 = v26 & 0xFFFFFFFFFFFFFFF8LL;
  if ( !v19 )
  {
LABEL_28:
    if ( !_libc_single_threaded && v8 )
    {
      retry = (atomic_uint *)arena_get_retry(v8, v5);
      v20 = int_malloc((unsigned __int64)retry, v5, v28, v29);
      if ( retry && (int)_aarch64_swp4_rel(0, retry) > 1 )
        _lll_lock_wake_private(retry);
      if ( v20 )
      {
        v21 = v20 - 16;
        if ( (mtag_enabled & 1) == 0 )
          goto LABEL_24;
LABEL_58:
        _X0 = v21;
        __asm { LDG             X0, [X0] }
        v38 = _X0;
        _X0 = v20;
        __asm
        {
          GMI             X1, X0, XZR
          IRG             X0, X0, X1
        }
        return _libc_mtag_tag_zero_region(_X0, (*(_QWORD *)(v38 + 8) & 0xFFFFFFFFFFFFFFF8LL) - 16);
      }
    }
    return 0;
  }
LABEL_16:
  v21 = v19 - 16;
  if ( (mtag_enabled & 1) != 0 )
  {
    _X0 = v19 - 16;
    __asm { LDG             X0, [X0] }
    if ( (*(_QWORD *)(_X0 + 8) & 2) != 0 )
      goto LABEL_54;
    _X0 = v21;
    __asm { LDG             X0, [X0] }
LABEL_19:
    if ( (*(_QWORD *)(_X0 + 8) & 4) == 0 )
    {
      if ( v8 == (atomic_uint *)&main_arena )
      {
        if ( _libc_single_threaded || (int)_aarch64_swp4_rel(0, v8) <= 1 )
          goto LABEL_23;
LABEL_37:
        _lll_lock_wake_private(v8);
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
    v32 = -4 * qword_490600;
    if ( !qword_490600 )
      v32 = -67108864;
    if ( v8 != *(atomic_uint **)(_X0 & v32) )
      goto LABEL_69;
LABEL_54:
    if ( !_libc_single_threaded && v8 )
      goto LABEL_36;
    goto LABEL_23;
  }
  if ( (*(_QWORD *)(v19 - 8) & 2) == 0 )
  {
    _X0 = v19 - 16;
    goto LABEL_19;
  }
  if ( _libc_single_threaded )
    goto LABEL_24;
  if ( v8 )
  {
LABEL_36:
    if ( (int)_aarch64_swp4_rel(0, v8) <= 1 )
      goto LABEL_23;
    goto LABEL_37;
  }
LABEL_23:
  if ( (mtag_enabled & 1) != 0 )
    goto LABEL_58;
LABEL_24:
  v23 = *(_QWORD *)(v21 + 8);
  if ( (v23 & 2) != 0 )
  {
    v24 = v5;
    if ( !perturb_byte )
      return v20;
    return memset(v20, 0, v24);
  }
  v30 = v23 & 0xFFFFFFFFFFFFFFF8LL;
  if ( !perturb_byte && v15 == v21 && v16 < v30 )
    v30 = v16;
  v24 = v30 - 8;
  if ( v24 > 0x17 )
  {
    if ( v24 <= 0x4F )
    {
      *(_QWORD *)(v20 + 16) = 0;
      *(_OWORD *)v20 = 0u;
      if ( v24 > 0x27 )
      {
        *(_OWORD *)(v20 + 24) = 0u;
        if ( v24 > 0x37 )
        {
          *(_OWORD *)(v20 + 40) = 0u;
          if ( v24 > 0x47 )
            *(_OWORD *)(v20 + 56) = 0u;
        }
      }
      return v20;
    }
    return memset(v20, 0, v24);
  }
LABEL_70:
  v47 = _libc_assert_fail("nclears >= 3", "malloc.c", 3809, "__libc_calloc");
  return malloc_trim(v47);
}
