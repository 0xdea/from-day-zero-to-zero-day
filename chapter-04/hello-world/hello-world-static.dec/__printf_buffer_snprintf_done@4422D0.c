__int64 __fastcall _printf_buffer_snprintf_done(__int64 a1)
{
  _BYTE *v1; // x1

  v1 = *(_BYTE **)(a1 + 8);
  if ( (unsigned __int64)v1 >= *(_QWORD *)(a1 + 16) )
  {
    if ( (unsigned __int64)v1 > *(_QWORD *)a1 )
      *(v1 - 1) = 0;
  }
  else
  {
    *v1 = 0;
  }
  return _printf_buffer_done(a1);
}
