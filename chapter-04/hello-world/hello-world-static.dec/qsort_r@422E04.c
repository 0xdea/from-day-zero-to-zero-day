__int64 *__fastcall qsort_r(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        __int64 (__fastcall *a4)(_QWORD, _QWORD, _QWORD),
        void *a5,
        double a6,
        double a7,
        double a8,
        double a9,
        double a10,
        double a11,
        double a12,
        double a13,
        __int64 a14,
        void *a15)
{
  _BYTE *v20; // x20
  int v21; // w3
  double v22; // d0
  double v23; // d1
  double v24; // d2
  double v25; // d3
  double v26; // d4
  double v27; // d5
  double v28; // d6
  double v29; // d7
  unsigned __int64 v31; // x0
  unsigned __int64 StatusReg; // x27
  int v33; // w28
  __int64 v34; // x0
  unsigned __int64 v35; // x27
  int v36; // w28
  __int64 v37; // x0
  int v38; // w21
  unsigned __int64 v39; // x24
  unsigned __int64 v40; // x27
  __int64 v41; // x20
  unsigned __int64 v42; // x3
  __int64 v43; // x28
  __int128 *v44; // x20
  int v45; // w0
  __int128 *i; // x27
  __int64 v47; // x20
  unsigned __int64 v48; // x28
  __int64 v49; // x26
  __int128 *v50; // x20
  unsigned __int64 v51; // [xsp+0h] [xbp-440h]
  unsigned __int64 v52; // [xsp+8h] [xbp-438h]
  unsigned __int64 v53; // [xsp+10h] [xbp-430h] BYREF
  int v54; // [xsp+18h] [xbp-428h]
  __int64 (__fastcall *v55)(_QWORD, _QWORD, _QWORD); // [xsp+20h] [xbp-420h]
  void *v56; // [xsp+28h] [xbp-418h]
  _BYTE *v57; // [xsp+30h] [xbp-410h]
  _BYTE v58[968]; // [xsp+38h] [xbp-408h] BYREF
  __int64 v59; // [xsp+400h] [xbp-40h]

  v59 = 0;
  if ( a2 <= 1 )
    return &_stack_chk_guard;
  if ( a3 > 0x20 )
  {
    v31 = a3 + 16 * a2;
    v20 = v58;
    if ( v31 > 0x400 )
    {
      StatusReg = _ReadStatusReg(TPIDR_EL0);
      v33 = *(_DWORD *)(StatusReg + 40);
      v34 = malloc(v31, a6, a7, a8, a9, a10, a11, a12, a13, 0, a3, (__int64)a4, a5, &_stack_chk_guard, a15);
      *(_DWORD *)(StatusReg + 40) = v33;
      v20 = (_BYTE *)v34;
      if ( !v34 )
        goto LABEL_20;
    }
    v53 = 8;
    v54 = 2;
    v55 = a4;
    v56 = a5;
    v57 = v20;
    indirect_msort_with_tmp((__int64 *)&v53, a1, a2, a3);
  }
  else
  {
    v20 = v58;
    if ( a2 * a3 > 0x400 )
    {
      v35 = _ReadStatusReg(TPIDR_EL0);
      v36 = *(_DWORD *)(v35 + 40);
      v37 = malloc(a2 * a3, a6, a7, a8, a9, a10, a11, a12, a13, 0, a3, (__int64)a4, a5, &_stack_chk_guard, a15);
      *(_DWORD *)(v35 + 40) = v36;
      v20 = (_BYTE *)v37;
      if ( !v37 )
      {
        if ( ((a3 | a1) & 3) != 0 )
        {
LABEL_20:
          v38 = 3;
          goto LABEL_21;
        }
        if ( a3 == 4 )
        {
          v38 = 1;
        }
        else
        {
          if ( a3 != 8 || (a1 & 7) != 0 )
            goto LABEL_20;
          v38 = 0;
        }
LABEL_21:
        v39 = a2 - 1;
        v40 = v39 | 1;
        v51 = v39 >> 1;
        do
        {
          if ( v40 <= v39 )
          {
            v41 = v51;
            v42 = v40;
            while ( 1 )
            {
              if ( v39 <= v42
                || (v52 = v42,
                    v43 = 2 * (v41 + 1),
                    v45 = a4(a1 + a3 * v42, a1 + 2 * (a3 + v41 * a3), a5),
                    v42 = v52,
                    (v45 & 0x80000000) == 0) )
              {
                v43 = v42;
              }
              if ( v43 == v41 )
                break;
              v44 = (__int128 *)(a1 + a3 * v41);
              if ( (a4(v44, a1 + a3 * v43, a5) & 0x80000000) == 0 )
                break;
              do_swap((__int128 *)(a1 + a3 * v43), v44, a3, v38);
              v42 = 2 * v43 + 1;
              if ( v42 > v39 )
                break;
              v41 = v43;
            }
          }
          v40 -= 2LL;
          --v51;
        }
        while ( v51 != -1 );
        for ( i = (__int128 *)(a1 + a3 * v39); ; i = (__int128 *)((char *)i - a3) )
        {
          do_swap((__int128 *)a1, i, a3, v38);
          if ( !--v39 )
            break;
          v47 = 0;
          v48 = 1;
          while ( 1 )
          {
            if ( v39 <= v48
              || (v49 = 2 * (v47 + 1), (a4(a1 + a3 * v48, a1 + 2 * (a3 + v47 * a3), a5) & 0x80000000) == 0) )
            {
              v49 = v48;
            }
            if ( v49 == v47 )
              break;
            v50 = (__int128 *)(a1 + a3 * v47);
            if ( (a4(v50, a1 + a3 * v49, a5) & 0x80000000) == 0 )
              break;
            v48 = 2 * v49 + 1;
            do_swap((__int128 *)(a1 + a3 * v49), v50, a3, v38);
            if ( v39 < v48 )
              break;
            v47 = v49;
          }
        }
        return &_stack_chk_guard;
      }
    }
    v53 = a3;
    v21 = 3;
    if ( ((a3 | a1) & 3) == 0 )
    {
      v21 = 1;
      if ( a3 != 4 )
      {
        v21 = 3;
        if ( a3 == 8 )
        {
          if ( (a1 & 7) != 0 )
            v21 = 3;
          else
            v21 = 0;
        }
      }
    }
    v54 = v21;
    v55 = a4;
    v56 = a5;
    v57 = v20;
    msort_with_tmp_part_0((__int64 *)&v53, (__int64 *)a1, a2);
  }
  if ( v20 != v58 )
    free((__int64)v20, v22, v23, v24, v25, v26, v27, v28, v29);
  return &_stack_chk_guard;
}
