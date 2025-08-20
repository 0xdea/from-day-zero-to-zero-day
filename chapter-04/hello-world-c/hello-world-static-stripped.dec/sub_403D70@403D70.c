__int64 __fastcall sub_403D70(__int64 a1, __int64 a2, __int64 a3)
{
  double v6; // d0
  double v7; // d1
  double v8; // d2
  double v9; // d3
  double v10; // d4
  double v11; // d5
  double v12; // d6
  double v13; // d7
  __int64 v14; // x22

  ((void (*)(void))loc_401DD4)();
  v14 = *(_QWORD *)(a1 + 216);
  if ( (unsigned __int64)(v14 - (_QWORD)&unk_48DD70) > 0x92F )
    sub_401A50(v6, v7, v8, v9, v10, v11, v12, v13);
  return (*(__int64 (__fastcall **)(__int64, __int64, __int64))(v14 + 64))(a1, a2, a3);
}
