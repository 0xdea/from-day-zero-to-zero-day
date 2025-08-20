__int64 __fastcall sub_402D14(__int64 a1)
{
  double v2; // d0
  double v3; // d1
  double v4; // d2
  double v5; // d3
  double v6; // d4
  double v7; // d5
  double v8; // d6
  double v9; // d7
  __int64 v10; // x20

  ((void (*)(void))loc_401DD4)();
  v10 = *(_QWORD *)(a1 + 216);
  if ( (unsigned __int64)(v10 - (_QWORD)&unk_48DD70) > 0x92F )
    sub_401A50(v2, v3, v4, v5, v6, v7, v8, v9);
  return (*(__int64 (__fastcall **)(__int64))(v10 + 32))(a1);
}
