__int64 __fastcall sub_416234(__int64 a1, __int64 a2)
{
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x3
  void *v7; // x4
  void *v8; // x5
  void *v9; // x6
  long double v10; // q0
  __int64 v11; // x24
  __int64 v12; // x19
  int v13; // w2
  void (__fastcall *v14)(__int64); // x1
  __int64 v15; // x0

  if ( _aarch64_cas4_acq(0, 1u, (atomic_uint *)dword_496870) )
    sub_406F40(dword_496870, v4, v5, v6, v7, v8, v9);
  v11 = a2 - 1;
  if ( a2 )
  {
    v12 = a1 + 104 * a2 - 104;
    do
    {
      v15 = *(_QWORD *)v12;
      if ( *(_QWORD *)v12 )
      {
        v13 = *(_DWORD *)(v12 + 16) - 1;
        *(_DWORD *)(v12 + 16) = v13;
        if ( !v13 )
        {
          v14 = (void (__fastcall *)(__int64))(*(_QWORD *)(v12 + 64) ^ qword_48DD68);
          if ( v14 )
          {
            v14(v12);
            v15 = *(_QWORD *)v12;
          }
          sub_41E520(v15);
          *(_QWORD *)v12 = 0;
        }
      }
      else if ( *(_QWORD *)(v12 + 64) )
      {
        v10 = sub_41F250("step->__end_fct == NULL", "gconv_db.c", 221, "__gconv_release_step");
        break;
      }
      --v11;
      v12 -= 104;
    }
    while ( v11 != -1 );
  }
  sub_41E1E0(a1, a2, v10);
  if ( (int)_aarch64_swp4_rel(0, (atomic_uint *)dword_496870) > 1 )
    sub_407040(dword_496870);
  return 0;
}
