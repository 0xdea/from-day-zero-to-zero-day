__int64 __fastcall _gconv_transliterate(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 *a4,
        unsigned __int64 a5,
        __int64 *a6,
        __int64 *a7)
{
  _QWORD *v7; // x9
  __int64 *v8; // x24
  unsigned __int64 v9; // x26
  __int64 *v10; // x25
  __int64 *v11; // x28
  _DWORD *v12; // x10
  unsigned __int64 v13; // x23
  unsigned __int64 StatusReg; // x22
  __int64 *v15; // x0
  __int64 v16; // x2
  __int64 v17; // x19
  unsigned int v18; // w25
  __int64 v20; // x28
  _DWORD *v22; // x26
  int v23; // w24
  _DWORD *v24; // x0
  __int64 v25; // x3
  unsigned int v26; // w20
  int v27; // w1
  unsigned int v28; // w2
  __int64 *v29; // x0
  int v30; // w5
  int v31; // w0
  _DWORD *v32; // x3
  __int64 result; // x0
  unsigned int v34; // w27
  _DWORD *v35; // x2
  unsigned int v36; // w0
  __int64 v37; // x1
  __int64 v38; // x3
  __int64 v39; // x0
  _DWORD *v40; // x6
  unsigned int *v41; // x0
  unsigned int v42; // w4
  unsigned int *v43; // x5
  __int64 v44; // x1
  __int64 v45; // x1
  __int64 v46; // x1
  _QWORD *v47; // [xsp+18h] [xbp-68h]
  __int64 v48; // [xsp+20h] [xbp-60h]
  unsigned int v49; // [xsp+28h] [xbp-58h]
  __int64 v50; // [xsp+30h] [xbp-50h]
  __int64 v51; // [xsp+38h] [xbp-48h]
  unsigned __int64 v54; // [xsp+58h] [xbp-28h]
  _DWORD *v55; // [xsp+68h] [xbp-18h] BYREF
  __int64 v56; // [xsp+70h] [xbp-10h] BYREF

  v7 = a1;
  v8 = a4;
  v9 = a5;
  v10 = a7;
  v11 = a6;
  v12 = (_DWORD *)*a4;
  v13 = a1[5];
  if ( *a1 )
    v13 ^= _pointer_chk_guard_local;
  StatusReg = _ReadStatusReg(TPIDR_EL0);
  v15 = *(__int64 **)(StatusReg + 16);
  v16 = *v15;
  if ( !*(_DWORD *)(*v15 + 544) )
  {
    v30 = *(_DWORD *)(v16 + 600);
    if ( !v30 )
    {
LABEL_16:
      v31 = *(_DWORD *)(v16 + 584);
      if ( !v31 )
        return 6;
      v32 = *(_DWORD **)(v16 + 592);
      v55 = v32;
      if ( v9 >= (unsigned __int64)(v12 + 1) )
        goto LABEL_44;
      if ( v12 == (_DWORD *)v9 )
        return 4;
      else
        return 7;
    }
    v40 = v12;
    v41 = *(unsigned int **)(v16 + 608);
    v42 = *v12;
    if ( v9 >= (unsigned __int64)(v12 + 1) )
      goto LABEL_34;
LABEL_21:
    result = 4;
    if ( v12 != (_DWORD *)v9 )
      return 7;
    return result;
  }
  if ( a5 < (unsigned __int64)(v12 + 1) )
    goto LABEL_21;
  v17 = *(_QWORD *)(v16 + 560);
  v18 = 0;
  v54 = StatusReg;
  v20 = *(_QWORD *)(v16 + 576);
  v22 = v12;
  v47 = v7;
  v48 = a2;
  v49 = *(_DWORD *)(*v15 + 544);
  v50 = *(_QWORD *)(v16 + 552);
  v51 = *(_QWORD *)(v16 + 568);
  while ( 1 )
  {
    v23 = 0;
    v24 = v22;
    v25 = (v18 + v49) >> 1;
    v26 = *(_DWORD *)(v50 + 4 * v25);
    v27 = *(_DWORD *)(v17 + 4LL * v26);
    while ( *v24 == v27 )
    {
      v28 = ++v23 + v26;
      v27 = *(_DWORD *)(v17 + 4LL * (v23 + v26));
      if ( v27 )
      {
        if ( a5 > (unsigned __int64)++v24 )
          continue;
      }
      goto LABEL_25;
    }
    v28 = v23 + v26;
    if ( v23 )
      break;
LABEL_11:
    if ( (unsigned __int64)&v22[v23] >= a5 || *(_DWORD *)(v17 + 4LL * (v23 + v26)) < v22[v23] )
      v18 = ((v18 + v49) >> 1) + 1;
    else
      v49 = (v18 + v49) >> 1;
    if ( v18 >= v49 )
    {
      v11 = a6;
      v12 = v22;
      v9 = a5;
      v7 = v47;
      a2 = v48;
      v8 = a4;
      v10 = a7;
      v29 = *(__int64 **)(v54 + 16);
      v16 = *v29;
      v30 = *(_DWORD *)(*v29 + 600);
      if ( !v30 )
        goto LABEL_16;
      v40 = (_DWORD *)*a4;
      v41 = *(unsigned int **)(v16 + 608);
      v42 = *(_DWORD *)*a4;
LABEL_34:
      if ( v30 > 0 )
      {
        v43 = &v41[3 * v30];
        while ( *v41 <= v42 )
        {
          if ( v41[1] >= v42 && !((v42 - *v41) % v41[2]) )
          {
            v46 = *v10;
            *v8 = (__int64)(v40 + 1);
            result = 0;
            *v10 = v46 + 1;
            return result;
          }
          v41 += 3;
          if ( v43 == v41 )
            break;
        }
      }
      v31 = *(_DWORD *)(v16 + 584);
      if ( !v31 )
        return 6;
      v32 = *(_DWORD **)(v16 + 592);
      v55 = v32;
LABEL_44:
      v56 = *v11;
      result = ((__int64 (__fastcall *)(_QWORD *, __int64, _DWORD **, _DWORD *, __int64 *, _QWORD, _QWORD, _QWORD))v13)(
                 v7,
                 a2,
                 &v55,
                 &v32[v31],
                 &v56,
                 0,
                 0,
                 0);
      if ( (_DWORD)result == 6 )
        return 6;
      if ( (_DWORD)result == 4 )
      {
        result = 0;
        v44 = *v8;
        ++*v10;
        *v8 = v44 + 4;
      }
LABEL_41:
      *v11 = v56;
      return result;
    }
  }
LABEL_25:
  if ( *(_DWORD *)(v17 + 4LL * v28) )
    return 7;
  v34 = *(_DWORD *)(v51 + 4 * v25);
  v35 = (_DWORD *)(v20 + 4LL * v34);
  if ( !*v35 )
  {
    v38 = v20 + 4LL * v34;
    goto LABEL_29;
  }
  while ( 1 )
  {
    v36 = v34 + 1;
    do
    {
      v37 = v36;
      v38 = v20 + 4LL * v36;
      v34 = v36++;
    }
    while ( *(_DWORD *)(v20 + 4 * v37) );
LABEL_29:
    v39 = *a6;
    v55 = v35;
    v56 = v39;
    result = ((__int64 (__fastcall *)(_QWORD *, __int64, _DWORD **, __int64, __int64 *, _QWORD, _QWORD, _QWORD))v13)(
               v47,
               v48,
               &v55,
               v38,
               &v56,
               0,
               0,
               0);
    if ( (_DWORD)result != 6 )
      break;
    v35 = (_DWORD *)(v20 + 4LL * ++v34);
    if ( !*v35 )
      goto LABEL_11;
  }
  v11 = a6;
  if ( (_DWORD)result == 4 )
  {
    result = 0;
    v45 = *a7;
    *a4 += 4LL * v23;
    *a7 = v45 + 1;
    *a6 = v56;
  }
  else if ( (_DWORD)result != 5 )
  {
    goto LABEL_41;
  }
  return result;
}
