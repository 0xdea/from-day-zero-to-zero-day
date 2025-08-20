__int64 __fastcall _mpn_impn_sqr_n(unsigned __int64 *a1, unsigned __int64 *a2, __int64 a3, unsigned __int64 a4)
{
  __int64 v7; // x19
  __int64 result; // x0
  __int64 v9; // x20
  __int64 v10; // x19
  __int64 v11; // x26
  __int64 v12; // x23
  unsigned __int64 v13; // x0
  unsigned __int64 *v15; // x1
  unsigned __int64 *v16; // x25
  unsigned __int64 *v17; // x23
  unsigned __int64 *v18; // x4
  __int64 v19; // x28
  __int64 v20; // x28
  __int64 v21; // x0
  bool v22; // cf
  _QWORD *v23; // x23
  __int64 v24; // x0
  __int64 v25; // x1
  unsigned __int64 v26; // x0
  __int64 v27; // x21
  unsigned __int64 *v28; // x24
  __int64 v29; // x1
  __int64 v30; // x28
  __int64 v31; // x0
  unsigned __int64 *v32; // [xsp+60h] [xbp+60h]

  if ( (a3 & 1) != 0 )
  {
    v7 = a3 - 1;
    if ( a3 - 1 <= 31 )
      _mpn_impn_sqr_n_basecase((unsigned __int64)a1, a2, v7);
    else
      _mpn_impn_sqr_n(a1, a2, v7);
    a1[2 * v7] = _mpn_addmul_1(&a1[v7], a2, v7);
    result = _mpn_addmul_1(&a1[v7], a2, a3);
    a1[a3 + v7] = result;
    return result;
  }
  v9 = a3 >> 1;
  v10 = a3 & 1;
  v11 = a3 >> 1;
  v12 = (__int64)&a2[v11];
  v13 = (unsigned __int64)&a1[a3];
  v32 = &a1[a3];
  v15 = &a2[v11];
  if ( a3 >> 1 <= 31 )
  {
    _mpn_impn_sqr_n_basecase(v13, v15, v9);
    if ( (_mpn_cmp(v12, (__int64)a2, v9) & 0x80000000) == 0 )
    {
LABEL_7:
      _mpn_sub_n(a1, v12, a2, v9);
      if ( v9 <= 31 )
        goto LABEL_8;
LABEL_29:
      v16 = &a1[v11];
      v17 = &a1[a3 + v9];
      _mpn_impn_sqr_n(a4, a1, v9);
      goto LABEL_9;
    }
  }
  else
  {
    _mpn_impn_sqr_n(v13, v15, v9);
    if ( (_mpn_cmp(v12, (__int64)a2, v9) & 0x80000000) == 0 )
      goto LABEL_7;
  }
  _mpn_sub_n(a1, a2, v12, v9);
  if ( v9 > 31 )
    goto LABEL_29;
LABEL_8:
  _mpn_impn_sqr_n_basecase(a4, a1, v9);
  v16 = &a1[v11];
  v17 = &a1[a3 + v9];
  if ( v9 <= 0 )
  {
    v30 = _mpn_add_n(v32, v32, &a1[a3 + v9], v9);
    v20 = v30 - _mpn_sub_n(&a1[v11], &a1[v11], a4, a3);
    goto LABEL_32;
  }
LABEL_9:
  v18 = v16;
  do
  {
    *v18 = v18[a3 - v9];
    ++v18;
  }
  while ( v18 != &a1[2 * v9] );
  v19 = _mpn_add_n(v32, v32, v17, v9);
  v20 = v19 - _mpn_sub_n(v16, v16, a4, a3);
  if ( v9 <= 31 )
  {
LABEL_32:
    _mpn_impn_sqr_n_basecase(a4, a2, v9);
    v31 = _mpn_add_n(v16, v16, a4, a3) + v20;
    if ( !v31 )
      goto LABEL_18;
    v22 = __CFADD__(*v17, v31);
    *v17 += v31;
    if ( !v22 )
      goto LABEL_18;
    goto LABEL_15;
  }
  _mpn_impn_sqr_n(a4, a2, v9);
  v21 = v20 + _mpn_add_n(v16, v16, a4, a3);
  if ( v21 )
  {
    v22 = __CFADD__(*v17, v21);
    *v17 += v21;
    if ( !v22 )
      goto LABEL_18;
LABEL_15:
    v23 = v17 + 1;
    v24 = 0;
    do
    {
      if ( v9 - 1 == v24 )
        break;
      v25 = v23[v24] + 1LL;
      v23[v24++] = v25;
    }
    while ( !v25 );
LABEL_18:
    if ( v9 <= 0 )
      goto LABEL_20;
    goto LABEL_19;
  }
  do
  {
LABEL_19:
    a1[v10] = *(_QWORD *)(a4 + 8 * v10);
    ++v10;
  }
  while ( v9 != v10 );
LABEL_20:
  result = _mpn_add_n(v16, v16, a4 + v11 * 8, v9);
  if ( result )
  {
    v26 = a1[a3];
    v22 = __CFADD__(v26, 1);
    result = v26 + 1;
    a1[a3] = result;
    if ( v22 )
    {
      v27 = a3 - 1;
      v28 = v32 + 1;
      result = 0;
      do
      {
        if ( result == v27 )
          break;
        v29 = v28[result] + 1;
        v28[result++] = v29;
      }
      while ( !v29 );
    }
  }
  return result;
}
