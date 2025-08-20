__int64 *flushlbf()
{
  unsigned __int64 v0; // x22
  double v1; // d0
  double v2; // d1
  double v3; // d2
  double v4; // d3
  double v5; // d4
  double v6; // d5
  double v7; // d6
  double v8; // d7
  int *v9; // x19
  __int64 v10; // x20
  int v11; // w0
  __int64 v12; // x1
  __int64 v13; // x0
  int v14; // w1
  int v15; // w0
  __int64 v16; // x20
  int v17; // w0
  __int64 v19; // x0
  __int64 v20; // x1
  _QWORD v21[4]; // [xsp+8h] [xbp-28h] BYREF

  v0 = _ReadStatusReg(TPIDR_EL0) - 1856;
  v21[0] = flush_cleanup;
  v21[1] = 0;
  _libc_cleanup_push_defer(v21);
  if ( !_libc_single_threaded )
  {
    if ( v0 != qword_492640 )
      goto LABEL_4;
LABEL_42:
    ++HIDWORD(list_all_lock);
    goto LABEL_7;
  }
  if ( !qword_492640 )
  {
    LODWORD(list_all_lock) = 1;
    v9 = (int *)IO_list_all;
    qword_492640 = v0;
    if ( !IO_list_all )
      goto LABEL_39;
    while ( 1 )
    {
LABEL_22:
      v15 = *v9;
      run_fp = (__int64)v9;
      if ( (v15 & 0x8000) != 0 )
      {
        if ( (*(_QWORD *)v9 & 0x208LL) != 0x200 )
          goto LABEL_21;
        goto LABEL_24;
      }
      v10 = *((_QWORD *)v9 + 17);
      v11 = (unsigned __int8)_libc_single_threaded;
      v12 = *(_QWORD *)(v10 + 8);
      if ( _libc_single_threaded )
      {
        if ( !v12 )
          break;
      }
      if ( v0 != v12 )
      {
        if ( _aarch64_cas4_acq(0, 1u, *((atomic_uint **)v9 + 17)) )
          _lll_lock_wait_private(v10);
        v13 = *(_QWORD *)v9;
        *(_QWORD *)(*((_QWORD *)v9 + 17) + 8LL) = v0;
        if ( (v13 & 0x208) == 0x200 )
          goto LABEL_24;
        goto LABEL_15;
      }
      v20 = *(_QWORD *)v9 & 0x208LL;
      ++*(_DWORD *)(v10 + 4);
      if ( v20 == 512 )
      {
        v16 = *((_QWORD *)v9 + 27);
        if ( (unsigned __int64)(v16 - (_QWORD)&_io_vtables) > 0x92F )
          goto LABEL_37;
        goto LABEL_25;
      }
LABEL_17:
      v14 = *(_DWORD *)(v10 + 4);
      if ( v11 )
      {
LABEL_33:
        if ( v14 )
          goto LABEL_26;
        *(_DWORD *)v10 = 0;
        *(_QWORD *)(v10 + 8) = 0;
LABEL_21:
        v9 = (int *)*((_QWORD *)v9 + 13);
        run_fp = 0;
        if ( !v9 )
          goto LABEL_27;
      }
      else
      {
        if ( !v14 )
        {
          *(_QWORD *)(v10 + 8) = 0;
          if ( (int)_aarch64_swp4_rel(0, (atomic_uint *)v10) > 1 )
            _lll_lock_wake_private(v10);
          goto LABEL_21;
        }
LABEL_26:
        v9 = (int *)*((_QWORD *)v9 + 13);
        run_fp = 0;
        *(_DWORD *)(v10 + 4) = v14 - 1;
        if ( !v9 )
          goto LABEL_27;
      }
    }
    v19 = *(_QWORD *)v9;
    *(_DWORD *)v10 = 1;
    *(_QWORD *)(v10 + 8) = v0;
    if ( (v19 & 0x208) != 0x200 )
    {
      v14 = *(_DWORD *)(v10 + 4);
      goto LABEL_33;
    }
LABEL_24:
    v16 = *((_QWORD *)v9 + 27);
    if ( (unsigned __int64)(v16 - (_QWORD)&_io_vtables) > 0x92F )
LABEL_37:
      IO_vtable_check(v1, v2, v3, v4, v5, v6, v7, v8);
LABEL_25:
    (*(void (__fastcall **)(int *, __int64))(v16 + 24))(v9, 0xFFFFFFFFLL);
LABEL_15:
    if ( (*v9 & 0x8000) != 0 )
      goto LABEL_21;
    v10 = *((_QWORD *)v9 + 17);
    v11 = (unsigned __int8)_libc_single_threaded;
    goto LABEL_17;
  }
  if ( v0 == qword_492640 )
    goto LABEL_42;
LABEL_4:
  if ( _aarch64_cas4_acq(0, 1u, (atomic_uint *)&list_all_lock) )
    _lll_lock_wait_private(&list_all_lock);
  qword_492640 = v0;
LABEL_7:
  v9 = (int *)IO_list_all;
  if ( IO_list_all )
    goto LABEL_22;
LABEL_27:
  v17 = HIDWORD(list_all_lock);
  if ( _libc_single_threaded )
  {
LABEL_39:
    v17 = HIDWORD(list_all_lock);
    if ( !HIDWORD(list_all_lock) )
    {
      LODWORD(list_all_lock) = 0;
      qword_492640 = 0;
      goto LABEL_30;
    }
    goto LABEL_29;
  }
  if ( HIDWORD(list_all_lock) )
  {
LABEL_29:
    HIDWORD(list_all_lock) = v17 - 1;
    goto LABEL_30;
  }
  qword_492640 = 0;
  if ( (int)_aarch64_swp4_rel(0, (atomic_uint *)&list_all_lock) > 1 )
    _lll_lock_wake_private(&list_all_lock);
LABEL_30:
  _libc_cleanup_pop_restore(v21);
  return &_stack_chk_guard;
}
