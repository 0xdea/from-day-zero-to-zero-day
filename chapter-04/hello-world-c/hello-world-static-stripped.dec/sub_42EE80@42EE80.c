__int64 __fastcall sub_42EE80(unsigned __int8 *a1, int a2, unsigned __int64 *a3, __int64 *a4)
{
  unsigned __int8 *v5; // x19
  __int64 v8; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  void *v12; // x4
  void *v13; // x5
  void *v14; // x6
  double v15; // d0
  double v16; // d1
  double v17; // d2
  double v18; // d3
  double v19; // d4
  double v20; // d5
  double v21; // d6
  double v22; // d7
  __int64 v23; // x21
  __int64 result; // x0
  unsigned __int64 v25; // x0
  double v26; // d0
  double v27; // d1
  double v28; // d2
  double v29; // d3
  double v30; // d4
  double v31; // d5
  double v32; // d6
  double v33; // d7
  _BYTE *v34; // x6
  int v35; // w4

  v5 = a1;
  v8 = ifunc_40DFD0(a1);
  if ( !v8 )
  {
    v23 = 0;
    *a3 = 0;
    goto LABEL_3;
  }
  v23 = v8 + 1;
  v25 = sub_40B890(v8 + 1, v15, v16, v17, v18, v19, v20, v21, v22, v9, v10, v11, v12, v13, v14);
  *a3 = v25;
  if ( !v25 )
    return 12;
  v34 = (_BYTE *)v25;
  do
  {
    while ( 1 )
    {
      v35 = *v5;
      if ( v35 == a2 )
        break;
      *v34++ = v35;
LABEL_8:
      ++v5;
      if ( !v35 )
        goto LABEL_13;
    }
    if ( v25 >= (unsigned __int64)v34 || !*(v34 - 1) )
    {
      --v23;
      goto LABEL_8;
    }
    *v34 = 0;
    ++v5;
    ++v34;
  }
  while ( v35 );
LABEL_13:
  if ( !v23 )
  {
    sub_40C1A0(v25, v26, v27, v28, v29, v30, v31, v32, v33);
    *a3 = 0;
  }
LABEL_3:
  result = 0;
  *a4 = v23;
  return result;
}
