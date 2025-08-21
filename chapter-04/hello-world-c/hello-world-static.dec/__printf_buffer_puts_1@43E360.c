__int64 __fastcall _printf_buffer_puts_1(__int64 a1, _BYTE *a2)
{
  __int64 result; // x0
  _BYTE *v4; // x21
  unsigned __int64 v5; // x19
  unsigned __int64 v6; // x20
  __int64 v7; // x1

  result = *(unsigned int *)(a1 + 32);
  if ( (_DWORD)result )
  {
    result = (unsigned __int8)*a2;
    v4 = a2;
    if ( *a2 )
    {
      v5 = *(_QWORD *)(a1 + 8);
      do
      {
        v7 = *(_QWORD *)(a1 + 16);
        if ( v7 == v5 )
        {
          result = _printf_buffer_flush(a1);
          if ( (result & 1) == 0 )
            return result;
          v5 = *(_QWORD *)(a1 + 8);
          v7 = *(_QWORD *)(a1 + 16);
          if ( v5 == v7 )
            _libc_assert_fail(
              "buf->write_ptr != buf->write_end",
              (__int64)"Xprintf_buffer_puts_1.c",
              0x20u,
              (__int64)"__printf_buffer_puts_1");
        }
        v6 = strnlen((__int64)v4, v7 - v5);
        j_memcpy(v5);
        v4 += v6;
        v5 = *(_QWORD *)(a1 + 8) + v6;
        *(_QWORD *)(a1 + 8) = v5;
        result = (unsigned __int8)*v4;
      }
      while ( *v4 );
    }
  }
  return result;
}
