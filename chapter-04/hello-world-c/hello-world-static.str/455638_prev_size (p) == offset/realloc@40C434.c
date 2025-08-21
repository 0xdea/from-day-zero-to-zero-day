char *__fastcall realloc(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  char *v6; // x21
  __int16 *v7; // x2
  __int64 v11; // x2
  __int64 *v12; // x23
  __int64 v13; // x0
  unsigned __int64 v14; // x1
  __int64 v15; // x25
  __int64 v17; // x0
  unsigned __int64 v18; // x26
  atomic_uint *v19; // x24
  unsigned __int64 v20; // x1
  int v21; // w6
  unsigned __int64 v22; // x1
  bool v23; // cc
  unsigned __int64 v24; // x1
  unsigned __int64 v25; // x22
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  void *v29; // x4
  void *v30; // x5
  void *v31; // x6
  char *v32; // x25
  __int64 v33; // x1
  __int16 *v34; // x2
  __int64 v35; // x3
  __int64 v36; // x4
  __int64 v37; // x5
  char *v38; // x1
  atomic_uint *v39; // x0
  unsigned __int64 v40; // x1
  unsigned __int64 v41; // x1
  unsigned __int64 v42; // x1
  __int64 v43; // x1
  unsigned __int64 v44; // x2
  char *v45; // x0
  char *v46; // x1
  atomic_uint *v47; // x0
  unsigned __int64 v48; // x24
  unsigned __int64 v49; // x27
  __int64 v50; // x1
  __int16 *v51; // x2
  __int64 v52; // x3
  __int64 v53; // x4
  __int64 v54; // x5
  __int64 v55; // x28
  __int64 v56; // x4
  unsigned __int64 v57; // x27
  __int64 v58; // x22
  __int64 v66; // x0
  unsigned __int64 v67; // x1
  __int64 v68; // x0
  __int64 v69; // x0
  __int64 v70; // x0
  __int64 v71; // x0
  unsigned __int64 v72; // x20
  __int64 v85; // x2
  __int64 v89; // x0
  __int64 v90; // [xsp+60h] [xbp+60h]

  v6 = (char *)&unk_496000;
  v7 = (__int16 *)&global_max_fast;
  if ( (_malloc_initialized & 1) == 0 )
    ptmalloc_init_part_0((unsigned __int8)_malloc_initialized);
  if ( a2 )
    _ZF = 1;
  else
    _ZF = a1 == 0;
  if ( !_ZF )
    goto LABEL_76;
  if ( !a1 )
    return (char *)malloc(a2, a2, v7, a4, a5, a6);
  v11 = a1 - 16;
  v12 = (__int64 *)(a1 - 16);
  if ( (mtag_enabled & 1) != 0 )
  {
    _X0 = a1 - 16;
    __asm { LDG             X0, [X0] }
    v12 = _X0;
    _X0 = a1 - 16;
    __asm { LDG             X0, [X0] }
    v11 = _X0;
  }
  v13 = *(_QWORD *)(v11 + 8);
  v14 = v13 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (v13 & 2) != 0 )
    goto LABEL_39;
  if ( (*(_QWORD *)(v11 + v14 + 8) & 1) != 0 )
  {
    v44 = v14 - 16;
    v40 = v14 - 8;
    if ( (mtag_enabled & 1) != 0 )
      v40 = v44;
    goto LABEL_40;
  }
  if ( !a2 )
    return (char *)a1;
