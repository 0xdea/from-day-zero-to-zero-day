__int64 __fastcall sub_428DF0(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        void *a5,
        void *a6,
        void *a7,
        double a8,
        double a9,
        double a10,
        double a11,
        double a12,
        double a13,
        double a14,
        double a15)
{
  unsigned int v15; // w20
  __int64 v18; // x0
  unsigned __int64 v19; // x19
  __int64 v20; // x21
  __int64 v21; // x3
  void *v22; // x1
  double v24; // d0
  double v25; // d1
  double v26; // d2
  double v27; // d3
  double v28; // d4
  double v29; // d5
  double v30; // d6
  double v31; // d7

  v15 = a3;
  v18 = sub_40B890(0x1D8u, a8, a9, a10, a11, a12, a13, a14, a15, (__int64)a2, a3, a4, a5, a6, a7);
  if ( !v18 )
    return 0;
  *(_QWORD *)(v18 + 136) = v18 + 224;
  v19 = v18;
  v20 = v18;
  sub_405354(v18, 0, 0, v18 + 240, (__int64)&unk_48E0B8);
  *(_QWORD *)(v19 + 216) = &unk_48DEC0;
  sub_401F70(v19);
  if ( !sub_402404(v19, a1, a2, v15) )
  {
    sub_404410((__int64 *)v19);
    sub_40C1A0(v19, v24, v25, v26, v27, v28, v29, v30, v31);
    return 0;
  }
  if ( (*(_DWORD *)(v19 + 116) & 1) != 0 && (*(_DWORD *)v19 & 8) != 0 )
  {
    v21 = *(_QWORD *)(v19 + 160);
    v22 = &unk_48E208;
    if ( *(int *)(v19 + 192) <= 0 )
      v22 = &unk_48E010;
    *(_QWORD *)(v19 + 216) = v22;
    *(_QWORD *)(v21 + 224) = &unk_48E208;
  }
  return v20;
}
