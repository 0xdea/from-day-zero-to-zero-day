__int64 __fastcall sub_406080(__int64 a1)
{
  __int64 v1; // x1
  __int64 v2; // x2
  int v3; // w1

  v1 = *(_QWORD *)(a1 + 8);
  if ( !v1 )
    return 0xFFFFFFFFLL;
  v2 = *(_QWORD *)(v1 + 8);
  if ( (*(_DWORD *)v1 & 0x100) != 0 )
    v3 = v2 - *(_QWORD *)(v1 + 16);
  else
    v3 = v2 - *(_QWORD *)(v1 + 24);
  return (unsigned int)(*(_DWORD *)(a1 + 16) - v3);
}
