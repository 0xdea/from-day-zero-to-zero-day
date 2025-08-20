__int64 __fastcall _pthread_tpp_change_priority(
        int a1,
        int a2,
        double a3,
        double a4,
        double a5,
        double a6,
        double a7,
        double a8,
        double a9,
        double a10,
        __int64 a11,
        __int64 a12,
        void *a13,
        void *a14,
        void *a15)
{
  __int64 *v15; // x2
  unsigned __int64 StatusReg; // x25
  unsigned __int64 v17; // x23
  int *v20; // x21
  int v21; // w22
  int v22; // w26
  int v25; // w24
  int *v26; // x0
  int v27; // w1
  int *v28; // x1
  int v29; // w0
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  void *v33; // x4
  void *v34; // x5
  void *v35; // x6
  double v36; // d0
  double v37; // d1
  double v38; // d2
  double v39; // d3
  double v40; // d4
  double v41; // d5
  double v42; // d6
  double v43; // d7
  int v44; // w0
  int v45; // w0
  unsigned int v46; // w20
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x3
  void *v50; // x4
  void *v51; // x5
  void *v52; // x6
  int *v54; // x1
  int v55; // w0
  int *v57; // x0
  int v60; // w0
  int v61; // w0
  int v63; // [xsp+0h] [xbp-10h] BYREF

  v15 = &_stack_chk_guard;
  StatusReg = _ReadStatusReg(TPIDR_EL0);
  v17 = StatusReg - 1856;
  v20 = *(int **)(StatusReg - 1856 + 0x4B0);
  v21 = _sched_fifo_min_prio;
  v22 = _sched_fifo_max_prio;
  if ( !v20 )
  {
    if ( _sched_fifo_min_prio == -1 || _sched_fifo_max_prio == -1 )
    {
      _sched_fifo_max_prio = sched_get_priority_max(1);
      _sched_fifo_min_prio = sched_get_priority_min(1);
      v21 = _sched_fifo_min_prio;
      v22 = _sched_fifo_max_prio;
    }
    v20 = (int *)calloc(4 * (v22 - v21 + 2LL), 1u, a3, a4, a5, a6, a7, a8, a9, a10, (__int64)v15, a12, a13, a14, a15);
    if ( !v20 )
      return 12;
    *v20 = v21 - 1;
    *(_QWORD *)(v17 + 0x4B0) = v20;
  }
  if ( a2 == -1 )
  {
    if ( a1 == -1 )
      return 0;
    if ( v21 <= a1 && v22 >= a1 )
    {
      v25 = *v20;
LABEL_28:
      v54 = &v20[a1 - v21];
      v55 = v54[1] - 1;
      v54[1] = v55;
      if ( v55 )
        return 0;
      if ( a1 != v25 || a2 >= a1 )
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
  if ( v21 > a2 || v22 < a2 )
    _libc_assert_fail(
      "new_prio == -1 || (new_prio >= fifo_min_prio && new_prio <= fifo_max_prio)",
      (__int64)"tpp.c",
      0x53u,
      (__int64)"__pthread_tpp_change_priority");
  if ( a1 != -1 && (v21 > a1 || v22 < a1) )
    goto LABEL_68;
  v25 = *v20;
  v26 = &v20[a2 - v21];
  v27 = v26[1];
  if ( v27 == -1 )
    return 11;
  v26[1] = v27 + 1;
  if ( a2 <= v25 )
  {
    if ( a1 == -1 )
      return 0;
    goto LABEL_28;
  }
  if ( a1 != -1 )
  {
    v28 = &v20[a1 - v21];
    v29 = v28[1] - 1;
    v28[1] = v29;
    if ( !v29 && a2 < a1 && a1 == v25 )
    {
LABEL_34:
      a2 = a1 - 1;
      if ( v21 > a1 - 1 )
        goto LABEL_16;
      v57 = &v20[a2 - v21 + 1];
      do
      {
        if ( *v57 )
          break;
        --a2;
        --v57;
      }
      while ( v21 <= a2 );
      if ( a2 != v25 )
        goto LABEL_16;
      return 0;
    }
  }
LABEL_16:
  if ( _aarch64_cas4_acq(0, 1u, (atomic_uint *)(StatusReg - 808)) )
    _lll_lock_wait_private(
      (_DWORD *)(StatusReg - 808),
      v36,
      v37,
      v38,
      v39,
      v40,
      v41,
      v42,
      v43,
      v30,
      v31,
      v32,
      v33,
      v34,
      v35);
  v44 = *(_DWORD *)(v17 + 0x10C);
  *v20 = a2;
  if ( (v44 & 0x20) != 0 )
  {
    if ( (v44 & 0x40) != 0 )
      goto LABEL_20;
  }
  else
  {
    if ( (unsigned int)sched_getparam(*(unsigned int *)(v17 + 0xD0), StatusReg - 784) )
    {
      v46 = *(_DWORD *)(StatusReg + 40);
      if ( (*(_DWORD *)(v17 + 0x10C) & 0x40) != 0 )
      {
        if ( v46 )
          goto LABEL_24;
        goto LABEL_20;
      }
      goto LABEL_59;
    }
    v60 = *(_DWORD *)(v17 + 0x10C);
    *(_DWORD *)(v17 + 0x10C) = v60 | 0x20;
    if ( (v60 & 0x40) != 0 )
      goto LABEL_20;
  }
  v46 = 0;
LABEL_59:
  v61 = sched_getscheduler(*(unsigned int *)(v17 + 0xD0));
  *(_DWORD *)(v17 + 0x434) = v61;
  if ( v61 == -1 )
  {
    v46 = *(_DWORD *)(StatusReg + 40);
    if ( v46 )
      goto LABEL_24;
  }
  else
  {
    *(_DWORD *)(v17 + 0x10C) |= 0x40u;
    if ( v46 )
      goto LABEL_24;
  }
LABEL_20:
  v45 = *(_DWORD *)(v17 + 0x430);
  v63 = v45;
  if ( v45 >= a2 )
  {
    if ( v45 >= v25 )
      goto LABEL_23;
  }
  else
  {
    v63 = a2;
  }
  if ( (sched_setscheduler(*(unsigned int *)(v17 + 0xD0), *(unsigned int *)(v17 + 0x434), &v63) & 0x80000000) == 0 )
  {
LABEL_23:
    v46 = 0;
    goto LABEL_24;
  }
  v46 = *(_DWORD *)(StatusReg + 40);
LABEL_24:
  if ( (int)_aarch64_swp4_rel(0, (atomic_uint *)(StatusReg - 808)) > 1 )
    _lll_lock_wake_private((void *)(StatusReg - 808), v47, v48, v49, v50, v51, v52);
  return v46;
}
