__int64 __fastcall sub_411614(long double a1)
{
  __int64 result; // x0

  result = sub_4112C4(a1);
  if ( !(_DWORD)result )
  {
    result = sub_411430();
    if ( !(_DWORD)result )
    {
      LODWORD(result) = sub_411544(result);
      if ( (_DWORD)result )
        return (unsigned int)result;
      else
        return 2;
    }
  }
  return result;
}
