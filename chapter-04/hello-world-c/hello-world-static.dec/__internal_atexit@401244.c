__int64 __fastcall _internal_atexit(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  _QWORD *v8; // x0
  void (*v10)(void *); // x0
  void *v11; // x1
  void *v12; // x2

  if ( a1 )
  {
    if ( _aarch64_cas4_acq(0, 1u, (atomic_uint *)&_exit_funcs_lock) )
      _lll_lock_wait_private(&_exit_funcs_lock);
    v8 = _new_exitfn(a4);
    if ( v8 )
    {
      v8[2] = a2;
      v8[3] = a3;
      *v8 = 4;
      v8[1] = a1 ^ _pointer_chk_guard_local;
      if ( (int)_aarch64_swp4_rel(0, (atomic_uint *)&_exit_funcs_lock) > 1 )
        _lll_lock_wake_private(&_exit_funcs_lock);
      return 0;
    }
    else
    {
      if ( (int)_aarch64_swp4_rel(0, (atomic_uint *)&_exit_funcs_lock) > 1 )
        _lll_lock_wake_private(&_exit_funcs_lock);
      return 0xFFFFFFFFLL;
    }
  }
  else
  {
    v10 = (void (*)(void *))_libc_assert_fail("func != NULL", "cxa_atexit.c", 41, "__internal_atexit");
    return _cxa_atexit(v10, v11, v12);
  }
}
