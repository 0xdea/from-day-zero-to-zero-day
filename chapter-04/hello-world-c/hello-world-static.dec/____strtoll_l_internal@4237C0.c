__int64 __fastcall ___strtoll_l_internal(
        unsigned __int8 *a1,
        unsigned __int8 **a2,
        int a3,
        int a4,
        unsigned __int8 a5,
        __int64 a6)
{
  _BYTE *v6; // x22
  __int64 v9; // x0
  int v10; // w25
  unsigned __int8 *v11; // x27
  __int64 result; // x0
  int v14; // w0
  unsigned __int8 *v15; // x21
  __int64 v16; // x3
  int v17; // t1
  int v18; // w26
  unsigned __int8 *v19; // x21
  __int64 v20; // x19
  unsigned int v21; // w8
  unsigned __int64 v22; // x0
  unsigned __int64 v23; // x20
  bool v24; // zf
  unsigned __int8 *v25; // x6
  unsigned __int64 v26; // x7
  int v27; // w1
  bool v29; // zf
  __int64 v30; // x5
  bool v31; // zf
  __int64 v32; // x5
  int v33; // w0
  int v34; // w0
  bool v35; // zf
  _DWORD *v36; // x4
  _WORD *v37; // x5
  unsigned __int64 v38; // x0
  unsigned __int8 *v39; // x1
  unsigned int v40; // t1
  unsigned __int64 v41; // x0

  v6 = 0;
  v9 = *(_QWORD *)(a6 + 8);
  v10 = a5;
  v11 = 0;
  if ( a4 )
  {
    v11 = *(unsigned __int8 **)(v9 + 72);
    if ( (unsigned __int8)(*v11 - 1) > 0xFDu )
    {
      v11 = 0;
    }
    else
    {
      v6 = *(_BYTE **)(v9 + 64);
      if ( !*v6 )
      {
        v11 = 0;
        v6 = 0;
      }
    }
  }
  if ( (unsigned int)a3 > 0x24 || a3 == 1 )
  {
    *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40) = 22;
    return 0;
  }
  v14 = *a1;
  v15 = a1;
  v16 = *(_QWORD *)(a6 + 104);
  if ( (*(_WORD *)(v16 + 2LL * *a1) & 0x2000) != 0 )
  {
    do
    {
      v17 = *++v15;
      v14 = v17;
    }
    while ( (*(_WORD *)(v16 + 2LL * (unsigned __int8)v17) & 0x2000) != 0 );
  }
  if ( !v14 )
  {
    if ( a2 )
    {
      *a2 = a1;
      return 0;
    }
    return 0;
  }
  if ( v14 == 45 )
  {
    v19 = v15 + 1;
    v18 = 1;
  }
  else
  {
    v18 = 0;
    v19 = &v15[v14 == 43];
  }
  v20 = *v19;
  if ( (_DWORD)v20 != 48 )
  {
    if ( !a3 )
    {
LABEL_16:
      if ( v11 )
      {
        v23 = strlen(v6);
        if ( !v23 )
          goto LABEL_74;
        v38 = 0;
        while ( (unsigned __int8)v6[v38] == v19[v38] )
        {
          if ( ++v38 == v23 )
            goto LABEL_74;
        }
        if ( v23 <= v38 )
          goto LABEL_74;
        if ( (_DWORD)v20 )
        {
          v39 = v19;
          v37 = word_45E6A0;
          v36 = dword_45DDA0;
          do
          {
            if ( (unsigned __int8)(v20 - 48) > 9u )
            {
              v41 = 0;
              while ( (unsigned __int8)v6[v41] == v39[v41] )
              {
                if ( ++v41 == v23 )
                  goto LABEL_102;
              }
              if ( v23 > v41 && ((word_45E6A0[(unsigned __int8)v20] & 0x400) == 0 || (int)dword_45DDA0[v20] > 64) )
                break;
            }
LABEL_102:
            v40 = *++v39;
            v20 = v40;
          }
          while ( v40 );
        }
        else
        {
          v39 = v19;
        }
        v11 = (unsigned __int8 *)_correctly_grouped_prefixmb(v19, v39, v6, v11, v36, v37);
        v20 = *v19;
        v22 = 0x1999999999999999LL;
        v21 = 5;
        a3 = 10;
      }
      else
      {
        v21 = 5;
        v22 = 0x1999999999999999LL;
        a3 = 10;
        v23 = 0;
      }
LABEL_18:
      if ( (_DWORD)v20 )
        v24 = v11 == v19;
      else
        v24 = 1;
      if ( v24 )
        goto LABEL_74;
      goto LABEL_22;
    }
LABEL_51:
    if ( a3 != 10 )
    {
      v23 = 0;
      v11 = 0;
      v22 = _strtol_ul_max_tab[a3 - 2];
      v21 = _strtol_ul_rem_tab[a3 - 2];
      goto LABEL_18;
    }
    goto LABEL_16;
  }
  if ( (a3 & 0xFFFFFFEF) != 0 )
  {
    if ( (a5 & 1) == 0 || a3 != 2 )
      goto LABEL_51;
    if ( dword_45DDA0[v19[1]] != 66 )
    {
      v22 = 0x7FFFFFFFFFFFFFFFLL;
      v21 = 1;
      goto LABEL_64;
    }
LABEL_113:
    v20 = v19[2];
    v22 = 0x7FFFFFFFFFFFFFFFLL;
    v19 += 2;
    v21 = 1;
    a3 = 2;
    v23 = 0;
    v11 = 0;
    goto LABEL_18;
  }
  v33 = dword_45DDA0[v19[1]];
  if ( v33 == 88 )
  {
    v20 = v19[2];
    v22 = 0xFFFFFFFFFFFFFFFLL;
    v19 += 2;
    v21 = 15;
    a3 = 16;
    v23 = 0;
    v11 = 0;
    goto LABEL_18;
  }
  if ( (a5 & 1) == 0 )
  {
    if ( !a3 )
      goto LABEL_63;
LABEL_112:
    v22 = 0xFFFFFFFFFFFFFFFLL;
    v21 = 15;
    a3 = 16;
    goto LABEL_64;
  }
  if ( a3 )
    goto LABEL_112;
  if ( v33 == 66 )
    goto LABEL_113;
