unsigned __int64 __fastcall _printf_buffer_as_file_xsputn(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v6; // x1
  int v7; // w0
  unsigned __int64 result; // x0

  _printf_buffer_as_file_commit((_QWORD *)a1);
  _printf_buffer_write(*(_QWORD *)(a1 + 224), a2, a3);
  v6 = *(_QWORD *)(a1 + 224);
  v7 = *(_DWORD *)(v6 + 32);
  *(_OWORD *)(a1 + 32) = *(_OWORD *)v6;
  if ( v7 )
    result = a3;
  else
    result = 0;
  *(_QWORD *)(a1 + 48) = *(_QWORD *)(v6 + 16);
  return result;
}
