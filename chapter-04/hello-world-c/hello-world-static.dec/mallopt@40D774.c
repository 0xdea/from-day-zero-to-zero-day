__int64 __fastcall mallopt(int a1, __int64 a2, __int64 a3, __int64 a4, void *a5, void *a6, void *a7)
{
  __int64 v8; // x20
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
  unsigned int v23; // w19
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  void *v27; // x4
  void *v28; // x5
  void *v29; // x6
  char v31; // w0

  v8 = (int)a2;
  if ( (_malloc_initialized & 1) != 0 )
  {
    if ( !_aarch64_cas4_acq(0, 1u, (atomic_uint *)&main_arena) )
      goto LABEL_3;
  }
  else
  {
    ptmalloc_init_part_0((unsigned __int8)_malloc_initialized, a2, (__int64)&global_max_fast, a4, a5, a6, a7);
    if ( !_aarch64_cas4_acq(0, 1u, (atomic_uint *)&main_arena) )
      goto LABEL_3;
  }
  _lll_lock_wait_private(&main_arena, v15, v16, v17, v18, v19, v20, v21, v22, v9, v10, v11, v12, v13, v14);
LABEL_3:
  malloc_consolidate((__int64)&main_arena);
  if ( a1 == -3 )
  {
    v23 = 1;
    qword_4905E0 = v8;
    dword_490618 = 1;
  }
  else if ( a1 >= -2 )
  {
    switch ( a1 )
    {
      case -1:
        mp_ = v8;
        v23 = 1;
        dword_490618 = 1;
        break;
      case 1:
        v23 = 0;
        if ( (unsigned __int64)(int)v8 <= 0xA0 )
        {
          v31 = (v8 + 8) & 0xF0;
          v23 = 1;
          if ( (unsigned __int64)(int)v8 <= 7 )
            v31 = 16;
          global_max_fast = v31;
        }
        break;
      case -2:
        v23 = 1;
        qword_4905D8 = v8;
        dword_490618 = 1;
        break;
      default:
        goto LABEL_11;
    }
  }
  else if ( a1 == -6 )
  {
    v23 = 1;
    perturb_byte = v8;
  }
  else
  {
    if ( a1 < -5 )
    {
      if ( a1 != -8 )
      {
        if ( a1 == -7 && (int)v8 > 0 )
          qword_4905E8 = v8;
        goto LABEL_11;
      }
      if ( (int)v8 > 0 )
      {
        v23 = 1;
        qword_4905F0 = v8;
        goto LABEL_19;
      }
LABEL_11:
      v23 = 1;
      goto LABEL_19;
    }
    if ( a1 != -4 )
      goto LABEL_11;
    v23 = 1;
    dword_490610 = v8;
    dword_490618 = 1;
  }
LABEL_19:
  if ( (int)_aarch64_swp4_rel(0, (atomic_uint *)&main_arena) > 1 )
    _lll_lock_wake_private(&main_arena, v24, v25, v26, v27, v28, v29);
  return v23;
}
