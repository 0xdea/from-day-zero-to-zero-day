__int64 __fastcall calloc(
        unsigned __int64 a1,
        unsigned __int64 a2,
        double a3,
        double a4,
        double a5,
        double a6,
        double a7,
        double a8,
        double a9,
        double a10,
        __int64 a11,
        __int64 a12,
        void *a13,
        void *a14,
        void *a15)
{
  __int64 v15; // x2
  unsigned __int64 v16; // x19
  _BOOL8 v17; // x0
  unsigned __int64 StatusReg; // x20
  int *v19; // x24
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  void *v23; // x4
  void *v24; // x5
  void *v25; // x6
  double v26; // d0
  double v27; // d1
  double v28; // d2
  double v29; // d3
  double v30; // d4
  double v31; // d5
  double v32; // d6
  double v33; // d7
  __int64 v34; // x26
  unsigned __int64 v35; // x25
  __int64 v36; // x1
  unsigned __int64 v37; // x1
  __int64 v38; // x0
  __int64 v39; // x20
  __int64 v40; // x23
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x3
  void *v45; // x4
  void *v46; // x5
  void *v47; // x6
  __int64 v48; // x2
  unsigned __int64 v49; // x2
  __int64 v51; // x25
  int *retry; // x22
  double v53; // d0
  double v54; // d1
  double v55; // d2
  double v56; // d3
  double v57; // d4
  double v58; // d5
  double v59; // d6
  double v60; // d7
  unsigned __int64 v61; // x2
  __int64 v63; // x1
  __int64 v69; // x2
  __int64 v73; // x1
  __int64 v74; // x2
  __int64 v75; // x3
  void *v76; // x4
  void *v77; // x5
  void *v78; // x6
  int *v79; // x0
  __int64 v83; // x0

  v15 = (a1 * (unsigned __int128)a2) >> 64;
  v16 = a1 * a2;
  v17 = !is_mul_ok(a1, a2);
  if ( (v16 & 0x8000000000000000LL) != 0 || v17 )
  {
    *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40) = 12;
    return 0;
  }
  if ( (_malloc_initialized & 1) == 0 )
    ptmalloc_init_part_0((unsigned __int8)_malloc_initialized, a2, v15, a12, a13, a14, a15);
  StatusReg = _ReadStatusReg(TPIDR_EL0);
  if ( !*(_QWORD *)(StatusReg + 48 + 8) && (*(_BYTE *)(StatusReg + 48 + 0x10) & 1) == 0 )
    tcache_init_part_0();
  if ( !_libc_single_threaded )
  {
    v19 = *(int **)(StatusReg + 48);
    if ( v19 )
    {
      if ( _aarch64_cas4_acq(0, 1u, *(atomic_uint **)(StatusReg + 48)) )
        _lll_lock_wait_private(v19, v26, v27, v28, v29, v30, v31, v32, v33, v20, v21, v22, v23, v24, v25);
    }
    else
    {
      v35 = 0;
      v79 = arena_get2((int *)v16, 0);
      v34 = (__int64)v79;
      if ( !v79 )
        goto LABEL_15;
      v19 = v79;
    }
    v34 = *((_QWORD *)v19 + 12);
    v35 = *(_QWORD *)(v34 + 8) & 0xFFFFFFFFFFFFFFF8LL;
    if ( v19 != &main_arena )
    {
      v36 = -4 * qword_490600;
      if ( !qword_490600 )
        v36 = -67108864;
      v37 = (v34 & v36) + *(_QWORD *)((v34 & v36) + 0x18) - v34;
      if ( v35 < v37 )
        v35 = v37;
    }
LABEL_15:
    v38 = int_malloc(v19, v16, v26, v27, v28, v29, v30, v31, v32, v33);
    v39 = v38;
    if ( v38 )
      goto LABEL_16;
    goto LABEL_28;
  }
  v19 = &main_arena;
  v34 = qword_4906D0;
  v51 = *(_QWORD *)(qword_4906D0 + 8);
  v38 = int_malloc(&main_arena, v16, a3, a4, a5, a6, a7, a8, a9, a10);
  v39 = v38;
  v35 = v51 & 0xFFFFFFFFFFFFFFF8LL;
  if ( !v38 )
  {
LABEL_28:
    if ( !_libc_single_threaded && v19 )
    {
      retry = arena_get_retry(v19, (int *)v16);
      v39 = int_malloc(retry, v16, v53, v54, v55, v56, v57, v58, v59, v60);
      if ( retry && (int)_aarch64_swp4_rel(0, (atomic_uint *)retry) > 1 )
        _lll_lock_wake_private(retry, v73, v74, v75, v76, v77, v78);
      if ( v39 )
      {
        v40 = v39 - 16;
        if ( (mtag_enabled & 1) == 0 )
          goto LABEL_24;
LABEL_58:
        _X0 = v40;
        __asm { LDG             X0, [X0] }
        v69 = _X0;
        _X0 = v39;
        __asm
        {
          GMI             X1, X0, XZR
          IRG             X0, X0, X1
        }
        return _libc_mtag_tag_zero_region(_X0, (*(_QWORD *)(v69 + 8) & 0xFFFFFFFFFFFFFFF8LL) - 16);
      }
    }
    return 0;
  }
