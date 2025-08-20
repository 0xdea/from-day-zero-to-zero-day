__int64 __fastcall strsep(__int64 *a1, unsigned __int8 *a2)
{
  __int64 v2; // x19
  __int64 v4; // x0

  v2 = *a1;
  if ( !*a1 )
    return v2;
  v4 = sub_4431F0(*a1, a2);
  if ( *(_BYTE *)(v2 + v4) )
  {
    *(_BYTE *)(v2 + v4) = 0;
    *a1 = v2 + v4 + 1;
    return v2;
  }
  *a1 = 0;
  return v2;
}
