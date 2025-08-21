unsigned __int64 __fastcall _printf_buffer_write(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 result; // x0
  unsigned __int64 v5; // x20
  unsigned __int64 v7; // x19
  __int64 v8; // x19

  result = *(unsigned int *)(a1 + 32);
  if ( (_DWORD)result )
  {
    v5 = a3;
    if ( a3 )
    {
      result = *(_QWORD *)(a1 + 8);
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
              (__int64)"Xprintf_buffer_write.c",
              0x23u,
              (__int64)"__printf_buffer_write");
        }
        v7 = v8 - result;
        if ( v7 > v5 )
          v7 = v5;
        a2 += v7;
        j_memcpy(result);
        v5 -= v7;
        result = *(_QWORD *)(a1 + 8) + v7;
        *(_QWORD *)(a1 + 8) = result;
      }
      while ( v5 );
    }
  }
  return result;
}
