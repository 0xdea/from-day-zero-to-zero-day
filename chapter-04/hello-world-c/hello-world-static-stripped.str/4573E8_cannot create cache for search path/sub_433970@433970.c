unsigned __int8 *__fastcall sub_433970(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v8; // x19
  unsigned __int8 *result; // x0
  __int16 *v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  __int64 v13; // x5
  long double v14; // q0
  long double v15; // q1
  long double v16; // q2
  long double v17; // q3
  long double v18; // q4
  long double v19; // q5
  long double v20; // q6
  long double v21; // q7
  unsigned __int8 *i; // x28
  unsigned __int8 *v23; // x0
  unsigned __int64 v24; // x27
  unsigned __int8 *v25; // x22
  __int64 v26; // x21
  _QWORD *v27; // x25
  __int64 v28; // x0
  __int64 v29; // x0
  long double v30; // q0
  __int64 v31; // x25
  __int64 v32; // x0
  _BOOL4 v33; // w0
  __int64 v34; // x0
  __int64 v35; // [xsp+60h] [xbp+60h]
  __int64 v39; // [xsp+88h] [xbp+88h] BYREF

  v8 = 0;
  v39 = a1;
LABEL_2:
  result = (unsigned __int8 *)strsep(&v39, a3);
  for ( i = result; result; i = result )
  {
    if ( *i )
    {
      v23 = sub_433860(a6, i);
      i = v23;
      if ( !v23 )
        goto LABEL_2;
      v24 = ifunc_40DFD0(v23);
      if ( !v24 )
      {
        sub_40C1A0(i);
        goto LABEL_2;
      }
      while ( v24 != 1 )
      {
        if ( i[v24 - 1] != 47 )
          goto LABEL_32;
        --v24;
      }
      v25 = i;
      if ( *i == 47 )
        goto LABEL_11;
LABEL_32:
      v25 = i;
      i[v24++] = 47;
LABEL_11:
      v26 = qword_496790;
      if ( qword_496790 )
      {
LABEL_12:
        v27 = (_QWORD *)v26;
        while ( v27[4] != v24 || (unsigned int)sub_40DAC0(i, v27[3], v24) )
        {
          v27 = (_QWORD *)*v27;
          if ( !v27 )
            goto LABEL_24;
        }
        v28 = 0;
        if ( !v8 )
          goto LABEL_33;
        while ( *(_QWORD **)(a2 + 8 * v28) != v27 )
        {
          if ( ++v28 == v8 )
            goto LABEL_33;
        }
        if ( v8 == v28 )
LABEL_33:
          *(_QWORD *)(a2 + 8 * v8++) = v27;
        goto LABEL_21;
      }
    }
    else
    {
      v26 = qword_496790;
      v24 = 0;
      v25 = 0;
      if ( qword_496790 )
        goto LABEL_12;
    }
LABEL_24:
    v35 = 0;
    if ( a5 )
      v35 = ifunc_40DFD0(a5) + 1;
    v29 = sub_40B890(v24 + 45 + v35, v14, v15, v16, v17, v18, v19, v20, v21, v35, v10, v11, v12, v13);
    v31 = v29;
    if ( !v29 )
      sub_432250(12, 0, v30, 0, "cannot create cache for search path");
    v32 = v29 + 44;
    *(_QWORD *)(v31 + 24) = v32;
    *(_BYTE *)(j_ifunc_40DC90(v32, i, v24) + v24) = 0;
    *(_QWORD *)(v31 + 32) = v24;
    if ( v24 > qword_496A00 )
      qword_496A00 = v24;
    v33 = *i != 47;
    *(_QWORD *)(v31 + 8) = a4;
    *(_DWORD *)(v31 + 40) = 2 * v33;
    if ( a5 )
      v34 = j_ifunc_40DC90(v31 + v24 + 45, a5, v35);
    else
      v34 = 0;
    qword_496790 = v31;
    *(_QWORD *)(a2 + 8 * v8++) = v31;
    *(_QWORD *)v31 = v26;
    *(_QWORD *)(v31 + 16) = v34;
LABEL_21:
    sub_40C1A0(v25);
    result = (unsigned __int8 *)strsep(&v39, a3);
  }
  *(_QWORD *)(a2 + 8 * v8) = 0;
  return result;
}
