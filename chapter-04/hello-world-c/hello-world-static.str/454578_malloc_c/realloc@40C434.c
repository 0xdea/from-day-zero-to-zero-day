__int64 __fastcall realloc(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  char *v4; // x21
  __int16 *v5; // x2
  __int64 v9; // x2
  unsigned __int64 v10; // x23
  __int64 v11; // x0
  unsigned __int64 v12; // x1
  __int64 v13; // x25
  __int64 v15; // x0
  unsigned __int64 v16; // x26
  atomic_uint *v17; // x24
  unsigned __int64 v18; // x1
  int v19; // w6
  unsigned __int64 v20; // x1
  bool v21; // cc
  unsigned __int64 v22; // x1
  unsigned __int64 v23; // x22
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  void *v27; // x4
  void *v28; // x5
  void *v29; // x6
  __int64 v30; // x25
  __int64 v31; // x1
  __int16 *v32; // x2
  __int64 v33; // x3
  __int64 v34; // x1
  atomic_uint *v35; // x0
  unsigned __int64 v36; // x1
  unsigned __int64 v37; // x1
  unsigned __int64 v38; // x1
  __int64 v39; // x1
  unsigned __int64 v40; // x2
  __int64 v41; // x0
  __int64 v42; // x1
  atomic_uint *v43; // x0
  unsigned __int64 v44; // x24
  unsigned __int64 v45; // x27
  __int64 v46; // x1
  __int16 *v47; // x2
  __int64 v48; // x3
  __int64 v49; // x28
  __int64 v50; // x4
  unsigned __int64 v51; // x27
  __int64 v52; // x22
  __int64 v60; // x0
  unsigned __int64 v61; // x1
  __int64 v62; // x0
  __int64 v63; // x0
  __int64 v64; // x0
  __int64 v65; // x0
  unsigned __int64 v66; // x20
  __int64 v79; // x2
  __int64 v83; // x0
  __int64 v84; // [xsp+60h] [xbp+60h]

  v4 = (char *)&unk_496000;
  v5 = (__int16 *)&global_max_fast;
  if ( (_malloc_initialized & 1) == 0 )
    ptmalloc_init_part_0();
  if ( a2 )
    _ZF = 1;
  else
    _ZF = a1 == 0;
  if ( !_ZF )
    goto LABEL_76;
  if ( !a1 )
    return malloc(a2, a2, v5, a4);
  v9 = a1 - 16;
  v10 = a1 - 16;
  if ( (mtag_enabled & 1) != 0 )
  {
    _X0 = a1 - 16;
    __asm { LDG             X0, [X0] }
    v10 = _X0;
    _X0 = a1 - 16;
    __asm { LDG             X0, [X0] }
    v9 = _X0;
  }
  v11 = *(_QWORD *)(v9 + 8);
  v12 = v11 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (v11 & 2) != 0 )
    goto LABEL_39;
  if ( (*(_QWORD *)(v9 + v12 + 8) & 1) != 0 )
  {
    v40 = v12 - 16;
    v36 = v12 - 8;
    if ( (mtag_enabled & 1) != 0 )
      v36 = v40;
    goto LABEL_40;
  }
  if ( !a2 )
    return a1;
