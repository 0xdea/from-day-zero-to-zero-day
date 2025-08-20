__int64 __fastcall IO_new_file_init(__int64 a1)
{
  __int64 result; // x0

  *(_DWORD *)a1 |= 0x240Cu;
  *(_QWORD *)(a1 + 144) = -1;
  result = IO_link_in();
  *(_DWORD *)(a1 + 112) = -1;
  return result;
}
