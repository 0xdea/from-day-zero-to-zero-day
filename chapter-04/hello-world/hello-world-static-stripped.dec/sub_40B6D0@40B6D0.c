__int64 sub_40B6D0()
{
  __int64 result; // x0
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  void *v4; // x4
  void *v5; // x5
  void *v6; // x6
  double v7; // d0
  double v8; // d1
  double v9; // d2
  double v10; // d3
  double v11; // d4
  double v12; // d5
  double v13; // d6
  double v14; // d7
  int *v15; // x19
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  void *v19; // x4
  void *v20; // x5
  void *v21; // x6
  double v22; // d0
  double v23; // d1
  double v24; // d2
  double v25; // d3
  double v26; // d4
  double v27; // d5
  double v28; // d6
  double v29; // d7

  result = (unsigned __int8)byte_496690;
  if ( (byte_496690 & 1) != 0 )
  {
    if ( _aarch64_cas4_acq(0, 1u, (atomic_uint *)&dword_4966C8) )
      sub_406F40(&dword_4966C8, v7, v8, v9, v10, v11, v12, v13, v14, v1, v2, v3, v4, v5, v6);
    v15 = &dword_490670;
    do
    {
      result = _aarch64_cas4_acq(0, 1u, (atomic_uint *)v15);
      if ( (_DWORD)result )
        result = sub_406F40(v15, v22, v23, v24, v25, v26, v27, v28, v29, v16, v17, v18, v19, v20, v21);
      v15 = (int *)*((_QWORD *)v15 + 270);
    }
    while ( v15 != &dword_490670 );
  }
  return result;
}
