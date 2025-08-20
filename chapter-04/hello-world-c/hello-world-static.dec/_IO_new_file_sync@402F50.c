__int64 __fastcall IO_new_file_sync(
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
  unsigned __int64 v9; // x1
  unsigned __int64 v10; // x2
  __int64 v12; // x20
  __int64 result; // x0

  v9 = *(_QWORD *)(a1 + 32);
  v10 = *(_QWORD *)(a1 + 40);
  if ( v10 <= v9 )
    goto LABEL_4;
  if ( *(int *)(a1 + 192) <= 0 )
  {
    if ( !(unsigned int)IO_new_do_write(a1, v9, v10 - v9, a2, a3, a4, a5, a6, a7, a8, a9) )
      goto LABEL_4;
    return 0xFFFFFFFFLL;
  }
  if ( (unsigned int)IO_wdo_write(
                       a1,
                       *(_QWORD *)(*(_QWORD *)(a1 + 160) + 24LL),
                       (__int64)(*(_QWORD *)(*(_QWORD *)(a1 + 160) + 32LL) - *(_QWORD *)(*(_QWORD *)(a1 + 160) + 24LL)) >> 2) )
    return 0xFFFFFFFFLL;
LABEL_4:
  if ( *(_QWORD *)(a1 + 8) == *(_QWORD *)(a1 + 16) )
  {
LABEL_9:
    result = 0;
    *(_QWORD *)(a1 + 144) = -1;
    return result;
  }
  v12 = *(_QWORD *)(a1 + 216);
  if ( (unsigned __int64)(v12 - (_QWORD)&_io_vtables) > 0x92F )
    IO_vtable_check(a2, a3, a4, a5, a6, a7, a8, a9);
  if ( (*(__int64 (__fastcall **)(__int64))(v12 + 128))(a1) != -1 )
  {
    *(_QWORD *)(a1 + 16) = *(_QWORD *)(a1 + 8);
    goto LABEL_9;
  }
  if ( *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40) == 29 )
    goto LABEL_9;
  return 0xFFFFFFFFLL;
}
