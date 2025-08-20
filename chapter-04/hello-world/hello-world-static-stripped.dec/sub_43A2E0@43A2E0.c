__int64 __fastcall sub_43A2E0(_BYTE *a1, unsigned __int8 *a2)
{
  int v2; // w4
  int v3; // w5
  int v4; // w3
  int v5; // w2
  unsigned int v6; // w6
  int v8; // w5
  int v9; // w3
  int v10; // t1
  int v11; // w5
  int v12; // w2
  int v13; // t1

  while ( 1 )
  {
    v2 = (unsigned __int8)*a1;
    if ( !*a1 )
      return (unsigned int)-*a2;
    while ( 1 )
    {
      v3 = *a2;
      v4 = v2 - 48;
      v5 = v3 - 48;
      v6 = (unsigned __int8)(v3 - 48);
      if ( (unsigned __int8)(v2 - 48) <= 9u )
        break;
      if ( v6 <= 9 )
        return 0xFFFFFFFFLL;
      if ( v2 != v3 )
        return (unsigned int)(v2 - v3);
      v2 = (unsigned __int8)*++a1;
      ++a2;
      if ( !v2 )
        return (unsigned int)-*a2;
    }
    if ( v6 > 9 )
      break;
    v8 = (unsigned __int8)*++a1;
    if ( (unsigned __int8)(v8 - 48) <= 9u )
    {
      do
      {
        v9 = v8 + 10 * v4;
        v10 = (unsigned __int8)*++a1;
        v8 = v10;
        v4 = v9 - 48;
      }
      while ( (unsigned __int8)(v10 - 48) <= 9u );
    }
    v11 = *++a2;
    if ( (unsigned __int8)(v11 - 48) <= 9u )
    {
      do
      {
        v12 = v11 + 10 * v5;
        v13 = *++a2;
        v11 = v13;
        v5 = v12 - 48;
      }
      while ( (unsigned __int8)(v13 - 48) <= 9u );
    }
    if ( v4 != v5 )
      return (unsigned int)(v4 - v5);
  }
  return 1;
}
