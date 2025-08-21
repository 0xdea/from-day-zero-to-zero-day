unsigned __int64 __fastcall sub_40D340(__int64 a1)
{
  __int64 v2; // x2
  unsigned __int64 v3; // x1
  unsigned __int64 result; // x0
  unsigned __int64 v5; // x1

  if ( !a1 )
    return 0;
  _X0 = a1 - 16;
  if ( (byte_4966A1 & 1) != 0 )
    __asm { LDG             X0, [X0] }
  v2 = *(_QWORD *)(_X0 + 8);
  v3 = v2 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (v2 & 2) != 0 )
    return v3 - 16;
  if ( (*(_QWORD *)(_X0 + v3 + 8) & 1) == 0 )
    return 0;
  result = v3 - 16;
  v5 = v3 - 8;
  if ( (byte_4966A1 & 1) == 0 )
    return v5;
  return result;
}
