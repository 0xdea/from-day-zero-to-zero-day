__int64 __fastcall sub_443410(unsigned __int64 a1, unsigned __int8 *a2)
{
  int v3; // w2
  int v4; // t1
  __int64 result; // x0
  unsigned __int8 *v6; // x1
  int v7; // t1
  unsigned __int8 v8; // w7
  int v9; // w4
  __int64 v10; // x7
  unsigned __int64 v11; // x1
  int v12; // t1
  _DWORD *v13; // x2
  _BYTE v14[256]; // [xsp+18h] [xbp-108h] BYREF
  __int64 v15; // [xsp+118h] [xbp-8h]

  v3 = *a2;
  v15 = qword_48DD60;
  if ( !v3 )
    goto LABEL_14;
  if ( !a2[1] )
  {
    if ( *(unsigned __int8 *)a1 == v3 )
    {
      v11 = a1;
      do
        v12 = *(unsigned __int8 *)++v11;
      while ( v12 == v3 );
      result = v11 - a1;
      goto LABEL_15;
    }
LABEL_14:
    result = 0;
    goto LABEL_15;
  }
  memset(v14, 0, sizeof(v14));
  do
  {
    v14[v3] = 1;
    v4 = *++a2;
    v3 = v4;
  }
  while ( v4 );
  if ( !v14[*(unsigned __int8 *)a1] )
    goto LABEL_14;
  result = 1;
  if ( v14[*(unsigned __int8 *)(a1 + 1)] )
  {
    result = 2;
    if ( v14[*(unsigned __int8 *)(a1 + 2)] )
    {
      result = 3;
      if ( v14[*(unsigned __int8 *)(a1 + 3)] )
      {
        v6 = (unsigned __int8 *)(a1 & 0xFFFFFFFFFFFFFFFCLL);
        do
        {
          v7 = v6[4];
          v6 += 4;
          v8 = v14[v7];
          v9 = (unsigned __int8)(v8 & v14[v6[1]]);
        }
        while ( ((unsigned __int8)v9 & (unsigned __int8)(v14[v6[2]] & v14[v6[3]])) != 0 );
        v10 = (__int64)&v6[v8 - a1];
        result = (__int64)&v6[(unsigned __int8)v14[v6[2]] + 2 - a1];
        if ( !v9 )
          result = v10;
      }
    }
  }
LABEL_15:
  if ( v15 != qword_48DD60 )
  {
    v13 = (_DWORD *)sub_412340();
    if ( *v13 )
    {
      result = 0;
      while ( 1 )
      {
        if ( !v13[result + 1] )
          return ++result;
        if ( !v13[result + 2] )
        {
          result += 2;
          return result;
        }
        if ( !v13[result + 3] )
          break;
        result += 4;
        if ( !v13[result] )
          return result;
      }
      result += 3;
    }
    else
    {
      return 0;
    }
  }
  return result;
}
