__int64 __fastcall IO_file_underflow_maybe_mmap(
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

  decide_maybe_mmap(a1, a2, a3, a4, a5, a6, a7, a8, a9);
  v18 = *(_QWORD *)(a1 + 216);
  if ( (unsigned __int64)(v18 - (_QWORD)&_io_vtables) > 0x92F )
    IO_vtable_check(v10, v11, v12, v13, v14, v15, v16, v17);
  return (*(__int64 (__fastcall **)(__int64))(v18 + 32))(a1);
}
