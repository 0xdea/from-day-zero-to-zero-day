__int64 __fastcall malloc_trim(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 a4, void *a5, void *a6, void *a7)
{
  int *v7; // x20
  unsigned int v8; // w21
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  void *v12; // x4
  void *v13; // x5
  void *v14; // x6
  double v15; // d0
  double v16; // d1
  double v17; // d2
  double v18; // d3
  double v19; // d4
  double v20; // d5
  double v21; // d6
  double v22; // d7
  unsigned __int64 v23; // x28
  signed int v24; // w19
  unsigned __int64 v25; // x24
  unsigned __int64 v26; // x26
  int *v27; // x27
  int v28; // w5
  int i; // w22
  __int64 v32; // x25
  unsigned __int64 v33; // x1
  unsigned __int64 v34; // x0
  unsigned __int64 v35; // x1
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x3
  void *v39; // x4
  void *v40; // x5
  void *v41; // x6
  unsigned __int64 v43; // x19

  if ( (_malloc_initialized & 1) == 0 )
    ptmalloc_init_part_0((unsigned __int8)_malloc_initialized, (__int64)&unk_496000, a3, a4, a5, a6, a7);
  v7 = &main_arena;
  v8 = 0;
  do
  {
    if ( _aarch64_cas4_acq(0, 1u, (atomic_uint *)v7) )
      _lll_lock_wait_private(v7, v15, v16, v17, v18, v19, v20, v21, v22, v9, v10, v11, v12, v13, v14);
    malloc_consolidate((__int64)v7);
    v23 = dl_pagesize;
    v24 = (unsigned int)dl_pagesize >> 4;
    if ( (unsigned __int64)dl_pagesize > 0x3FF )
    {
      v24 = ((unsigned __int64)dl_pagesize >> 6) + 48;
      if ( (unsigned __int64)dl_pagesize > 0xC3F )
      {
        if ( (unsigned __int64)dl_pagesize >> 9 <= 0x14 )
        {
          v24 = ((unsigned __int64)dl_pagesize >> 9) + 91;
        }
        else
        {
          if ( (unsigned __int64)dl_pagesize >> 12 > 0xA )
            goto LABEL_39;
          v24 = ((unsigned __int64)dl_pagesize >> 12) + 110;
        }
      }
    }
LABEL_11:
    v25 = v23 - 1;
    v26 = v23 + 47;
    v27 = v7 + 24;
    v23 = -(__int64)v23;
    v28 = 0;
    for ( i = 1; i != 128; ++i )
    {
      for ( ; i != 1 && i < v24; v27 += 4 )
        ++i;
      v32 = *((_QWORD *)v27 + 3);
      if ( v27 != (int *)v32 )
      {
        while ( 1 )
        {
          v33 = *(_QWORD *)(v32 + 8) & 0xFFFFFFFFFFFFFFF8LL;
          if ( v26 >= v33 )
            goto LABEL_23;
          v34 = (v32 + v26) & v23;
          if ( v34 < v32 + 48 )
            goto LABEL_38;
          if ( v34 >= v32 + v33 )
          {
            _libc_assert_fail("(char *) p + size > paligned_mem", "malloc.c", 5177, "mtrim");
LABEL_38:
            _libc_assert_fail("(char *) chunk2mem (p) + 2 * CHUNK_HDR_SZ <= paligned_mem", "malloc.c", 5175, "mtrim");
LABEL_39:
            if ( v23 >> 15 > 4 )
            {
              v43 = v23 >> 18;
              if ( v23 >> 18 > 2 )
                LODWORD(v43) = 2;
              v24 = v43 + 124;
            }
            else
            {
              v24 = (v23 >> 15) + 119;
            }
            goto LABEL_11;
          }
          v35 = v33 - (v34 - v32);
          if ( v25 >= v35 )
          {
LABEL_23:
            v32 = *(_QWORD *)(v32 + 24);
            if ( v27 == (int *)v32 )
              break;
          }
          else
          {
            madvise(v34, v23 & v35, 4);
            v32 = *(_QWORD *)(v32 + 24);
            v28 = 1;
            if ( v27 == (int *)v32 )
              break;
          }
        }
      }
      v27 += 4;
    }
    if ( v7 == &main_arena )
    {
      v8 |= v28 | systrim_constprop_0(a1);
      if ( (int)_aarch64_swp4_rel(0, (atomic_uint *)v7) <= 1 )
        goto LABEL_32;
    }
    else
    {
      v8 |= v28;
      if ( (int)_aarch64_swp4_rel(0, (atomic_uint *)v7) <= 1 )
        goto LABEL_32;
    }
    _lll_lock_wake_private(v7, v36, v37, v38, v39, v40, v41);
LABEL_32:
    v7 = (int *)*((_QWORD *)v7 + 270);
  }
  while ( v7 != &main_arena );
  return v8;
}
