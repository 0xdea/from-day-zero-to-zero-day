__int64 __fastcall sub_441A60(__int64 a1)
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
  int v16; // w20
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  void *v20; // x4
  void *v21; // x5
  void *v22; // x6

  if ( _aarch64_cas4_acq(0, 1u, (atomic_uint *)dword_496C08) )
    sub_406F40(dword_496C08, v8, v9, v10, v11, v12, v13, v14, v15, v2, v3, v4, v5, v6, v7);
  if ( qword_496C10
    || (qword_496C10 = sub_40CCB0(0xF8u, 8u, v8, v9, v10, v11, v12, v13, v14, v15, v3, v4, v5, v6, v7)) != 0 )
  {
    v16 = dword_491930;
    if ( dword_491930 == 256 )
    {
      v16 = -1;
      *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40) = 28;
    }
    else
    {
      ++dword_491930;
      *(_QWORD *)(qword_496C10 + 8LL * v16 - 64) = a1;
    }
  }
  else
  {
    v16 = -1;
  }
  if ( (int)_aarch64_swp4_rel(0, (atomic_uint *)dword_496C08) > 1 )
    sub_407040(dword_496C08, v17, v18, v19, v20, v21, v22);
  return (unsigned int)v16;
}
