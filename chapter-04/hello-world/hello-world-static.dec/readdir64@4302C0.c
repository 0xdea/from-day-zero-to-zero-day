__int64 __fastcall readdir64(__int64 a1)
{
  atomic_uint *v1; // x21
  unsigned __int64 StatusReg; // x23
  int v4; // w24
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x3
  void *v8; // x4
  void *v9; // x5
  void *v10; // x6
  double v11; // d0
  double v12; // d1
  double v13; // d2
  double v14; // d3
  double v15; // d4
  double v16; // d5
  double v17; // d6
  double v18; // d7
  unsigned __int64 v19; // x2
  __int64 v20; // x20
  __int64 v21; // x3
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  void *v25; // x4
  void *v26; // x5
  void *v27; // x6
  signed __int64 v29; // x0

  v1 = (atomic_uint *)(a1 + 4);
  StatusReg = _ReadStatusReg(TPIDR_EL0);
  v4 = *(_DWORD *)(StatusReg + 40);
  if ( _aarch64_cas4_acq(0, 1u, (atomic_uint *)(a1 + 4)) )
    _lll_lock_wait_private(v1, v11, v12, v13, v14, v15, v16, v17, v18, v5, v6, v7, v8, v9, v10);
  v19 = *(_QWORD *)(a1 + 24);
  if ( v19 >= *(_QWORD *)(a1 + 16) )
  {
    v20 = a1 + 48;
    v29 = getdents64(*(_DWORD *)a1, (void *)(a1 + 48), *(_QWORD *)(a1 + 8), v7, v8, v9, v10);
    if ( v29 <= 0 )
    {
      if ( !v29 || *(_DWORD *)(StatusReg + 40) == 2 )
        *(_DWORD *)(StatusReg + 40) = v4;
      v20 = 0;
      if ( (int)_aarch64_swp4_rel(0, v1) > 1 )
        goto LABEL_6;
      return v20;
    }
    v19 = 0;
    *(_QWORD *)(a1 + 16) = v29;
  }
  else
  {
    v20 = a1 + v19 + 48;
  }
  v21 = *(_QWORD *)(v20 + 8);
  *(_QWORD *)(a1 + 24) = *(unsigned __int16 *)(v20 + 16) + v19;
  *(_QWORD *)(a1 + 32) = v21;
  if ( (int)_aarch64_swp4_rel(0, v1) > 1 )
LABEL_6:
    _lll_lock_wake_private(v1, v22, v23, v24, v25, v26, v27);
  return v20;
}
