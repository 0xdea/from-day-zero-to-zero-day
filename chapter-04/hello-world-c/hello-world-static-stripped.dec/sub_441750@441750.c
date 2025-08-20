__int64 __fastcall sub_441750(unsigned __int8 **a1, __int64 a2)
{
  __int64 v3; // x11
  __int64 *v4; // x7
  unsigned __int8 *v5; // x14
  int v6; // w10
  int v7; // w12
  int v8; // w3
  _DWORD *v9; // x2
  unsigned __int8 *v10; // x5
  int v11; // w4
  int v12; // t1
  __int64 result; // x0

  v3 = (__int64)*a1;
  v4 = *(__int64 **)(qword_496BE8 + 8LL * **a1);
  if ( !v4 )
    return 1;
  v5 = 0;
  v6 = 0;
  v7 = 0;
  do
  {
    v8 = *((_DWORD *)v4 + 3);
    v9 = (_DWORD *)v4 + 3;
    v10 = (unsigned __int8 *)(v3 + 1);
    v11 = *(unsigned __int8 *)(v3 + 1);
    if ( *(_BYTE *)(v3 + 1) )
    {
      while ( *v9 )
      {
        if ( v11 != *v9 )
          goto LABEL_11;
        v12 = *++v10;
        v11 = v12;
        if ( !v12 )
        {
          v8 = v9[1];
          goto LABEL_16;
        }
        ++v9;
      }
    }
    else
    {
LABEL_16:
      if ( v8 )
        goto LABEL_11;
    }
    if ( (__int64)&v10[-v3] > v6 )
    {
      v7 = *((_DWORD *)v4 + 2);
      v6 = (_DWORD)v10 - v3;
      v5 = v10;
    }
LABEL_11:
    v4 = (__int64 *)*v4;
  }
  while ( v4 );
  result = 1;
  if ( v7 )
  {
    result = 0;
    *(_WORD *)(a2 + 14) |= v7;
    *a1 = v5;
  }
  return result;
}
