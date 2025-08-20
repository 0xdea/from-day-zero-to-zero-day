int8x16_t *__fastcall sub_442E24(int8x16_t *result, unsigned __int64 a2, int8x16_t *a3, unsigned __int64 a4)
{
  unsigned __int8 *v4; // x21
  unsigned __int64 v5; // x22
  __int64 v6; // x23
  __int64 v7; // x24
  __int64 v8; // x25
  int8x16_t *v9; // x26
  int8x16_t *v10; // x19
  unsigned __int64 v11; // x20
  unsigned __int8 v12; // w4
  unsigned __int64 v13; // x1
  unsigned __int8 v14; // w0
  unsigned __int64 v15; // x22
  unsigned __int64 v16; // x25
  __int64 v17; // x0
  __int64 v18; // x23
  __int64 v19; // x23
  __int64 v20; // x1
  unsigned __int64 v21; // x0
  bool v22; // cf
  unsigned __int8 *v23; // x1
  int v24; // w3
  int v25; // w0
  int v27; // t1
  __int64 v29; // x0
  __int64 v30; // x1
  _BYTE v31[256]; // [xsp+8h] [xbp-108h] BYREF
  __int64 v32; // [xsp+108h] [xbp-8h]
  unsigned __int8 *v33; // [xsp+130h] [xbp+20h]
  unsigned __int64 v34; // [xsp+138h] [xbp+28h]
  __int64 v35; // [xsp+140h] [xbp+30h]
  __int64 v36; // [xsp+148h] [xbp+38h]
  __int64 vars0; // [xsp+150h] [xbp+40h]
  int8x16_t *vars8; // [xsp+158h] [xbp+48h]

  v10 = result;
  v32 = qword_48DD60;
  if ( a4 )
  {
    v5 = a4;
    v9 = a3;
    if ( a4 == 1 )
    {
      if ( v32 == qword_48DD60 )
        return (int8x16_t *)ifunc_42EF50(result, a3->n128_u8[0], a2);
      goto LABEL_42;
    }
    if ( a4 > a2 )
      goto LABEL_22;
    v4 = (unsigned __int8 *)result + a2 - a4;
    if ( a4 != 2 )
    {
      if ( a4 <= 0x100 )
      {
        v35 = v6;
        v11 = a4 - 1;
        v12 = a3->n128_u8[0];
        v13 = 1;
        memset(v31, 0, sizeof(v31));
        do
        {
          v14 = v12;
          v12 = a3->n128_u8[v13];
          v31[(unsigned __int8)(v12 - 8 * v14)] = v13++;
        }
        while ( v11 > v13 );
        v15 = a4 - 9;
        v16 = 0;
        v17 = (unsigned __int8)(a3->n128_u8[v11] - 8 * a3->n128_u8[a4 - 2]);
        v18 = (unsigned __int8)v31[v17];
        v31[v17] = v11;
        v19 = v11 - v18;
        while ( v4 >= (unsigned __int8 *)v10 )
        {
          while ( 1 )
          {
            do
            {
              v10 = (int8x16_t *)((char *)v10 + v11);
              v20 = (unsigned __int8)(v10->n128_u8[0] - 8 * v10[-1].n128_u8[15]);
              v21 = (unsigned __int8)v31[v20];
              if ( v31[v20] )
                v22 = 0;
              else
                v22 = v4 >= (unsigned __int8 *)v10;
            }
            while ( v22 );
            v10 = (int8x16_t *)((char *)v10 - v21);
            if ( v11 > v21 )
              break;
            if ( v11 <= 0xE
              || *(unsigned __int64 *)((char *)v9->n128_u64 + v16) == *(unsigned __int64 *)((char *)v10->n128_u64 + v16) )
            {
              if ( !(unsigned int)sub_40DAC0(v10, v9, v11) )
              {
                v4 = v33;
                v5 = v34;
                result = v10;
                v6 = v35;
                v8 = vars0;
                v9 = vars8;
                goto LABEL_23;
              }
              v22 = v16 >= 8;
              v16 -= 8LL;
              if ( !v22 )
                v16 = v15;
            }
            v10 = (int8x16_t *)((char *)v10 + v19);
            if ( v4 < (unsigned __int8 *)v10 )
              goto LABEL_21;
          }
        }
LABEL_21:
        v6 = v35;
        goto LABEL_22;
      }
      if ( v32 == qword_48DD60 )
        return (int8x16_t *)sub_442A60((__int64)result, a2, a3, a4);
LABEL_42:
      v35 = v6;
      v36 = v7;
      sub_412340();
      goto LABEL_43;
    }
    v23 = &result->n128_u8[1];
    v24 = a3->n128_u8[1] | (a3->n128_u8[0] << 16);
    v25 = result->n128_u8[1] | (result->n128_u8[0] << 16);
    if ( v24 != v25 && v4 >= v23 )
    {
      do
      {
        v27 = *++v23;
        v25 = v27 | (v25 << 16);
      }
      while ( v4 >= v23 && v24 != v25 );
    }
    if ( v24 != v25 )
    {
LABEL_22:
      result = 0;
      v4 = v33;
      v5 = v34;
      v8 = vars0;
      v9 = vars8;
      goto LABEL_23;
    }
    v4 = v33;
    v5 = v34;
    result = (int8x16_t *)(v23 - 1);
    v8 = vars0;
    v9 = vars8;
  }
LABEL_23:
  if ( v32 != qword_48DD60 )
  {
LABEL_43:
    v33 = v4;
    v34 = v5;
    v35 = v6;
    v36 = v7;
    vars0 = v8;
    vars8 = v9;
    v29 = sub_412340();
    return (int8x16_t *)sub_4430C0(v29, v30);
  }
  return result;
}
