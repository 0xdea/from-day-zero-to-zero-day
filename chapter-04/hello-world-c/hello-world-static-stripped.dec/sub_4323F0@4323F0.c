char *__fastcall sub_4323F0(char **a1, char *a2, __int64 a3)
{
  char *v5; // x19
  __int64 v6; // x24
  __int64 v7; // x22
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x3
  void *v11; // x4
  void *v12; // x5
  void *v13; // x6
  double v14; // d0
  double v15; // d1
  double v16; // d2
  double v17; // d3
  double v18; // d4
  double v19; // d5
  double v20; // d6
  double v21; // d7
  __int64 v22; // x0
  const char *v23; // x21
  __int64 v24; // x0
  char *result; // x0
  const char *v26; // x1

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
  v22 = sub_40B890(v7 + v6, v14, v15, v16, v17, v18, v19, v20, v21, v8, v9, v10, v11, v12, v13);
  v23 = (const char *)v22;
  if ( v22 )
  {
    v24 = j_ifunc_40DC90(v22, a3, v7);
    result = (char *)j_ifunc_40DC90(v24 + v7, v5, v6);
    v26 = v23;
  }
  else
  {
    result = "";
    v26 = "out of memory";
  }
  *a1 = result;
  a1[1] = (char *)v26;
  a1[2] = (char *)v23;
  return result;
}
