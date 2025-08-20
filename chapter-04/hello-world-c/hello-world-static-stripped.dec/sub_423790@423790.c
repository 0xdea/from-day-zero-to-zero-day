__int64 __fastcall sub_423790(unsigned __int8 *a1, unsigned __int8 **a2, int a3)
{
  __int64 v3; // x5
  __int64 result; // x0
  int v8; // w0
  unsigned __int8 *v9; // x21
  __int64 v10; // x3
  int v11; // t1
  int v12; // w26
  unsigned __int8 *v13; // x21
  __int64 v14; // x19
  unsigned int v15; // w8
  unsigned __int64 v16; // x0
  bool v17; // zf
  unsigned __int8 *v18; // x6
  unsigned __int64 v19; // x7
  int v20; // w1
  bool v21; // cc
  bool v22; // zf
  __int64 v23; // x5
  bool v24; // zf
  int v25; // w0
  int v26; // w0

  v3 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 24);
  if ( (unsigned int)a3 > 0x24 || a3 == 1 )
  {
    *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40) = 22;
    return 0;
  }
  v8 = *a1;
  v9 = a1;
  v10 = *(_QWORD *)(v3 + 104);
  if ( (*(_WORD *)(v10 + 2LL * *a1) & 0x2000) != 0 )
  {
    do
    {
      v11 = *++v9;
      v8 = v11;
    }
    while ( (*(_WORD *)(v10 + 2LL * (unsigned __int8)v11) & 0x2000) != 0 );
  }
  if ( !v8 )
  {
    if ( a2 )
    {
      *a2 = a1;
      return 0;
    }
    return 0;
  }
  if ( v8 == 45 )
  {
    v13 = v9 + 1;
    v12 = 1;
  }
  else
  {
    v12 = 0;
    v13 = &v9[v8 == 43];
  }
  v14 = *v13;
  if ( (_DWORD)v14 != 48 )
  {
    if ( !a3 )
    {
LABEL_15:
      v15 = 5;
      v16 = 0x1999999999999999LL;
      a3 = 10;
      goto LABEL_16;
    }
    goto LABEL_47;
  }
  if ( (a3 & 0xFFFFFFEF) == 0 )
  {
    v25 = dword_45DDA0[v13[1]];
    if ( v25 == 88 )
    {
      v14 = v13[2];
      v16 = 0xFFFFFFFFFFFFFFFLL;
      v13 += 2;
      v15 = 15;
      a3 = 16;
      goto LABEL_16;
    }
    if ( a3 )
    {
      v16 = 0xFFFFFFFFFFFFFFFLL;
      v15 = 15;
      a3 = 16;
      goto LABEL_20;
    }
    if ( v25 != 66 )
    {
      v16 = 0x1FFFFFFFFFFFFFFFLL;
      v15 = 7;
      a3 = 8;
      goto LABEL_20;
    }
    goto LABEL_77;
  }
  if ( a3 == 2 )
  {
    if ( dword_45DDA0[v13[1]] != 66 )
    {
      v16 = 0x7FFFFFFFFFFFFFFFLL;
      v15 = 1;
      goto LABEL_20;
    }
LABEL_77:
    v14 = v13[2];
    v16 = 0x7FFFFFFFFFFFFFFFLL;
    v13 += 2;
    v15 = 1;
    a3 = 2;
    goto LABEL_16;
  }
LABEL_47:
  if ( a3 == 10 )
    goto LABEL_15;
  v16 = qword_45B600[a3 - 2];
  v15 = byte_45B5D0[a3 - 2];
LABEL_16:
  if ( (_DWORD)v14 )
    v17 = v13 == 0;
  else
    v17 = 1;
  if ( v17 )
  {
LABEL_60:
    if ( !a2 )
      return 0;
    if ( v13 - a1 > 1 )
    {
      v26 = dword_45DDA0[*(v13 - 1)];
      if ( (v26 == 88 || v26 == 66) && *(v13 - 2) == 48 )
      {
        result = 0;
        *a2 = v13 - 1;
        return result;
      }
    }
    *a2 = a1;
    return 0;
  }
LABEL_20:
  v18 = v13;
  v19 = 0;
  v20 = 0;
  while ( 1 )
  {
    v23 = (unsigned __int8)(v14 - 48);
    if ( (unsigned int)v23 > 9 )
    {
      if ( (word_45E6A0[(unsigned __int8)v14] & 0x400) == 0 )
        break;
      v23 = (unsigned __int8)(dword_45DDA0[v14] - 55);
    }
    if ( (int)v23 >= a3 )
      break;
    if ( v19 > v16 || (v19 == v16 ? (v21 = (unsigned int)v23 > v15) : (v21 = 0), v21) )
    {
      v14 = *++v18;
      v20 = 1;
      if ( (_DWORD)v14 )
        v24 = v18 == 0;
      else
        v24 = 1;
      if ( v24 )
        break;
    }
    else
    {
      v19 = v23 + a3 * v19;
      v14 = *++v18;
      if ( (_DWORD)v14 )
        v22 = v18 == 0;
      else
        v22 = 1;
      if ( v22 )
        break;
    }
  }
  if ( v18 == v13 )
    goto LABEL_60;
  if ( a2 )
    *a2 = v18;
  if ( v20 )
  {
    *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40) = 34;
    if ( !v12 )
      return 0x7FFFFFFFFFFFFFFFLL;
    return 0x8000000000000000LL;
  }
  if ( !v12 )
  {
    result = v19;
    if ( (v19 & 0x8000000000000000LL) == 0 )
      return result;
    *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40) = 34;
    return 0x7FFFFFFFFFFFFFFFLL;
  }
  result = -(__int64)v19;
  if ( v19 > 0x8000000000000000LL )
  {
    *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40) = 34;
    return 0x8000000000000000LL;
  }
  return result;
}
