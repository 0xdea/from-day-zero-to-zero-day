__int64 IO_cleanup()
{
  unsigned __int64 v0; // x22
  unsigned int v1; // w25
  double v2; // d0
  double v3; // d1
  double v4; // d2
  double v5; // d3
  double v6; // d4
  double v7; // d5
  double v8; // d6
  double v9; // d7
  int *v10; // x19
  int v11; // w1
  __int64 v12; // x20
  __int64 v13; // x0
  __int64 v14; // x3
  __int64 v15; // x2
  __int64 v16; // x20
  int v17; // w0
  int v19; // w0
  _QWORD v20[4]; // [xsp+8h] [xbp-28h] BYREF

  v0 = _ReadStatusReg(TPIDR_EL0) - 1856;
  v1 = IO_flush_all();
  v20[0] = flush_cleanup;
  v20[1] = 0;
  _libc_cleanup_push_defer(v20);
  if ( !_libc_single_threaded )
  {
    if ( v0 != qword_492640 )
      goto LABEL_4;
LABEL_47:
    ++HIDWORD(list_all_lock);
    goto LABEL_7;
  }
  if ( !qword_492640 )
  {
    LODWORD(list_all_lock) = 1;
    v10 = (int *)IO_list_all;
    qword_492640 = v0;
    if ( !IO_list_all )
      goto LABEL_44;
    while ( 1 )
    {
LABEL_8:
      v11 = *v10;
      run_fp = (__int64)v10;
      if ( (v11 & 0x8000) == 0 )
      {
        v12 = *((_QWORD *)v10 + 17);
        v13 = *(_QWORD *)(v12 + 8);
        if ( _libc_single_threaded && !v13 )
        {
          *(_DWORD *)v12 = 1;
          *(_QWORD *)(v12 + 8) = v0;
          if ( (v11 & 2) != 0 )
          {
LABEL_40:
            v10[48] = -1;
            goto LABEL_32;
          }
          goto LABEL_16;
        }
        if ( v0 == v13 )
        {
          ++*(_DWORD *)(v12 + 4);
          if ( (v11 & 2) != 0 )
            goto LABEL_40;
LABEL_16:
          if ( v10[48] )
          {
            if ( (dealloc_buffers & 1) == 0 && (v11 & 1) == 0 )
            {
              v14 = freeres_list;
              v15 = *((_QWORD *)v10 + 7);
              *v10 = v11 | 1;
              freeres_list = (__int64)v10;
              *((_QWORD *)v10 + 21) = v14;
              *((_QWORD *)v10 + 22) = v15;
            }
            v16 = *((_QWORD *)v10 + 27);
            if ( (unsigned __int64)(v16 - (_QWORD)&_io_vtables) > 0x92F )
              IO_vtable_check(v2, v3, v4, v5, v6, v7, v8, v9);
            (*(void (__fastcall **)(int *, _QWORD, _QWORD))(v16 + 88))(v10, 0, 0);
            if ( v10[48] > 0 )
              IO_wsetb(v10, 0, 0, 0);
            v11 = *v10;
          }
          goto LABEL_25;
        }
        if ( _aarch64_cas4_acq(0, 1u, *((atomic_uint **)v10 + 17)) )
          _lll_lock_wait_private(v12);
        v11 = *v10;
        *(_QWORD *)(*((_QWORD *)v10 + 17) + 8LL) = v0;
      }
      if ( (v11 & 2) == 0 )
        goto LABEL_16;
LABEL_25:
      v10[48] = -1;
      if ( (v11 & 0x8000) != 0 )
        goto LABEL_26;
      v12 = *((_QWORD *)v10 + 17);
LABEL_32:
      v19 = *(_DWORD *)(v12 + 4);
      if ( !_libc_single_threaded )
      {
        if ( !v19 )
        {
          *(_QWORD *)(v12 + 8) = 0;
          if ( (int)_aarch64_swp4_rel(0, (atomic_uint *)v12) > 1 )
            _lll_lock_wake_private(v12);
          goto LABEL_26;
        }
LABEL_35:
        *(_DWORD *)(v12 + 4) = v19 - 1;
        goto LABEL_26;
      }
      if ( v19 )
        goto LABEL_35;
      *(_DWORD *)v12 = 0;
      *(_QWORD *)(v12 + 8) = 0;
LABEL_26:
      v10 = (int *)*((_QWORD *)v10 + 13);
      run_fp = 0;
      if ( !v10 )
        goto LABEL_27;
    }
  }
  if ( v0 == qword_492640 )
    goto LABEL_47;
LABEL_4:
  if ( _aarch64_cas4_acq(0, 1u, (atomic_uint *)&list_all_lock) )
    _lll_lock_wait_private(&list_all_lock);
  qword_492640 = v0;
LABEL_7:
  v10 = (int *)IO_list_all;
  if ( IO_list_all )
    goto LABEL_8;
LABEL_27:
  v17 = HIDWORD(list_all_lock);
  if ( _libc_single_threaded )
  {
LABEL_44:
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
  _libc_cleanup_pop_restore(v20);
  return v1;
}