LABEL_16:
  v17 = v12[1];
  v18 = v17 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (v17 & 2) != 0 )
    goto LABEL_17;
  while ( 1 )
  {
    v42 = _ReadStatusReg(TPIDR_EL0) + 48;
    if ( *(_QWORD *)(v42 + 8) || (*(_BYTE *)(v42 + 0x10) & 1) != 0 )
    {
      if ( (v17 & 4) == 0 )
        goto LABEL_52;
    }
    else
    {
      tcache_init_part_0(v17);
      v17 = v12[1];
      if ( (v17 & 4) == 0 )
      {
LABEL_52:
        v19 = (atomic_uint *)&main_arena;
        goto LABEL_18;
      }
    }
    v43 = -4 * qword_490600;
    if ( !qword_490600 )
      v43 = -67108864;
    v19 = *(atomic_uint **)((unsigned __int64)v12 & v43);
LABEL_18:
    if ( (unsigned __int64)v12 > -(__int64)v18 || ((unsigned __int8)v12 & 0xF) != 0 )
    {
      malloc_printerr("realloc(): invalid pointer");
LABEL_76:
      v15 = 0;
      free(a1);
      return (char *)v15;
    }
    if ( (a2 & 0x8000000000000000LL) != 0 )
    {
      v15 = 0;
      *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40) = 12;
      return (char *)v15;
    }
    v20 = a2;
    v21 = v6[1697] & 1;
    if ( (v6[1697] & 1) != 0 )
      v20 = (a2 + 15) & 0xFFFFFFFFFFFFFFF0LL;
    v22 = v20 + 23;
    v23 = v22 > 0x1F;
    v24 = v22 & 0xFFFFFFFFFFFFFFF0LL;
    v25 = v23 ? v24 : 32LL;
    if ( (v17 & 2) != 0 )
      break;
    if ( _libc_single_threaded )
    {
      v45 = int_realloc(v19, v12, v18, v25);
      v32 = v45;
      if ( v45 )
      {
        v46 = v45 - 16;
        if ( (v6[1697] & 1) != 0 )
        {
          _X0 = v45 - 16;
          __asm { LDG             X0, [X0] }
          if ( (*(_QWORD *)(_X0 + 8) & 2) == 0 )
          {
            _X0 = v46;
            __asm { LDG             X0, [X0] }
            v46 = _X0;
            goto LABEL_58;
          }
        }
        else if ( (*((_QWORD *)v45 - 1) & 2) == 0 )
        {
LABEL_58:
          if ( (*((_QWORD *)v46 + 1) & 4) != 0 )
          {
            v69 = -4 * qword_490600;
            if ( !qword_490600 )
              v69 = -67108864;
            v47 = *(atomic_uint **)((unsigned __int64)v46 & v69);
          }
          else
          {
            v47 = (atomic_uint *)&main_arena;
          }
          if ( v19 != v47 )
            _libc_assert_fail(
              "!newp || chunk_is_mmapped (mem2chunk (newp)) || ar_ptr == arena_for_chunk (mem2chunk (newp))",
              "malloc.c",
              3509,
              "__libc_realloc");
        }
        return v32;
      }
      return 0;
    }
    if ( _aarch64_cas4_acq(0, 1u, v19) )
      _lll_lock_wait_private(v19, v26, v27, v28, v29, v30, v31);
    v32 = int_realloc(v19, v12, v18, v25);
    if ( (int)_aarch64_swp4_rel(0, v19) > 1 )
      _lll_lock_wake_private(v19);
    if ( !v32 )
    {
      v71 = malloc(a2, v33, v34, v35, v36, v37);
      v15 = v71;
      if ( v71 )
      {
        v72 = (v12[1] & 0xFFFFFFFFFFFFFFF8LL) - 16;
        if ( (v6[1697] & 1) != 0 )
        {
          j_memcpy(v71);
          _libc_mtag_tag_region(v12 + 2, v72);
        }
        else
        {
          j_memcpy(v71);
        }
        int_free((__int64)v19, v12, 0);
        return (char *)v15;
      }
      return 0;
    }
    v6 += 1672;
    v38 = v32 - 16;
    if ( (v6[25] & 1) != 0 )
    {
      _X0 = v32 - 16;
      __asm { LDG             X0, [X0] }
      if ( (*(_QWORD *)(_X0 + 8) & 2) != 0 )
        return v32;
      _X0 = v32 - 16;
      __asm { LDG             X0, [X0] }
      v38 = _X0;
    }
    else if ( (*((_QWORD *)v32 - 1) & 2) != 0 )
    {
      return v32;
    }
    if ( (*((_QWORD *)v38 + 1) & 4) != 0 )
    {
      v66 = -4 * qword_490600;
      if ( !qword_490600 )
        v66 = -67108864;
      v39 = *(atomic_uint **)((unsigned __int64)v38 & v66);
    }
    else
    {
      v39 = (atomic_uint *)&main_arena;
    }
    if ( v19 == v39 )
      return v32;
    _libc_assert_fail(
      "!newp || chunk_is_mmapped (mem2chunk (newp)) || ar_ptr == arena_for_chunk (mem2chunk (newp))",
      "malloc.c",
      3520,
      "__libc_realloc");
