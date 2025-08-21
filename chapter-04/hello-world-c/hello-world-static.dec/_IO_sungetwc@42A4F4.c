__int64 __fastcall IO_sungetwc(
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
  __int64 *v9; // x2
  __int64 v11; // x1
  __int64 result; // x0
  __int64 v13; // x20

  v9 = *(__int64 **)(a1 + 160);
  v11 = *v9;
  if ( *v9 <= (unsigned __int64)v9[2] )
  {
    v13 = *(_QWORD *)(a1 + 216);
    if ( (unsigned __int64)(v13 - (_QWORD)&_io_vtables) > 0x92F )
      IO_vtable_check(a2, a3, a4, a5, a6, a7, a8, a9);
    result = (*(__int64 (__fastcall **)(__int64, __int64))(v13 + 48))(a1, 0xFFFFFFFFLL);
  }
  else
  {
    result = *(unsigned int *)(v11 - 4);
    *v9 = v11 - 4;
  }
  if ( (_DWORD)result != -1 )
    *(_DWORD *)a1 &= ~0x10u;
  return result;
}
