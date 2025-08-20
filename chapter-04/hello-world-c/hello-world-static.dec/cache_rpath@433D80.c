__int64 __fastcall cache_rpath(__int64 a1, _QWORD *a2, int a3, __int64 a4)
{
  __int64 result; // x0
  __int64 v6; // x0
  __int64 v7; // x6

  if ( *a2 == -1 )
    return 0;
  result = 1;
  if ( *a2 )
    return result;
  v6 = *(_QWORD *)(a1 + 8LL * a3 + 64);
  if ( !v6 )
  {
    *a2 = -1;
    return 0;
  }
  v7 = 0;
  if ( (*(_BYTE *)(a1 + 870) & 0x20) != 0 )
    v7 = *(_QWORD *)a1;
  return decompose_rpath(
           (__int64)a2,
           (_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 104) + 8LL) + *(_QWORD *)(v6 + 8) + v7),
           a1,
           a4);
}
