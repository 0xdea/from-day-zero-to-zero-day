__int64 __fastcall _printf_buffer_flush_fphex_to_wide(__int64 a1)
{
  unsigned __int64 v1; // x5
  unsigned __int8 *v3; // x21
  __int64 v4; // x0
  unsigned __int8 *v5; // x19
  int v6; // w1
  _DWORD *v7; // x2
  __int64 result; // x0

  v1 = *(_QWORD *)(a1 + 8);
  v3 = (unsigned __int8 *)(a1 + 56);
  v4 = *(_QWORD *)(a1 + 48);
  if ( (unsigned __int64)v3 < v1 )
  {
    v5 = v3;
    do
    {
      while ( 1 )
      {
        v6 = *v5;
        if ( v6 == 46 )
          v6 = *(_DWORD *)(a1 + 40);
        v7 = *(_DWORD **)(v4 + 8);
        if ( v7 == *(_DWORD **)(v4 + 16) )
          break;
        *(_QWORD *)(v4 + 8) = v7 + 1;
        ++v5;
        *v7 = v6;
        if ( v1 <= (unsigned __int64)v5 )
          goto LABEL_8;
      }
      _wprintf_buffer_putc_1();
      ++v5;
      v1 = *(_QWORD *)(a1 + 8);
      v4 = *(_QWORD *)(a1 + 48);
    }
    while ( v1 > (unsigned __int64)v5 );
  }
LABEL_8:
  result = *(unsigned int *)(v4 + 32);
  if ( (_DWORD)result )
    *(_QWORD *)(a1 + 8) = v3;
  else
    *(_DWORD *)(a1 + 32) = 0;
  return result;
}
