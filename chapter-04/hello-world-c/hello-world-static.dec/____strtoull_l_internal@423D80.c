unsigned __int64 __fastcall ___strtoull_l_internal(
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
  unsigned __int64 result; // x0
  int v14; // w0
  unsigned __int8 *v15; // x21
  __int64 v16; // x3
  int v17; // t1
  int v18; // w26
  unsigned __int8 *v19; // x21
  __int64 v20; // x19
  int v21; // w3
  unsigned __int64 v22; // x20
  bool v23; // zf
  unsigned __int64 v24; // x1
  unsigned int v25; // w7
  unsigned __int8 *v26; // x6
  int v27; // w3
  bool v29; // zf
  __int64 v30; // x5
  bool v31; // zf
  __int64 v32; // x5
  int v33; // w0
  int v34; // w3
  int v35; // w0
  bool v36; // zf
  _DWORD *v37; // x4
  char ***v38; // x5
  unsigned __int64 v39; // x0
  unsigned __int8 *v40; // x1
  unsigned int v41; // t1
  unsigned __int64 v42; // x0
  __int64 v43; // x0

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
    v20 = v15[1];
    v19 = v15 + 1;
    v18 = 1;
    if ( (_DWORD)v20 != 48 )
    {
LABEL_14:
      if ( !a3 )
      {
LABEL_15:
        if ( v11 )
        {
          v22 = strlen(v6);
          if ( !v22 )
            goto LABEL_67;
          v39 = 0;
          while ( (unsigned __int8)v6[v39] == v19[v39] )
          {
            if ( ++v39 == v22 )
              goto LABEL_67;
          }
          if ( v22 <= v39 )
            goto LABEL_67;
          if ( (_DWORD)v20 )
          {
            v38 = nl_C_locobj;
            v40 = v19;
            v37 = dword_45DDA0;
            do
            {
              if ( (unsigned __int8)(v20 - 48) > 9u )
              {
                v42 = 0;
                while ( (unsigned __int8)v6[v42] == v40[v42] )
                {
                  if ( ++v42 == v22 )
                    goto LABEL_95;
                }
                if ( v22 > v42 && ((word_45E6A0[(unsigned __int8)v20] & 0x400) == 0 || (int)dword_45DDA0[v20] > 64) )
                  break;
              }
LABEL_95:
              v41 = *++v40;
              v20 = v41;
            }
            while ( v41 );
          }
          else
          {
            v40 = v19;
          }
          v43 = _correctly_grouped_prefixmb(v19, v40, v6, v11, v37, v38);
          v21 = 8;
          v20 = *v19;
          v11 = (unsigned __int8 *)v43;
          a3 = 10;
        }
        else
        {
          v21 = 8;
          a3 = 10;
          v22 = 0;
        }
LABEL_17:
        if ( (_DWORD)v20 )
          v23 = v11 == v19;
        else
          v23 = 1;
        v24 = _strtol_ul_max_tab[v21];
        v25 = _strtol_ul_rem_tab[v21];
        if ( !v23 )
          goto LABEL_21;
LABEL_67:
        v26 = v19;
        goto LABEL_68;
      }
LABEL_50:
      if ( a3 != 10 )
      {
        v21 = a3 - 2;
        v22 = 0;
        v11 = 0;
        goto LABEL_17;
      }
      goto LABEL_15;
    }
  }
  else
  {
    v18 = 0;
    v19 = &v15[v14 == 43];
    v20 = *v19;
    if ( (_DWORD)v20 != 48 )
      goto LABEL_14;
  }
  if ( (a3 & 0xFFFFFFEF) == 0 )
  {
    v33 = dword_45DDA0[v19[1]];
    if ( v33 == 88 )
    {
      v20 = v19[2];
      v21 = 14;
      v19 += 2;
      a3 = 16;
      v22 = 0;
      v11 = 0;
      goto LABEL_17;
    }
    if ( (a5 & 1) != 0 )
    {
      if ( !a3 )
      {
        v34 = 6;
        a3 = 8;
        if ( v33 != 66 )
          goto LABEL_63;
LABEL_81:
        v20 = v19[2];
        v21 = 0;
        v19 += 2;
        a3 = 2;
        v22 = 0;
        v11 = 0;
        goto LABEL_17;
      }
    }
    else if ( !a3 )
    {
      v34 = 6;
      a3 = 8;
      goto LABEL_63;
    }
    v34 = 14;
    a3 = 16;
    goto LABEL_63;
  }
  if ( (a5 & 1) == 0 || a3 != 2 )
    goto LABEL_50;
  v34 = 0;
  if ( dword_45DDA0[v19[1]] == 66 )
    goto LABEL_81;
LABEL_63:
  v11 = 0;
  v22 = 0;
  v24 = _strtol_ul_max_tab[v34];
  v25 = _strtol_ul_rem_tab[v34];
LABEL_21:
  v26 = v19;
  result = 0;
  v27 = 0;
  do
  {
    while ( 1 )
    {
      v30 = (unsigned __int8)(v20 - 48);
      if ( (unsigned int)v30 <= 9 )
        goto LABEL_35;
      if ( v22 )
        break;
LABEL_33:
      if ( (word_45E6A0[(unsigned __int8)v20] & 0x400) == 0 )
        goto LABEL_42;
      v30 = (unsigned __int8)(dword_45DDA0[v20] - 55);
LABEL_35:
      if ( (int)v30 >= a3 )
        goto LABEL_42;
      if ( result <= v24 && (result != v24 || (unsigned int)v30 <= v25) )
      {
        result = v30 + a3 * result;
        goto LABEL_27;
      }
      v20 = *++v26;
      v27 = 1;
      if ( (_DWORD)v20 )
        v31 = v26 == v11;
      else
        v31 = 1;
      if ( v31 )
        goto LABEL_42;
    }
    v32 = 0;
    while ( (unsigned __int8)v6[v32] == v26[v32] )
    {
      if ( ++v32 == v22 )
        goto LABEL_56;
    }
    if ( v32 != v22 )
      goto LABEL_33;
LABEL_56:
    v26 += v22 - 1;
LABEL_27:
    v20 = *++v26;
    if ( (_DWORD)v20 )
      v29 = v26 == v11;
    else
      v29 = 1;
  }
  while ( !v29 );
LABEL_42:
  if ( v26 == v19 )
  {
LABEL_68:
    if ( !a2 )
      return 0;
    if ( v26 - a1 > 1 )
    {
      v35 = dword_45DDA0[*(v26 - 1)];
      if ( v35 == 88 || (v35 == 66 ? (v36 = v10 == 0) : (v36 = 1), !v36) )
      {
        if ( *(v26 - 2) == 48 )
        {
          result = 0;
          *a2 = v26 - 1;
          return result;
        }
      }
    }
    *a2 = a1;
    return 0;
  }
  if ( a2 )
    *a2 = v26;
  if ( v18 )
    result = -(__int64)result;
  if ( v27 )
  {
    result = -1;
    *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40) = 34;
  }
  return result;
}