LABEL_39:
    v40 = v14 - 16;
LABEL_40:
    if ( a2 > v40 )
      goto LABEL_16;
    v41 = v40 - a2;
    if ( v41 <= 0xF )
      return (char *)a1;
    v17 = v12[1];
    if ( (v17 & 2) != 0 )
    {
      v18 = v17 & 0xFFFFFFFFFFFFFFF8LL;
      if ( dl_pagesize >= v41 )
        return (char *)a1;
LABEL_17:
      v19 = 0;
      goto LABEL_18;
    }
    v18 = v17 & 0xFFFFFFFFFFFFFFF8LL;
  }
  v15 = (__int64)(v12 + 2);
  v48 = (v17 & 0xFFFFFFFFFFFFFFF8LL) + *v12;
  if ( (((unsigned __int64)v12 - *v12) | v48) & (dl_pagesize - 1)
     | (((unsigned __int64)(v12 + 2) & (dl_pagesize - 1)) - 1) & (unsigned __int64)(v12 + 2) & (dl_pagesize - 1) )
  {
    malloc_printerr("mremap_chunk(): invalid pointer");
    return 0;
  }
  v49 = (dl_pagesize + 7 + v25 + *v12) & -dl_pagesize;
  v90 = *v12;
  if ( v48 == v49 )
    goto LABEL_73;
  v55 = mremap();
  if ( v55 == -1 )
  {
    if ( v18 - 8 < v25 )
    {
      v70 = malloc(a2, v50, v51, v52, v53, v54);
      v15 = v70;
      if ( v70 )
      {
        j_memcpy(v70);
        munmap_chunk(v12);
      }
      return (char *)v15;
    }
    return (char *)a1;
  }
  v56 = v90;
  if ( qword_4905F8 - 1 < v49 )
  {
    v67 = v49;
    v68 = v55;
    if ( ((dl_pagesize - 1) & v55) != 0 )
    {
      v67 = v49 + ((dl_pagesize - 1) & v55);
      v68 = -dl_pagesize & v55;
    }
    madvise(v68, v67, 14);
    v56 = v90;
  }
  v15 = v55 + v56 + 16;
  if ( ((v55 + v56) & 0xF) != 0 )
  {
    _libc_assert_fail("aligned_OK (chunk2mem (p))", "malloc.c", 3087, "mremap_chunk");
  }
  else if ( v56 == *(_QWORD *)(v55 + v56) )
  {
    *(_QWORD *)(v55 + v56 + 8) = (v49 - v56) | 2;
    v57 = _dl___aarch64_ldadd8_relax(v49 - v48, (atomic_ullong *)&qword_490620) + v49 - v48;
    do
      v58 = qword_490628;
    while ( v57 > qword_490628 && _aarch64_cas8_acq(qword_490628, v57, (atomic_ullong *)&qword_490628) != v58 );
    v21 = v6[1697] & 1;
LABEL_73:
    if ( v21 )
    {
      _X0 = v15;
      __asm { LDG             X0, [X0] }
      v15 = _X0;
      if ( (v6[1697] & 1) != 0 )
      {
        if ( _X0 )
        {
          _X0 = _X0 - 16;
          __asm { LDG             X0, [X0] }
          v85 = _X0;
          _X0 = v15;
          __asm
          {
            GMI             X1, X0, XZR
            IRG             X0, X0, X1
          }
          return (char *)_libc_mtag_tag_region(_X0, (*(_QWORD *)(v85 + 8) & 0xFFFFFFFFFFFFFFF8LL) - 16);
        }
        return 0;
      }
    }
    return (char *)v15;
  }
  v89 = _libc_assert_fail("prev_size (p) == offset", "malloc.c", 3089, "mremap_chunk");
  return (char *)memalign(v89);
}
