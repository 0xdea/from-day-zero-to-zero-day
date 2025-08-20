__int64 __fastcall _printf_buffer_to_file_done(
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
  if ( !*(_DWORD *)(a1 + 32) )
    return 0xFFFFFFFFLL;
  _printf_buffer_flush_to_file(a1, a2, a3, a4, a5, a6, a7, a8, a9);
  return _printf_buffer_done(a1);
}
