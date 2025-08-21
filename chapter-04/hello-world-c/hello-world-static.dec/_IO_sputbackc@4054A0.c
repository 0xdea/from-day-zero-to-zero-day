__int64 __fastcall IO_sputbackc(
        __int64 a1,
        unsigned __int8 a2,
        double a3,
        double a4,
        double a5,
        double a6,
        double a7,
        double a8,
        double a9,
        double a10)
{
  unsigned __int64 v11; // x0
  __int64 v12; // x20
  __int64 result; // x0
  unsigned __int64 v14; // x2

  v11 = *(_QWORD *)(a1 + 8);
  if ( v11 > *(_QWORD *)(a1 + 24) && *(unsigned __int8 *)(v11 - 1) == a2 )
  {
    v14 = v11 - 1;
    result = a2;
    *(_QWORD *)(a1 + 8) = v14;
LABEL_6:
    *(_DWORD *)a1 &= ~0x10u;
    return result;
  }
  v12 = *(_QWORD *)(a1 + 216);
  if ( (unsigned __int64)(v12 - (_QWORD)&_io_vtables) > 0x92F )
    IO_vtable_check(a3, a4, a5, a6, a7, a8, a9, a10);
  result = (*(__int64 (__fastcall **)(__int64))(v12 + 48))(a1);
  if ( (_DWORD)result != -1 )
    goto LABEL_6;
  return result;
}
