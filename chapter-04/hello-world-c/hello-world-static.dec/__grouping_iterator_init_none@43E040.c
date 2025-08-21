__int64 __fastcall _grouping_iterator_init_none(__int64 a1, int a2)
{
  __int64 result; // x0

  result = 0;
  *(_DWORD *)a1 = a2;
  *(_DWORD *)(a1 + 4) = a2;
  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 16) = 0;
  return result;
}
