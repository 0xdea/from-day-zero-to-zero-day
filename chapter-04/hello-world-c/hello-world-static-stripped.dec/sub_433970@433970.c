__int64 __fastcall sub_433970(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v8; // x19
  __int64 result; // x0
  __int64 v10; // x2
  __int64 v11; // x3
  void *v12; // x4
  void *v13; // x5
  void *v14; // x6
  double v15; // d0
  double v16; // d1
  double v17; // d2
  double v18; // d3
  double v19; // d4
  double v20; // d5
  double v21; // d6
  double v22; // d7
  int8x16_t *i; // x28
  unsigned __int8 *v24; // x0
  unsigned __int64 v25; // x27
  unsigned __int64 v26; // x22
  __int64 v27; // x21
  __int64 v28; // x25
  __int64 v29; // x0
  __int64 v30; // x0
  __int64 v31; // x25
  __int64 v32; // x0
  _BOOL4 v33; // w0
  __int64 v34; // x0
  __int64 v35; // [xsp+60h] [xbp+60h]
  __int64 v39; // [xsp+88h] [xbp+88h] BYREF

  v8 = 0;
  v39 = a1;
LABEL_2:
  result = strsep(&v39, a3);
  for ( i = (int8x16_t *)result; result; i = (int8x16_t *)result )
  {
    if ( i->n128_u8[0] )
    {
      v24 = sub_433860(a6, (unsigned __int8 *)i);
      i = (int8x16_t *)v24;
      if ( !v24 )
        goto LABEL_2;
      v25 = ifunc_40DFD0(v24);
      if ( !v25 )
      {
        sub_40C1A0((unsigned __int64)i, v15, v16, v17, v18, v19, v20, v21, v22);
        goto LABEL_2;
      }
      while ( v25 != 1 )
      {
        if ( i->n128_u8[v25 - 1] != 47 )
          goto LABEL_32;
        --v25;
      }
      v26 = (unsigned __int64)i;
      if ( i->n128_u8[0] == 47 )
        goto LABEL_11;
LABEL_32:
      v26 = (unsigned __int64)i;
      i->n128_u8[v25++] = 47;
LABEL_11:
      v27 = qword_496790;
      if ( qword_496790 )
      {
LABEL_12:
        v28 = v27;
        while ( *(_QWORD *)(v28 + 32) != v25 || (unsigned int)sub_40DAC0(i, *(int8x16_t **)(v28 + 24), v25) )
        {
          v28 = *(_QWORD *)v28;
          if ( !v28 )
            goto LABEL_24;
        }
        v29 = 0;
        if ( !v8 )
          goto LABEL_33;
        while ( *(_QWORD *)(a2 + 8 * v29) != v28 )
        {
          if ( ++v29 == v8 )
            goto LABEL_33;
        }
        if ( v8 == v29 )
LABEL_33:
          *(_QWORD *)(a2 + 8 * v8++) = v28;
        goto LABEL_21;
      }
    }
    else
    {
      v27 = qword_496790;
      v25 = 0;
      v26 = 0;
      if ( qword_496790 )
        goto LABEL_12;
    }
LABEL_24:
    v35 = 0;
    if ( a5 )
      v35 = ifunc_40DFD0(a5) + 1;
    v30 = sub_40B890(v25 + 45 + v35, v15, v16, v17, v18, v19, v20, v21, v22, v35, v10, v11, v12, v13, v14);
    v31 = v30;
    if ( !v30 )
      sub_432250(12, 0, 0, "cannot create cache for search path");
    v32 = v30 + 44;
    *(_QWORD *)(v31 + 24) = v32;
    *(_BYTE *)(j_ifunc_40DC90(v32, i, v25) + v25) = 0;
    *(_QWORD *)(v31 + 32) = v25;
    if ( v25 > qword_496A00 )
      qword_496A00 = v25;
    v33 = i->n128_u8[0] != 47;
    *(_QWORD *)(v31 + 8) = a4;
    *(_DWORD *)(v31 + 40) = 2 * v33;
    if ( a5 )
      v34 = j_ifunc_40DC90(v31 + v25 + 45, a5, v35);
    else
      v34 = 0;
    qword_496790 = v31;
    *(_QWORD *)(a2 + 8 * v8++) = v31;
    *(_QWORD *)v31 = v27;
    *(_QWORD *)(v31 + 16) = v34;
LABEL_21:
    sub_40C1A0(v26, v15, v16, v17, v18, v19, v20, v21, v22);
    result = strsep(&v39, a3);
  }
  *(_QWORD *)(a2 + 8 * v8) = 0;
  return result;
}
