void __fastcall __noreturn _run_exit_handlers(unsigned int a1, _QWORD **a2, unsigned __int8 a3)
{
  int v5; // w25
  _QWORD *v6; // x19
  __int64 v7; // x2
  __int64 v8; // x2
  __int64 v9; // x26
  _QWORD *v10; // x2
  __int64 v11; // x0
  __int64 v12; // x28
  void (__fastcall *v13)(_QWORD, __int64); // x27
  bool v14; // zf
  __int64 v15; // x27
  __int64 v16; // x28
  void (__fastcall *v17)(__int64, _QWORD); // x27
  void (*v18)(void); // x27
  __int64 v19; // x0
  _QWORD *v20; // x0

  v5 = a3;
  if ( _aarch64_cas4_acq(0, 1u, (atomic_uint *)&_exit_funcs_lock) )
    _lll_lock_wait_private(&_exit_funcs_lock);
  v6 = *a2;
  if ( !*a2 )
  {
LABEL_14:
    _exit_funcs_done = 1;
    if ( (int)_aarch64_swp4_rel(0, (atomic_uint *)&_exit_funcs_lock) > 1 )
      _lll_lock_wake_private(&_exit_funcs_lock);
    if ( IO_cleanup )
      v14 = v5 == 0;
    else
      v14 = 1;
    if ( !v14 )
      IO_cleanup();
    exit(a1);
  }
  while ( 1 )
  {
    while ( 1 )
    {
      v7 = v6[1];
      if ( v7 )
        break;
      v20 = (_QWORD *)*v6;
      *a2 = (_QWORD *)*v6;
      if ( v20 )
      {
        free(v6);
        v6 = *a2;
        if ( *a2 )
          continue;
      }
      goto LABEL_14;
    }
    v8 = v7 - 1;
    v6[1] = v8;
    v9 = _new_exitfn_called;
    v10 = &v6[4 * v8];
    v11 = v10[2];
    if ( v11 == 3 )
      break;
    if ( v11 == 4 )
    {
      v15 = v10[3];
      v16 = v10[4];
      v10[2] = 0;
      v17 = (void (__fastcall *)(__int64, _QWORD))(v15 ^ _pointer_chk_guard_local);
      if ( (int)_aarch64_swp4_rel(0, (atomic_uint *)&_exit_funcs_lock) > 1 )
        _lll_lock_wake_private(&_exit_funcs_lock);
      v17(v16, a1);
      if ( !_aarch64_cas4_acq(0, 1u, (atomic_uint *)&_exit_funcs_lock) )
        goto LABEL_12;
LABEL_25:
      _lll_lock_wait_private(&_exit_funcs_lock);
LABEL_12:
      if ( _new_exitfn_called != v9 )
      {
        v6 = *a2;
        if ( !*a2 )
          goto LABEL_14;
      }
    }
    else if ( v11 == 2 )
    {
      v12 = v10[4];
      v13 = (void (__fastcall *)(_QWORD, __int64))(v10[3] ^ _pointer_chk_guard_local);
      if ( (int)_aarch64_swp4_rel(0, (atomic_uint *)&_exit_funcs_lock) > 1 )
        _lll_lock_wake_private(&_exit_funcs_lock);
      v13(a1, v12);
LABEL_11:
      if ( !_aarch64_cas4_acq(0, 1u, (atomic_uint *)&_exit_funcs_lock) )
        goto LABEL_12;
      goto LABEL_25;
    }
  }
  v18 = (void (*)(void))(v10[3] ^ _pointer_chk_guard_local);
  if ( (int)_aarch64_swp4_rel(0, (atomic_uint *)&_exit_funcs_lock) > 1 )
  {
    v19 = _lll_lock_wake_private(&_exit_funcs_lock);
    ((void (__fastcall *)(__int64))v18)(v19);
  }
  else
  {
    v18();
  }
  goto LABEL_11;
}
