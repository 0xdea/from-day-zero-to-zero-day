__int64 __fastcall sub_4498A0(unsigned __int64 a1, __int64 a2, unsigned __int64 *a3, __int64 a4, unsigned __int64 a5)
{
  __int64 v9; // x23
  __int64 result; // x0
  __int64 v11; // x27
  __int64 v12; // x1
  __int64 v13; // x28
  __int64 v14; // x24
  unsigned __int64 v15; // x0
  __int64 v16; // x25
  unsigned __int64 *v18; // x2
  __int64 v19; // x1
  int v20; // w26
  unsigned __int64 *v21; // x24
  unsigned __int64 *v22; // x1
  __int64 v23; // x28
  __int64 v24; // x4
  __int64 v25; // x26
  __int64 v26; // x26
  __int64 v27; // x0
  bool v28; // cf
  __int64 v29; // x20
  unsigned __int64 v30; // x23
  __int64 v31; // x1
  __int64 v32; // x0
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x0
  __int64 v36; // x1
  __int64 v37; // x0
  __int64 v38; // [xsp+68h] [xbp+68h]
  unsigned __int64 v39; // [xsp+70h] [xbp+70h]
  __int64 v40; // [xsp+78h] [xbp+78h]

  if ( (a4 & 1) != 0 )
  {
    v9 = a4 - 1;
    if ( a4 - 1 <= 31 )
      sub_449780(a1, a2, a3, v9);
    else
      sub_4498A0(a1, a2, a3, v9, a5);
    *(_QWORD *)(a1 + 16 * v9) = sub_44D1F0(a1 + 8 * v9, a2, v9);
    result = sub_44D1F0(a1 + 8 * v9, a3, a4);
    *(_QWORD *)(a1 + 8 * (a4 + v9)) = result;
    return result;
  }
  v11 = a4 >> 1;
  v12 = 8 * (a4 >> 1);
  v13 = (__int64)&a3[(unsigned __int64)v12 / 8];
  v14 = a2 + v12;
  v38 = v12;
  v40 = 8 * a4;
  v15 = a1 + 8 * a4;
  v39 = a1 + 8 * a4;
  v16 = a4 & 1;
  v18 = &a3[(unsigned __int64)v12 / 8];
  v19 = a2 + v12;
  if ( a4 >> 1 <= 31 )
  {
    sub_449780(v15, v19, v18, v11);
    if ( (sub_448C20(v14, a2, v11) & 0x80000000) == 0 )
    {
LABEL_7:
      sub_44A2A0(a1, v14, a2, v11);
      v20 = 0;
      v21 = (unsigned __int64 *)(a1 + v38);
      if ( (sub_448C20(v13, (__int64)a3, v11) & 0x80000000) == 0 )
        goto LABEL_8;
      goto LABEL_27;
    }
  }
  else
  {
    sub_4498A0(v39, v19, v18, v11, a5);
    if ( (sub_448C20(v14, a2, v11) & 0x80000000) == 0 )
      goto LABEL_7;
  }
  sub_44A2A0(a1, a2, v14, v11);
  v20 = 1;
  v21 = (unsigned __int64 *)(a1 + v38);
  if ( (sub_448C20(v13, (__int64)a3, v11) & 0x80000000) == 0 )
  {
LABEL_8:
    sub_44A2A0(v21, v13, a3, v11);
    v20 ^= 1u;
    if ( v11 <= 31 )
      goto LABEL_9;
LABEL_28:
    sub_4498A0(a5, a1, v21, v11, a5 + v40);
LABEL_10:
    v22 = v21;
    do
    {
      *v22 = v22[a4 - v11];
      ++v22;
    }
    while ( v22 != (unsigned __int64 *)(a1 + 16 * v11) );
    goto LABEL_12;
  }
LABEL_27:
  sub_44A2A0(v21, a3, v13, v11);
  if ( v11 > 31 )
    goto LABEL_28;
LABEL_9:
  sub_449780(a5, a1, v21, v11);
  if ( v11 > 0 )
    goto LABEL_10;
LABEL_12:
  v23 = a4 + v11;
  v24 = sub_44D1A0(v39, v39, a1 + 8 * (a4 + v11), v11);
  if ( v20 )
    v25 = v24 - sub_44A2A0(v21, v21, a5, a4);
  else
    v25 = v24 + sub_44D1A0(v21, v21, a5, a4);
  if ( v11 <= 31 )
  {
    sub_449780(a5, a2, a3, v11);
    v26 = v25 + sub_44D1A0(v21, v21, a5, a4);
    if ( !v26 )
      goto LABEL_16;
    v37 = *(_QWORD *)(a1 + 8 * v23);
    *(_QWORD *)(a1 + 8 * v23) = v26 + v37;
    if ( !__CFADD__(v26, v37) )
      goto LABEL_16;
    goto LABEL_33;
  }
  sub_4498A0(a5, a2, a3, v11, a5 + v40);
  v32 = sub_44D1A0(v21, v21, a5, a4) + v25;
  if ( v32 )
  {
    v33 = *(_QWORD *)(a1 + 8 * v23);
    *(_QWORD *)(a1 + 8 * v23) = v32 + v33;
    if ( __CFADD__(v32, v33) )
    {
LABEL_33:
      v34 = a1 + 8 * (a4 + v11) + 8;
      v35 = 0;
      do
      {
        if ( v11 - 1 == v35 )
          break;
        v36 = *(_QWORD *)(v34 + 8 * v35) + 1LL;
        *(_QWORD *)(v34 + 8 * v35++) = v36;
      }
      while ( !v36 );
LABEL_16:
      if ( v11 <= 0 )
        goto LABEL_18;
      goto LABEL_17;
    }
  }
  do
  {
LABEL_17:
    *(_QWORD *)(a1 + 8 * v16) = *(_QWORD *)(a5 + 8 * v16);
    ++v16;
  }
  while ( v11 != v16 );
LABEL_18:
  result = sub_44D1A0(v21, v21, a5 + v38, v11);
  if ( result )
  {
    v27 = *(_QWORD *)(a1 + 8 * a4);
    v28 = __CFADD__(v27, 1);
    result = v27 + 1;
    *(_QWORD *)(a1 + 8 * a4) = result;
    if ( v28 )
    {
      v29 = a4 - 1;
      v30 = v39 + 8;
      result = 0;
      do
      {
        if ( result == v29 )
          break;
        v31 = *(_QWORD *)(v30 + 8 * result) + 1LL;
        *(_QWORD *)(v30 + 8 * result++) = v31;
      }
      while ( !v31 );
    }
  }
  return result;
}
