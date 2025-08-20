__int64 __fastcall twalk_r(__int64 a1, void (__fastcall *a2)(__int64, __int64, __int64), __int64 a3)
{
  bool v3; // zf

  if ( a1 )
    v3 = a2 == 0;
  else
    v3 = 1;
  if ( !v3 )
    return trecurse_r(a1, a2, a3);
  return a1;
}
