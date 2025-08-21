__int64 __fastcall int_free(__int64 a1, __int64 *a2, int a3)
{
  unsigned int *v3; // x21
  int v4; // w23
  unsigned __int64 v5; // x24
  __int64 v7; // x0
  unsigned __int64 v9; // x20
  __int64 v10; // x4
  unsigned __int64 v11; // x1
  __int64 v12; // x3
  unsigned __int64 v13; // x0
  unsigned __int64 v14; // x5
  unsigned __int64 v15; // x2
  __int64 v16; // x4
  unsigned __int16 v17; // w1
  unsigned __int8 v18; // w0
  unsigned __int64 v19; // x0
  unsigned __int64 v20; // x24
  __int64 v21; // x1
  unsigned int v22; // w21
  __int64 v23; // x0
  __int64 result; // x0
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  void *v28; // x4
  void *v29; // x5
  void *v30; // x6
  unsigned __int64 v31; // x24
  unsigned __int64 v32; // x0
  __int64 v33; // x6
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x3
  void *v37; // x4
  void *v38; // x5
  void *v39; // x6
  unsigned __int64 v40; // x0
  unsigned __int64 v41; // x25
  unsigned __int64 v42; // x1
  __int64 v43; // x6
  unsigned __int64 v44; // x7
  unsigned __int64 v45; // x0
  _QWORD *v46; // x1

  v7 = a2[1];
  v9 = v7 & 0xFFFFFFFFFFFFFFF8LL;
  if ( -(__int64)(v7 & 0xFFFFFFFFFFFFFFF8LL) < (unsigned __int64)a2 || ((unsigned __int8)a2 & 0xF) != 0 )
  {
    malloc_printerr("free(): invalid pointer");
LABEL_39:
    malloc_printerr("free(): invalid size");
    goto LABEL_40;
  }
  if ( v9 <= 0x1F )
    goto LABEL_39;
  v10 = a2[1] & 8;
  if ( (v7 & 8) != 0 )
    goto LABEL_39;
  v4 = a3;
  v11 = _ReadStatusReg(TPIDR_EL0) + 48;
  v12 = *(_QWORD *)(v11 + 8);
  if ( !v12 )
  {
    v3 = (unsigned int *)&unk_496000;
    v18 = global_max_fast;
    goto LABEL_11;
  }
  v3 = (unsigned int *)&unk_496000;
  v13 = (v9 - 17) >> 4;
  if ( qword_490638 <= v13 )
  {
LABEL_10:
    v18 = global_max_fast;
LABEL_11:
    if ( v9 > v18 )
    {
      if ( (a2[1] & 2) == 0 )
      {
        if ( _libc_single_threaded || v4 )
          return (__int64)int_free_merge_chunk(a1, a2, v9);
        if ( !_aarch64_cas4_acq(0, 1u, (atomic_uint *)a1) )
        {
          int_free_merge_chunk(a1, a2, v9);
          goto LABEL_27;
        }
LABEL_59:
        _lll_lock_wait_private((_DWORD *)a1, v25, v26, v27, v28, v29, v30);
        int_free_merge_chunk(a1, a2, v9);
LABEL_27:
        result = _aarch64_swp4_rel(0, (atomic_uint *)a1);
        if ( (int)result > 1 )
          return _lll_lock_wake_private(a1);
        return result;
      }
      return munmap_chunk(a2);
    }
    v5 = (unsigned __int64)a2 + v9;
    v19 = *(__int64 *)((char *)a2 + v9 + 8);
    if ( v19 > 0x10 && (v19 & 0xFFFFFFFFFFFFFFF8LL) < *(_QWORD *)(a1 + 2184) )
    {
LABEL_14:
      v20 = (unsigned __int64)(a2 + 2);
      v21 = v3[419];
      if ( (_DWORD)v21 )
        memset(a2 + 2, v21, v9 - 16);
      *(_DWORD *)(a1 + 8) = 1;
      v22 = (unsigned int)v9 >> 4;
      v23 = a1 + 8LL * (((unsigned int)v9 >> 4) - 2);
      v9 = *(_QWORD *)(v23 + 16);
      if ( _libc_single_threaded )
      {
        if ( a2 != (__int64 *)v9 )
        {
          a2[2] = v9 ^ (v20 >> 12);
          *(_QWORD *)(v23 + 16) = a2;
LABEL_19:
          result = v9 != 0;
          if ( (v4 & (unsigned int)result) == 0 )
            return result;
          result = *(_QWORD *)(v9 + 8);
          if ( v22 == (unsigned int)result >> 4 )
            return result;
LABEL_58:
          malloc_printerr("invalid fastbin entry (free)");
          goto LABEL_59;
        }
      }
      else
      {
        v31 = v20 >> 12;
        a1 += 8LL * (v22 & 0xFFFFFFF);
        while ( (__int64 *)v9 != a2 )
        {
          a2[2] = v31 ^ v9;
          v32 = _dl___aarch64_cas8_rel(v9, (unsigned __int64)a2, (atomic_ullong *)a1);
          if ( v9 == v32 )
            goto LABEL_19;
          v9 = v32;
        }
      }
      malloc_printerr("double free or corruption (fasttop)");
      return munmap_chunk(a2);
    }
LABEL_40:
    if ( v4 )
      goto LABEL_49;
    if ( _aarch64_cas4_acq(0, 1u, (atomic_uint *)a1) )
      goto LABEL_50;
    while ( 1 )
    {
      v40 = *(_QWORD *)(v5 + 8);
      if ( v40 <= 0x10 )
      {
        if ( (int)_aarch64_swp4_rel(0, (atomic_uint *)a1) > 1 )
          _lll_lock_wake_private(a1);
      }
      else
      {
        v41 = *(_QWORD *)(a1 + 2184);
        v5 = v40 & 0xFFFFFFFFFFFFFFF8LL;
        if ( (int)_aarch64_swp4_rel(0, (atomic_uint *)a1) > 1 )
          _lll_lock_wake_private(a1);
        if ( v5 < v41 )
          goto LABEL_14;
      }
LABEL_49:
      malloc_printerr("free(): invalid next size (fast)");
LABEL_50:
      _lll_lock_wait_private((_DWORD *)a1, v34, v35, v36, v37, v38, v39);
    }
  }
  v14 = (unsigned __int64)(a2 + 2);
  if ( a2[3] != tcache_key )
  {
    v15 = qword_490648;
    goto LABEL_9;
  }
  v12 = *(_QWORD *)(v11 + 8);
  v15 = qword_490648;
  v42 = *(_QWORD *)(v12 + 8 * (v13 + 16));
  if ( !v42 )
  {
LABEL_9:
    v16 = 2 * v13;
    v17 = *(_WORD *)(v12 + 2 * v13);
    if ( v15 > v17 )
    {
      result = v12 + 8 * v13;
      v33 = tcache_key;
      a2[2] = *(_QWORD *)(result + 128) ^ (v14 >> 12);
      a2[3] = v33;
      *(_QWORD *)(result + 128) = v14;
      *(_WORD *)(v12 + v16) = v17 + 1;
      return result;
    }
    goto LABEL_10;
  }
  while ( v10 != qword_490648 )
  {
    if ( (v42 & 0xF) != 0 )
    {
      malloc_printerr("free(): unaligned chunk detected in tcache 2");
      goto LABEL_58;
    }
    if ( v42 == v14 )
      goto LABEL_61;
    v43 = *(_QWORD *)v42;
    v44 = v42 >> 12;
    ++v10;
    v42 = (v42 >> 12) ^ *(_QWORD *)v42;
    if ( v44 == v43 )
      goto LABEL_9;
  }
  malloc_printerr("free(): too many chunks detected in tcache");
LABEL_61:
  v45 = malloc_printerr("free(): double free detected in tcache 2");
  return sysmalloc(v45, v46);
}
