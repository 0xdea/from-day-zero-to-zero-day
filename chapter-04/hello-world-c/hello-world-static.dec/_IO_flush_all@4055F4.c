__int64 IO_flush_all()
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
  unsigned int v10; // w23
  __int64 v11; // x27
  __int64 v12; // x27
  int v13; // w0
  int v14; // w0
  __int64 v15; // x27
  __int64 v16; // x0
  int v17; // w0
  _QWORD v19[4]; // [xsp+8h] [xbp-28h] BYREF

  v0 = _ReadStatusReg(TPIDR_EL0) - 1856;
  v19[0] = flush_cleanup;
  v19[1] = 0;
  _libc_cleanup_push_defer(v19);
  if ( _libc_single_threaded )
  {
    if ( !qword_492640 )
    {
      LODWORD(list_all_lock) = 1;
      v10 = 0;
      v9 = (int *)IO_list_all;
      qword_492640 = v0;
      if ( IO_list_all )
        goto LABEL_8;
      goto LABEL_40;
    }
    if ( v0 != qword_492640 )
      goto LABEL_4;
LABEL_43:
    ++HIDWORD(list_all_lock);
    goto LABEL_7;
  }
  if ( v0 == qword_492640 )
    goto LABEL_43;
LABEL_4:
  if ( _aarch64_cas4_acq(0, 1u, (atomic_uint *)&list_all_lock) )
    _lll_lock_wait_private(&list_all_lock);
  qword_492640 = v0;
LABEL_7:
  v9 = (int *)IO_list_all;
  if ( IO_list_all )
  {
LABEL_8:
    v10 = 0;
    while ( 1 )
    {
      v14 = *v9;
      run_fp = (__int64)v9;
      if ( (v14 & 0x8000) == 0 )
      {
        v15 = *((_QWORD *)v9 + 17);
        v16 = *(_QWORD *)(v15 + 8);
        if ( _libc_single_threaded && !v16 )
        {
          *(_DWORD *)v15 = 1;
          *(_QWORD *)(v15 + 8) = v0;
        }
        else if ( v0 == v16 )
        {
          ++*(_DWORD *)(v15 + 4);
        }
        else
        {
          if ( _aarch64_cas4_acq(0, 1u, *((atomic_uint **)v9 + 17)) )
            _lll_lock_wait_private(v15);
          *(_QWORD *)(*((_QWORD *)v9 + 17) + 8LL) = v0;
        }
      }
      if ( v9[48] > 0 )
      {
        if ( *(_QWORD *)(*((_QWORD *)v9 + 20) + 32LL) > *(_QWORD *)(*((_QWORD *)v9 + 20) + 24LL) )
        {
          v11 = *((_QWORD *)v9 + 27);
          if ( (unsigned __int64)(v11 - (_QWORD)&_io_vtables) > 0x92F )
            goto LABEL_28;
          goto LABEL_11;
        }
      }
      else if ( *((_QWORD *)v9 + 5) > *((_QWORD *)v9 + 4) )
      {
        v11 = *((_QWORD *)v9 + 27);
        if ( (unsigned __int64)(v11 - (_QWORD)&_io_vtables) > 0x92F )
LABEL_28:
          IO_vtable_check(v1, v2, v3, v4, v5, v6, v7, v8);
LABEL_11:
        if ( (*(unsigned int (__fastcall **)(int *, __int64))(v11 + 24))(v9, 0xFFFFFFFFLL) == -1 )
          v10 = -1;
      }
      if ( (*v9 & 0x8000) != 0 )
      {
LABEL_17:
        v9 = (int *)*((_QWORD *)v9 + 13);
        run_fp = 0;
        if ( !v9 )
          goto LABEL_30;
      }
      else
      {
        v12 = *((_QWORD *)v9 + 17);
        v13 = *(_DWORD *)(v12 + 4);
        if ( _libc_single_threaded )
        {
          if ( !v13 )
          {
            *(_DWORD *)v12 = 0;
            *(_QWORD *)(v12 + 8) = 0;
            goto LABEL_17;
          }
        }
        else if ( !v13 )
        {
          *(_QWORD *)(v12 + 8) = 0;
          if ( (int)_aarch64_swp4_rel(0, (atomic_uint *)v12) > 1 )
            _lll_lock_wake_private(v12);
          goto LABEL_17;
        }
        v9 = (int *)*((_QWORD *)v9 + 13);
        run_fp = 0;
        *(_DWORD *)(v12 + 4) = v13 - 1;
        if ( !v9 )
          goto LABEL_30;
      }
    }
  }
  v10 = 0;
LABEL_30:
  v17 = HIDWORD(list_all_lock);
  if ( _libc_single_threaded )
  {
LABEL_40:
    v17 = HIDWORD(list_all_lock);
    if ( !HIDWORD(list_all_lock) )
    {
      LODWORD(list_all_lock) = 0;
      qword_492640 = 0;
      goto LABEL_33;
    }
    goto LABEL_32;
  }
  if ( HIDWORD(list_all_lock) )
  {
LABEL_32:
    HIDWORD(list_all_lock) = v17 - 1;
    goto LABEL_33;
  }
  qword_492640 = 0;
  if ( (int)_aarch64_swp4_rel(0, (atomic_uint *)&list_all_lock) > 1 )
    _lll_lock_wake_private(&list_all_lock);
LABEL_33:
  _libc_cleanup_pop_restore(v19);
  return v10;
}
