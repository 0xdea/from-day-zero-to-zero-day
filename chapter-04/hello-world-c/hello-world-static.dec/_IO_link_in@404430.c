__int64 *__fastcall IO_link_in(__int64 a1)
{
  int v2; // w1
  unsigned __int64 StatusReg; // x21
  __int64 v5; // x21
  int v6; // w0
  __int64 v7; // x1
  int v8; // w1
  void *v9; // x2
  int v10; // w1
  int v11; // w1
  void *v12; // x2
  __int64 v13; // x22
  __int64 v14; // x1
  int v15; // w1
  void *v16; // x2
  int v17; // w1
  void *v18; // x2
  void *v19; // x1
  _QWORD v20[4]; // [xsp+8h] [xbp-28h] BYREF

  v2 = *(_DWORD *)a1;
  if ( (*(_DWORD *)a1 & 0x80) == 0 )
  {
    StatusReg = _ReadStatusReg(TPIDR_EL0);
    *(_DWORD *)a1 = v2 | 0x80;
    v20[0] = flush_cleanup;
    v20[1] = 0;
    v5 = StatusReg - 1856;
    _libc_cleanup_push_defer(v20);
    v6 = (unsigned __int8)_libc_single_threaded;
    if ( _libc_single_threaded )
    {
      v7 = qword_492640;
      if ( !qword_492640 )
      {
        v11 = *(_DWORD *)a1;
        run_fp = a1;
        LODWORD(list_all_lock) = 1;
        qword_492640 = v5;
        if ( (v11 & 0x8000) != 0 )
        {
          v10 = HIDWORD(list_all_lock);
          run_fp = 0;
          v12 = IO_list_all;
          IO_list_all = (_UNKNOWN *)a1;
          *(_QWORD *)(a1 + 104) = v12;
          goto LABEL_19;
        }
        v13 = *(_QWORD *)(a1 + 136);
        v14 = *(_QWORD *)(v13 + 8);
LABEL_32:
        if ( !v14 )
        {
          *(_QWORD *)(v13 + 8) = v5;
          v18 = IO_list_all;
          *(_DWORD *)v13 = 1;
          v17 = *(_DWORD *)(v13 + 4);
          IO_list_all = (_UNKNOWN *)a1;
          *(_QWORD *)(a1 + 104) = v18;
          goto LABEL_34;
        }
LABEL_23:
        if ( v5 == v14 )
        {
          ++*(_DWORD *)(v13 + 4);
          v19 = IO_list_all;
          IO_list_all = (_UNKNOWN *)a1;
          *(_QWORD *)(a1 + 104) = v19;
        }
        else
        {
          if ( _aarch64_cas4_acq(0, 1u, (atomic_uint *)v13) )
            _lll_lock_wait_private(v13);
          v13 = *(_QWORD *)(a1 + 136);
          v15 = *(_DWORD *)a1;
          v16 = IO_list_all;
          *(_QWORD *)(v13 + 8) = v5;
          IO_list_all = (_UNKNOWN *)a1;
          *(_QWORD *)(a1 + 104) = v16;
          v6 = (unsigned __int8)_libc_single_threaded;
          if ( (v15 & 0x8000) != 0 )
          {
LABEL_11:
            run_fp = 0;
            v10 = HIDWORD(list_all_lock);
            if ( !v6 )
              goto LABEL_12;
LABEL_19:
            if ( !v10 )
            {
              LODWORD(list_all_lock) = 0;
              qword_492640 = 0;
LABEL_15:
              _libc_cleanup_pop_restore(v20);
              return &_stack_chk_guard;
            }
LABEL_21:
            HIDWORD(list_all_lock) = v10 - 1;
            goto LABEL_15;
          }
        }
        v17 = *(_DWORD *)(v13 + 4);
        if ( !v6 )
        {
          if ( v17 )
          {
            *(_DWORD *)(v13 + 4) = v17 - 1;
            run_fp = 0;
            v10 = HIDWORD(list_all_lock);
LABEL_12:
            if ( !v10 )
            {
              qword_492640 = 0;
              if ( (int)_aarch64_swp4_rel(0, (atomic_uint *)&list_all_lock) > 1 )
                _lll_lock_wake_private(&list_all_lock);
              goto LABEL_15;
            }
            goto LABEL_21;
          }
          *(_QWORD *)(v13 + 8) = 0;
          if ( (int)_aarch64_swp4_rel(0, (atomic_uint *)v13) > 1 )
            _lll_lock_wake_private(v13);
          v6 = (unsigned __int8)_libc_single_threaded;
          goto LABEL_11;
        }
LABEL_34:
        if ( v17 )
        {
          *(_DWORD *)(v13 + 4) = v17 - 1;
          run_fp = 0;
          v10 = HIDWORD(list_all_lock);
        }
        else
        {
          v10 = HIDWORD(list_all_lock);
          run_fp = 0;
          *(_DWORD *)v13 = 0;
          *(_QWORD *)(v13 + 8) = 0;
        }
        goto LABEL_19;
      }
    }
    else
    {
      v7 = qword_492640;
    }
    if ( v5 == v7 )
    {
      ++HIDWORD(list_all_lock);
    }
    else
    {
      if ( _aarch64_cas4_acq(0, 1u, (atomic_uint *)&list_all_lock) )
        _lll_lock_wait_private(&list_all_lock);
      v6 = (unsigned __int8)_libc_single_threaded;
      qword_492640 = v5;
    }
    v8 = *(_DWORD *)a1;
    run_fp = a1;
    if ( (v8 & 0x8000) != 0 )
    {
      v9 = IO_list_all;
      IO_list_all = (_UNKNOWN *)a1;
      *(_QWORD *)(a1 + 104) = v9;
      goto LABEL_11;
    }
    v13 = *(_QWORD *)(a1 + 136);
    v14 = *(_QWORD *)(v13 + 8);
    if ( !v6 )
      goto LABEL_23;
    goto LABEL_32;
  }
  return &_stack_chk_guard;
}
