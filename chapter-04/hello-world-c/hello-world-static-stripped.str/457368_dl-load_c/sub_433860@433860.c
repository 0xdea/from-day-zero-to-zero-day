__int64 __fastcall sub_433860(__int64 a1, __int64 a2)
{
  __int64 v4; // x0
  __int64 result; // x0
  __int64 v6; // x20
  __int64 v7; // x3
  __int64 v8; // x4
  __int64 v9; // x5
  __int64 v10; // x22
  long double v11; // q0
  long double v12; // q1
  long double v13; // q2
  long double v14; // q3
  long double v15; // q4
  long double v16; // q5
  long double v17; // q6
  long double v18; // q7
  __int64 v19; // x1
  __int64 v20; // x0
  unsigned __int64 v21; // x0
  __int64 v22; // x22
  unsigned __int64 v23; // x1

  v4 = sub_433614(a2);
  if ( !v4 )
    return sub_42F380(a2);
  v6 = v4;
  v10 = ifunc_40DFD0(a2);
  v19 = *(_QWORD *)(a1 + 912);
  if ( !v19 )
  {
    if ( **(_BYTE **)(a1 + 8) )
      sub_41F250(
        "(l)->l_name[0] == '\\0' || IS_RTLD (l)",
        (__int64)"dl-load.c",
        0x192u,
        (__int64)"expand_dynamic_string_token");
    v20 = sub_437AD0(**(unsigned __int8 **)(a1 + 8));
    *(_QWORD *)(a1 + 912) = v20;
    if ( (unsigned __int64)(v20 - 1) <= 0xFFFFFFFFFFFFFFFDLL )
      goto LABEL_6;
LABEL_15:
    v21 = 0;
    goto LABEL_7;
  }
  if ( v19 == -1 )
    goto LABEL_15;
  v20 = *(_QWORD *)(a1 + 912);
LABEL_6:
  v21 = ifunc_40DFD0(v20);
LABEL_7:
  v22 = v10 + 1;
  v23 = qword_4967A8;
  if ( (unsigned __int64)qword_4967A8 < 0x15 )
    v23 = 21;
  if ( v23 < v21 )
    v23 = v21;
  result = sub_40B890(
             v22 + (v23 - 4) * v6,
             v11,
             v12,
             v13,
             v14,
             v15,
             v16,
             v17,
             v18,
             v23 - 4,
             (__int16 *)0x15,
             v7,
             v8,
             v9);
  if ( result )
    return sub_4336E0(a1, a2, result);
  return result;
}
