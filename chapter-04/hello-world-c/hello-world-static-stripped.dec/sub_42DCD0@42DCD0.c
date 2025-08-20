__int64 __fastcall sub_42DCD0(__int64 a1, _DWORD *a2)
{
  __int64 result; // x0
  int v4; // w3

  if ( !a2 )
    a2 = &unk_45A8D8;
  *(_QWORD *)(a1 + 48) = 0;
  result = 0;
  *(_OWORD *)a1 = 0u;
  *(_OWORD *)(a1 + 16) = 0u;
  *(_OWORD *)(a1 + 32) = 0u;
  v4 = a2[1];
  *(_DWORD *)(a1 + 48) = *a2;
  *(_DWORD *)(a1 + 28) = v4 != 0;
  return result;
}
