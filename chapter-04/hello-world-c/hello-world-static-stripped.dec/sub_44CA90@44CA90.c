__int64 __fastcall sub_44CA90(unsigned __int64 a1, _QWORD *a2, __int64 **a3, _QWORD *a4)
{
  unsigned int v8; // w23
  __int64 *v9; // x0
  _BYTE *v10; // x1
  __int64 v11; // x2
  __int64 v12; // x2
  unsigned int *v13; // x10
  unsigned int *v14; // x1
  unsigned int *v15; // x11
  __int64 v16; // x12
  unsigned int v17; // w3
  int v18; // w13
  _DWORD *v19; // x8
  _DWORD *v20; // x13
  __int64 v21; // x9
  int *v22; // x5
  unsigned __int64 v23; // x1
  unsigned __int64 v24; // x7
  __int64 v25; // x6
  int v26; // t1
  unsigned int *v27; // x4
  int v28; // w3
  __int64 v29; // x1
  __int64 v31; // x4
  unsigned __int64 v32; // x6
  unsigned __int64 v33; // x5
  unsigned __int64 v34; // x4
  __int64 v35; // x8

  sub_42D0B0(dword_490F90);
  v8 = 0;
  v9 = sub_4462F0(a1);
  if ( !v9 )
    goto LABEL_29;
  v10 = (_BYTE *)v9[1];
  v11 = v9[115];
  *a2 = v10;
  a2[1] = v11;
  if ( !*v10 && (*((_WORD *)v9 + 434) & 3LL) == 0 )
    *a2 = off_491918;
  v12 = 0;
  v13 = *(unsigned int **)(v9[14] + 8);
  if ( (*((_BYTE *)v9 + 870) & 0x20) != 0 )
  {
    v12 = *v9;
    v13 = (unsigned int *)((char *)v13 + *v9);
  }
  v14 = v13;
  v15 = (unsigned int *)v9[93];
  v16 = *(_QWORD *)(v9[13] + 8);
  v17 = *(_DWORD *)(v9[18] + 8);
  if ( v15 )
  {
    v18 = *((_DWORD *)v9 + 207);
    if ( v18 )
    {
      v19 = (_DWORD *)v9[106];
      v15 = 0;
      v20 = &v19[v18];
      while ( !*v19 )
      {
LABEL_8:
        if ( ++v19 == v20 )
          goto LABEL_21;
      }
      v21 = v9[107];
      v22 = (int *)(v21 + 4LL * (unsigned int)*v19);
      while ( 1 )
      {
        v27 = &v13[6 * (unsigned int)(((unsigned __int64)v22 - v21) >> 2)];
        if ( *((_WORD *)v27 + 3) )
        {
          if ( *((unsigned __int16 *)v27 + 3) == 65521 )
            goto LABEL_17;
        }
        else if ( !*((_QWORD *)v27 + 1) )
        {
          goto LABEL_17;
        }
        if ( (v27[1] & 0xF) == 6 )
          goto LABEL_17;
        v23 = *((_QWORD *)v27 + 1);
        v24 = v23 + *v9;
        if ( a1 < v24 )
          goto LABEL_17;
        if ( *((_WORD *)v27 + 3) )
        {
          v25 = *((_QWORD *)v27 + 2);
          if ( !v25 )
          {
            if ( a1 == v24 )
              goto LABEL_51;
            goto LABEL_17;
          }
        }
        else
        {
          if ( a1 == v24 )
            goto LABEL_51;
          v25 = *((_QWORD *)v27 + 2);
        }
        if ( a1 < v24 + v25 )
        {
LABEL_51:
          if ( (!v15 || v23 > *((_QWORD *)v15 + 1)) && v17 > *v27 )
            v15 = &v13[6 * (unsigned int)(((unsigned __int64)v22 - v21) >> 2)];
        }
LABEL_17:
        v26 = *v22++;
        if ( (v26 & 1) != 0 )
          goto LABEL_8;
      }
    }
    goto LABEL_56;
  }
  v31 = v9[12];
  if ( !v31
    || (v32 = (unsigned __int64)&v13[6 * *(unsigned int *)(v12 + *(_QWORD *)(v31 + 8) + 4)], (unsigned __int64)v13 >= v32) )
  {
LABEL_56:
    if ( a3 )
    {
      *a3 = v9;
      if ( a4 )
        *a4 = 0;
    }
    else if ( a4 )
    {
      *a4 = 0;
    }
    goto LABEL_59;
  }
  do
  {
    if ( (unsigned __int8)((*((_BYTE *)v14 + 4) >> 4) - 1) > 1u
      || (*((_BYTE *)v14 + 5) & 3u) - 1 <= 1
      || (v14[1] & 0xF) == 6 )
    {
      goto LABEL_33;
    }
    if ( *((_WORD *)v14 + 3) )
    {
      if ( *((unsigned __int16 *)v14 + 3) == 65521 )
        goto LABEL_33;
      v33 = *((_QWORD *)v14 + 1);
      v34 = v33 + *v9;
      if ( a1 < v34 )
        goto LABEL_33;
      v35 = *((_QWORD *)v14 + 2);
      if ( !v35 )
      {
        if ( a1 != v34 )
          goto LABEL_33;
        goto LABEL_43;
      }
    }
    else
    {
      v33 = *((_QWORD *)v14 + 1);
      if ( !v33 )
        goto LABEL_33;
      v34 = v33 + *v9;
      if ( a1 < v34 )
        goto LABEL_33;
      if ( a1 == v34 )
        goto LABEL_43;
      v35 = *((_QWORD *)v14 + 2);
    }
    if ( a1 >= v34 + v35 )
      goto LABEL_33;
LABEL_43:
    if ( (!v15 || *((_QWORD *)v15 + 1) < v33) && v17 > *v14 )
      v15 = v14;
LABEL_33:
    v14 += 6;
  }
  while ( v32 > (unsigned __int64)v14 );
LABEL_21:
  if ( a3 )
    *a3 = v9;
  if ( a4 )
    *a4 = v15;
  if ( !v15 )
  {
LABEL_59:
    v8 = 1;
    a2[2] = 0;
    a2[3] = 0;
    goto LABEL_29;
  }
  v28 = *((unsigned __int16 *)v15 + 3);
  a2[2] = v12 + v16 + *v15;
  if ( v28 == 65521 )
    v29 = 0;
  else
    v29 = *v9;
  v8 = 1;
  a2[3] = *((_QWORD *)v15 + 1) + v29;
LABEL_29:
  sub_42DA40(dword_490F90);
  return v8;
}
