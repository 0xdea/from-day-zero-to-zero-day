__int64 __fastcall _wprintf_buffer_to_file_init(__int64 result, __int64 a2)
{
  *(_QWORD *)result = result + 48;
  *(_QWORD *)(result + 8) = result + 48;
  *(_QWORD *)(result + 16) = result + 560;
  *(_QWORD *)(result + 24) = 0;
  *(_DWORD *)(result + 32) = 2;
  *(_QWORD *)(result + 40) = a2;
  return result;
}
