unsigned __int8 *__fastcall sub_433860(__int64 a1, unsigned __int8 *a2)
{
  __int64 v4; // x0
  unsigned __int8 *result; // x0
  __int64 v6; // x20
  __int64 v7; // x3
  void *v8; // x4
  void *v9; // x5
  void *v10; // x6
  __int64 v11; // x22
  double v12; // d0
  double v13; // d1
  double v14; // d2
  double v15; // d3
  double v16; // d4
  double v17; // d5
  double v18; // d6
  double v19; // d7
  __int64 v20; // x1
  __int64 v21; // x0
  unsigned __int64 v22; // x0
  __int64 v23; // x22
  unsigned __int64 v24; // x1

  v4 = sub_433614((__int64)a2);
  if ( !v4 )
    return (unsigned __int8 *)sub_42F380((__int64)a2);
  v6 = v4;
  v11 = ifunc_40DFD0(a2);
  v20 = *(_QWORD *)(a1 + 912);
  if ( !v20 )
  {
    if ( **(_BYTE **)(a1 + 8) )
      sub_41F250(
        "(l)->l_name[0] == '\\0' || IS_RTLD (l)",
        (__int64)"dl-load.c",
        0x192u,
        (__int64)"expand_dynamic_string_token");
    v21 = sub_437AD0();
    *(_QWORD *)(a1 + 912) = v21;
    if ( (unsigned __int64)(v21 - 1) <= 0xFFFFFFFFFFFFFFFDLL )
      goto LABEL_6;
LABEL_15:
    v22 = 0;
    goto LABEL_7;
  }
  if ( v20 == -1 )
    goto LABEL_15;
  v21 = *(_QWORD *)(a1 + 912);
LABEL_6:
  v22 = ifunc_40DFD0(v21);
LABEL_7:
  v23 = v11 + 1;
  v24 = qword_4967A8;
  if ( (unsigned __int64)qword_4967A8 < 0x15 )
    v24 = 21;
  if ( v24 < v22 )
    v24 = v22;
  result = (unsigned __int8 *)sub_40B890(
                                v23 + (v24 - 4) * v6,
                                v12,
                                v13,
                                v14,
                                v15,
                                v16,
                                v17,
                                v18,
                                v19,
                                v24 - 4,
                                21,
                                v7,
                                v8,
                                v9,
                                v10);
  if ( result )
    return sub_4336E0(a1, a2, result);
  return result;
}
