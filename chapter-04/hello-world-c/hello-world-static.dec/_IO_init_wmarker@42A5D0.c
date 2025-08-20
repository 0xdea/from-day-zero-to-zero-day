__int64 __fastcall IO_init_wmarker(__int64 a1, __int64 a2)
{
  unsigned int v3; // w1
  __int64 *v5; // x2
  __int64 v6; // x0
  __int64 v7; // x1
  __int64 result; // x0

  v3 = *(_DWORD *)a2;
  *(_QWORD *)(a1 + 8) = a2;
  if ( (v3 & 0x800) != 0 )
  {
    IO_switch_to_wget_mode((unsigned int *)a2);
    v3 = *(_DWORD *)a2;
  }
  v5 = *(__int64 **)(a2 + 160);
  v6 = *v5;
  if ( (v3 & 0x100) != 0 )
  {
    v7 = *(_QWORD *)(a2 + 96);
    result = (unsigned int)((unsigned __int64)(v6 - v5[1]) >> 2);
  }
  else
  {
    v7 = *(_QWORD *)(a2 + 96);
    result = (unsigned int)((unsigned __int64)(v6 - v5[2]) >> 2);
  }
  *(_QWORD *)a1 = v7;
  *(_DWORD *)(a1 + 16) = result;
  *(_QWORD *)(a2 + 96) = a1;
  return result;
}
