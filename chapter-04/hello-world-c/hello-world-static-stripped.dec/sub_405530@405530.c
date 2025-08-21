__int64 __fastcall sub_405530(
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
  unsigned __int64 v10; // x0
  __int64 result; // x0
  __int64 v12; // x20

  v10 = *(_QWORD *)(a1 + 8);
  if ( v10 > *(_QWORD *)(a1 + 24) )
  {
    *(_QWORD *)(a1 + 8) = v10 - 1;
    result = *(unsigned __int8 *)(v10 - 1);
LABEL_3:
    *(_DWORD *)a1 &= ~0x10u;
    return result;
  }
  v12 = *(_QWORD *)(a1 + 216);
  if ( (unsigned __int64)(v12 - (_QWORD)&unk_48DD70) > 0x92F )
    sub_401A50(a2, a3, a4, a5, a6, a7, a8, a9);
  result = (*(__int64 (__fastcall **)(__int64, __int64))(v12 + 48))(a1, 0xFFFFFFFFLL);
  if ( (_DWORD)result != -1 )
    goto LABEL_3;
  return result;
}
