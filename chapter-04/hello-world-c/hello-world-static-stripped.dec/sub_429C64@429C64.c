__int64 __fastcall sub_429C64(
        __int64 a1,
        unsigned int a2,
        double a3,
        double a4,
        double a5,
        double a6,
        double a7,
        double a8,
        double a9,
        double a10)
{
  __int64 v12; // x21

  if ( *(_DWORD *)(a1 + 192) )
  {
    v12 = *(_QWORD *)(a1 + 216);
    if ( (unsigned __int64)(v12 - (_QWORD)&unk_48DD70) <= 0x92F )
      return (*(__int64 (__fastcall **)(__int64, _QWORD))(v12 + 24))(a1, a2);
  }
  else
  {
    sub_42C0C0();
    v12 = *(_QWORD *)(a1 + 216);
    if ( (unsigned __int64)(v12 - (_QWORD)&unk_48DD70) <= 0x92F )
      return (*(__int64 (__fastcall **)(__int64, _QWORD))(v12 + 24))(a1, a2);
  }
  sub_401A50(a3, a4, a5, a6, a7, a8, a9, a10);
  return (*(__int64 (__fastcall **)(__int64, _QWORD))(v12 + 24))(a1, a2);
}
