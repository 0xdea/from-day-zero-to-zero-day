__int64 __fastcall sub_408DD4(unsigned __int64 a1)
{
  unsigned __int64 v1; // x20
  unsigned __int64 v2; // x1
  __int64 v3; // x0
  __int64 v4; // x19
  __int64 result; // x0
  __int64 v6; // x22
  __int64 v7; // x0
  __int64 v8; // x22

  v1 = *(_QWORD *)(qword_4906D0 + 8) & 0xFFFFFFFFFFFFFFF8LL;
  if ( v1 - 33 <= a1 )
    return 0;
  v2 = v1 - 33 - a1;
  v3 = qword_4905F8;
  if ( !qword_4905F8 )
    v3 = qword_490F10;
  v4 = -v3 & v2;
  if ( !v4 || (byte_4966A0 & 1) != 0 )
    return 0;
  v6 = sub_4118E0(0);
  if ( v6 == -1 )
    v6 = 0;
  if ( v6 != qword_4906D0 + v1 )
    return 0;
  if ( (byte_4966A0 & 1) != 0 || (sub_4118E0(-v4), (byte_4966A0 & 1) != 0) || (v7 = sub_4118E0(0), v7 == -1) )
    v7 = 0;
  if ( !v7 )
    return 0;
  v8 = v6 - v7;
  if ( !v8 )
    return 0;
  result = 1;
  qword_490EF8 -= v8;
  *(_QWORD *)(qword_4906D0 + 8) = (v1 - v8) | 1;
  return result;
}
