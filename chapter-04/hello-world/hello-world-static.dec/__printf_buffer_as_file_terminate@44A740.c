__int64 __fastcall _printf_buffer_as_file_terminate(_QWORD *a1)
{
  if ( (*(_DWORD *)a1 & 0x20) != 0 )
    return 0;
  _printf_buffer_as_file_commit(a1);
  return 1;
}
