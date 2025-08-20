__int64 *__usercall mallinfo2@<X0>(__int64 a1@<X3>, void *a2@<X4>, void *a3@<X5>, void *a4@<X6>, _OWORD *a5@<X8>)
{
  int *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x3
  void *v10; // x4
  void *v11; // x5
  void *v12; // x6
  double v13; // d0
  double v14; // d1
  double v15; // d2
  double v16; // d3
  double v17; // d4
  double v18; // d5
  double v19; // d6
  double v20; // d7
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  void *v24; // x4
  void *v25; // x5
  void *v26; // x6
  __int128 v27; // q4
  __int128 v28; // q1
  __int128 v29; // q2
  __int128 v30; // q0
  __int64 *result; // x0
  __int128 v32; // [xsp+8h] [xbp-58h] BYREF
  __int128 v33; // [xsp+18h] [xbp-48h]
  __int128 v34; // [xsp+28h] [xbp-38h]
  __int128 v35; // [xsp+38h] [xbp-28h]
  __int128 v36; // [xsp+48h] [xbp-18h]

  if ( (_malloc_initialized & 1) == 0 )
    ptmalloc_init_part_0((__int64)&_stack_chk_guard, (unsigned __int8)_malloc_initialized, 0, a1, a2, a3, a4);
  v6 = &main_arena;
  v32 = 0u;
  v33 = 0u;
  v34 = 0u;
  v35 = 0u;
  v36 = 0u;
  do
  {
    if ( _aarch64_cas4_acq(0, 1u, (atomic_uint *)v6) )
      _lll_lock_wait_private(v6, v13, v14, v15, v16, v17, v18, v19, v20, v7, v8, v9, v10, v11, v12);
    int_mallinfo((__int64)v6, &v32, v13, v14, v15, v16, v17, v18, v19, v20);
    if ( (int)_aarch64_swp4_rel(0, (atomic_uint *)v6) > 1 )
      _lll_lock_wake_private(v6, v21, v22, v23, v24, v25, v26);
    v6 = (int *)*((_QWORD *)v6 + 270);
  }
  while ( v6 != &main_arena );
  v27 = v33;
  v28 = v34;
  v29 = v35;
  v30 = v36;
  *a5 = v32;
  a5[1] = v27;
  result = &_stack_chk_guard;
  a5[2] = v28;
  a5[3] = v29;
  a5[4] = v30;
  return result;
}
