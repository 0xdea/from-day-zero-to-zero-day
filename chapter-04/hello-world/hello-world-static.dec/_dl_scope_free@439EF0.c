__int64 __fastcall dl_scope_free(
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
        void *a13,
        void *a14,
        void *a15)
{
  __int64 *v16; // x19
  __int64 v17; // x0
  __int64 v18; // x1
  double v20; // d0
  double v21; // d1
  double v22; // d2
  double v23; // d3
  double v24; // d4
  double v25; // d5
  double v26; // d6
  double v27; // d7
  __int64 i; // x0
  __int64 v29; // x0
  _QWORD *v30; // x0
  double v31; // d0
  double v32; // d1
  double v33; // d2
  double v34; // d3
  double v35; // d4
  double v36; // d5
  double v37; // d6
  double v38; // d7

  if ( _libc_single_threaded )
  {
    free(a1, a2, a3, a4, a5, a6, a7, a8, a9);
    return 0;
  }
  v16 = (__int64 *)dl_scope_free_list;
  if ( dl_scope_free_list )
  {
    v17 = *(_QWORD *)dl_scope_free_list;
    if ( *(_QWORD *)dl_scope_free_list <= 0x31u )
    {
      v18 = dl_scope_free_list + 8 * v17;
      *(_QWORD *)dl_scope_free_list = v17 + 1;
      *(_QWORD *)(v18 + 8) = a1;
      return 0;
    }
    _thread_gscope_wait();
    for ( i = *v16; *v16; i = *v16 )
    {
      v29 = i - 1;
      *v16 = v29;
      free(v16[v29 + 1], v20, v21, v22, v23, v24, v25, v26, v27);
    }
  }
  else
  {
    v30 = (_QWORD *)malloc(
                      0x198u,
                      a2,
                      a3,
                      a4,
                      a5,
                      a6,
                      a7,
                      a8,
                      a9,
                      (unsigned __int8)_libc_single_threaded,
                      a11,
                      a12,
                      a13,
                      a14,
                      a15);
    dl_scope_free_list = (__int64)v30;
    if ( v30 )
    {
      *v30 = 1;
      v30[1] = a1;
      return 0;
    }
    v31 = ((double (*)(void))_thread_gscope_wait)();
    free(a1, v31, v32, v33, v34, v35, v36, v37, v38);
  }
  return 1;
}
