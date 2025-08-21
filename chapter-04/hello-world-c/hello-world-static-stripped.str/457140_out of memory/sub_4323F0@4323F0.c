char *__fastcall sub_4323F0(char **a1, char *a2, __int64 a3)
{
  char *v5; // x19
  __int64 v6; // x24
  __int64 v7; // x22
  __int64 v8; // x1
  __int16 *v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  __int64 v12; // x5
  long double v13; // q0
  long double v14; // q1
  long double v15; // q2
  long double v16; // q3
  long double v17; // q4
  long double v18; // q5
  long double v19; // q6
  long double v20; // q7
  __int64 v21; // x0
  char *v22; // x21
  __int64 v23; // x0
  char *result; // x0
  char *v25; // x1

  if ( a2 )
  {
    v5 = a2;
    v6 = ifunc_40DFD0(a2) + 1;
  }
  else
  {
    v6 = 1;
    v5 = "";
  }
  v7 = ifunc_40DFD0(a3) + 1;
  v21 = sub_40B890(v7 + v6, v13, v14, v15, v16, v17, v18, v19, v20, v8, v9, v10, v11, v12);
  v22 = (char *)v21;
  if ( v21 )
  {
    v23 = j_ifunc_40DC90(v21, a3, v7);
    result = (char *)j_ifunc_40DC90(v23 + v7, v5, v6);
    v25 = v22;
  }
  else
  {
    result = "";
    v25 = "out of memory";
  }
  *a1 = result;
  a1[1] = v25;
  a1[2] = v22;
  return result;
}
