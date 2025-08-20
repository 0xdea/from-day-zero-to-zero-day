__int64 __fastcall Unwind_FindEnclosingFunction(__int64 a1)
{
  __int64 result; // x0
  _BYTE v2[16]; // [xsp+18h] [xbp+18h] BYREF
  __int64 v3; // [xsp+28h] [xbp+28h]

  result = Unwind_Find_FDE(a1 - 1, v2);
  if ( result )
    return v3;
  return result;
}
