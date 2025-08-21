__int64 __fastcall sub_44A400(unsigned __int64 *a1, long double a2, __int64 a3, _DWORD *a4, _DWORD *a5)
{
  unsigned __int64 v5; // x1
  int v6; // w3
  unsigned __int64 v7; // x4
  __int64 result; // x0
  int v9; // w3

  *a5 = *((_QWORD *)&a2 + 1) >> 63;
  *a4 = (HIWORD(a2) & 0x7FFF) - 0x3FFF;
  v5 = *((_QWORD *)&a2 + 1) & 0xFFFFFFFFFFFFLL;
  *a1 = *(_QWORD *)&a2;
  a1[1] = *((_QWORD *)&a2 + 1) & 0xFFFFFFFFFFFFLL;
  if ( (*((_QWORD *)&a2 + 1) & 0x7FFF000000000000LL) != 0 )
  {
    a1[1] = v5 | 0x1000000000000LL;
    return 2;
  }
  if ( !*(_QWORD *)&a2 )
  {
    if ( !v5 )
    {
      result = 2;
      *a4 = 0;
      return result;
    }
    goto LABEL_10;
  }
  if ( v5 )
  {
LABEL_10:
    v9 = __clz(v5) - 15;
    *a1 = *(_QWORD *)&a2 << v9;
    a1[1] = (*(_QWORD *)&a2 >> -(char)v9) | (v5 << v9);
    result = 2;
    *a4 = -16382 - v9;
    return result;
  }
  v6 = __clz(*(unsigned __int64 *)&a2);
  if ( v6 > 14 )
  {
    v7 = *(_QWORD *)&a2 << ((unsigned __int8)v6 - 15);
  }
  else
  {
    v5 = *(_QWORD *)&a2 << ((unsigned __int8)v6 + 49);
    v7 = *(_QWORD *)&a2 >> (15 - (unsigned __int8)v6);
  }
  *a1 = v5;
  a1[1] = v7;
  *a4 = -16431 - v6;
  return 2;
}
