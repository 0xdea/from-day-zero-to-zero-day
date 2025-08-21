__int64 __fastcall sub_444F80(_QWORD *a1)
{
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
  __int64 *v16; // x19
  unsigned int *v17; // x22
  unsigned int v18; // w21
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  void *v22; // x4
  void *v23; // x5
  void *v24; // x6
  unsigned __int64 StatusReg; // x22
  __int64 *v27; // x19
  unsigned int *v28; // x22

  if ( (unsigned int)sub_411880((void *)(*a1 & -qword_490F10), qword_490F10, dword_48FB18) )
  {
    v18 = *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
    if ( v18 )
      return v18;
  }
  else
  {
    *a1 = 0;
    dword_490F28 |= 1u;
  }
  if ( _aarch64_cas4_acq(0, 1u, (atomic_uint *)dword_4967B8) )
    sub_406F40(dword_4967B8, v8, v9, v10, v11, v12, v13, v14, v15, v2, v3, v4, v5, v6, v7);
  v16 = (__int64 *)qword_4967F0;
  if ( (__int64 *)qword_4967F0 == &qword_4967F0 )
  {
LABEL_13:
    StatusReg = _ReadStatusReg(TPIDR_EL0);
    v27 = (__int64 *)qword_4967D0;
    v28 = (unsigned int *)(StatusReg + 40);
    if ( (__int64 *)qword_4967D0 == &qword_4967D0 )
    {
LABEL_19:
      v18 = 0;
    }
    else
    {
      while ( 1 )
      {
        while ( !(unsigned int)sub_411880((void *)(v27[122] + v27[124]), v27[123] - v27[124], 7) )
        {
          v27 = (__int64 *)*v27;
          if ( v27 == &qword_4967D0 )
            goto LABEL_19;
        }
        v18 = *v28;
        if ( *v28 )
          break;
        v27 = (__int64 *)*v27;
        if ( v27 == &qword_4967D0 )
          goto LABEL_19;
      }
    }
  }
  else
  {
    v17 = (unsigned int *)(_ReadStatusReg(TPIDR_EL0) + 40);
    while ( 1 )
    {
      if ( (unsigned int)sub_411880((void *)(v16[122] + v16[124]), v16[123] - v16[124], 7) )
      {
        v18 = *v17;
        if ( *v17 )
          break;
      }
      v16 = (__int64 *)*v16;
      if ( v16 == &qword_4967F0 )
        goto LABEL_13;
    }
  }
  if ( (int)_aarch64_swp4_rel(0, (atomic_uint *)dword_4967B8) > 1 )
    sub_407040(dword_4967B8, v19, v20, v21, v22, v23, v24);
  return v18;
}
