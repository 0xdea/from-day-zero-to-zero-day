unsigned __int64 __fastcall sub_446174(
        __int64 a1,
        double a2,
        double a3,
        double a4,
        double a5,
        double a6,
        double a7,
        double a8,
        double a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 *a13,
        void *a14,
        void *a15)
{
  __int64 v15; // x2
  __int64 v17; // x20
  __int64 *v18; // x1
  __int64 v19; // t1
  __int64 **v20; // x3
  int v21; // w1
  bool v22; // cf
  unsigned int v23; // w1
  __int64 *v24; // x22
  unsigned __int64 result; // x0
  __int64 v26; // x24
  unsigned __int64 v27; // x1
  __int64 v28; // x1
  unsigned int v29; // w26
  unsigned __int64 v30; // x25
  __int64 v31; // x0
  __int64 v32; // x27
  double v33; // d0
  double v34; // d1
  double v35; // d2
  double v36; // d3
  double v37; // d4
  double v38; // d5
  double v39; // d6
  double v40; // d7
  int v41; // w0

  v15 = *(unsigned int *)(a1 + 784);
  v17 = *(_QWORD *)(a1 + 48);
  if ( (_DWORD)v15 )
  {
    v18 = *(__int64 **)(a1 + 776);
    a13 = &v18[(unsigned int)v15];
    LODWORD(v15) = 0;
    do
    {
      v19 = *v18++;
      if ( (*(_WORD *)(v19 + 868) & 0x20LL) != 0 )
        v15 = (unsigned int)v15;
      else
        v15 = (unsigned int)(v15 + 1);
    }
    while ( a13 != v18 );
  }
  v20 = &(&off_4914A8)[21 * v17];
  v21 = *((_DWORD *)v20 + 7);
  v22 = __CFADD__(v21, (_DWORD)v15);
  v23 = v21 + v15;
  *((_DWORD *)v20 + 7) = v23;
  if ( v22 )
    goto LABEL_19;
  v24 = v20[2];
  result = *((unsigned int *)v20 + 6);
  v26 = *((unsigned int *)v24 + 2);
  v27 = v26 + v23;
  if ( !(_DWORD)result )
  {
    result = v27 + 8;
    v28 = (unsigned int)(v27 + 8);
    v29 = result;
    if ( result == v28 )
    {
      v30 = 0;
      if ( !(_DWORD)result )
        return result;
      goto LABEL_12;
    }
LABEL_19:
    sub_446150(*(const char ***)(a1 + 56));
  }
  if ( v27 <= (unsigned int)result )
    return result;
  result = 2 * v27;
  v28 = (unsigned int)(2 * v27);
  v29 = result;
  if ( result != v28 )
    goto LABEL_19;
  v30 = *v24;
  if ( !(_DWORD)result )
    return result;
LABEL_12:
  v31 = sub_40B890(8LL * v29, a2, a3, a4, a5, a6, a7, a8, a9, v28, v15, (__int64)v20, a13, a14, a15);
  v32 = v31;
  if ( !v31 )
    sub_446150(*(const char ***)(a1 + 56));
  j_ifunc_40DC90(v31, *v24, 8 * v26);
  v41 = (unsigned __int8)byte_490F08;
  LODWORD((&off_4914A8)[21 * v17 + 3]) = v29;
  *v24 = v32;
  if ( !v41 )
    sub_43A0A0();
  return sub_40C1A0(v30, v33, v34, v35, v36, v37, v38, v39, v40);
}
