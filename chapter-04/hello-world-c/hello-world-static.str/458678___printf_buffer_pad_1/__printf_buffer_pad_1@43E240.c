unsigned __int64 __fastcall _printf_buffer_pad_1(__int64 a1, unsigned __int8 a2, unsigned __int64 a3)
{
  unsigned __int64 result; // x0
  unsigned int v5; // w22
  unsigned __int64 v7; // x19
  __int64 v8; // x19

  result = *(unsigned int *)(a1 + 32);
  if ( (_DWORD)result )
  {
    result = *(_QWORD *)(a1 + 8);
    v5 = a2;
    do
    {
      v8 = *(_QWORD *)(a1 + 16);
      if ( v8 == result )
      {
        result = _printf_buffer_flush(a1);
        if ( (result & 1) == 0 )
          return result;
        result = *(_QWORD *)(a1 + 8);
        v8 = *(_QWORD *)(a1 + 16);
        if ( result == v8 )
          _libc_assert_fail(
            "buf->write_ptr != buf->write_end",
            (__int64)"Xprintf_buffer_pad_1.c",
            0x23u,
            (__int64)"__printf_buffer_pad_1");
      }
      v7 = v8 - result;
      if ( v7 > a3 )
        v7 = a3;
      memset(result, v5, v7);
      a3 -= v7;
      result = *(_QWORD *)(a1 + 8) + v7;
      *(_QWORD *)(a1 + 8) = result;
    }
    while ( a3 );
  }
  return result;
}
