__int64 __fastcall sub_43E1D0(__int64 a1)
{
  int v1; // w2
  unsigned __int64 v2; // x1
  __int64 result; // x0

  if ( !*(_DWORD *)(a1 + 32) )
    return 0xFFFFFFFFLL;
  v1 = 0;
  v2 = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1;
  result = v2 + *(_QWORD *)(a1 + 24);
  if ( result < 0 || result < v2 )
    v1 = 1;
  if ( result != (int)result )
    v1 = 1;
  if ( v1 )
  {
    *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40) = 75;
    return 0xFFFFFFFFLL;
  }
  return result;
}
