__int64 __fastcall plural_eval(int *a1, unsigned __int64 a2)
{
  int *v2; // x19
  int v4; // w0
  bool v5; // cc
  unsigned __int64 v6; // x21
  int v8; // w0
  __int64 v9; // x0
  int v10; // w1
  unsigned __int64 v11; // x0
  int v12; // w1
  unsigned __int64 v13; // x19

  v2 = a1;
  v4 = *a1;
  v5 = v4 <= 2;
  if ( v4 == 2 )
  {
LABEL_13:
    v9 = plural_eval(*((_QWORD *)v2 + 1), a2);
    v6 = v9;
    v10 = v2[1];
    if ( v10 == 15 )
    {
      if ( v9 )
        return 1;
    }
    else
    {
      if ( v10 != 14 )
      {
        v11 = plural_eval(*((_QWORD *)v2 + 2), a2);
        v12 = v2[1];
        v13 = v11;
        switch ( v12 )
        {
          case 3:
            v6 *= v11;
            return v6;
          case 4:
            if ( v11 )
            {
              v6 /= v11;
            }
            else
            {
              raise(8u);
              v6 /= 0u;
            }
            return v6;
          case 5:
            if ( !v11 )
              raise(8u);
            v6 %= v13;
            return v6;
          case 6:
            v6 += v11;
            return v6;
          case 7:
            v6 -= v11;
            return v6;
          case 8:
            return v6 < v11;
          case 9:
            return v6 > v11;
          case 10:
            return v6 <= v11;
          case 11:
            return v6 >= v11;
          case 12:
            return v6 == v11;
          case 13:
            return v6 != v11;
          default:
            return 0;
        }
      }
      if ( !v9 )
        return v6;
    }
    return plural_eval(*((_QWORD *)v2 + 2), a2) != 0;
  }
  while ( !v5 )
  {
    if ( v4 != 3 )
      return 0;
    v2 = *(int **)&v2[2 * (plural_eval(*((_QWORD *)v2 + 1), a2) == 0) + 4];
    v4 = *v2;
    v5 = *v2 <= 2;
    if ( *v2 == 2 )
      goto LABEL_13;
  }
  if ( v4 )
  {
    if ( v4 == 1 )
      return plural_eval(*((_QWORD *)v2 + 1), a2) == 0;
  }
  else
  {
    v8 = v2[1];
    v6 = a2;
    if ( !v8 )
      return v6;
    if ( v8 == 1 )
      return *((_QWORD *)v2 + 1);
  }
  return 0;
}
