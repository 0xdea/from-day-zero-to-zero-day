__int64 __fastcall IO_new_file_finish(
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
  double v10; // d0
  double v11; // d1
  double v12; // d2
  double v13; // d3
  double v14; // d4
  double v15; // d5
  double v16; // d6
  double v17; // d7
  __int64 v18; // x20

  if ( *(_DWORD *)(a1 + 112) != -1 )
  {
    if ( *(int *)(a1 + 192) <= 0 )
      IO_new_do_write(
        a1,
        *(_QWORD *)(a1 + 32),
        *(_QWORD *)(a1 + 40) - *(_QWORD *)(a1 + 32),
        a2,
        a3,
        a4,
        a5,
        a6,
        a7,
        a8,
        a9);
    else
      IO_wdo_write(
        a1,
        *(_QWORD *)(*(_QWORD *)(a1 + 160) + 24LL),
        (__int64)(*(_QWORD *)(*(_QWORD *)(a1 + 160) + 32LL) - *(_QWORD *)(*(_QWORD *)(a1 + 160) + 24LL)) >> 2);
    if ( (*(_DWORD *)a1 & 0x40) == 0 )
    {
      v18 = *(_QWORD *)(a1 + 216);
      if ( (unsigned __int64)(v18 - (_QWORD)&_io_vtables) > 0x92F )
        IO_vtable_check(v10, v11, v12, v13, v14, v15, v16, v17);
      (*(void (__fastcall **)(__int64))(v18 + 136))(a1);
    }
  }
  return IO_default_finish(a1, 0);
}
