__int64 __fastcall sub_416234(__int64 a1, __int64 a2)
{
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x3
  void *v7; // x4
  void *v8; // x5
  void *v9; // x6
  double v10; // d0
  double v11; // d1
  double v12; // d2
  double v13; // d3
  double v14; // d4
  double v15; // d5
  double v16; // d6
  double v17; // d7
  __int64 v18; // x24
  __int64 v19; // x19
  int v20; // w2
  void (__fastcall *v21)(__int64); // x1
  __int64 v22; // x0
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  void *v26; // x4
  void *v27; // x5
  void *v28; // x6

  if ( _aarch64_cas4_acq(0, 1u, (atomic_uint *)dword_496870) )
    sub_406F40(dword_496870, v10, v11, v12, v13, v14, v15, v16, v17, v4, v5, v6, v7, v8, v9);
  v18 = a2 - 1;
  if ( a2 )
  {
    v19 = a1 + 104 * a2 - 104;
    do
    {
      v22 = *(_QWORD *)v19;
      if ( *(_QWORD *)v19 )
      {
        v20 = *(_DWORD *)(v19 + 16) - 1;
        *(_DWORD *)(v19 + 16) = v20;
        if ( !v20 )
        {
          v21 = (void (__fastcall *)(__int64))(*(_QWORD *)(v19 + 64) ^ qword_48DD68);
          if ( v21 )
          {
            v21(v19);
            v22 = *(_QWORD *)v19;
          }
          sub_41E520(v22);
          *(_QWORD *)v19 = 0;
        }
      }
      else if ( *(_QWORD *)(v19 + 64) )
      {
        sub_41F250("step->__end_fct == NULL", "gconv_db.c", 221, "__gconv_release_step");
        break;
      }
      --v18;
      v19 -= 104;
    }
    while ( v18 != -1 );
  }
  sub_41E1E0(a1, a2);
  if ( (int)_aarch64_swp4_rel(0, (atomic_uint *)dword_496870) > 1 )
    sub_407040(dword_496870, v23, v24, v25, v26, v27, v28);
  return 0;
}
