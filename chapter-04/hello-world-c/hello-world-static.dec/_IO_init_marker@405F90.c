__int64 __fastcall IO_init_marker(
        __int64 a1,
        __int64 a2,
        double a3,
        double a4,
        double a5,
        double a6,
        double a7,
        double a8,
        double a9,
        double a10)
{
  unsigned int v11; // w1
  __int64 v13; // x0
  __int64 result; // x0

  v11 = *(_DWORD *)a2;
  *(_QWORD *)(a1 + 8) = a2;
  if ( (v11 & 0x800) != 0 )
  {
    IO_switch_to_get_mode((unsigned int *)a2, a3, a4, a5, a6, a7, a8, a9, a10);
    v11 = *(_DWORD *)a2;
  }
  v13 = *(_QWORD *)(a2 + 8);
  if ( (v11 & 0x100) != 0 )
    result = (unsigned int)v13 - (unsigned int)*(_QWORD *)(a2 + 16);
  else
    result = (unsigned int)v13 - (unsigned int)*(_QWORD *)(a2 + 24);
  *(_QWORD *)a1 = *(_QWORD *)(a2 + 96);
  *(_DWORD *)(a1 + 16) = result;
  *(_QWORD *)(a2 + 96) = a1;
  return result;
}
