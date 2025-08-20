__int64 __fastcall sub_450600(__int64 a1, _DWORD *a2)
{
  unsigned __int64 v2; // x2
  __int64 result; // x0

  v2 = *(_QWORD *)(a1 + 832);
  result = *(_QWORD *)(a1 + 792);
  *a2 = v2 >> 63;
  return result;
}
