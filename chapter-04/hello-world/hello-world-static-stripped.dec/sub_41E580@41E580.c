__int64 __fastcall sub_41E580(int a1, char **a2)
{
  _BOOL4 v4; // w21
  __int64 v5; // x25
  __int64 v6; // x28
  char *v7; // x27
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x3
  void *v11; // x4
  void *v12; // x5
  void *v13; // x6
  __int64 v14; // x26
  double v15; // d0
  double v16; // d1
  double v17; // d2
  double v18; // d3
  double v19; // d4
  double v20; // d5
  double v21; // d6
  double v22; // d7
  unsigned __int64 v23; // x19
  __int64 v24; // x19
  const char *v25; // x21
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  void *v29; // x4
  void *v30; // x5
  void *v31; // x6
  double v32; // d0
  double v33; // d1
  double v34; // d2
  double v35; // d3
  double v36; // d4
  double v37; // d5
  double v38; // d6
  double v39; // d7
  __int64 v41; // x0
  __int64 v42; // x21
  __int64 v43; // x19
  char *v44; // x27
  __int64 v45; // x1
  _BYTE *v46; // x0
  _BYTE *v47; // x1
  unsigned __int64 v48; // x26
  __int64 v49; // x0

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
    v14 = ifunc_40DFD0(v7);
    v23 = byte_456930[v5] + 1LL + v14 + v6;
    if ( v4 )
    {
      v8 = (__int64)*a2;
      if ( *a2 != v7 )
        v4 = sub_42F240(v7, v8) == 0;
    }
    ++v5;
    v6 = v23 + 1;
  }
  while ( v5 != 13 );
  if ( v4 )
  {
    v24 = (__int64)*a2;
    v25 = "C";
    if ( !(unsigned int)sub_42F240(*a2, "C") || !(unsigned int)sub_42F240(v24, "POSIX") )
      return (__int64)v25;
    v48 = v14 + 1;
    v49 = sub_40B890(v48, v32, v33, v34, v35, v36, v37, v38, v39, v26, v27, v28, v29, v30, v31);
    if ( v49 )
      return sub_412300(v49, v24, v48, v48);
    return 0;
  }
  v41 = sub_40B890(v23, v15, v16, v17, v18, v19, v20, v21, v22, v8, v9, v10, v11, v12, v13);
  v42 = v41;
  if ( !v41 )
    return 0;
  v43 = 0;
  do
  {
    if ( v43 == 6 )
      v43 = 7;
    if ( a1 == 6 )
    {
      v44 = a2[v43];
    }
    else if ( a1 == (_DWORD)v43 )
    {
      v44 = *a2;
    }
    else
    {
      v44 = off_4918A0[v43];
    }
    v45 = (unsigned __int8)asc_45B298[v43++];
    v46 = (_BYTE *)sub_42EFC0(v41, &aLcCollate[v45]);
    *v46 = 61;
    v47 = (_BYTE *)sub_42EFC0(v46 + 1, v44);
    *v47 = 59;
    v41 = (__int64)(v47 + 1);
  }
  while ( v43 != 13 );
  *v47 = 0;
  return v42;
}
