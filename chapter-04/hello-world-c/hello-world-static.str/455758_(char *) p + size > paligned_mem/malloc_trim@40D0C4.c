__int64 __fastcall malloc_trim(__int64 a1)
{
  atomic_uint *v1; // x20
  unsigned int v2; // w21
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  void *v6; // x4
  void *v7; // x5
  void *v8; // x6
  unsigned __int64 v9; // x28
  signed int v10; // w19
  unsigned __int64 v11; // x24
  unsigned __int64 v12; // x26
  char *v13; // x27
  int v14; // w5
  int i; // w22
  __int64 v18; // x25
  unsigned __int64 v19; // x1
  unsigned __int64 v20; // x0
  unsigned __int64 v21; // x1
  unsigned __int64 v23; // x19

  if ( (_malloc_initialized & 1) == 0 )
    ptmalloc_init_part_0((unsigned __int8)_malloc_initialized);
  v1 = (atomic_uint *)&main_arena;
  v2 = 0;
  do
  {
    if ( _aarch64_cas4_acq(0, 1u, v1) )
      _lll_lock_wait_private(v1, v3, v4, v5, v6, v7, v8);
    malloc_consolidate((__int64)v1);
    v9 = dl_pagesize;
    v10 = (unsigned int)dl_pagesize >> 4;
    if ( (unsigned __int64)dl_pagesize > 0x3FF )
    {
      v10 = ((unsigned __int64)dl_pagesize >> 6) + 48;
      if ( (unsigned __int64)dl_pagesize > 0xC3F )
      {
        if ( (unsigned __int64)dl_pagesize >> 9 <= 0x14 )
        {
          v10 = ((unsigned __int64)dl_pagesize >> 9) + 91;
        }
        else
        {
          if ( (unsigned __int64)dl_pagesize >> 12 > 0xA )
            goto LABEL_39;
          v10 = ((unsigned __int64)dl_pagesize >> 12) + 110;
        }
      }
    }
LABEL_11:
    v11 = v9 - 1;
    v12 = v9 + 47;
    v13 = (char *)v1 + 96;
    v9 = -(__int64)v9;
    v14 = 0;
    for ( i = 1; i != 128; ++i )
    {
      for ( ; i != 1 && i < v10; v13 += 16 )
        ++i;
      v18 = *((_QWORD *)v13 + 3);
      if ( v13 != (char *)v18 )
      {
        while ( 1 )
        {
          v19 = *(_QWORD *)(v18 + 8) & 0xFFFFFFFFFFFFFFF8LL;
          if ( v12 >= v19 )
            goto LABEL_23;
          v20 = (v18 + v12) & v9;
          if ( v20 < v18 + 48 )
            goto LABEL_38;
          if ( v20 >= v18 + v19 )
          {
            _libc_assert_fail("(char *) p + size > paligned_mem", "malloc.c", 5177, "mtrim");
LABEL_38:
            _libc_assert_fail("(char *) chunk2mem (p) + 2 * CHUNK_HDR_SZ <= paligned_mem", "malloc.c", 5175, "mtrim");
LABEL_39:
            if ( v9 >> 15 > 4 )
            {
              v23 = v9 >> 18;
              if ( v9 >> 18 > 2 )
                LODWORD(v23) = 2;
              v10 = v23 + 124;
            }
            else
            {
              v10 = (v9 >> 15) + 119;
            }
            goto LABEL_11;
          }
          v21 = v19 - (v20 - v18);
          if ( v11 >= v21 )
          {
LABEL_23:
            v18 = *(_QWORD *)(v18 + 24);
            if ( v13 == (char *)v18 )
              break;
          }
          else
          {
            madvise(v20, v9 & v21, 4);
            v18 = *(_QWORD *)(v18 + 24);
            v14 = 1;
            if ( v13 == (char *)v18 )
              break;
          }
        }
      }
      v13 += 16;
    }
    if ( v1 == (atomic_uint *)&main_arena )
    {
      v2 |= v14 | systrim_constprop_0(a1);
      if ( (int)_aarch64_swp4_rel(0, v1) <= 1 )
        goto LABEL_32;
    }
    else
    {
      v2 |= v14;
      if ( (int)_aarch64_swp4_rel(0, v1) <= 1 )
        goto LABEL_32;
    }
    _lll_lock_wake_private(v1);
LABEL_32:
    v1 = (atomic_uint *)*((_QWORD *)v1 + 270);
  }
  while ( v1 != (atomic_uint *)&main_arena );
  return v2;
}
