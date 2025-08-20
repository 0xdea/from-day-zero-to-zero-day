unsigned __int64 __fastcall sub_433530(unsigned __int64 *a1, unsigned __int64 *a2)
{
  unsigned __int64 *v3; // x19
  unsigned __int64 result; // x0
  __int64 v5; // x0
  __int64 v6; // x22
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x3
  void *v10; // x4
  void *v11; // x5
  void *v12; // x6
  double v13; // d0
  double v14; // d1
  double v15; // d2
  double v16; // d3
  double v17; // d4
  double v18; // d5
  double v19; // d6
  double v20; // d7
  __int64 v21; // x0
  unsigned __int64 v22; // x21
  __int64 v23; // x0
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  void *v27; // x4
  void *v28; // x5
  void *v29; // x6
  double v30; // d0
  double v31; // d1
  double v32; // d2
  double v33; // d3
  double v34; // d4
  double v35; // d5
  double v36; // d6
  double v37; // d7

  v3 = a1;
  if ( !a1 )
  {
    v23 = ifunc_40DFD0(a2);
    if ( sub_40B890(v23 + 25, v30, v31, v32, v33, v34, v35, v36, v37, v24, v25, v26, v27, v28, v29) )
      sub_41F250("lastp != NULL", (__int64)"dl-load.c", 0x1B6u, (__int64)"add_name_to_object");
    goto LABEL_10;
  }
  while ( 1 )
  {
    result = sub_42F240(a2, *v3);
    if ( !(_DWORD)result )
      return result;
    if ( !v3[1] )
      break;
    v3 = (unsigned __int64 *)v3[1];
  }
  v5 = ifunc_40DFD0(a2);
  v6 = v5 + 1;
  v21 = sub_40B890(v5 + 25, v13, v14, v15, v16, v17, v18, v19, v20, v7, v8, v9, v10, v11, v12);
  v22 = v21;
  if ( !v21 )
LABEL_10:
    sub_432250(12, (const char *)a2, 0, "cannot allocate name record");
  result = j_ifunc_40DC90(v21 + 24, a2, v6);
  *(_QWORD *)v22 = result;
  *(_QWORD *)(v22 + 8) = 0;
  *(_DWORD *)(v22 + 16) = 0;
  atomic_store(v22, v3 + 1);
  return result;
}
