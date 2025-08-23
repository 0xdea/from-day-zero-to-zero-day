int __fastcall sub_14FA4(_BYTE *a1, unsigned int a2, _DWORD *a3)
{
  int v4; // r6
  _BYTE *v7; // r8
  int result; // r0
  bool v9; // zf
  int v10; // r8
  int v11; // r7
  unsigned __int8 *v12; // r4
  int v13; // r8
  int v14; // r6
  unsigned __int8 *v15; // r4
  int i; // r7
  int v17; // r6
  unsigned __int8 *v18; // r3
  int v19; // r6
  int v20; // r2

  *a3 = 2;
  v4 = 0;
  a3[1] = 16;
  a3[2] = 16;
  a3[3] = 64;
  a3[4] = 0;
  a3[6] = 0;
  a3[5] = 0;
  if ( a2 < 4
    || *a1 != 48
    || (unsigned __int8)a1[1] != a2 - 2
    || ((unsigned __int8)a1[2] | ((unsigned __int8)a1[3] << 8)) != 1 )
  {
    return -1;
  }
  if ( (int)(a2 - 4) > 3 )
  {
    v7 = a1 + 4;
    result = sub_14C6C(a1 + 4);
    v9 = a2 == 9;
    a3[2] = result;
    if ( (int)(a2 - 8) <= 1 )
      goto LABEL_24;
    a3[1] = 0;
    v10 = (unsigned __int8)v7[4] | ((unsigned __int8)v7[5] << 8);
    if ( !v10 )
      return -1;
    v11 = a2 - 10;
    if ( v11 < 4 * v10 )
      return -1;
    v12 = a1 + 10;
    while ( v4 < v10 )
    {
      v11 -= 4;
      result = sub_14C6C(v12);
      v12 += 4;
      ++v4;
      a3[1] |= result;
    }
    v9 = v11 == 1;
    if ( v11 <= 1 )
    {
LABEL_24:
      if ( !v9 )
        return 0;
    }
    else
    {
      a3[3] = 0;
      v13 = *v12 | (v12[1] << 8);
      if ( v13 )
      {
        v14 = v11 - 2;
        if ( v11 - 2 >= 4 * v13 )
        {
          v15 = v12 + 2;
          for ( i = 0; i < v13; ++i )
          {
            v14 -= 4;
            result = sub_14D84(v15);
            v15 += 4;
            a3[3] |= result;
          }
          if ( v14 > 1 )
          {
            v17 = v14 - 2;
            a3[4] = *v15 | (v15[1] << 8);
            if ( v17 > 1 )
            {
              v18 = v15 + 2;
              v19 = v17 - 2;
              v20 = v15[2] | (v15[3] << 8);
              a3[5] = v20;
              if ( v19 >= 16 * v20 )
                v18 = v15 + 4;
              else
                result = 0;
              if ( v19 < 16 * v20 )
              {
                a3[5] = result;
                return result;
              }
              a3[6] = v18;
            }
          }
          return 0;
        }
      }
    }
    return -1;
  }
  if ( (int)(a2 - 4) > 0 )
    return -1;
  return 0;
}
