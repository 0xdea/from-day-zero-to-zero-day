__int64 __fastcall _printf_buffer_as_file_overflow(_QWORD *a1, int a2)
{
  __int64 v4; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 result; // x0
  unsigned __int64 v8; // x0
  _BYTE *v9; // x2
  __int64 *v10; // x0
  int v11; // w1
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x0

  _printf_buffer_as_file_commit(a1);
  if ( a2 != -1 )
  {
    v8 = a1[28];
    v9 = *(_BYTE **)(v8 + 8);
    if ( v9 == *(_BYTE **)(v8 + 16) )
    {
      _printf_buffer_putc_1(v8, a2);
    }
    else
    {
      *(_QWORD *)(v8 + 8) = v9 + 1;
      *v9 = a2;
    }
  }
  v4 = a1[28];
  v6 = *(_QWORD *)(v4 + 8);
  v5 = *(_QWORD *)(v4 + 16);
  if ( !*(_DWORD *)(v4 + 32) )
  {
    a1[4] = *(_QWORD *)v4;
    a1[5] = v6;
    result = 0xFFFFFFFFLL;
    a1[6] = v5;
    return result;
  }
  if ( v6 != v5 )
  {
    a1[4] = *(_QWORD *)v4;
    a1[5] = v6;
    a1[6] = v5;
    return (unsigned __int8)a2;
  }
  _printf_buffer_flush(v4);
  v10 = (__int64 *)a1[28];
  v11 = *((_DWORD *)v10 + 8);
  v13 = *v10;
  v12 = v10[1];
  v14 = v10[2];
  a1[4] = v13;
  a1[5] = v12;
  a1[6] = v14;
  if ( v11 )
    return (unsigned __int8)a2;
  return 0xFFFFFFFFLL;
}
