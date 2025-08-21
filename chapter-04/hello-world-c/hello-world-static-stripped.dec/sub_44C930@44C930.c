unsigned int *__fastcall sub_44C930(__int64 a1, unsigned __int64 a2, unsigned int a3, unsigned __int64 a4, int a5)
{
  unsigned int v6; // w2
  unsigned int *result; // x0
  unsigned __int8 *v10; // x21
  unsigned int v12; // w19
  __int64 v13; // x25
  int *i; // x19
  int v15; // w20
  __int64 v16; // x4
  unsigned int v17; // w3
  unsigned __int8 *v18; // x4
  __int64 v19; // x5
  unsigned int v20; // t1
  unsigned int j; // w19

  v6 = *(_DWORD *)(a1 + 828);
  result = *(unsigned int **)(a1 + 840);
  v10 = (unsigned __int8 *)a2;
  if ( result )
  {
    result = 0;
    v12 = *(_DWORD *)(*(_QWORD *)(a1 + 848) + 4LL * (a3 % v6));
    if ( v12 )
    {
      v13 = *(_QWORD *)(a1 + 856);
      for ( i = (int *)(v13 + 4LL * v12); ; ++i )
      {
        v15 = *i;
        if ( !((*i ^ a3) >> 1) )
        {
          result = sub_44C820((__int64 *)a1, (unsigned __int64)v10, a4, a5, ((unsigned __int64)i - v13) >> 2);
          if ( result )
            break;
        }
        if ( (v15 & 1) != 0 )
          return 0;
      }
    }
  }
  else
  {
    v16 = *(unsigned __int8 *)a2;
    LODWORD(a2) = 0;
    if ( (_DWORD)v16 )
    {
      if ( v10[1] )
      {
        a2 = v10[1] + 16 * v16;
        if ( v10[2] )
        {
          a2 = v10[2] + 16 * a2;
          if ( v10[3] )
          {
            a2 = v10[3] + 16 * a2;
            if ( v10[4] )
            {
              v17 = v10[5];
              a2 = v10[4] + 16 * a2;
              v18 = v10 + 5;
              if ( v10[5] )
              {
                do
                {
                  v19 = v17;
                  v20 = *++v18;
                  v17 = v20;
                  a2 = (v19 + 16 * a2) ^ (((v19 + 16 * a2) & 0xF0000000) >> 24);
                }
                while ( v20 );
              }
              LODWORD(a2) = a2 & 0xFFFFFFF;
            }
          }
        }
      }
      else
      {
        LODWORD(a2) = v16;
      }
    }
    for ( j = *(_DWORD *)(*(_QWORD *)(a1 + 856) + 4LL * ((unsigned int)a2 % v6));
          j;
          j = *(_DWORD *)(*(_QWORD *)(a1 + 848) + 4LL * j) )
    {
      result = sub_44C820((__int64 *)a1, (unsigned __int64)v10, a4, a5, j);
      if ( result )
        break;
    }
  }
  return result;
}
