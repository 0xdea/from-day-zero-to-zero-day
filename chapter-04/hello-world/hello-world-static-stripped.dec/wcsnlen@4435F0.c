__int64 __fastcall wcsnlen(__int64 a1, __int64 a2)
{
  __int64 v4; // x0
  bool v5; // zf
  __int64 result; // x0

  v4 = sub_443630(a1, 0, a2);
  v5 = v4 == 0;
  result = (v4 - a1) >> 2;
  if ( v5 )
    return a2;
  return result;
}
