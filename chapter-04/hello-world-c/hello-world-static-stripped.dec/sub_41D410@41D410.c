__int64 __fastcall sub_41D410(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 *a4,
        unsigned __int64 a5,
        __int64 *a6,
        __int64 *a7)
{
  _QWORD *v7; // x9
  __int64 v8; // x2
  __int64 *v9; // x24
  unsigned __int64 v10; // x26
  __int64 *v11; // x25
  __int64 *v12; // x28
  _DWORD *v13; // x10
  unsigned __int64 v14; // x23
  unsigned __int64 StatusReg; // x22
  __int64 *v16; // x0
  __int64 v17; // x2
  __int64 v18; // x19
  unsigned int v19; // w25
  __int64 v21; // x28
  _DWORD *v23; // x26
  int v24; // w24
  _DWORD *v25; // x0
  __int64 v26; // x3
  unsigned int v27; // w20
  int v28; // w1
  unsigned int v29; // w2
  __int64 *v30; // x0
  int v31; // w5
  int v32; // w0
  _DWORD *v33; // x3
  __int64 result; // x0
  unsigned int v35; // w27
  _DWORD *v36; // x2
  unsigned int v37; // w0
  __int64 v38; // x1
  __int64 v39; // x3
  __int64 v40; // x0
  _DWORD *v41; // x6
  unsigned int *v42; // x0
  unsigned int v43; // w4
  unsigned int *v44; // x5
  __int64 v45; // x1
  __int64 v46; // x1
  __int64 v47; // x1
  __int64 v48; // x0
  _QWORD *v49; // [xsp+18h] [xbp-68h]
  __int64 v50; // [xsp+20h] [xbp-60h]
  unsigned int v51; // [xsp+28h] [xbp-58h]
  __int64 v52; // [xsp+30h] [xbp-50h]
  __int64 v53; // [xsp+38h] [xbp-48h]
  unsigned __int64 v56; // [xsp+58h] [xbp-28h]
  _DWORD *v57; // [xsp+68h] [xbp-18h] BYREF
  __int64 v58; // [xsp+70h] [xbp-10h] BYREF
  __int64 v59; // [xsp+78h] [xbp-8h]

  v7 = a1;
  v8 = *a1;
  v9 = a4;
  v10 = a5;
  v11 = a7;
  v12 = a6;
  v59 = qword_48DD60;
  v13 = (_DWORD *)*a4;
  v14 = a1[5];
  if ( v8 )
    v14 ^= qword_48DD68;
  StatusReg = _ReadStatusReg(TPIDR_EL0);
  v16 = *(__int64 **)(StatusReg + 16);
  v17 = *v16;
  if ( !*(_DWORD *)(*v16 + 544) )
  {
    v31 = *(_DWORD *)(v17 + 600);
    if ( !v31 )
    {
LABEL_16:
      v32 = *(_DWORD *)(v17 + 584);
      if ( !v32 )
        goto LABEL_39;
      v33 = *(_DWORD **)(v17 + 592);
      v57 = v33;
      if ( v10 < (unsigned __int64)(v13 + 1) )
      {
        if ( v13 == (_DWORD *)v10 )
          result = 4;
        else
          result = 7;
        goto LABEL_23;
      }
      goto LABEL_45;
    }
    v41 = v13;
    v42 = *(unsigned int **)(v17 + 608);
    v43 = *v13;
    if ( v10 >= (unsigned __int64)(v13 + 1) )
      goto LABEL_35;
    goto LABEL_21;
  }
  if ( a5 < (unsigned __int64)(v13 + 1) )
  {
LABEL_21:
    result = 4;
    if ( v13 != (_DWORD *)v10 )
LABEL_22:
      result = 7;
    goto LABEL_23;
  }
  v18 = *(_QWORD *)(v17 + 560);
  v19 = 0;
  v56 = StatusReg;
  v21 = *(_QWORD *)(v17 + 576);
  v23 = v13;
  v49 = v7;
  v50 = a2;
  v51 = *(_DWORD *)(*v16 + 544);
  v52 = *(_QWORD *)(v17 + 552);
  v53 = *(_QWORD *)(v17 + 568);
  while ( 1 )
  {
    v24 = 0;
    v25 = v23;
    v26 = (v19 + v51) >> 1;
    v27 = *(_DWORD *)(v52 + 4 * v26);
    v28 = *(_DWORD *)(v18 + 4LL * v27);
    while ( *v25 == v28 )
    {
      v29 = ++v24 + v27;
      v28 = *(_DWORD *)(v18 + 4LL * (v24 + v27));
      if ( v28 )
      {
        if ( a5 > (unsigned __int64)++v25 )
          continue;
      }
      goto LABEL_26;
    }
    v29 = v24 + v27;
    if ( v24 )
      break;
LABEL_11:
    if ( (unsigned __int64)&v23[v24] >= a5 || *(_DWORD *)(v18 + 4LL * (v24 + v27)) < v23[v24] )
      v19 = ((v19 + v51) >> 1) + 1;
    else
      v51 = (v19 + v51) >> 1;
    if ( v19 >= v51 )
    {
      v12 = a6;
      v13 = v23;
      v10 = a5;
      v7 = v49;
      a2 = v50;
      v9 = a4;
      v11 = a7;
      v30 = *(__int64 **)(v56 + 16);
      v17 = *v30;
      v31 = *(_DWORD *)(*v30 + 600);
      if ( !v31 )
        goto LABEL_16;
      v41 = (_DWORD *)*a4;
      v42 = *(unsigned int **)(v17 + 608);
      v43 = *(_DWORD *)*a4;
LABEL_35:
      if ( v31 > 0 )
      {
        v44 = &v42[3 * v31];
        while ( *v42 <= v43 )
        {
          if ( v42[1] >= v43 && !((v43 - *v42) % v42[2]) )
          {
            v47 = *v11;
            *v9 = (__int64)(v41 + 1);
            result = 0;
            *v11 = v47 + 1;
            goto LABEL_23;
          }
          v42 += 3;
          if ( v44 == v42 )
            break;
        }
      }
      v32 = *(_DWORD *)(v17 + 584);
      if ( !v32 )
      {
LABEL_39:
        result = 6;
        goto LABEL_23;
      }
      v33 = *(_DWORD **)(v17 + 592);
      v57 = v33;
LABEL_45:
      v58 = *v12;
      result = ((__int64 (__fastcall *)(_QWORD *, __int64, _DWORD **, _DWORD *, __int64 *, _QWORD, _QWORD, _QWORD))v14)(
                 v7,
                 a2,
                 &v57,
                 &v33[v32],
                 &v58,
                 0,
                 0,
                 0);
      if ( (_DWORD)result == 6 )
        goto LABEL_39;
      if ( (_DWORD)result == 4 )
      {
        result = 0;
        v45 = *v9;
        ++*v11;
        *v9 = v45 + 4;
      }
LABEL_42:
      *v12 = v58;
      goto LABEL_23;
    }
  }
LABEL_26:
  if ( *(_DWORD *)(v18 + 4LL * v29) )
    goto LABEL_22;
  v35 = *(_DWORD *)(v53 + 4 * v26);
  v36 = (_DWORD *)(v21 + 4LL * v35);
  if ( !*v36 )
  {
    v39 = v21 + 4LL * v35;
    goto LABEL_30;
  }
  while ( 1 )
  {
    v37 = v35 + 1;
    do
    {
      v38 = v37;
      v39 = v21 + 4LL * v37;
      v35 = v37++;
    }
    while ( *(_DWORD *)(v21 + 4 * v38) );
LABEL_30:
    v40 = *a6;
    v57 = v36;
    v58 = v40;
    result = ((__int64 (__fastcall *)(_QWORD *, __int64, _DWORD **, __int64, __int64 *, _QWORD, _QWORD, _QWORD))v14)(
               v49,
               v50,
               &v57,
               v39,
               &v58,
               0,
               0,
               0);
    if ( (_DWORD)result != 6 )
      break;
    v36 = (_DWORD *)(v21 + 4LL * ++v35);
    if ( !*v36 )
      goto LABEL_11;
  }
  v12 = a6;
  if ( (_DWORD)result == 4 )
  {
    result = 0;
    v46 = *a7;
    *a4 += 4LL * v24;
    *a7 = v46 + 1;
    *a6 = v58;
  }
  else if ( (_DWORD)result != 5 )
  {
    goto LABEL_42;
  }
LABEL_23:
  if ( v59 != qword_48DD60 )
  {
    v48 = sub_412340();
    return sub_41D830(v48);
  }
  return result;
}