LABEL_16:
  v15 = *(_QWORD *)(v10 + 8);
  v16 = v15 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (v15 & 2) != 0 )
    goto LABEL_17;
  while ( 1 )
  {
    v38 = _ReadStatusReg(TPIDR_EL0) + 48;
    if ( *(_QWORD *)(v38 + 8) || (*(_BYTE *)(v38 + 0x10) & 1) != 0 )
    {
      if ( (v15 & 4) == 0 )
        goto LABEL_52;
    }
    else
    {
      tcache_init_part_0(v15);
      v15 = *(_QWORD *)(v10 + 8);
      if ( (v15 & 4) == 0 )
      {
LABEL_52:
        v17 = (atomic_uint *)&main_arena;
        goto LABEL_18;
      }
    }
    v39 = -4 * qword_490600;
    if ( !qword_490600 )
      v39 = -67108864;
    v17 = *(atomic_uint **)(v10 & v39);
LABEL_18:
    if ( v10 > -(__int64)v16 || (v10 & 0xF) != 0 )
    {
      malloc_printerr("realloc(): invalid pointer");
LABEL_76:
      v13 = 0;
      free(a1);
      return v13;
    }
    if ( (a2 & 0x8000000000000000LL) != 0 )
    {
      v13 = 0;
      *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40) = 12;
      return v13;
    }
    v18 = a2;
    v19 = v4[1697] & 1;
    if ( (v4[1697] & 1) != 0 )
      v18 = (a2 + 15) & 0xFFFFFFFFFFFFFFF0LL;
    v20 = v18 + 23;
    v21 = v20 > 0x1F;
    v22 = v20 & 0xFFFFFFFFFFFFFFF0LL;
    v23 = v21 ? v22 : 32LL;
    if ( (v15 & 2) != 0 )
      break;
    if ( _libc_single_threaded )
    {
      v41 = int_realloc(v17, v10, v16, v23);
      v30 = v41;
      if ( v41 )
      {
        v42 = v41 - 16;
        if ( (v4[1697] & 1) != 0 )
        {
          _X0 = v41 - 16;
          __asm { LDG             X0, [X0] }
          if ( (*(_QWORD *)(_X0 + 8) & 2) == 0 )
          {
            _X0 = v42;
            __asm { LDG             X0, [X0] }
            v42 = _X0;
            goto LABEL_58;
          }
        }
        else if ( (*(_QWORD *)(v41 - 8) & 2) == 0 )
        {
LABEL_58:
          if ( (*(_QWORD *)(v42 + 8) & 4) != 0 )
          {
            v63 = -4 * qword_490600;
            if ( !qword_490600 )
              v63 = -67108864;
            v43 = *(atomic_uint **)(v42 & v63);
          }
          else
          {
            v43 = (atomic_uint *)&main_arena;
          }
          if ( v17 != v43 )
            _libc_assert_fail(
              "!newp || chunk_is_mmapped (mem2chunk (newp)) || ar_ptr == arena_for_chunk (mem2chunk (newp))",
              "malloc.c",
              3509,
              "__libc_realloc");
        }
        return v30;
      }
      return 0;
    }
    if ( _aarch64_cas4_acq(0, 1u, v17) )
      _lll_lock_wait_private(v17, v24, v25, v26, v27, v28, v29);
    v30 = int_realloc(v17, v10, v16, v23);
    if ( (int)_aarch64_swp4_rel(0, v17) > 1 )
      _lll_lock_wake_private(v17);
    if ( !v30 )
    {
      v65 = malloc(a2, v31, v32, v33);
      v13 = v65;
      if ( v65 )
      {
        v66 = (*(_QWORD *)(v10 + 8) & 0xFFFFFFFFFFFFFFF8LL) - 16;
        if ( (v4[1697] & 1) != 0 )
        {
          j_memcpy(v65);
          _libc_mtag_tag_region(v10 + 16, v66);
        }
        else
        {
          j_memcpy(v65);
        }
        int_free(v17, v10, 0);
        return v13;
      }
      return 0;
    }
    v4 += 1672;
    v34 = v30 - 16;
    if ( (v4[25] & 1) != 0 )
    {
      _X0 = v30 - 16;
      __asm { LDG             X0, [X0] }
      if ( (*(_QWORD *)(_X0 + 8) & 2) != 0 )
        return v30;
      _X0 = v30 - 16;
      __asm { LDG             X0, [X0] }
      v34 = _X0;
    }
    else if ( (*(_QWORD *)(v30 - 8) & 2) != 0 )
    {
      return v30;
    }
    if ( (*(_QWORD *)(v34 + 8) & 4) != 0 )
    {
      v60 = -4 * qword_490600;
      if ( !qword_490600 )
        v60 = -67108864;
      v35 = *(atomic_uint **)(v34 & v60);
    }
    else
    {
      v35 = (atomic_uint *)&main_arena;
    }
    if ( v17 == v35 )
      return v30;
    _libc_assert_fail(
      "!newp || chunk_is_mmapped (mem2chunk (newp)) || ar_ptr == arena_for_chunk (mem2chunk (newp))",
      "malloc.c",
      3520,
      "__libc_realloc");
