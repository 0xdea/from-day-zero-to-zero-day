signed __int64 __fastcall int_free(
        __int64 a1,
        unsigned __int64 a2,
        int a3,
        double a4,
        double a5,
        double a6,
        double a7,
        double a8,
        double a9,
        double a10,
        double a11)
{
  __int64 v12; // x0
  unsigned __int64 v14; // x20
  __int64 v15; // x4
  unsigned __int64 v17; // x1
  __int64 v18; // x3
  unsigned __int64 v19; // x0
  unsigned __int64 v20; // x5
  unsigned __int64 v21; // x2
  __int64 v22; // x4
  unsigned __int16 v23; // w1
  unsigned __int8 v24; // w0
  unsigned __int64 v25; // x0
  unsigned __int64 v26; // x24
  unsigned int v27; // w21
  __int64 v28; // x0
  unsigned __int64 v29; // x20
  signed __int64 result; // x0
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x3
  void *v34; // x4
  void *v35; // x5
  void *v36; // x6
  double v37; // d0
  double v38; // d1
  double v39; // d2
  double v40; // d3
  double v41; // d4
  double v42; // d5
  double v43; // d6
  double v44; // d7
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x3
  void *v48; // x4
  void *v49; // x5
  void *v50; // x6
  unsigned __int64 v51; // x24
  atomic_ullong *v52; // x22
  unsigned __int64 v53; // x0
  __int64 v54; // x6
  __int64 v55; // x1
  __int64 v56; // x2
  __int64 v57; // x3
  void *v58; // x4
  void *v59; // x5
  void *v60; // x6
  double v61; // d0
  double v62; // d1
  double v63; // d2
  double v64; // d3
  double v65; // d4
  double v66; // d5
  double v67; // d6
  double v68; // d7
  unsigned __int64 v69; // x0
  unsigned __int64 v70; // x25
  unsigned __int64 v71; // x24
  __int64 v72; // x1
  __int64 v73; // x2
  __int64 v74; // x3
  void *v75; // x4
  void *v76; // x5
  void *v77; // x6
  __int64 v78; // x1
  __int64 v79; // x2
  __int64 v80; // x3
  void *v81; // x4
  void *v82; // x5
  void *v83; // x6
  unsigned __int64 v84; // x1
  __int64 v85; // x6
  unsigned __int64 v86; // x7

  v12 = *(_QWORD *)(a2 + 8);
  v14 = v12 & 0xFFFFFFFFFFFFFFF8LL;
  if ( -(__int64)(v12 & 0xFFFFFFFFFFFFFFF8LL) < a2 || (a2 & 0xF) != 0 )
    malloc_printerr((__int64)"free(): invalid pointer", a4, a5, a6, a7, a8, a9, a10, a11);
  if ( v14 <= 0x1F || (v15 = *(_QWORD *)(a2 + 8) & 8LL, (v12 & 8) != 0) )
    malloc_printerr((__int64)"free(): invalid size", a4, a5, a6, a7, a8, a9, a10, a11);
  v17 = _ReadStatusReg(TPIDR_EL0) + 48;
  v18 = *(_QWORD *)(v17 + 8);
  if ( v18 )
  {
    v19 = (v14 - 17) >> 4;
    if ( qword_490638 > v19 )
    {
      v20 = a2 + 16;
      if ( *(_QWORD *)(a2 + 24) == tcache_key )
      {
        v18 = *(_QWORD *)(v17 + 8);
        v21 = qword_490648;
        v84 = *(_QWORD *)(v18 + 8 * (v19 + 16));
        if ( v84 )
        {
          do
          {
            if ( v15 == qword_490648 )
              malloc_printerr((__int64)"free(): too many chunks detected in tcache", a4, a5, a6, a7, a8, a9, a10, a11);
            if ( (v84 & 0xF) != 0 )
              malloc_printerr((__int64)"free(): unaligned chunk detected in tcache 2", a4, a5, a6, a7, a8, a9, a10, a11);
            if ( v84 == v20 )
              malloc_printerr((__int64)"free(): double free detected in tcache 2", a4, a5, a6, a7, a8, a9, a10, a11);
            v85 = *(_QWORD *)v84;
            v86 = v84 >> 12;
            ++v15;
            v84 = (v84 >> 12) ^ *(_QWORD *)v84;
          }
          while ( v86 != v85 );
        }
      }
      else
      {
        v21 = qword_490648;
      }
      v22 = 2 * v19;
      v23 = *(_WORD *)(v18 + 2 * v19);
      if ( v21 > v23 )
      {
        result = v18 + 8 * v19;
        v54 = tcache_key;
        *(_QWORD *)(a2 + 16) = *(_QWORD *)(result + 128) ^ (v20 >> 12);
        *(_QWORD *)(a2 + 24) = v54;
        *(_QWORD *)(result + 128) = v20;
        *(_WORD *)(v18 + v22) = v23 + 1;
        return result;
      }
    }
    v24 = global_max_fast;
  }
  else
  {
    v24 = global_max_fast;
  }
  if ( v14 > v24 )
  {
    if ( (*(_QWORD *)(a2 + 8) & 2) != 0 )
      return munmap_chunk((_QWORD *)a2, a4, a5, a6, a7, a8, a9, a10, a11);
    if ( _libc_single_threaded || a3 )
      return (signed __int64)int_free_merge_chunk(a1, (__int64 *)a2, v14, a4, a5, a6, a7, a8, a9, a10, a11);
    if ( _aarch64_cas4_acq(0, 1u, (atomic_uint *)a1) )
      _lll_lock_wait_private((_DWORD *)a1, v37, v38, v39, v40, v41, v42, v43, v44, v31, v32, v33, v34, v35, v36);
    int_free_merge_chunk(a1, (__int64 *)a2, v14, v37, v38, v39, v40, v41, v42, v43, v44);
    result = _aarch64_swp4_rel(0, (atomic_uint *)a1);
    if ( (int)result > 1 )
      return _lll_lock_wake_private((void *)a1, v45, v46, v47, v48, v49, v50);
    return result;
  }
  v25 = *(_QWORD *)(a2 + v14 + 8);
  if ( v25 <= 0x10 || (v25 & 0xFFFFFFFFFFFFFFF8LL) >= *(_QWORD *)(a1 + 2184) )
  {
    if ( !a3 )
    {
      if ( _aarch64_cas4_acq(0, 1u, (atomic_uint *)a1) )
        _lll_lock_wait_private((_DWORD *)a1, v61, v62, v63, v64, v65, v66, v67, v68, v55, v56, v57, v58, v59, v60);
      v69 = *(_QWORD *)(a2 + v14 + 8);
      if ( v69 <= 0x10 )
      {
        if ( (int)_aarch64_swp4_rel(0, (atomic_uint *)a1) > 1 )
          _lll_lock_wake_private((void *)a1, v78, v79, v80, v81, v82, v83);
      }
      else
      {
        v70 = *(_QWORD *)(a1 + 2184);
        v71 = v69 & 0xFFFFFFFFFFFFFFF8LL;
        if ( (int)_aarch64_swp4_rel(0, (atomic_uint *)a1) > 1 )
          _lll_lock_wake_private((void *)a1, v72, v73, v74, v75, v76, v77);
        if ( v71 < v70 )
          goto LABEL_14;
      }
    }
    malloc_printerr((__int64)"free(): invalid next size (fast)", a4, a5, a6, a7, a8, a9, a10, a11);
  }
LABEL_14:
  v26 = a2 + 16;
  if ( perturb_byte )
    memset(a2 + 16, (unsigned int)perturb_byte, v14 - 16);
  *(_DWORD *)(a1 + 8) = 1;
  v27 = (unsigned int)v14 >> 4;
  v28 = a1 + 8LL * (((unsigned int)v14 >> 4) - 2);
  v29 = *(_QWORD *)(v28 + 16);
  if ( !_libc_single_threaded )
  {
    v51 = v26 >> 12;
    v52 = (atomic_ullong *)(a1 + 8LL * (v27 & 0xFFFFFFF));
    while ( v29 != a2 )
    {
      *(_QWORD *)(a2 + 16) = v51 ^ v29;
      v53 = _dl___aarch64_cas8_rel(v29, a2, v52);
      if ( v29 == v53 )
        goto LABEL_19;
      v29 = v53;
    }
LABEL_34:
    malloc_printerr((__int64)"double free or corruption (fasttop)", a4, a5, a6, a7, a8, a9, a10, a11);
  }
  if ( a2 == v29 )
    goto LABEL_34;
  *(_QWORD *)(a2 + 16) = v29 ^ (v26 >> 12);
  *(_QWORD *)(v28 + 16) = a2;
LABEL_19:
  result = v29 != 0;
  if ( (a3 & (unsigned int)result) != 0 )
  {
    result = *(_QWORD *)(v29 + 8);
    if ( v27 != (unsigned int)result >> 4 )
      malloc_printerr((__int64)"invalid fastbin entry (free)", a4, a5, a6, a7, a8, a9, a10, a11);
  }
  return result;
}
