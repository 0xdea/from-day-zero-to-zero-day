__int64 *__fastcall malloc_stats(__int64 a1, __int64 a2, __int64 a3, __int64 a4, void *a5, void *a6, void *a7)
{
  int v7; // w22
  int v8; // w23
  __int128 v9; // q0
  int *v10; // x19
  unsigned int v11; // w21
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  void *v15; // x4
  void *v16; // x5
  void *v17; // x6
  double v18; // d0
  double v19; // d1
  double v20; // d2
  double v21; // d3
  double v22; // d4
  double v23; // d5
  double v24; // d6
  double v25; // d7
  int v26; // w24
  int v27; // w0
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x3
  void *v31; // x4
  void *v32; // x5
  void *v33; // x6
  __int64 *result; // x0
  int v35; // [xsp+1Ch] [xbp-64h]
  _OWORD v36[3]; // [xsp+28h] [xbp-58h] BYREF
  __int128 v37; // [xsp+58h] [xbp-28h]
  __int128 v38; // [xsp+68h] [xbp-18h]

  v7 = qword_490620;
  v8 = qword_490620;
  if ( (_malloc_initialized & 1) == 0 )
    ptmalloc_init_part_0((__int64)&_stack_chk_guard, (unsigned __int8)_malloc_initialized, 0, a4, a5, a6, a7);
  v9 = 0u;
  v10 = &main_arena;
  v11 = 0;
  v35 = *(_DWORD *)(*(_QWORD *)stderr + 0x74LL);
  *(_DWORD *)(*(_QWORD *)stderr + 0x74LL) = v35 | 2;
  while ( 1 )
  {
    v36[0] = v9;
    v36[1] = v9;
    v36[2] = v9;
    v37 = v9;
    v38 = v9;
    if ( _aarch64_cas4_acq(0, 1u, (atomic_uint *)v10) )
      _lll_lock_wait_private(v10, v18, v19, v20, v21, v22, v23, v24, v25, v12, v13, v14, v15, v16, v17);
    int_mallinfo((__int64)v10, v36, v18, v19, v20, v21, v22, v23, v24, v25);
    _fprintf_chk(*(_QWORD *)stderr, 2, "Arena %d:\n", v11);
    v26 = v36[0];
    _fprintf_chk(*(_QWORD *)stderr, 2, "system bytes     = %10u\n", LODWORD(v36[0]));
    v8 += v26;
    v7 += DWORD2(v37);
    _fprintf_chk(*(_QWORD *)stderr, 2, "in use bytes     = %10u\n", DWORD2(v37));
    v27 = _aarch64_swp4_rel(0, (atomic_uint *)v10);
    v9 = 0u;
    if ( v27 > 1 )
    {
      _lll_lock_wake_private(v10, v28, v29, v30, v31, v32, v33);
      v9 = 0u;
    }
    v10 = (int *)*((_QWORD *)v10 + 270);
    if ( v10 == &main_arena )
      break;
    ++v11;
  }
  fwrite("Total (incl. mmap):\n", 1, 20, *(_QWORD *)stderr);
  _fprintf_chk(*(_QWORD *)stderr, 2, "system bytes     = %10u\n", v8);
  _fprintf_chk(*(_QWORD *)stderr, 2, "in use bytes     = %10u\n", v7);
  _fprintf_chk(*(_QWORD *)stderr, 2, "max mmap regions = %10u\n", dword_490614);
  _fprintf_chk(*(_QWORD *)stderr, 2, "max mmap bytes   = %10lu\n", qword_490628);
  result = &_stack_chk_guard;
  *(_DWORD *)(*(_QWORD *)stderr + 0x74LL) = v35;
  return result;
}
