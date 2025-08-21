__int64 __fastcall _libc_dlerror_result_free(
        double a1,
        double a2,
        double a3,
        double a4,
        double a5,
        double a6,
        double a7,
        double a8)
{
  unsigned __int64 StatusReg; // x20
  __int64 result; // x0
  int v10; // w1
  double v11; // d0
  double v12; // d1
  double v13; // d2
  double v14; // d3
  double v15; // d4
  double v16; // d5
  double v17; // d6
  double v18; // d7
  double v19; // d0
  double v20; // d1
  double v21; // d2
  double v22; // d3
  double v23; // d4
  double v24; // d5
  double v25; // d6
  double v26; // d7

  StatusReg = _ReadStatusReg(TPIDR_EL0);
  result = *(_QWORD *)(StatusReg + 96);
  if ( result )
  {
    if ( result != -1 )
    {
      v10 = *(unsigned __int8 *)(result + 4);
      if ( v10 == 1 )
      {
        dl_error_free(*(_QWORD *)(result + 16), a1, a2, a3, a4, a5, a6, a7, a8);
        result = free(*(_QWORD *)(StatusReg + 96), v19, v20, v21, v22, v23, v24, v25, v26);
      }
      else if ( v10 == 2 )
      {
        free(*(_QWORD *)(result + 16), a1, a2, a3, a4, a5, a6, a7, a8);
        result = free(*(_QWORD *)(StatusReg + 96), v11, v12, v13, v14, v15, v16, v17, v18);
      }
      else
      {
        result = free(result, a1, a2, a3, a4, a5, a6, a7, a8);
      }
    }
    *(_QWORD *)(StatusReg + 96) = 0;
  }
  return result;
}
