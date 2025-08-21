__int64 __fastcall sub_448C20(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // x2
  unsigned __int64 v4; // x4
  unsigned __int64 v5; // x3

  v3 = a3 - 1;
  if ( v3 < 0 )
    return 0;
  while ( 1 )
  {
    v4 = *(_QWORD *)(a1 + 8 * v3);
    v5 = *(_QWORD *)(a2 + 8 * v3--);
    if ( v4 != v5 )
      break;
    if ( v3 == -1 )
      return 0;
  }
  if ( v4 <= v5 )
    return 0xFFFFFFFFLL;
  else
    return 1;
}
