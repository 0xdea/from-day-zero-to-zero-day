__int64 __fastcall sub_44A380(_QWORD *a1, double a2, __int64 a3, _DWORD *a4, _DWORD *a5)
{
  unsigned __int64 v5; // x4
  __int64 result; // x0
  int v7; // w1

  *a5 = *(_QWORD *)&a2 >> 63;
  *a4 = ((*(_QWORD *)&a2 >> 52) & 0x7FF) - 1023;
  v5 = *(_QWORD *)&a2 & 0xFFFFFFFFFFFFFLL;
  *a1 = *(_QWORD *)&a2 & 0xFFFFFFFFFFFFFLL;
  if ( (*(_QWORD *)&a2 & 0x7FF0000000000000LL) != 0 )
  {
    *a1 = v5 | 0x10000000000000LL;
    return 1;
  }
  else if ( v5 )
  {
    v7 = __clz(v5) - 11;
    *a1 = v5 << v7;
    result = 1;
    *a4 = -1022 - v7;
  }
  else
  {
    result = 1;
    *a4 = 0;
  }
  return result;
}
