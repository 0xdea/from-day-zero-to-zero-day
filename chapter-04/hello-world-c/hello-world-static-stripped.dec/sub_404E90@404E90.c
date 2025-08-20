__int64 __fastcall sub_404E90(
        __int64 a1,
        __int64 a2,
        __int64 a3,
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
    return (*(__int64 (**)(void))(v11 + 64))();
  sub_401A50(a4, a5, a6, a7, a8, a9, a10, a11);
  return (*(__int64 (__fastcall **)(__int64, __int64, __int64))(v11 + 64))(a1, a2, a3);
}
