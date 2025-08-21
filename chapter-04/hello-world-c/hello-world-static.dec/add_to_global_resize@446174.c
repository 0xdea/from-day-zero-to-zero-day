__int64 __fastcall add_to_global_resize(
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
  __int64 result; // x0
  unsigned __int64 v26; // x1
  __int64 v27; // x1
  unsigned int v28; // w26
  __int64 v29; // x25
  __int64 v30; // x0
  __int64 v31; // x27
  double v32; // d0
  double v33; // d1
  double v34; // d2
  double v35; // d3
  double v36; // d4
  double v37; // d5
  double v38; // d6
  double v39; // d7
  int v40; // w0

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
  v20 = &(&dl_ns)[21 * v17];
  v21 = *((_DWORD *)v20 + 7);
  v22 = __CFADD__(v21, (_DWORD)v15);
  v23 = v21 + v15;
  *((_DWORD *)v20 + 7) = v23;
  if ( v22 )
    goto LABEL_19;
  v24 = v20[2];
  result = *((unsigned int *)v20 + 6);
  v26 = *((unsigned int *)v24 + 2) + (unsigned __int64)v23;
  if ( !(_DWORD)result )
  {
    result = v26 + 8;
    v27 = (unsigned int)(v26 + 8);
    v28 = result;
    if ( result == v27 )
    {
      v29 = 0;
      if ( !(_DWORD)result )
        return result;
      goto LABEL_12;
    }
LABEL_19:
    add_to_global_resize_failure_isra_0(*(const char ***)(a1 + 56));
  }
  if ( v26 <= (unsigned int)result )
    return result;
  result = 2 * v26;
  v27 = (unsigned int)(2 * v26);
  v28 = result;
  if ( result != v27 )
    goto LABEL_19;
  v29 = *v24;
  if ( !(_DWORD)result )
    return result;
LABEL_12:
  v30 = malloc(8LL * v28, a2, a3, a4, a5, a6, a7, a8, a9, v27, v15, (__int64)v20, a13, a14, a15);
  v31 = v30;
  if ( !v30 )
    add_to_global_resize_failure_isra_0(*(const char ***)(a1 + 56));
  j_memcpy(v30);
  v40 = (unsigned __int8)_libc_single_threaded;
  LODWORD((&dl_ns)[21 * v17 + 3]) = v28;
  *v24 = v31;
  if ( !v40 )
    _thread_gscope_wait();
  return free(v29, v32, v33, v34, v35, v36, v37, v38, v39);
}
