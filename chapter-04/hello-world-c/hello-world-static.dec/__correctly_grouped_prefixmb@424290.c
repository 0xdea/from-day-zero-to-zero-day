int8x16_t *__fastcall _correctly_grouped_prefixmb(
        unsigned __int64 a1,
        int8x16_t *a2,
        int8x16_t *a3,
        unsigned __int8 *a4)
{
  unsigned __int64 v7; // x0
  unsigned __int64 v8; // x21
  int8x16_t *v9; // x23
  int8x16_t *v10; // x20
  unsigned __int64 v11; // x0
  bool v12; // cf
  int8x16_t *v13; // x0
  int8x16_t *result; // x0
  unsigned __int64 v15; // x0
  unsigned __int64 v16; // x26
  __int64 v17; // x1
  unsigned __int8 *v18; // x27
  int8x16_t *v19; // x26
  unsigned int v20; // w24
  int8x16_t *v21; // x19
  int8x16_t *i; // x28
  signed __int64 v23; // x19
  unsigned __int64 v24; // x24
  int8x16_t *v25; // x28
  int v26; // w0
  int8x16_t *v27; // [xsp+60h] [xbp+60h]
  unsigned __int64 v28; // [xsp+68h] [xbp+68h]
  __int64 v30; // [xsp+78h] [xbp+78h]

  if ( !a4 )
    return a2;
  v7 = strlen(a3);
  v8 = v7;
  if ( (unsigned __int64)a2->n128_u64 - a1 >= v7 )
  {
    v9 = (int8x16_t *)(a1 - 1);
    v27 = a2;
    v30 = -(__int64)v7;
    v28 = v7 - 1;
    while ( 1 )
    {
      v10 = (int8x16_t *)((char *)v27 + v30);
      if ( a1 > (unsigned __int64)v27->n128_u64 + v30 )
        return v27;
      while ( (unsigned int)memcmp(v10, a3, v8) )
      {
        v10 = (int8x16_t *)((char *)v10 - 1);
        if ( a1 > (unsigned __int64)v10 )
          return v27;
      }
      v11 = *a4 + v8;
      if ( (char *)v27 - (char *)v10 != v11 )
      {
        v12 = v11 >= (char *)v27 - (char *)v10;
        v13 = (int8x16_t *)((char *)v10 + v11);
        if ( v12 )
          v13 = v10;
        v27 = v13;
        goto LABEL_13;
      }
      v18 = a4;
      v19 = v10;
      v20 = a4[1];
      if ( !a4[1] )
        goto LABEL_31;
      while ( 1 )
      {
        ++v18;
        v21 = (int8x16_t *)((char *)v19 - 1);
        if ( v20 != 255 )
          break;
        while ( 1 )
        {
          if ( a1 > (unsigned __int64)v21 )
            return v27;
          while ( 1 )
          {
            v25 = v21;
            v26 = memcmp(v21, a3, v8);
            v21 = (int8x16_t *)((char *)v21 - 1);
            if ( !v26 )
              break;
            if ( v9 == v21 )
              return v27;
          }
          v19 = v25;
LABEL_30:
          v20 = v18[1];
          if ( v18[1] )
            break;
LABEL_31:
          v20 = *v18;
          v21 = (int8x16_t *)((char *)v19 - 1);
          if ( v20 != 255 )
            goto LABEL_22;
        }
      }
LABEL_22:
      if ( a1 > (unsigned __int64)v21 )
        return v27;
      for ( i = v21; (unsigned int)memcmp(i, a3, v8); i = (int8x16_t *)((char *)i - 1) )
      {
        if ( (int8x16_t *)((char *)&i[-1].n128_f64[1] + 7) == v9 )
        {
          v15 = v28;
          v16 = (char *)v19 - (char *)i;
          v17 = v20;
          goto LABEL_18;
        }
      }
      v17 = v20;
      v23 = (char *)v21 - (char *)i;
      v15 = v28;
      v24 = v28 + (unsigned __int8)v20;
      if ( a1 <= (unsigned __int64)i )
      {
        if ( v24 == v23 )
        {
          v19 = i;
          goto LABEL_30;
        }
        goto LABEL_37;
      }
      v16 = v23;
LABEL_18:
      if ( v15 + v17 >= v16 )
        return v27;
LABEL_37:
      v27 = v10;
LABEL_13:
      if ( (unsigned __int64)v27->n128_u64 - a1 < v8 )
        goto LABEL_14;
    }
  }
  v27 = a2;
LABEL_14:
  result = v27;
  if ( (unsigned __int64)v27 < a1 )
    return (int8x16_t *)a1;
  return result;
}
