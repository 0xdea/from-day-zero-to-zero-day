__int64 __fastcall sub_4050C0(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        double a4,
        double a5,
        double a6,
        double a7,
        double a8,
        double a9,
        double a10,
        double a11)
{
  __int64 v11; // x19

  v11 = *(_QWORD *)(a1 + 216);
  if ( (unsigned __int64)(v11 - (_QWORD)&unk_48DD70) <= 0x92F )
    return (*(__int64 (**)(void))(v11 + 72))();
  sub_401A50(a4, a5, a6, a7, a8, a9, a10, a11);
  return (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD))(v11 + 72))(a1, a2, 0, a3);
}
