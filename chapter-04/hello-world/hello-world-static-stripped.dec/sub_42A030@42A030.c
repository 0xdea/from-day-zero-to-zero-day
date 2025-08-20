_QWORD *__fastcall sub_42A030(
        unsigned int *a1,
        double a2,
        double a3,
        double a4,
        double a5,
        double a6,
        double a7,
        double a8,
        double a9)
{
  unsigned __int64 *v9; // x1
  unsigned int v10; // w2
  unsigned __int64 v12; // x0
  _QWORD *result; // x0
  unsigned __int64 v14; // x3
  unsigned __int64 v15; // x4
  unsigned __int64 v16; // x2

  v9 = (unsigned __int64 *)*((_QWORD *)a1 + 20);
  v10 = *a1;
  v12 = v9[8];
  if ( (v10 & 0x100) != 0 )
  {
    v14 = v9[2];
    v15 = v9[10];
    *a1 = v10 & 0xFFFFFEFF;
    v16 = v9[1];
    *v9 = v12;
    v9[1] = v15;
    v9[2] = v12;
    v9[8] = v14;
    v9[10] = v16;
    sub_40C1A0(v14, a2, a3, a4, a5, a6, a7, a8, a9);
  }
  else
  {
    sub_40C1A0(v12, a2, a3, a4, a5, a6, a7, a8, a9);
  }
  result = (_QWORD *)*((_QWORD *)a1 + 20);
  result[8] = 0;
  result[9] = 0;
  result[10] = 0;
  return result;
}
