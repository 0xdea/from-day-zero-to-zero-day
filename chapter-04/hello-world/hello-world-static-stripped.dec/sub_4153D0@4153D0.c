unsigned __int64 __fastcall sub_4153D0(
        unsigned __int64 a1,
        double a2,
        double a3,
        double a4,
        double a5,
        double a6,
        double a7,
        double a8,
        double a9)
{
  __int64 v9; // x2
  unsigned __int64 v10; // x4
  __int64 v12; // x19
  unsigned __int64 i; // x20
  void (__fastcall *v14)(__int64); // x1
  double v15; // d0
  double v16; // d1
  double v17; // d2
  double v18; // d3
  double v19; // d4
  double v20; // d5
  double v21; // d6
  double v22; // d7
  double v23; // d0
  double v24; // d1
  double v25; // d2
  double v26; // d3
  double v27; // d4
  double v28; // d5
  double v29; // d6
  double v30; // d7

  v9 = *(_QWORD *)(a1 + 16);
  v10 = *(_QWORD *)(a1 + 24);
  if ( v10 )
  {
    v12 = 0;
    for ( i = 0; i < v10; ++i )
    {
      if ( *(int *)(v9 + v12 + 16) > 0 )
      {
        if ( *(_QWORD *)(v9 + v12) )
        {
          v14 = (void (__fastcall *)(__int64))(*(_QWORD *)(v9 + v12 + 64) ^ qword_48DD68);
          if ( v14 )
          {
            v14(v9 + v12);
            v9 = *(_QWORD *)(a1 + 16);
            v10 = *(_QWORD *)(a1 + 24);
          }
        }
      }
      v12 += 104;
    }
  }
  if ( v9 )
  {
    sub_40C1A0(*(_QWORD *)(v9 + 24), a2, a3, a4, a5, a6, a7, a8, a9);
    sub_40C1A0(
      *(_QWORD *)(*(_QWORD *)(a1 + 16) + 104LL * *(_QWORD *)(a1 + 24) - 72),
      v15,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22);
    sub_40C1A0(*(_QWORD *)(a1 + 16), v23, v24, v25, v26, v27, v28, v29, v30);
  }
  return sub_40C1A0(a1, a2, a3, a4, a5, a6, a7, a8, a9);
}
