__int64 __fastcall sub_4431F0(__int64 a1, unsigned __int8 *a2)
{
  unsigned int v3; // w2
  int v4; // t1
  __int64 result; // x0
  unsigned __int8 *v6; // x1
  int v7; // t1
  __int64 v8; // x0
  int v9; // w6
  unsigned __int8 v10; // w5
  int v11; // w4
  unsigned __int8 *v12; // x1
  unsigned __int8 *v13; // x0
  __int64 v14; // x1
  __int64 v15; // x20
  unsigned __int64 v16; // x1
  unsigned __int64 v17; // x0
  unsigned __int64 v18; // x21
  unsigned __int64 v19; // x19
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  void *v23; // x4
  void *v24; // x5
  void *v25; // x6
  double v26; // d0
  double v27; // d1
  double v28; // d2
  double v29; // d3
  double v30; // d4
  double v31; // d5
  double v32; // d6
  double v33; // d7
  _BYTE v34[256]; // [xsp+38h] [xbp-108h] BYREF
  __int64 v35; // [xsp+138h] [xbp-8h]

  v3 = *a2;
  v35 = qword_48DD60;
  if ( v3 && a2[1] )
  {
    memset(v34, 0, sizeof(v34));
    do
    {
      v4 = *a2++;
      v34[v4] = 1;
    }
    while ( v4 );
    result = 0;
    if ( !v34[*(unsigned __int8 *)a1] )
    {
      result = 1;
      if ( !v34[*(unsigned __int8 *)(a1 + 1)] )
      {
        result = 2;
        if ( !v34[*(unsigned __int8 *)(a1 + 2)] )
        {
          result = 3;
          if ( !v34[*(unsigned __int8 *)(a1 + 3)] )
          {
            v6 = (unsigned __int8 *)(a1 & 0xFFFFFFFFFFFFFFFCLL);
            do
            {
              v7 = v6[4];
              v6 += 4;
              v8 = v6[1];
              v9 = (unsigned __int8)v34[v7];
              v10 = v34[v6[2]];
              v11 = (unsigned __int8)v34[v8] | v9;
            }
            while ( !((unsigned __int8)(v34[v8] | v9) | (unsigned __int8)(v10 | v34[v6[3]])) );
            v12 = &v6[-a1];
            v13 = v12 + 3;
            v14 = (__int64)&v12[-(unsigned __int8)v9 + 1];
            result = (__int64)&v13[-v10];
            if ( v11 )
              result = v14;
          }
        }
      }
    }
  }
  else
  {
    result = sub_40DF40(a1, v3) - a1;
  }
  if ( v35 != qword_48DD60 )
  {
    v15 = sub_412340();
    v17 = sub_42F640(v15, v16);
    v18 = v17 + 1;
    v19 = v17;
    result = sub_40B890(v17 + 1, v26, v27, v28, v29, v30, v31, v32, v33, v20, v21, v22, v23, v24, v25);
    if ( result )
    {
      *(_BYTE *)(result + v19) = 0;
      return sub_412300(result, v15, v19, v18);
    }
  }
  return result;
}
