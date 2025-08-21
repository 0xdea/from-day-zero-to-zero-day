__int64 *malloc_stats()
{
  int v0; // w22
  int v1; // w23
  __int128 v2; // q0
  atomic_uint *v3; // x19
  unsigned int v4; // w21
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x3
  void *v8; // x4
  void *v9; // x5
  void *v10; // x6
  int v11; // w24
  int v12; // w0
  __int64 *result; // x0
  int v14; // [xsp+1Ch] [xbp-64h]
  _OWORD v15[3]; // [xsp+28h] [xbp-58h] BYREF
  __int128 v16; // [xsp+58h] [xbp-28h]
  __int128 v17; // [xsp+68h] [xbp-18h]

  v0 = qword_490620;
  v1 = qword_490620;
  if ( (_malloc_initialized & 1) == 0 )
    ptmalloc_init_part_0(&_stack_chk_guard);
  v2 = 0u;
  v3 = (atomic_uint *)&main_arena;
  v4 = 0;
  v14 = *(_DWORD *)(*(_QWORD *)stderr + 0x74LL);
  *(_DWORD *)(*(_QWORD *)stderr + 0x74LL) = v14 | 2;
  while ( 1 )
  {
    v15[0] = v2;
    v15[1] = v2;
    v15[2] = v2;
    v16 = v2;
    v17 = v2;
    if ( _aarch64_cas4_acq(0, 1u, v3) )
      _lll_lock_wait_private(v3, v5, v6, v7, v8, v9, v10);
    int_mallinfo((__int64)v3, v15);
    _fprintf_chk(*(_QWORD *)stderr, 2, "Arena %d:\n", v4);
    v11 = v15[0];
    _fprintf_chk(*(_QWORD *)stderr, 2, "system bytes     = %10u\n", LODWORD(v15[0]));
    v1 += v11;
    v0 += DWORD2(v16);
    _fprintf_chk(*(_QWORD *)stderr, 2, "in use bytes     = %10u\n", DWORD2(v16));
    v12 = _aarch64_swp4_rel(0, v3);
    v2 = 0u;
    if ( v12 > 1 )
    {
      _lll_lock_wake_private(v3);
      v2 = 0u;
    }
    v3 = (atomic_uint *)*((_QWORD *)v3 + 270);
    if ( v3 == (atomic_uint *)&main_arena )
      break;
    ++v4;
  }
  fwrite("Total (incl. mmap):\n", 1, 20, *(_QWORD *)stderr);
  _fprintf_chk(*(_QWORD *)stderr, 2, "system bytes     = %10u\n", v1);
  _fprintf_chk(*(_QWORD *)stderr, 2, "in use bytes     = %10u\n", v0);
  _fprintf_chk(*(_QWORD *)stderr, 2, "max mmap regions = %10u\n", dword_490614);
  _fprintf_chk(*(_QWORD *)stderr, 2, "max mmap bytes   = %10lu\n", qword_490628);
  result = &_stack_chk_guard;
  *(_DWORD *)(*(_QWORD *)stderr + 0x74LL) = v14;
  return result;
}
