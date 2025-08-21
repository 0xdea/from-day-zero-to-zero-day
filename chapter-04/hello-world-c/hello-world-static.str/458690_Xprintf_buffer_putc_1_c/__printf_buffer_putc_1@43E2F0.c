unsigned __int64 __fastcall _printf_buffer_putc_1(unsigned __int64 result, char a2)
{
  unsigned __int64 v3; // x19

  if ( *(_DWORD *)(result + 32) )
  {
    v3 = result;
    result = _printf_buffer_flush(result);
    if ( (result & 1) != 0 )
    {
      result = *(_QWORD *)(v3 + 8);
      if ( result >= *(_QWORD *)(v3 + 16) )
        _libc_assert_fail(
          "buf->write_ptr < buf->write_end",
          (__int64)"Xprintf_buffer_putc_1.c",
          0x1Bu,
          (__int64)"__printf_buffer_putc_1");
      *(_QWORD *)(v3 + 8) = result + 1;
      *(_BYTE *)result = a2;
    }
  }
  return result;
}
