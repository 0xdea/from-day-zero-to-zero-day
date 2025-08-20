__int64 __fastcall sub_406170(__int64 a1)
{
  __int64 result; // x0
  __int64 v3; // x3
  __int64 v4; // x2

  if ( *(_QWORD *)(a1 + 96) )
    *(_QWORD *)(a1 + 96) = 0;
  result = *(_QWORD *)(a1 + 72);
  if ( result )
  {
    if ( (*(_DWORD *)a1 & 0x100) != 0 )
    {
      v3 = *(_QWORD *)(a1 + 24);
      v4 = *(_QWORD *)(a1 + 88);
      *(_DWORD *)a1 &= ~0x100u;
      *(_QWORD *)(a1 + 8) = result;
      *(_QWORD *)(a1 + 16) = v4;
      *(_QWORD *)(a1 + 24) = result;
      result = v3;
    }
    result = sub_40C1A0(result);
    *(_QWORD *)(a1 + 72) = 0;
    *(_QWORD *)(a1 + 80) = 0;
    *(_QWORD *)(a1 + 88) = 0;
  }
  return result;
}
