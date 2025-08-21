__int64 __fastcall _gconv_close_transform(__int64 a1, __int64 a2)
{
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x3
  void *v7; // x4
  void *v8; // x5
  void *v9; // x6
  __int64 v10; // x24
  __int64 v11; // x19
  int v12; // w2
  void (__fastcall *v13)(__int64); // x1
  __int64 v14; // x0

  if ( _aarch64_cas4_acq(0, 1u, (atomic_uint *)_gconv_lock) )
    _lll_lock_wait_private(_gconv_lock, v4, v5, v6, v7, v8, v9);
  v10 = a2 - 1;
  if ( a2 )
  {
    v11 = a1 + 104 * a2 - 104;
    do
    {
      v14 = *(_QWORD *)v11;
      if ( *(_QWORD *)v11 )
      {
        v12 = *(_DWORD *)(v11 + 16) - 1;
        *(_DWORD *)(v11 + 16) = v12;
        if ( !v12 )
        {
          v13 = (void (__fastcall *)(__int64))(*(_QWORD *)(v11 + 64) ^ _pointer_chk_guard_local);
          if ( v13 )
          {
            v13(v11);
            v14 = *(_QWORD *)v11;
          }
          _gconv_release_shlib(v14);
          *(_QWORD *)v11 = 0;
        }
      }
      else if ( *(_QWORD *)(v11 + 64) )
      {
        _libc_assert_fail("step->__end_fct == NULL", "gconv_db.c", 221, "__gconv_release_step");
        break;
      }
      --v10;
      v11 -= 104;
    }
    while ( v10 != -1 );
  }
  _gconv_release_cache(a1, a2);
  if ( (int)_aarch64_swp4_rel(0, (atomic_uint *)_gconv_lock) > 1 )
    _lll_lock_wake_private(_gconv_lock);
  return 0;
}
