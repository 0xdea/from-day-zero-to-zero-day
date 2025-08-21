const char *__fastcall sub_41E580(int a1, char **a2)
{
  _BOOL4 v4; // w21
  __int64 v5; // x25
  __int64 v6; // x28
  char *v7; // x27
  __int64 v8; // x1
  __int16 *v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  __int64 v12; // x5
  __int64 v13; // x26
  long double v14; // q0
  long double v15; // q1
  long double v16; // q2
  long double v17; // q3
  long double v18; // q4
  long double v19; // q5
  long double v20; // q6
  long double v21; // q7
  unsigned __int64 v22; // x19
  char *v23; // x19
  const char *v24; // x21
  __int64 v25; // x1
  __int16 *v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  __int64 v29; // x5
  long double v30; // q0
  long double v31; // q1
  long double v32; // q2
  long double v33; // q3
  long double v34; // q4
  long double v35; // q5
  long double v36; // q6
  long double v37; // q7
  __int64 v39; // x0
  __int64 v40; // x21
  __int64 v41; // x19
  char *v42; // x27
  __int64 v43; // x1
  _BYTE *v44; // x0
  _BYTE *v45; // x1
  unsigned __int64 v46; // x26
  __int64 v47; // x0

  v4 = 1;
  v5 = 0;
  v6 = 1;
  do
  {
    if ( v5 == 6 )
      v5 = 7;
    if ( a1 == 6 )
    {
      v7 = a2[v5];
    }
    else if ( a1 == (_DWORD)v5 )
    {
      v7 = *a2;
    }
    else
    {
      v7 = off_4918A0[v5];
    }
    v13 = ifunc_40DFD0(v7);
    v22 = byte_456930[v5] + 1LL + v13 + v6;
    if ( v4 )
    {
      v8 = (__int64)*a2;
      if ( *a2 != v7 )
        v4 = sub_42F240(v7, v8) == 0;
    }
    ++v5;
    v6 = v22 + 1;
  }
  while ( v5 != 13 );
  if ( v4 )
  {
    v23 = *a2;
    v24 = "C";
    if ( !(unsigned int)sub_42F240(*a2, "C") || !(unsigned int)sub_42F240(v23, "POSIX") )
      return v24;
    v46 = v13 + 1;
    v47 = sub_40B890(v46, v30, v31, v32, v33, v34, v35, v36, v37, v25, v26, v27, v28, v29);
    if ( v47 )
      return (const char *)sub_412300(v47, v23, v46, v46);
    return 0;
  }
  v39 = sub_40B890(v22, v14, v15, v16, v17, v18, v19, v20, v21, v8, v9, v10, v11, v12);
  v40 = v39;
  if ( !v39 )
    return 0;
  v41 = 0;
  do
  {
    if ( v41 == 6 )
      v41 = 7;
    if ( a1 == 6 )
    {
      v42 = a2[v41];
    }
    else if ( a1 == (_DWORD)v41 )
    {
      v42 = *a2;
    }
    else
    {
      v42 = off_4918A0[v41];
    }
    v43 = (unsigned __int8)asc_45B298[v41++];
    v44 = (_BYTE *)sub_42EFC0(v39, &aLcCollate[v43]);
    *v44 = 61;
    v45 = (_BYTE *)sub_42EFC0(v44 + 1, v42);
    *v45 = 59;
    v39 = (__int64)(v45 + 1);
  }
  while ( v41 != 13 );
  *v45 = 0;
  return (const char *)v40;
}
