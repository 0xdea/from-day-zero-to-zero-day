__int64 __fastcall nl_cleanup_time(
        __int64 result,
        double a2,
        double a3,
        double a4,
        double a5,
        double a6,
        double a7,
        double a8,
        double a9)
{
  __int64 *v9; // x19
  __int64 v10; // x1
  __int64 v11; // x0
  double v12; // d0
  double v13; // d1
  double v14; // d2
  double v15; // d3
  double v16; // d4
  double v17; // d5
  double v18; // d6
  double v19; // d7
  double v20; // d0
  double v21; // d1
  double v22; // d2
  double v23; // d3
  double v24; // d4
  double v25; // d5
  double v26; // d6
  double v27; // d7
  double v28; // d0
  double v29; // d1
  double v30; // d2
  double v31; // d3
  double v32; // d4
  double v33; // d5
  double v34; // d6
  double v35; // d7

  v9 = *(__int64 **)(result + 32);
  if ( v9 )
  {
    v10 = result;
    v11 = *v9;
    *(_QWORD *)(v10 + 32) = 0;
    free(v11, a2, a3, a4, a5, a6, a7, a8, a9);
    free(v9[3], v12, v13, v14, v15, v16, v17, v18, v19);
    free(v9[4], v20, v21, v22, v23, v24, v25, v26, v27);
    return free((__int64)v9, v28, v29, v30, v31, v32, v33, v34, v35);
  }
  return result;
}
