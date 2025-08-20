__int64 __fastcall IO_sputbackwc(
        __int64 a1,
        int a2,
        double a3,
        double a4,
        double a5,
        double a6,
        double a7,
        double a8,
        double a9,
        double a10)
{
  __int64 *v10; // x2
  __int64 v12; // x3
  __int64 result; // x0
  __int64 v14; // x20

  v10 = *(__int64 **)(a1 + 160);
  v12 = *v10;
  if ( *v10 > (unsigned __int64)v10[2] && (result = *(unsigned int *)(v12 - 4), (_DWORD)result == a2) )
  {
    *v10 = v12 - 4;
  }
  else
  {
    v14 = *(_QWORD *)(a1 + 216);
    if ( (unsigned __int64)(v14 - (_QWORD)&_io_vtables) > 0x92F )
      IO_vtable_check(a3, a4, a5, a6, a7, a8, a9, a10);
    result = (*(__int64 (__fastcall **)(__int64))(v14 + 48))(a1);
  }
  if ( (_DWORD)result != -1 )
    *(_DWORD *)a1 &= ~0x10u;
  return result;
}
