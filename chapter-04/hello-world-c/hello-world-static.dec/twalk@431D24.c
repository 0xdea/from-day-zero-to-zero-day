__int64 __fastcall twalk(__int64 result, void (__fastcall *a2)(__int64, __int64, _QWORD))
{
  bool v2; // zf

  if ( result )
    v2 = a2 == 0;
  else
    v2 = 1;
  if ( !v2 )
    return trecurse(result, a2, 0);
  return result;
}