LABEL_39:
    v36 = v12 - 16;
LABEL_40:
    if ( a2 > v36 )
      goto LABEL_16;
    v37 = v36 - a2;
    if ( v37 <= 0xF )
      return a1;
    v15 = *(_QWORD *)(v10 + 8);
    if ( (v15 & 2) != 0 )
    {
      v16 = v15 & 0xFFFFFFFFFFFFFFF8LL;
      if ( dl_pagesize >= v37 )
        return a1;
LABEL_17:
      v17 = 0;
      goto LABEL_18;
    }
    v16 = v15 & 0xFFFFFFFFFFFFFFF8LL;
  }
  v13 = v10 + 16;
  v44 = (v15 & 0xFFFFFFFFFFFFFFF8LL) + *(_QWORD *)v10;
  if ( ((v10 - *(_QWORD *)v10) | v44) & (dl_pagesize - 1)
     | (((v10 + 16) & (dl_pagesize - 1)) - 1) & (v10 + 16) & (dl_pagesize - 1) )
  {
    malloc_printerr("mremap_chunk(): invalid pointer");
    return 0;
  }
  v45 = (dl_pagesize + 7 + v23 + *(_QWORD *)v10) & -dl_pagesize;
  v84 = *(_QWORD *)v10;
  if ( v44 == v45 )
    goto LABEL_73;
  v49 = mremap();
  if ( v49 == -1 )
  {
    if ( v16 - 8 < v23 )
    {
      v64 = malloc(a2, v46, v47, v48);
      v13 = v64;
      if ( v64 )
      {
        j_memcpy(v64);
        munmap_chunk((_QWORD *)v10);
      }
      return v13;
    }
    return a1;
  }
  v50 = v84;
  if ( qword_4905F8 - 1 < v45 )
  {
    v61 = v45;
    v62 = v49;
    if ( ((dl_pagesize - 1) & v49) != 0 )
    {
      v61 = v45 + ((dl_pagesize - 1) & v49);
      v62 = -dl_pagesize & v49;
    }
    madvise(v62, v61, 14);
    v50 = v84;
  }
  v13 = v49 + v50 + 16;
  if ( ((v49 + v50) & 0xF) != 0 )
  {
    _libc_assert_fail("aligned_OK (chunk2mem (p))", "malloc.c", 3087, "mremap_chunk");
  }
  else if ( v50 == *(_QWORD *)(v49 + v50) )
  {
    *(_QWORD *)(v49 + v50 + 8) = (v45 - v50) | 2;
    v51 = _dl___aarch64_ldadd8_relax(v45 - v44, (atomic_ullong *)&qword_490620) + v45 - v44;
    do
      v52 = qword_490628;
    while ( v51 > qword_490628 && _aarch64_cas8_acq(qword_490628, v51, (atomic_ullong *)&qword_490628) != v52 );
    v19 = v4[1697] & 1;
LABEL_73:
    if ( v19 )
    {
      _X0 = v13;
      __asm { LDG             X0, [X0] }
      v13 = _X0;
      if ( (v4[1697] & 1) != 0 )
      {
        if ( _X0 )
        {
          _X0 = _X0 - 16;
          __asm { LDG             X0, [X0] }
          v79 = _X0;
          _X0 = v13;
          __asm
          {
            GMI             X1, X0, XZR
            IRG             X0, X0, X1
          }
          return _libc_mtag_tag_region(_X0, (*(_QWORD *)(v79 + 8) & 0xFFFFFFFFFFFFFFF8LL) - 16);
        }
        return 0;
      }
    }
    return v13;
  }
  v83 = _libc_assert_fail("prev_size (p) == offset", "malloc.c", 3089, "mremap_chunk");
  return memalign(v83);
}
