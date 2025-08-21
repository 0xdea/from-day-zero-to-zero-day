__int64 __fastcall _pthread_tpp_change_priority(int a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 *v6; // x2
  unsigned __int64 StatusReg; // x25
  unsigned __int64 v8; // x23
  int *v11; // x21
  int v12; // w22
  int v13; // w26
  int v16; // w24
  int *v17; // x0
  int v18; // w1
  int *v19; // x1
  int v20; // w0
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  void *v24; // x4
  void *v25; // x5
  void *v26; // x6
  int v27; // w0
  int v28; // w0
  unsigned int v29; // w20
  int *v31; // x1
  int v32; // w0
  int *v34; // x0
  int v37; // w0
  int v38; // w0
  int v40; // [xsp+0h] [xbp-10h] BYREF

  v6 = &_stack_chk_guard;
  StatusReg = _ReadStatusReg(TPIDR_EL0);
  v8 = StatusReg - 1856;
  v11 = *(int **)(StatusReg - 1856 + 0x4B0);
  v12 = _sched_fifo_min_prio;
  v13 = _sched_fifo_max_prio;
  if ( !v11 )
  {
    if ( _sched_fifo_min_prio == -1 || _sched_fifo_max_prio == -1 )
    {
      _sched_fifo_max_prio = sched_get_priority_max(1);
      _sched_fifo_min_prio = sched_get_priority_min(1);
      v12 = _sched_fifo_min_prio;
      v13 = _sched_fifo_max_prio;
    }
    v11 = (int *)calloc(4 * (v13 - v12 + 2LL), 1u, (__int64)v6, a4, a5, a6);
    if ( !v11 )
      return 12;
    *v11 = v12 - 1;
    *(_QWORD *)(v8 + 0x4B0) = v11;
  }
  if ( a2 == -1 )
  {
    if ( a1 == -1 )
      return 0;
    if ( v12 <= a1 && v13 >= a1 )
    {
      v16 = *v11;
LABEL_28:
      v31 = &v11[a1 - v12];
      v32 = v31[1] - 1;
      v31[1] = v32;
      if ( v32 )
        return 0;
      if ( a1 != v16 || a2 >= a1 )
        return 0;
      goto LABEL_34;
    }
LABEL_68:
    _libc_assert_fail(
      "previous_prio == -1 || (previous_prio >= fifo_min_prio && previous_prio <= fifo_max_prio)",
      (__int64)"tpp.c",
      0x56u,
      (__int64)"__pthread_tpp_change_priority");
  }
  if ( v12 > a2 || v13 < a2 )
    _libc_assert_fail(
      "new_prio == -1 || (new_prio >= fifo_min_prio && new_prio <= fifo_max_prio)",
      (__int64)"tpp.c",
      0x53u,
      (__int64)"__pthread_tpp_change_priority");
  if ( a1 != -1 && (v12 > a1 || v13 < a1) )
    goto LABEL_68;
  v16 = *v11;
  v17 = &v11[a2 - v12];
  v18 = v17[1];
  if ( v18 == -1 )
    return 11;
  v17[1] = v18 + 1;
  if ( a2 <= v16 )
  {
    if ( a1 == -1 )
      return 0;
    goto LABEL_28;
  }
  if ( a1 != -1 )
  {
    v19 = &v11[a1 - v12];
    v20 = v19[1] - 1;
    v19[1] = v20;
    if ( !v20 && a2 < a1 && a1 == v16 )
    {
LABEL_34:
      a2 = a1 - 1;
      if ( v12 > a1 - 1 )
        goto LABEL_16;
      v34 = &v11[a2 - v12 + 1];
      do
      {
        if ( *v34 )
          break;
        --a2;
        --v34;
      }
      while ( v12 <= a2 );
      if ( a2 != v16 )
        goto LABEL_16;
      return 0;
    }
  }
LABEL_16:
  if ( _aarch64_cas4_acq(0, 1u, (atomic_uint *)(StatusReg - 808)) )
    _lll_lock_wait_private((_DWORD *)(StatusReg - 808), v21, v22, v23, v24, v25, v26);
  v27 = *(_DWORD *)(v8 + 0x10C);
  *v11 = a2;
  if ( (v27 & 0x20) != 0 )
  {
    if ( (v27 & 0x40) != 0 )
      goto LABEL_20;
  }
  else
  {
    if ( (unsigned int)sched_getparam(*(unsigned int *)(v8 + 0xD0), StatusReg - 784) )
    {
      v29 = *(_DWORD *)(StatusReg + 40);
      if ( (*(_DWORD *)(v8 + 0x10C) & 0x40) != 0 )
      {
        if ( v29 )
          goto LABEL_24;
        goto LABEL_20;
      }
      goto LABEL_59;
    }
    v37 = *(_DWORD *)(v8 + 0x10C);
    *(_DWORD *)(v8 + 0x10C) = v37 | 0x20;
    if ( (v37 & 0x40) != 0 )
      goto LABEL_20;
  }
  v29 = 0;
LABEL_59:
  v38 = sched_getscheduler(*(unsigned int *)(v8 + 0xD0));
  *(_DWORD *)(v8 + 0x434) = v38;
  if ( v38 == -1 )
  {
    v29 = *(_DWORD *)(StatusReg + 40);
    if ( v29 )
      goto LABEL_24;
  }
  else
  {
    *(_DWORD *)(v8 + 0x10C) |= 0x40u;
    if ( v29 )
      goto LABEL_24;
  }
LABEL_20:
  v28 = *(_DWORD *)(v8 + 0x430);
  v40 = v28;
  if ( v28 >= a2 )
  {
    if ( v28 >= v16 )
      goto LABEL_23;
  }
  else
  {
    v40 = a2;
  }
  if ( (sched_setscheduler(*(unsigned int *)(v8 + 0xD0), *(unsigned int *)(v8 + 0x434), &v40) & 0x80000000) == 0 )
  {
LABEL_23:
    v29 = 0;
    goto LABEL_24;
  }
  v29 = *(_DWORD *)(StatusReg + 40);
LABEL_24:
  if ( (int)_aarch64_swp4_rel(0, (atomic_uint *)(StatusReg - 808)) > 1 )
    _lll_lock_wake_private(StatusReg - 808);
  return v29;
}
