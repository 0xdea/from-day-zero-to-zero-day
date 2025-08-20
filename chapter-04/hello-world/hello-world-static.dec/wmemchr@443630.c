_DWORD *__fastcall wmemchr(_DWORD *a1, int a2, unsigned __int64 a3)
{
  _DWORD *result; // x0

  if ( a3 > 3 )
  {
    while ( 1 )
    {
      a3 -= 4LL;
      if ( *a1 == a2 )
        return a1;
      if ( a1[1] == a2 )
        return a1 + 1;
      if ( a1[2] == a2 )
        return a1 + 2;
      if ( a1[3] == a2 )
        return a1 + 3;
      a1 += 4;
      if ( a3 <= 3 )
        goto LABEL_10;
    }
  }
  else
  {
LABEL_10:
    result = 0;
    if ( a3 )
    {
      result = a1;
      if ( *a1 != a2 )
      {
        result = 0;
        if ( a3 != 1 )
        {
          if ( a1[1] == a2 )
          {
            return a1 + 1;
          }
          else
          {
            result = a1 + 2;
            if ( a3 == 2 )
            {
              return 0;
            }
            else if ( a1[2] != a2 )
            {
              return 0;
            }
          }
        }
      }
    }
  }
  return result;
}
