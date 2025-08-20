__int64 __fastcall sub_442A60(__int64 a1, __int64 a2, int8x16_t *a3, unsigned __int64 a4)
{
  unsigned __int64 v8; // x21
  __int64 v9; // x6
  __int64 v10; // x4
  __int64 v11; // x3
  __int64 v12; // x2
  __int64 v13; // x5
  unsigned int v14; // w1
  unsigned int v15; // w0
  unsigned __int64 v16; // x25
  __int64 v17; // x4
  __int64 v18; // x3
  __int64 v19; // x2
  __int64 v20; // x22
  unsigned int v21; // w1
  unsigned int v22; // w0
  unsigned __int64 v23; // x22
  unsigned __int64 v24; // x5
  unsigned __int64 *v25; // x4
  int8x16_t *v26; // x3
  __int64 v27; // x0
  unsigned __int64 v28; // x2
  unsigned __int64 v29; // x26
  unsigned __int64 v30; // x19
  unsigned __int64 v31; // x7
  unsigned __int64 v32; // x2
  unsigned __int64 v33; // x0
  bool v34; // zf
  unsigned __int64 v36; // x1
  __int64 v37; // x3
  unsigned __int64 v38; // x1
  unsigned __int64 v39; // x4
  __int64 result; // x0
  unsigned __int64 v41; // x1
  unsigned __int64 v42; // x19
  unsigned __int64 v43; // x5
  unsigned __int64 v44; // x19
  __int64 v45; // x0
  unsigned __int64 v46; // x1
  unsigned __int64 v47; // x0
  __int64 v48; // x0
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x3
  _QWORD v52[256]; // [xsp+8h] [xbp-808h] BYREF
  __int64 v53; // [xsp+808h] [xbp-8h] BYREF

  v52[127] = 0;
  v53 = qword_48DD60;
  v8 = a4 - 1;
  if ( a4 <= 1 )
  {
    v16 = 1;
    v23 = 0;
    goto LABEL_16;
  }
  v9 = 1;
  v10 = 0;
  v11 = 1;
  v12 = 1;
  v13 = -1;
  do
  {
    while ( 1 )
    {
      v14 = a3->n128_u8[v12];
      v15 = a3->n128_u8[v11 + v13];
      if ( v14 >= v15 )
        break;
      v9 = v12 - v13;
      v10 = v12;
      v11 = 1;
LABEL_4:
      v12 = v10 + v11;
      if ( a4 <= v10 + v11 )
        goto LABEL_8;
    }
    if ( v14 == v15 )
    {
      if ( v9 == v11 )
      {
        v10 += v9;
        v11 = 1;
      }
      else
      {
        ++v11;
      }
      goto LABEL_4;
    }
    v9 = 1;
    v13 = v10;
    v11 = 1;
    v12 = ++v10 + 1;
  }
  while ( a4 > v10 + 1 );
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
      if ( v18 + v17 >= a4 )
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
  while ( v17 + 1 < a4 );
LABEL_14:
  v23 = v20 + 1;
  v24 = v13 + 1;
  if ( v23 < v24 )
  {
    v16 = v9;
    v23 = v24;
  }
LABEL_16:
  v25 = v52;
  do
    *v25++ = a4;
  while ( v25 != (unsigned __int64 *)&v53 );
  v26 = a3;
  if ( a4 )
  {
    do
    {
      v27 = v26->n128_u8[0];
      v28 = (char *)a3 - (char *)v26 + v8;
      v26 = (int8x16_t *)((char *)v26 + 1);
      v52[v27] = v28;
    }
    while ( (int8x16_t *)((char *)a3 + a4) != v26 );
  }
  v29 = a2 - a4;
  if ( !(unsigned int)sub_40DAC0(a3, (int8x16_t *)((char *)a3 + v16), v23) )
  {
    v30 = a4 - v16;
    v31 = 1 - v23;
    v32 = 0;
    v33 = 0;
    while ( 1 )
    {
      v37 = a1 + v33;
      v36 = v52[*(unsigned __int8 *)(a1 + v33 + v8)];
      if ( v36 )
        break;
      if ( v23 < v32 )
        v38 = v32;
      else
        v38 = v23;
      if ( v38 >= v8 )
        goto LABEL_46;
      while ( a3->n128_u8[v38] == *(unsigned __int8 *)(v37 + v38) )
      {
        if ( ++v38 == v8 )
          goto LABEL_46;
      }
      v39 = v38 + v33;
      if ( v8 <= v38 )
      {
LABEL_46:
        v41 = v23 - 1;
        if ( v23 > v32 )
        {
          while ( a3->n128_u8[v41] == *(unsigned __int8 *)(a1 + v33 + v41) )
          {
            if ( v41 == v32 )
              goto LABEL_52;
            --v41;
          }
          ++v41;
        }
        else
        {
          v41 = v23;
        }
LABEL_52:
        if ( v32 + 1 > v41 )
          goto LABEL_73;
        v33 += v16;
        v32 = v30;
LABEL_28:
        if ( v33 > v29 )
          goto LABEL_39;
      }
      else
      {
        v33 = v31 + v39;
        v32 = 0;
        if ( v31 + v39 > v29 )
          goto LABEL_39;
      }
    }
    v34 = v32 == 0;
    v32 = 0;
    if ( !v34 && v36 < v16 )
      v36 = v30;
    v33 += v36;
    goto LABEL_28;
  }
  v42 = a4 - v23;
  if ( v42 < v23 )
    v42 = v23;
  v43 = 0;
  v44 = v42 + 1;
  while ( 2 )
  {
    v37 = a1 + v43;
    v45 = v52[*(unsigned __int8 *)(a1 + v43 + v8)];
    if ( v45 )
    {
      v43 += v45;
      goto LABEL_58;
    }
    v46 = v23;
    if ( v23 < v8 )
    {
      while ( a3->n128_u8[v46] == *(unsigned __int8 *)(v37 + v46) )
      {
        if ( ++v46 >= v8 )
          goto LABEL_66;
      }
      if ( v8 > v46 )
      {
        v43 += 1 - v23 + v46;
        goto LABEL_58;
      }
    }
LABEL_66:
    v47 = v23 - 1;
    if ( v23 )
    {
      while ( a3->n128_u8[v47] == *(unsigned __int8 *)(a1 + v43 + v47) )
      {
        if ( --v47 == -1 )
          goto LABEL_73;
      }
      v43 += v44;
LABEL_58:
      if ( v43 > v29 )
      {
LABEL_39:
        result = 0;
        goto LABEL_40;
      }
      continue;
    }
    break;
  }
LABEL_73:
  result = v37;
LABEL_40:
  if ( v53 != qword_48DD60 )
  {
    v48 = sub_412340();
    return sub_442E24(v48, v49, v50, v51);
  }
  return result;
}
