__int64 __fastcall IO_file_xsgetn_maybe_mmap(
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
  double v14; // d0
  double v15; // d1
  double v16; // d2
  double v17; // d3
  double v18; // d4
  double v19; // d5
  double v20; // d6
  double v21; // d7
  __int64 v22; // x22

  decide_maybe_mmap(a1, a4, a5, a6, a7, a8, a9, a10, a11);
  v22 = *(_QWORD *)(a1 + 216);
  if ( (unsigned __int64)(v22 - (_QWORD)&_io_vtables) > 0x92F )
    IO_vtable_check(v14, v15, v16, v17, v18, v19, v20, v21);
  return (*(__int64 (__fastcall **)(__int64, __int64, __int64))(v22 + 64))(a1, a2, a3);
}
