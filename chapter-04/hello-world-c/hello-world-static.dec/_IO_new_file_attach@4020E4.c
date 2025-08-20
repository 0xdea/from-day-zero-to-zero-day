unsigned int *__fastcall IO_new_file_attach(
        unsigned int *a1,
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
  unsigned int v11; // w2
  unsigned __int64 StatusReg; // x21
  __int64 v13; // x22
  int v14; // w23

  if ( a1[28] != -1 )
    return 0;
  v11 = *a1;
  StatusReg = _ReadStatusReg(TPIDR_EL0);
  v13 = *((_QWORD *)a1 + 27);
  v14 = *(_DWORD *)(StatusReg + 40);
  *a1 = v11 & 0xFFFFFFB3 | 0x40;
  a1[28] = a2;
  *((_QWORD *)a1 + 18) = -1;
  if ( (unsigned __int64)(v13 - (_QWORD)&_io_vtables) > 0x92F )
    IO_vtable_check(a3, a4, a5, a6, a7, a8, a9, a10);
  if ( (*(__int64 (__fastcall **)(unsigned int *, _QWORD, __int64, __int64))(v13 + 72))(a1, 0, 1, 3) == -1
    && *(_DWORD *)(StatusReg + 40) != 29 )
  {
    return 0;
  }
  *(_DWORD *)(StatusReg + 40) = v14;
  return a1;
}
