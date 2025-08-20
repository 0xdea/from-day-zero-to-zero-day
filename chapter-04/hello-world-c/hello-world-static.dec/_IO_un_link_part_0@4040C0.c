__int64 *__fastcall IO_un_link_part_0(__int64 a1)
{
  unsigned __int64 v2; // x22
  int v3; // w4
  int v4; // w3
  __int64 v5; // x23
  __int64 v6; // x0
  _QWORD *v7; // x0
  int v8; // w2
  _QWORD *v9; // x1
  int v10; // w0
  int v11; // w0
  _QWORD v13[4]; // [xsp+8h] [xbp-28h] BYREF

  v2 = _ReadStatusReg(TPIDR_EL0) - 1856;
  v13[0] = flush_cleanup;
  v13[1] = 0;
  _libc_cleanup_push_defer(v13);
  v3 = (unsigned __int8)_libc_single_threaded;
  if ( !_libc_single_threaded )
  {
    if ( v2 != qword_492640 )
      goto LABEL_4;
    goto LABEL_34;
  }
  if ( qword_492640 )
  {
    if ( v2 != qword_492640 )
    {
LABEL_4:
      if ( _aarch64_cas4_acq(0, 1u, (atomic_uint *)&list_all_lock) )
        _lll_lock_wait_private(&list_all_lock);
      v3 = (unsigned __int8)_libc_single_threaded;
      qword_492640 = v2;
LABEL_7:
      v4 = *(_DWORD *)a1;
      run_fp = a1;
      if ( (v4 & 0x8000) == 0 )
      {
        v5 = *(_QWORD *)(a1 + 136);
        v6 = *(_QWORD *)(v5 + 8);
        if ( !v3 )
          goto LABEL_9;
        goto LABEL_39;
      }
LABEL_28:
      v8 = 0x8000;
      v7 = IO_list_all;
      if ( !IO_list_all )
      {
        *(_DWORD *)a1 = v4 & 0xFFFFFF7F;
        goto LABEL_30;
      }
      goto LABEL_13;
    }
LABEL_34:
    ++HIDWORD(list_all_lock);
    goto LABEL_7;
  }
  v4 = *(_DWORD *)a1;
  run_fp = a1;
  LODWORD(list_all_lock) = 1;
  qword_492640 = v2;
  if ( (v4 & 0x8000) != 0 )
    goto LABEL_28;
  v5 = *(_QWORD *)(a1 + 136);
  v6 = *(_QWORD *)(v5 + 8);
LABEL_39:
  if ( !v6 )
  {
    *(_DWORD *)v5 = 1;
    v7 = IO_list_all;
    *(_QWORD *)(v5 + 8) = v2;
    if ( !v7 )
    {
      v10 = *(_DWORD *)(v5 + 4);
      *(_DWORD *)a1 = v4 & 0xFFFFFF7F;
LABEL_42:
      if ( v10 )
      {
        *(_DWORD *)(v5 + 4) = v10 - 1;
        run_fp = 0;
        v11 = HIDWORD(list_all_lock);
      }
      else
      {
        run_fp = 0;
        *(_QWORD *)(v5 + 8) = 0;
        v11 = HIDWORD(list_all_lock);
        *(_DWORD *)v5 = 0;
      }
      goto LABEL_31;
    }
    goto LABEL_50;
  }
LABEL_9:
  if ( v2 != v6 )
  {
    if ( _aarch64_cas4_acq(0, 1u, (atomic_uint *)v5) )
      _lll_lock_wait_private(v5);
    v4 = *(_DWORD *)a1;
    v7 = IO_list_all;
    *(_QWORD *)(*(_QWORD *)(a1 + 136) + 8LL) = v2;
    v3 = (unsigned __int8)_libc_single_threaded;
    v8 = v4 & 0x8000;
    if ( !v7 )
      goto LABEL_19;
LABEL_13:
    if ( (_QWORD *)a1 != v7 )
      goto LABEL_14;
    goto LABEL_35;
  }
  v7 = IO_list_all;
  ++*(_DWORD *)(v5 + 4);
  if ( v7 )
  {
LABEL_50:
    v8 = 0;
    if ( (_QWORD *)a1 != v7 )
    {
LABEL_14:
      v9 = (_QWORD *)v7[13];
      if ( v9 )
      {
        while ( (_QWORD *)a1 != v9 )
        {
          v7 = v9;
          v9 = (_QWORD *)v9[13];
          if ( !v9 )
            goto LABEL_19;
        }
        v7[13] = *(_QWORD *)(a1 + 104);
      }
LABEL_19:
      *(_DWORD *)a1 = v4 & 0xFFFFFF7F;
      if ( !v8 )
      {
        v5 = *(_QWORD *)(a1 + 136);
        goto LABEL_21;
      }
LABEL_30:
      run_fp = 0;
      v11 = HIDWORD(list_all_lock);
      if ( v3 )
        goto LABEL_31;
      goto LABEL_24;
    }
LABEL_35:
    IO_list_all = *(_UNKNOWN **)(a1 + 104);
    goto LABEL_19;
  }
  *(_DWORD *)a1 = v4 & 0xFFFFFF7F;
LABEL_21:
  v10 = *(_DWORD *)(v5 + 4);
  if ( v3 )
    goto LABEL_42;
  if ( v10 )
  {
    *(_DWORD *)(v5 + 4) = v10 - 1;
    run_fp = 0;
    v11 = HIDWORD(list_all_lock);
    goto LABEL_24;
  }
  *(_QWORD *)(v5 + 8) = 0;
  if ( (int)_aarch64_swp4_rel(0, (atomic_uint *)v5) > 1 )
    _lll_lock_wake_private(v5);
  run_fp = 0;
  v11 = HIDWORD(list_all_lock);
  if ( _libc_single_threaded )
  {
LABEL_31:
    if ( !v11 )
    {
      LODWORD(list_all_lock) = 0;
      qword_492640 = 0;
      goto LABEL_27;
    }
LABEL_36:
    HIDWORD(list_all_lock) = v11 - 1;
    goto LABEL_27;
  }
LABEL_24:
  if ( v11 )
    goto LABEL_36;
  qword_492640 = 0;
  if ( (int)_aarch64_swp4_rel(0, (atomic_uint *)&list_all_lock) > 1 )
    _lll_lock_wake_private(&list_all_lock);
LABEL_27:
  _libc_cleanup_pop_restore(v13);
  return &_stack_chk_guard;
}