LABEL_63:
  v22 = 0x1FFFFFFFFFFFFFFFLL;
  v21 = 7;
  a3 = 8;
LABEL_64:
  v11 = 0;
  v23 = 0;
LABEL_22:
  v25 = v19;
  v26 = 0;
  v27 = 0;
  do
  {
    while ( 1 )
    {
      v30 = (unsigned __int8)(v20 - 48);
      if ( (unsigned int)v30 <= 9 )
        goto LABEL_36;
      if ( v23 )
        break;
LABEL_34:
      if ( (word_45E6A0[(unsigned __int8)v20] & 0x400) == 0 )
        goto LABEL_43;
      v30 = (unsigned __int8)(dword_45DDA0[v20] - 55);
LABEL_36:
      if ( (int)v30 >= a3 )
        goto LABEL_43;
      if ( v26 <= v22 && (v26 != v22 || (unsigned int)v30 <= v21) )
      {
        v26 = v30 + a3 * v26;
        goto LABEL_28;
      }
      v20 = *++v25;
      v27 = 1;
      if ( (_DWORD)v20 )
        v31 = v25 == v11;
      else
        v31 = 1;
      if ( v31 )
        goto LABEL_43;
    }
    v32 = 0;
    while ( (unsigned __int8)v6[v32] == v25[v32] )
    {
      if ( ++v32 == v23 )
        goto LABEL_57;
    }
    if ( v32 != v23 )
      goto LABEL_34;
LABEL_57:
    v25 += v23 - 1;
LABEL_28:
    v20 = *++v25;
    if ( (_DWORD)v20 )
      v29 = v25 == v11;
    else
      v29 = 1;
  }
  while ( !v29 );
LABEL_43:
  if ( v25 == v19 )
  {
LABEL_74:
    if ( !a2 )
      return 0;
    if ( v19 - a1 > 1 )
    {
      v34 = dword_45DDA0[*(v19 - 1)];
      if ( v34 == 88 || (v34 == 66 ? (v35 = v10 == 0) : (v35 = 1), !v35) )
      {
        if ( *(v19 - 2) == 48 )
        {
          result = 0;
          *a2 = v19 - 1;
          return result;
        }
      }
    }
    *a2 = a1;
    return 0;
  }
  if ( a2 )
    *a2 = v25;
  if ( v27 )
  {
    *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40) = 34;
    if ( !v18 )
      return 0x7FFFFFFFFFFFFFFFLL;
    return 0x8000000000000000LL;
  }
  if ( !v18 )
  {
    result = v26;
    if ( (v26 & 0x8000000000000000LL) == 0 )
      return result;
    *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40) = 34;
    return 0x7FFFFFFFFFFFFFFFLL;
  }
  result = -(__int64)v26;
  if ( v26 > 0x8000000000000000LL )
  {
    *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40) = 34;
    return 0x8000000000000000LL;
  }
  return result;
}
