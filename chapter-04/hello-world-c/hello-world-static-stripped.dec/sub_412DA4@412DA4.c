signed __int64 __fastcall sub_412DA4(_QWORD *a1)
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
  __int64 *i; // x20
  __int64 v17; // x0
  __int64 *j; // x20
  __int64 v19; // x0
  signed __int64 result; // x0
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  void *v24; // x4
  void *v25; // x5
  void *v26; // x6

  if ( _aarch64_cas4_acq(0, 1u, (atomic_uint *)dword_4967B8) )
    sub_406F40(dword_4967B8, v8, v9, v10, v11, v12, v13, v14, v15, v2, v3, v4, v5, v6, v7);
  for ( i = (__int64 *)qword_4967F0; i != &qword_4967F0; i = (__int64 *)*i )
  {
    v17 = j_ifunc_40DC90((char *)i + a1[146] + 1664, a1[141], a1[142]);
    ifunc_40DE70(v17 + a1[142], 0, a1[143] - a1[142]);
  }
  for ( j = (__int64 *)qword_4967E0; j != &qword_4967E0; j = (__int64 *)*j )
  {
    v19 = j_ifunc_40DC90((char *)j + a1[146] + 1664, a1[141], a1[142]);
    ifunc_40DE70(v19 + a1[142], 0, a1[143] - a1[142]);
  }
  result = _aarch64_swp4_rel(0, (atomic_uint *)dword_4967B8);
  if ( (int)result > 1 )
    return sub_407040(dword_4967B8, v21, v22, v23, v24, v25, v26);
  return result;
}
