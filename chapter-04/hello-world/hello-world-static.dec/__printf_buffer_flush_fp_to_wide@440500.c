__int64 __fastcall _printf_buffer_flush_fp_to_wide(__int64 a1)
{
  unsigned __int64 v1; // x4
  unsigned __int8 *v3; // x21
  __int64 v4; // x0
  unsigned __int8 *v5; // x19
  __int64 v6; // x2
  int v7; // w1
  _DWORD *v8; // x2
  __int64 result; // x0

  v1 = *(_QWORD *)(a1 + 8);
  v3 = (unsigned __int8 *)(a1 + 64);
  v4 = *(_QWORD *)(a1 + 48);
  if ( (unsigned __int64)v3 < v1 )
  {
    v5 = v3;
    while ( 1 )
    {
      v7 = *v5;
      if ( v7 != 44 )
        break;
      v7 = *(_DWORD *)(a1 + 40);
      if ( !v7 )
        goto LABEL_9;
      v8 = *(_DWORD **)(v4 + 8);
      if ( v8 == *(_DWORD **)(v4 + 16) )
      {
LABEL_13:
        _wprintf_buffer_putc_1();
        ++v5;
        v1 = *(_QWORD *)(a1 + 8);
        v4 = *(_QWORD *)(a1 + 48);
        if ( v1 <= (unsigned __int64)v5 )
          goto LABEL_14;
      }
      else
      {
LABEL_8:
        *(_QWORD *)(v4 + 8) = v8 + 1;
        *v8 = v7;
LABEL_9:
        if ( v1 <= (unsigned __int64)++v5 )
          goto LABEL_14;
      }
    }
    if ( v7 == 46 )
    {
      v7 = *(_DWORD *)(a1 + 44);
    }
    else
    {
      v6 = *(_QWORD *)(a1 + 56);
      if ( v6 && (unsigned int)(v7 - 48) <= 9 )
        v7 = *(_DWORD *)(v6 + 8LL * (unsigned int)(v7 + 3) + 56);
    }
    v8 = *(_DWORD **)(v4 + 8);
    if ( v8 == *(_DWORD **)(v4 + 16) )
      goto LABEL_13;
    goto LABEL_8;
  }
LABEL_14:
  result = *(unsigned int *)(v4 + 32);
  if ( (_DWORD)result )
    *(_QWORD *)(a1 + 8) = v3;
  else
    *(_DWORD *)(a1 + 32) = 0;
  return result;
}
