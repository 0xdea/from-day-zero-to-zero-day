__int64 __fastcall trecurse_r(__int64 a1, void (__fastcall *a2)(__int64, __int64, __int64), __int64 a3)
{
  unsigned __int64 v6; // x0
  __int64 v7; // x0

  if ( *(_QWORD *)(a1 + 8) > 1u || *(_QWORD *)(a1 + 16) )
  {
    a2(a1, 0, a3);
    v6 = *(_QWORD *)(a1 + 8);
    if ( v6 > 1 )
    {
      trecurse_r(v6 & 0xFFFFFFFFFFFFFFFELL, a2, a3);
      a2(a1, 1, a3);
      v7 = *(_QWORD *)(a1 + 16);
      if ( !v7 )
        return ((__int64 (__fastcall *)(__int64, __int64, __int64))a2)(a1, 2, a3);
    }
    else
    {
      a2(a1, 1, a3);
      v7 = *(_QWORD *)(a1 + 16);
      if ( !v7 )
        return ((__int64 (__fastcall *)(__int64, __int64, __int64))a2)(a1, 2, a3);
    }
    trecurse_r(v7, a2, a3);
    return ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))a2)(a1, 2, a3);
  }
  return ((__int64 (*)(void))a2)();
}