LABEL_16:
  v40 = v38 - 16;
  if ( (mtag_enabled & 1) != 0 )
  {
    _X0 = v38 - 16;
    __asm { LDG             X0, [X0] }
    if ( (*(_QWORD *)(_X0 + 8) & 2) != 0 )
      goto LABEL_54;
    _X0 = v40;
    __asm { LDG             X0, [X0] }
LABEL_19:
    if ( (*(_QWORD *)(_X0 + 8) & 4) == 0 )
    {
      if ( v19 == &main_arena )
      {
        if ( _libc_single_threaded || (int)_aarch64_swp4_rel(0, (atomic_uint *)v19) <= 1 )
          goto LABEL_23;
LABEL_37:
        _lll_lock_wake_private(v19, v42, v43, v44, v45, v46, v47);
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
    v63 = -4 * qword_490600;
    if ( !qword_490600 )
      v63 = -67108864;
    if ( v19 != *(int **)(_X0 & v63) )
      goto LABEL_69;
LABEL_54:
    if ( !_libc_single_threaded && v19 )
      goto LABEL_36;
    goto LABEL_23;
  }
  if ( (*(_QWORD *)(v38 - 8) & 2) == 0 )
  {
    _X0 = v38 - 16;
    goto LABEL_19;
  }
  if ( _libc_single_threaded )
    goto LABEL_24;
  if ( v19 )
  {
LABEL_36:
    if ( (int)_aarch64_swp4_rel(0, (atomic_uint *)v19) <= 1 )
      goto LABEL_23;
    goto LABEL_37;
  }
LABEL_23:
  if ( (mtag_enabled & 1) != 0 )
    goto LABEL_58;
LABEL_24:
  v48 = *(_QWORD *)(v40 + 8);
  if ( (v48 & 2) != 0 )
  {
    v49 = v16;
    if ( !perturb_byte )
      return v39;
    return memset(v39, 0, v49);
  }
  v61 = v48 & 0xFFFFFFFFFFFFFFF8LL;
  if ( !perturb_byte && v34 == v40 && v35 < v61 )
    v61 = v35;
  v49 = v61 - 8;
  if ( v49 > 0x17 )
  {
    if ( v49 <= 0x4F )
    {
      *(_QWORD *)(v39 + 16) = 0;
      *(_OWORD *)v39 = 0u;
      if ( v49 > 0x27 )
      {
        *(_OWORD *)(v39 + 24) = 0u;
        if ( v49 > 0x37 )
        {
          *(_OWORD *)(v39 + 40) = 0u;
          if ( v49 > 0x47 )
            *(_OWORD *)(v39 + 56) = 0u;
        }
      }
      return v39;
    }
    return memset(v39, 0, v49);
  }
LABEL_70:
  v83 = _libc_assert_fail("nclears >= 3", "malloc.c", 3809, "__libc_calloc");
  return malloc_trim(v83);
}
