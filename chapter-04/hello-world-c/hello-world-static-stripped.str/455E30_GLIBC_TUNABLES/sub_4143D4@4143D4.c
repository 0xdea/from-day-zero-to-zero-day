__int64 __fastcall sub_4143D4(unsigned __int8 **a1)
{
  __int64 result; // x0
  unsigned __int8 *v3; // x9
  __int64 v5; // x2
  int v6; // w1
  __int64 v7; // x3
  __int64 v9; // x7
  unsigned __int8 *v10; // x2
  __int64 v11; // x1
  const char *v12; // x5
  int v13; // w4
  int v14; // t1
  int v15; // w3
  _BYTE *v17; // x6
  __int64 i; // x8
  _BYTE *v19; // x5
  int v20; // w2
  unsigned __int8 *v21; // x3
  int v22; // w4
  int v24; // t1
  __int64 v25; // x2

  result = (unsigned int)dword_491570;
  if ( !dword_491570 )
  {
LABEL_2:
    if ( a1 )
    {
LABEL_3:
      while ( 1 )
      {
        v3 = *a1;
        if ( !*a1 )
          break;
        result = *v3;
        ++a1;
        if ( (_DWORD)result == 61 || (_DWORD)result == 0 )
        {
          if ( *v3 )
          {
            v7 = 0;
LABEL_15:
            v9 = v7 + 1;
            v10 = v3;
            v11 = (__int64)&v3[v7 + 1];
            v12 = "GLIBC_TUNABLES";
            v13 = 71;
            while ( 1 )
            {
              v15 = *v10++;
              if ( !v15 || v13 != v15 )
                break;
              v14 = *(unsigned __int8 *)++v12;
              v13 = v14;
              if ( !v14 )
              {
                result = *v10;
                if ( (_DWORD)result == 61 )
                {
                  result = sub_4141A0(v11);
                  goto LABEL_2;
                }
                break;
              }
            }
            v17 = &unk_48E7E9;
            for ( i = 0; i != 4096; i += 128 )
            {
              v19 = v17;
              if ( (*(v17 - 1) & 1) == 0 )
              {
                v20 = (unsigned __int8)*v17;
                v21 = v3;
                if ( *v17 )
                {
                  while ( 1 )
                  {
                    v22 = *v21++;
                    if ( !v22 || v22 != v20 )
                      break;
                    v24 = (unsigned __int8)*++v19;
                    v20 = v24;
                    if ( !v24 )
                    {
                      result = *v21;
                      if ( (_DWORD)result != 61 )
                        break;
                      v25 = 0;
                      if ( v3[v9] )
                      {
                        do
                          ++v25;
                        while ( *(_BYTE *)(v11 + v25) );
                      }
                      result = sub_414104(&aGlibcRtldNns[i], v11, v25);
                      if ( a1 )
                        goto LABEL_3;
                      return result;
                    }
                  }
                }
              }
              v17 += 128;
            }
            goto LABEL_2;
          }
        }
        else
        {
          v5 = 1;
          do
          {
            v6 = v3[v5];
            v7 = v5++;
          }
          while ( v6 != 61 && v6 != 0 );
          if ( v6 )
            goto LABEL_15;
        }
      }
    }
  }
  return result;
}
