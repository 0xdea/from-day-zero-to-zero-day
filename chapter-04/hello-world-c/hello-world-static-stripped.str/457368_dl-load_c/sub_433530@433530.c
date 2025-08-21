__int64 __fastcall sub_433530(_QWORD *a1, __int64 a2)
{
  _QWORD *v3; // x19
  __int64 result; // x0
  __int64 v5; // x0
  __int64 v6; // x22
  __int64 v7; // x1
  __int16 *v8; // x2
  __int64 v9; // x3
  __int64 v10; // x4
  __int64 v11; // x5
  long double v12; // q0
  long double v13; // q1
  long double v14; // q2
  long double v15; // q3
  long double v16; // q4
  long double v17; // q5
  long double v18; // q6
  long double v19; // q7
  __int64 v20; // x0
  unsigned __int64 v21; // x21
  __int64 v22; // x0
  __int64 v23; // x1
  __int16 *v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  __int64 v27; // x5
  long double v28; // q0
  long double v29; // q1
  long double v30; // q2
  long double v31; // q3
  long double v32; // q4
  long double v33; // q5
  long double v34; // q6
  long double v35; // q7
  long double v37; // q0

  v3 = a1;
  if ( !a1 )
  {
    v22 = ifunc_40DFD0(a2);
    if ( sub_40B890(v22 + 25, v28, v29, v30, v31, v32, v33, v34, v35, v23, v24, v25, v26, v27) )
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
    v3 = (_QWORD *)v3[1];
  }
  v5 = ifunc_40DFD0(a2);
  v6 = v5 + 1;
  v20 = sub_40B890(v5 + 25, v12, v13, v14, v15, v16, v17, v18, v19, v7, v8, v9, v10, v11);
  v21 = v20;
  if ( !v20 )
LABEL_10:
    sub_432250(12, a2, v37, 0, "cannot allocate name record");
  result = j_ifunc_40DC90(v20 + 24, a2, v6);
  *(_QWORD *)v21 = result;
  *(_QWORD *)(v21 + 8) = 0;
  *(_DWORD *)(v21 + 16) = 0;
  atomic_store(v21, v3 + 1);
  return result;
}
