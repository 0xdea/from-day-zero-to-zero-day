unsigned __int64 __fastcall sub_420B80(
        unsigned __int64 a1,
        double a2,
        double a3,
        double a4,
        double a5,
        double a6,
        double a7,
        double a8,
        double a9)
{
  __int64 v10; // x19
  unsigned __int64 v11; // x21
  unsigned __int64 *v12; // x22
  unsigned __int64 v13; // x0
  double v14; // d0
  double v15; // d1
  double v16; // d2
  double v17; // d3
  double v18; // d4
  double v19; // d5
  double v20; // d6
  double v21; // d7
  double v22; // d0
  double v23; // d1
  double v24; // d2
  double v25; // d3
  double v26; // d4
  double v27; // d5
  double v28; // d6
  double v29; // d7
  double v30; // d0
  double v31; // d1
  double v32; // d2
  double v33; // d3
  double v34; // d4
  double v35; // d5
  double v36; // d6
  double v37; // d7

  if ( *(_UNKNOWN **)(a1 + 184) != &unk_48C3D8 )
    sub_421BB0();
  if ( *(_QWORD *)(a1 + 120) )
  {
    v10 = 0;
    v11 = 0;
    do
    {
      v12 = (unsigned __int64 *)(*(_QWORD *)(a1 + 112) + v10);
      sub_40C1A0(*v12, a2, a3, a4, a5, a6, a7, a8, a9);
      v13 = v12[2];
      if ( v13 - 1 <= 0xFFFFFFFFFFFFFFFDLL )
        sub_40C1A0(v13, a2, a3, a4, a5, a6, a7, a8, a9);
      if ( v12[1] != -1 )
        sub_43B340();
      ++v11;
      v10 += 24;
    }
    while ( *(_QWORD *)(a1 + 120) > v11 );
  }
  sub_40C1A0(*(_QWORD *)(a1 + 112), a2, a3, a4, a5, a6, a7, a8, a9);
  sub_40C1A0(*(_QWORD *)(a1 + 32), v14, v15, v16, v17, v18, v19, v20, v21);
  if ( *(_DWORD *)(a1 + 8) )
    sub_4118C0(*(void **)a1, *(_QWORD *)(a1 + 16));
  else
    sub_40C1A0(*(_QWORD *)a1, v22, v23, v24, v25, v26, v27, v28, v29);
  return sub_40C1A0(a1, v30, v31, v32, v33, v34, v35, v36, v37);
}
