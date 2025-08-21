__int64 _pthread_current_priority()
{
  unsigned __int64 StatusReg; // x20
  unsigned int *v1; // x19
  __int64 v2; // x1
  __int64 v3; // x2
  __int64 v4; // x3
  void *v5; // x4
  void *v6; // x5
  void *v7; // x6
  double v8; // d0
  double v9; // d1
  double v10; // d2
  double v11; // d3
  double v12; // d4
  double v13; // d5
  double v14; // d6
  double v15; // d7
  unsigned int v16; // w0
  unsigned int v17; // w19
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  void *v21; // x4
  void *v22; // x5
  void *v23; // x6
  unsigned int v25; // w0
  unsigned int v26; // w0
  unsigned int v27; // w0

  StatusReg = _ReadStatusReg(TPIDR_EL0);
  v1 = (unsigned int *)(StatusReg - 1856);
  if ( (*(_DWORD *)(StatusReg - 1856 + 0x10C) & 0x60) == 0x60 )
    return v1[268];
  if ( _aarch64_cas4_acq(0, 1u, (atomic_uint *)(StatusReg - 808)) )
    _lll_lock_wait_private((_DWORD *)(StatusReg - 808), v8, v9, v10, v11, v12, v13, v14, v15, v2, v3, v4, v5, v6, v7);
  v16 = v1[67];
  if ( (v16 & 0x20) == 0 )
  {
    if ( (unsigned int)sched_getparam(v1[52], StatusReg - 784) )
    {
      if ( (v1[67] & 0x40) == 0 )
      {
        v27 = sched_getscheduler(v1[52]);
        v1[269] = v27;
        if ( v27 != -1 )
        {
          v1[67] |= 0x40u;
          v17 = -1;
          goto LABEL_7;
        }
      }
      goto LABEL_13;
    }
    v25 = v1[67];
    v1[67] = v25 | 0x20;
    if ( (v25 & 0x40) != 0 )
      goto LABEL_6;
LABEL_12:
    v26 = sched_getscheduler(v1[52]);
    v1[269] = v26;
    if ( v26 != -1 )
    {
      v1[67] |= 0x40u;
      goto LABEL_6;
    }
LABEL_13:
    v17 = -1;
    goto LABEL_7;
  }
  if ( (v16 & 0x40) == 0 )
    goto LABEL_12;
LABEL_6:
  v17 = v1[268];
LABEL_7:
  if ( (int)_aarch64_swp4_rel(0, (atomic_uint *)(StatusReg - 808)) > 1 )
    _lll_lock_wake_private((void *)(StatusReg - 808), v18, v19, v20, v21, v22, v23);
  return v17;
}
