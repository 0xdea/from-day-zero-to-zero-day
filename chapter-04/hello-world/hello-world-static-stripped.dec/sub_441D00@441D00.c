__int64 __fastcall sub_441D00(
        __int64 a1,
        double a2,
        double a3,
        double a4,
        double a5,
        double a6,
        double a7,
        double a8,
        double a9)
{
  __int64 v10; // x21
  __int64 v11; // x22
  __int64 v12; // x20
  __int64 result; // x0
  __int64 v14; // x0

  v10 = a1 + 48;
  v11 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 216LL);
  v12 = (*(_QWORD *)(a1 + 8) - (a1 + 48)) >> 2;
  if ( (unsigned __int64)(v11 - (_QWORD)&unk_48DD70) > 0x92F )
    sub_401A50(a2, a3, a4, a5, a6, a7, a8, a9);
  result = (*(__int64 (**)(void))(v11 + 56))();
  if ( result == v12 )
  {
    v14 = *(_QWORD *)(a1 + 24);
    *(_QWORD *)(a1 + 8) = v10;
    result = v14 + v12;
    *(_QWORD *)(a1 + 24) = result;
  }
  else
  {
    *(_DWORD *)(a1 + 32) = 0;
  }
  return result;
}
