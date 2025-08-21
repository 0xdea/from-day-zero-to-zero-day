__int64 __fastcall IO_file_seekoff_maybe_mmap(
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
  __int64 v10; // x20
  __int64 result; // x0

  v10 = *(_QWORD *)(a1 + 216);
  if ( (unsigned __int64)(v10 - (_QWORD)&_io_vtables) > 0x92F )
    IO_vtable_check(a2, a3, a4, a5, a6, a7, a8, a9);
  result = (*(__int64 (__fastcall **)(__int64))(v10 + 128))(a1);
  if ( result < 0 )
    return -1;
  *(_QWORD *)(a1 + 144) = result;
  return result;
}
