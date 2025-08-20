signed __int64 sub_40B760()
{
  signed __int64 result; // x0
  int *v1; // x19
  __int64 v2; // x1
  __int64 v3; // x2
  __int64 v4; // x3
  void *v5; // x4
  void *v6; // x5
  void *v7; // x6
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x3
  void *v11; // x4
  void *v12; // x5
  void *v13; // x6

  result = (unsigned __int8)byte_496690;
  if ( (byte_496690 & 1) != 0 )
  {
    v1 = &dword_490670;
    do
    {
      if ( (int)_aarch64_swp4_rel(0, (atomic_uint *)v1) > 1 )
        sub_407040(v1, v2, v3, v4, v5, v6, v7);
      v1 = (int *)*((_QWORD *)v1 + 270);
    }
    while ( v1 != &dword_490670 );
    result = _aarch64_swp4_rel(0, (atomic_uint *)&dword_4966C8);
    if ( (int)result > 1 )
      return sub_407040(&dword_4966C8, v8, v9, v10, v11, v12, v13);
  }
  return result;
}
