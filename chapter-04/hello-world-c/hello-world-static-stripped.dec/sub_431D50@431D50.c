__int64 __fastcall sub_431D50(__int64 a1, void (__fastcall *a2)(__int64, __int64, __int64), __int64 a3)
{
  bool v3; // zf

  if ( a1 )
    v3 = a2 == 0;
  else
    v3 = 1;
  if ( !v3 )
    return sub_4311D4(a1, a2, a3);
  return a1;
}
