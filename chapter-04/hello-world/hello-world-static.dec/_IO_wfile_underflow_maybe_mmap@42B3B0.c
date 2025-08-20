__int64 __fastcall IO_wfile_underflow_maybe_mmap(
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
  __int64 result; // x0

  result = IO_file_underflow_maybe_mmap(a1, a2, a3, a4, a5, a6, a7, a8, a9);
  if ( (_DWORD)result != -1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(a1 + 160) + 224LL) + 32LL))(a1);
  return result;
}
