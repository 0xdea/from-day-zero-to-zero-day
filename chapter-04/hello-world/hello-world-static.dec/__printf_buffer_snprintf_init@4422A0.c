__int64 __fastcall _printf_buffer_snprintf_init(__int64 result, _BYTE *a2, __int64 a3)
{
  *(_QWORD *)result = a2;
  *(_QWORD *)(result + 8) = a2;
  *(_QWORD *)(result + 16) = &a2[a3];
  *(_QWORD *)(result + 24) = 0;
  *(_DWORD *)(result + 32) = 2;
  if ( a3 )
    *a2 = 0;
  return result;
}
