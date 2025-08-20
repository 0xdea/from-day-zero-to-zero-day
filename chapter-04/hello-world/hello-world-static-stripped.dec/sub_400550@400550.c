unsigned __int64 __fastcall sub_400550(__int64 a1)
{
  unsigned __int64 result; // x0
  __int64 i; // x19
  __int64 v4; // x0

  result = _dl___aarch64_swp8_acq_rel(0, a1);
  if ( result )
    result = sub_4004B0(a1, result);
  for ( i = *(_QWORD *)(a1 + 8); i; *(_QWORD *)(a1 + 8) = i )
  {
    v4 = i;
    i = *(_QWORD *)(i + 24);
    result = sub_40C1A0(v4);
  }
  return result;
}
