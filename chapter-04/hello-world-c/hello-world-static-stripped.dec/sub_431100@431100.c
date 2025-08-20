__int64 __fastcall sub_431100(__int64 a1, void (__fastcall *a2)(__int64, __int64, _QWORD), unsigned int a3)
{
  unsigned __int64 v6; // x0
  __int64 v7; // x0

  if ( *(_QWORD *)(a1 + 8) > 1u || *(_QWORD *)(a1 + 16) )
  {
    a2(a1, 0, a3);
    v6 = *(_QWORD *)(a1 + 8);
    if ( v6 > 1 )
    {
      sub_431100(v6 & 0xFFFFFFFFFFFFFFFELL, a2, a3 + 1);
      a2(a1, 1, a3);
      v7 = *(_QWORD *)(a1 + 16);
      if ( !v7 )
        return ((__int64 (__fastcall *)(__int64, __int64, _QWORD))a2)(a1, 2, a3);
    }
    else
    {
      a2(a1, 1, a3);
      v7 = *(_QWORD *)(a1 + 16);
      if ( !v7 )
        return ((__int64 (__fastcall *)(__int64, __int64, _QWORD))a2)(a1, 2, a3);
    }
    sub_431100(v7, a2, a3 + 1);
    return ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))a2)(a1, 2, a3);
  }
  return ((__int64 (*)(void))a2)();
}
