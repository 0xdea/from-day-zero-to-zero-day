__int64 __fastcall sub_441960(unsigned int a1, __int64 a2, __int64 a3)
{
  __int64 v3; // x19
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x3
  void *v9; // x4
  void *v10; // x5
  void *v11; // x6
  double v12; // d0
  double v13; // d1
  double v14; // d2
  double v15; // d3
  double v16; // d4
  double v17; // d5
  double v18; // d6
  double v19; // d7
  __int64 v20; // x1
  __int64 v21; // x0
  unsigned int v22; // w23
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  void *v26; // x4
  void *v27; // x5
  void *v28; // x6

  v3 = (int)a1;
  if ( a1 > 0xFF )
  {
    v22 = -1;
    *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40) = 22;
    return v22;
  }
  if ( _aarch64_cas4_acq(0, 1u, (atomic_uint *)dword_496BF0) )
    sub_406F40(dword_496BF0, v12, v13, v14, v15, v16, v17, v18, v19, v6, v7, v8, v9, v10, v11);
  v20 = qword_496BF8;
  if ( qword_496BF8 )
  {
    v21 = qword_496C00;
LABEL_6:
    *(_QWORD *)(v20 + 8 * v3) = a2;
    v22 = 0;
    *(_QWORD *)(v21 + 8 * v3) = a3;
    goto LABEL_7;
  }
  v21 = sub_40CCB0(0x100u, 0x10u, v12, v13, v14, v15, v16, v17, v18, v19, v7, v8, v9, v10, v11);
  qword_496C00 = v21;
  if ( v21 )
  {
    v20 = v21 + 2048;
    qword_496BF8 = v21 + 2048;
    goto LABEL_6;
  }
  v22 = -1;
LABEL_7:
  if ( (int)_aarch64_swp4_rel(0, (atomic_uint *)dword_496BF0) > 1 )
    sub_407040(dword_496BF0, v23, v24, v25, v26, v27, v28);
  return v22;
}
