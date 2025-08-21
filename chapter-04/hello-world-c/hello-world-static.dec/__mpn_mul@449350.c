__int64 __fastcall _mpn_mul(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4, __int64 a5)
{
  __int64 v10; // x3
  __int64 v12; // x26
  _QWORD *v13; // x0
  __int64 v14; // x24
  __int64 v15; // x25
  __int64 v16; // x20
  _QWORD *v17; // x21
  __int64 *v18; // x1
  _QWORD *v19; // x28
  _QWORD *v20; // x1
  _QWORD *v21; // x0
  __int64 v22; // x0
  bool v23; // cf
  __int64 *v24; // x6
  __int64 *v25; // x1
  __int64 v26; // x2
  __int64 v27; // t1
  __int64 v28; // x21
  _QWORD *v29; // x19
  __int64 v30; // x23
  _QWORD *v31; // x1
  _BYTE *v32; // x19
  __int64 v33; // x0
  _QWORD *v34; // x21
  __int64 v35; // x2
  __int64 *v36; // x1
  __int64 *v37; // x21
  __int64 v38; // t1
  __int64 i; // x0
  __int64 v40; // [xsp+0h] [xbp-20030h] BYREF
  _BYTE v41[1008]; // [xsp+10h] [xbp-20020h] BYREF
  __int64 v42; // [xsp+400h] [xbp-1FC30h]
  _QWORD v43[2]; // [xsp+10000h] [xbp-10030h] BYREF
  _BYTE v44[1008]; // [xsp+10010h] [xbp-10020h] BYREF
  __int64 v45; // [xsp+10400h] [xbp-FC30h]
  _BYTE v46[16]; // [xsp+20000h] [xbp-30h] BYREF
  __int64 *v47; // [xsp+20010h] [xbp-20h]
  _BYTE *v48; // [xsp+20018h] [xbp-18h]

  if ( a5 <= 31 )
  {
    v10 = 0;
    if ( !a5 )
      return v10;
    if ( *a4 > 1u )
    {
      v10 = _mpn_mul_1(a1, a2, a3, *a4);
    }
    else
    {
      if ( *a4 != 1 )
      {
        if ( a3 > 0 )
          memset(a1, 0, 8 * a3);
        goto LABEL_8;
      }
      if ( a3 <= 0 )
      {
LABEL_8:
        v10 = 0;
        goto LABEL_28;
      }
      for ( i = 0; i != a3; ++i )
        *(_QWORD *)(a1 + 8 * i) = *(_QWORD *)(a2 + 8 * i);
      v10 = 0;
    }
LABEL_28:
    *(_QWORD *)(a1 + 8 * a3) = v10;
    v28 = a1 + 8;
    if ( a5 > 1 )
    {
      v29 = a4 + 1;
      v30 = a1 + 8 * a5;
      do
      {
        if ( *v29 <= 1u )
        {
          v10 = 0;
          if ( *v29 == 1 )
            v10 = _mpn_add_n(v28, v28, a2, a3);
        }
        else
        {
          v10 = _mpn_addmul_1(v28, a2, a3);
        }
        *(_QWORD *)(v28 + 8 * a3) = v10;
        v28 += 8;
        ++v29;
      }
      while ( v28 != v30 );
    }
    return v10;
  }
  v12 = 16 * a5 + 15;
  v13 = &v46[-((16 * a5) & 0xFFFFFFFFFFFF0000LL)];
  if ( v46 != (_BYTE *)v13 )
  {
    do
      v45 = 0;
    while ( v43 != v13 );
  }
  v43[0] = 0;
  if ( (unsigned __int16)(16 * a5) >= 0x400uLL )
    v45 = 0;
  v14 = 8 * a5;
  v15 = a3 - a5;
  v16 = a2 + 8 * a5;
  v17 = (_QWORD *)(a1 + 8 * a5);
  v48 = v44;
  _mpn_impn_mul_n(a1, a2, a4, a5, v44);
  if ( a5 <= v15 )
  {
    v18 = (_QWORD *)((char *)v43 - (v12 & 0xFFFFFFFFFFFF0000LL));
    if ( v43 != v18 )
    {
      do
        v42 = 0;
      while ( &v40 != v18 );
    }
    v40 = 0;
    if ( ((unsigned __int16)v12 & 0xFFF0u) >= 0x400uLL )
      v42 = 0;
    v19 = &v41[v14];
    v47 = (__int64 *)&v41[v14 + 8];
    while ( 1 )
    {
      _mpn_impn_mul_n(v41, v16, a4, a5, v48);
      v20 = v17;
      v21 = v17;
      v17 = (_QWORD *)((char *)v17 + v14);
      v22 = _mpn_add_n(v21, v20, v41, a5);
      v23 = __CFADD__(v22, *v19);
      *v17 = v22 + *v19;
      v24 = v17 + 1;
      if ( v23 )
        break;
      if ( v47 == v24 )
      {
LABEL_24:
        v15 -= a5;
        v16 += v14;
        if ( a5 > v15 )
          goto LABEL_25;
      }
      else
      {
LABEL_47:
        v15 -= a5;
        v16 += v14;
        j_memcpy(v24);
        if ( a5 > v15 )
          goto LABEL_25;
      }
    }
    v25 = v47;
    v26 = a5;
    while ( --v26 )
    {
      v27 = *v25++;
      *v24++ = v27 + 1;
      if ( v27 != -1 )
      {
        if ( v25 != v24 && v26 > 1 )
          goto LABEL_47;
        goto LABEL_24;
      }
    }
    goto LABEL_24;
  }
LABEL_25:
  if ( v15 )
  {
    v31 = a4;
    v32 = v48;
    _mpn_mul(v48, v31);
    v33 = _mpn_add_n(v17, v17, v32, a5);
    v34 = &v17[(unsigned __int64)v14 / 8];
    v35 = *(_QWORD *)&v32[8 * a5];
    v36 = (__int64 *)&v32[v14 + 8];
    *v34 = v33 + v35;
    v37 = v34 + 1;
    if ( __CFADD__(v33, v35) )
    {
      while ( --v15 )
      {
        v38 = *v36++;
        *v37++ = v38 + 1;
        if ( v38 != -1 )
          goto LABEL_36;
      }
    }
    else
    {
LABEL_36:
      if ( v37 != v36 && v15 > 1 )
        j_memcpy(v37);
    }
  }
  return *(_QWORD *)(a1 + 8 * (a3 + a5) - 8);
}
