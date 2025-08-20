__int64 __fastcall sub_429C00(
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
  __int64 v10; // x20
  __int64 result; // x0
  _QWORD *v12; // x1

  v10 = *(_QWORD *)(a1 + 216);
  if ( (unsigned __int64)(v10 - (_QWORD)&unk_48DD70) > 0x92F )
    sub_401A50(a2, a3, a4, a5, a6, a7, a8, a9);
  result = (*(__int64 (__fastcall **)(__int64))(v10 + 32))(a1);
  if ( (_DWORD)result != -1 )
  {
    v12 = *(_QWORD **)(a1 + 160);
    result = *(unsigned int *)*v12;
    *v12 += 4LL;
  }
  return result;
}
