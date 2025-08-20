unsigned __int64 __fastcall dl_strtoul(unsigned __int8 *a1, unsigned __int8 **a2)
{
  unsigned __int8 *v2; // x3
  int v3; // w0
  int v5; // t1
  int v7; // w10
  unsigned __int8 *v8; // x3
  int v9; // w2
  int v10; // w9
  unsigned __int64 v11; // x8
  unsigned __int64 v12; // x4
  int v13; // w7
  unsigned int v14; // w2
  unsigned int v15; // w7
  unsigned __int64 result; // x0
  signed int v17; // w2

  v2 = a1;
  v3 = *a1;
  if ( v3 == 32 || v3 == 9 )
  {
    do
    {
      v5 = *++v2;
      v3 = v5;
    }
    while ( v5 == 32 || v3 == 9 );
  }
  if ( v3 == 45 )
  {
    v8 = v2 + 1;
    v7 = 0;
  }
  else
  {
    v7 = 1;
    v8 = &v2[v3 == 43];
  }
  v9 = *v8;
  if ( (unsigned __int8)(v9 - 48) > 9u )
  {
    if ( a2 )
      *a2 = v8;
    return 0;
  }
  else
  {
    if ( v9 == 48 )
    {
      if ( (v8[1] & 0xDF) == 0x58 )
      {
        v8 += 2;
        v10 = 16;
        v11 = 15;
        v12 = 0xFFFFFFFFFFFFFFFLL;
        v13 = 9;
      }
      else
      {
        v11 = 7;
        v10 = 8;
        v13 = 7;
        v12 = 0x1FFFFFFFFFFFFFFFLL;
      }
    }
    else
    {
      v10 = 10;
      v11 = 5;
      v12 = 0x1999999999999999LL;
      v13 = 9;
    }
    v14 = *v8;
    v15 = v13 + 48;
    result = 0;
    if ( v14 <= 0x2F )
    {
LABEL_21:
      if ( a2 )
        *a2 = v8;
      if ( !v7 )
        return -(__int64)result;
    }
    else
    {
      while ( 1 )
      {
        if ( v14 > v15 )
        {
          if ( v10 != 16 )
            goto LABEL_21;
          if ( (unsigned __int8)(v14 - 97) > 5u )
          {
            if ( (unsigned __int8)(v14 - 65) > 5u )
              goto LABEL_21;
            v17 = v14 - 55;
          }
          else
          {
            v17 = v14 - 87;
          }
        }
        else
        {
          v17 = v14 - 48;
        }
        if ( result > v12 || result == v12 && v11 < v17 )
          break;
        ++v8;
        result = v17 + v10 * result;
        v14 = *v8;
        if ( v14 <= 0x2F )
          goto LABEL_21;
      }
      if ( a2 )
        *a2 = v8;
      return -1;
    }
  }
  return result;
}
