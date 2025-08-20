unsigned __int64 __fastcall sub_423D50(unsigned __int8 *a1, unsigned __int8 **a2, int a3)
{
  __int64 v3; // x5
  unsigned __int64 result; // x0
  int v8; // w0
  unsigned __int8 *v9; // x21
  __int64 v10; // x3
  int v11; // t1
  int v12; // w26
  unsigned __int8 *v13; // x21
  __int64 v14; // x19
  int v15; // w3
  bool v16; // zf
  unsigned __int64 v17; // x1
  unsigned int v18; // w7
  unsigned __int8 *v19; // x6
  int v20; // w3
  bool v21; // cc
  bool v22; // zf
  __int64 v23; // x5
  bool v24; // zf
  int v25; // w0
  int v26; // w3
  int v27; // w0

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
    v14 = v9[1];
    v13 = v9 + 1;
    v12 = 1;
    if ( (_DWORD)v14 != 48 )
    {
LABEL_13:
      if ( !a3 )
      {
LABEL_14:
        v15 = 8;
        a3 = 10;
        goto LABEL_15;
      }
      goto LABEL_46;
    }
  }
  else
  {
    v12 = 0;
    v13 = &v9[v8 == 43];
    v14 = *v13;
    if ( (_DWORD)v14 != 48 )
      goto LABEL_13;
  }
  if ( (a3 & 0xFFFFFFEF) == 0 )
  {
    v25 = dword_45DDA0[v13[1]];
    if ( v25 == 88 )
    {
      v14 = v13[2];
      v15 = 14;
      v13 += 2;
      a3 = 16;
      goto LABEL_15;
    }
    if ( a3 )
    {
      v26 = 14;
      a3 = 16;
      goto LABEL_53;
    }
    v26 = 6;
    a3 = 8;
    if ( v25 != 66 )
    {
LABEL_53:
      v17 = qword_45B600[v26];
      v18 = byte_45B5D0[v26];
      goto LABEL_19;
    }
LABEL_63:
    v14 = v13[2];
    v15 = 0;
    v13 += 2;
    a3 = 2;
    goto LABEL_15;
  }
  if ( a3 == 2 )
  {
    v26 = 0;
    if ( dword_45DDA0[v13[1]] != 66 )
      goto LABEL_53;
    goto LABEL_63;
  }
LABEL_46:
  if ( a3 == 10 )
    goto LABEL_14;
  v15 = a3 - 2;
LABEL_15:
  if ( (_DWORD)v14 )
    v16 = v13 == 0;
  else
    v16 = 1;
  v17 = qword_45B600[v15];
  v18 = byte_45B5D0[v15];
  if ( v16 )
  {
    v19 = v13;
LABEL_55:
    if ( !a2 )
      return 0;
    if ( v19 - a1 > 1 )
    {
      v27 = dword_45DDA0[*(v19 - 1)];
      if ( (v27 == 88 || v27 == 66) && *(v19 - 2) == 48 )
      {
        result = 0;
        *a2 = v19 - 1;
        return result;
      }
    }
    *a2 = a1;
    return 0;
  }
LABEL_19:
  v19 = v13;
  result = 0;
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
    if ( result > v17 || (result == v17 ? (v21 = (unsigned int)v23 > v18) : (v21 = 0), v21) )
    {
      v14 = *++v19;
      v20 = 1;
      if ( (_DWORD)v14 )
        v24 = v19 == 0;
      else
        v24 = 1;
      if ( v24 )
        break;
    }
    else
    {
      result = v23 + a3 * result;
      v14 = *++v19;
      if ( (_DWORD)v14 )
        v22 = v19 == 0;
      else
        v22 = 1;
      if ( v22 )
        break;
    }
  }
  if ( v19 == v13 )
    goto LABEL_55;
  if ( a2 )
    *a2 = v19;
  if ( v12 )
    result = -(__int64)result;
  if ( v20 )
  {
    result = -1;
    *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40) = 34;
  }
  return result;
}
