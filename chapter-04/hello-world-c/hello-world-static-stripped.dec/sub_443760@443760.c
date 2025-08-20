signed __int64 __fastcall sub_443760(__int64 a1)
{
  atomic_uint *v2; // x20
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  void *v6; // x4
  void *v7; // x5
  void *v8; // x6
  double v9; // d0
  double v10; // d1
  double v11; // d2
  double v12; // d3
  double v13; // d4
  double v14; // d5
  double v15; // d6
  double v16; // d7
  signed __int64 result; // x0
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  void *v21; // x4
  void *v22; // x5
  void *v23; // x6

  v2 = (atomic_uint *)(a1 + 4);
  if ( _aarch64_cas4_acq(0, 1u, (atomic_uint *)(a1 + 4)) )
    sub_406F40(v2, v9, v10, v11, v12, v13, v14, v15, v16, v3, v4, v5, v6, v7, v8);
  sub_410980(*(_DWORD *)a1, 0, 0);
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 32) = 0;
  *(_DWORD *)(a1 + 40) = 0;
  result = _aarch64_swp4_rel(0, v2);
  if ( (int)result > 1 )
    return sub_407040(v2, v18, v19, v20, v21, v22, v23);
  return result;
}
