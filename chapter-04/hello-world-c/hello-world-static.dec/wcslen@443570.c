__int64 __fastcall wcslen(_DWORD *a1)
{
  __int64 result; // x0

  if ( !*a1 )
    return 0;
  result = 0;
  while ( 1 )
  {
    if ( !a1[result + 1] )
      return ++result;
    if ( !a1[result + 2] )
    {
      result += 2;
      return result;
    }
    if ( !a1[result + 3] )
      break;
    result += 4;
    if ( !a1[result] )
      return result;
  }
  result += 3;
  return result;
}
