__int64 __fastcall two_way_long_needle(__int64 a1, unsigned __int64 a2, int8x16_t *a3, unsigned __int64 a4)
{
  __int64 v7; // x3
  unsigned __int64 v9; // x21
  __int64 v10; // x7
  __int64 v11; // x5
  __int64 v12; // x2
  __int64 v13; // x0
  unsigned int v14; // w4
  unsigned int v15; // w1
  __int64 v16; // x8
  __int64 v17; // x4
  __int64 v18; // x3
  __int64 v19; // x0
  __int64 v20; // x2
  unsigned int v21; // w6
  unsigned int v22; // w1
  unsigned __int64 v23; // x24
  unsigned __int64 v24; // x5
  unsigned __int64 *v25; // x4
  int8x16_t *v26; // x0
  __int64 v27; // x3
  unsigned __int64 v28; // x1
  int v29; // w0
  unsigned __int64 v30; // x8
  unsigned __int64 v31; // x27
  __int64 v32; // x25
  unsigned __int64 v33; // x22
  unsigned __int64 v34; // x1
  bool v35; // cf
  unsigned __int64 v36; // x4
  unsigned __int64 v37; // x3
  unsigned __int64 v39; // x0
  __int64 v40; // x27
  unsigned __int64 v41; // x25
  __int64 v42; // x0
  unsigned __int64 v43; // x3
  unsigned __int64 v44; // x0
  __int64 v45; // [xsp+0h] [xbp-830h]
  unsigned __int64 v46; // [xsp+0h] [xbp-830h]
  unsigned __int64 v47; // [xsp+8h] [xbp-828h]
  unsigned __int64 v48; // [xsp+8h] [xbp-828h]
  _QWORD v49[256]; // [xsp+28h] [xbp-808h] BYREF
  __int64 v50; // [xsp+828h] [xbp-8h] BYREF

  v49[123] = 0;
  v7 = 0;
  v9 = a4 - 1;
  if ( a4 <= 1 )
  {
    v16 = 1;
    v23 = 0;
    goto LABEL_16;
  }
  v10 = 1;
  v11 = -1;
  v12 = 1;
  v13 = 1;
  do
  {
    while ( 1 )
    {
      v14 = a3->n128_u8[v13];
      v15 = a3->n128_u8[v11 + v12];
      if ( v14 >= v15 )
        break;
      v10 = v13 - v11;
      v7 = v13;
      v12 = 1;
LABEL_4:
      v13 = v7 + v12;
      if ( a4 <= v7 + v12 )
        goto LABEL_8;
    }
    if ( v14 == v15 )
    {
      if ( v12 == v10 )
      {
        v7 += v12;
        v12 = 1;
      }
      else
      {
        ++v12;
      }
      goto LABEL_4;
    }
    v10 = 1;
    v11 = v7;
    v12 = 1;
    v13 = ++v7 + 1;
  }
  while ( a4 > v7 + 1 );
LABEL_8:
  v16 = 1;
  v17 = 0;
  v18 = 1;
  v19 = 1;
  v20 = -1;
  do
  {
    while ( 1 )
    {
      v21 = a3->n128_u8[v19];
      v22 = a3->n128_u8[v18 + v20];
      if ( v22 >= v21 )
        break;
      v16 = v19 - v20;
      v17 = v19;
      v18 = 1;
LABEL_10:
      v19 = v18 + v17;
      if ( a4 <= v18 + v17 )
        goto LABEL_14;
    }
    if ( v22 == v21 )
    {
      if ( v16 == v18 )
      {
        v17 += v16;
        v18 = 1;
      }
      else
      {
        ++v18;
      }
      goto LABEL_10;
    }
    v16 = 1;
    v20 = v17;
    v18 = 1;
    v19 = ++v17 + 1;
  }
  while ( a4 > v17 + 1 );
LABEL_14:
  v23 = v20 + 1;
  v24 = v11 + 1;
  if ( v20 + 1 < v24 )
  {
    v16 = v10;
    v23 = v24;
  }
LABEL_16:
  v25 = v49;
  do
    *v25++ = a4;
  while ( v25 != (unsigned __int64 *)&v50 );
  v26 = a3;
  if ( a4 )
  {
    do
    {
      v27 = v26->n128_u8[0];
      v28 = (char *)a3 - (char *)v26 + v9;
      v26 = (int8x16_t *)((char *)v26 + 1);
      v49[v27] = v28;
    }
    while ( v26 != (int8x16_t *)((char *)a3 + a4) );
  }
  v45 = v16;
  v29 = memcmp(a3, (int8x16_t *)((char *)a3 + v16), v23);
  v30 = v45;
  if ( v29 )
  {
    v39 = a4 - v23;
    if ( a4 - v23 < v23 )
      v39 = v23;
    v40 = 0;
    v48 = v39 + 1;
    while ( 1 )
    {
      while ( 1 )
      {
        v41 = v40 + a4;
        if ( v40 + a4 > a2 )
        {
          a2 += strnlen(a1 + a2, a4 + 512);
          if ( v41 > a2 )
            return 0;
        }
        v42 = v49[*(unsigned __int8 *)(a1 + v41 - 1)];
        if ( !v42 )
          break;
        v40 += v42;
      }
      v43 = v23;
      if ( v9 <= v23 )
        goto LABEL_67;
      while ( a3->n128_u8[v43] == *(unsigned __int8 *)(a1 + v40 + v43) )
      {
        if ( v9 <= ++v43 )
          goto LABEL_67;
      }
      if ( v9 <= v43 )
      {
LABEL_67:
        v44 = v23 - 1;
        if ( !v23 )
          return a1 + v40;
        while ( a3->n128_u8[v44] == *(unsigned __int8 *)(a1 + v40 + v44) )
        {
          if ( --v44 == -1 )
            return a1 + v40;
        }
        v40 += v48;
      }
      else
      {
        v40 += 1 - v23 + v43;
      }
    }
  }
  v31 = 0;
  v32 = 0;
  v47 = a4 - v45;
  while ( 2 )
  {
    while ( 2 )
    {
      v33 = v32 + a4;
      if ( v32 + a4 <= a2 )
        goto LABEL_24;
      while ( 1 )
      {
        v46 = v30;
        a2 += strnlen(a1 + a2, a4 + 512);
        v30 = v46;
        if ( v33 > a2 )
          return 0;
LABEL_24:
        v34 = v49[*(unsigned __int8 *)(a1 + v33 - 1)];
        if ( !v34 )
          break;
        while ( 1 )
        {
          if ( v31 )
            v35 = v34 >= v30;
          else
            v35 = 1;
          v31 = 0;
          if ( !v35 )
            v34 = v47;
          v32 += v34;
          v33 = v32 + a4;
          if ( v32 + a4 > a2 )
            break;
          v34 = v49[*(unsigned __int8 *)(a1 + v33 - 1)];
          if ( !v34 )
            goto LABEL_32;
        }
      }
LABEL_32:
      if ( v31 < v23 )
        v36 = v23;
      else
        v36 = v31;
      if ( v9 > v36 )
      {
        while ( a3->n128_u8[v36] == *(unsigned __int8 *)(a1 + v32 + v36) )
        {
          if ( v9 == ++v36 )
            goto LABEL_45;
        }
        if ( v9 > v36 )
        {
          v31 = 0;
          v32 += 1 - v23 + v36;
          continue;
        }
      }
      break;
    }
LABEL_45:
    v37 = v23 - 1;
    if ( v31 < v23 )
    {
      while ( a3->n128_u8[v37] == *(unsigned __int8 *)(a1 + v32 + v37) )
      {
        if ( v31 == v37 )
          goto LABEL_51;
        --v37;
      }
      ++v37;
    }
    else
    {
      v37 = v23;
    }
LABEL_51:
    if ( v31 + 1 <= v37 )
    {
      v31 = v47;
      v32 += v30;
      continue;
    }
    return a1 + v32;
  }
}
