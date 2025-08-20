unsigned __int64 __fastcall sub_4129E0(
        double a1,
        double a2,
        double a3,
        double a4,
        double a5,
        double a6,
        double a7,
        double a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        void *a13,
        void *a14,
        void *a15)
{
  unsigned __int64 v15; // x21
  __int64 v16; // x0
  unsigned __int64 v17; // x20
  unsigned __int64 v18; // x19
  __int64 v19; // x21
  __int64 v20; // x2
  __int64 v21; // x3
  void *v22; // x4
  void *v23; // x5
  void *v24; // x6
  double v25; // d0
  double v26; // d1
  double v27; // d2
  double v28; // d3
  double v29; // d4
  double v30; // d5
  double v31; // d6
  double v32; // d7
  _QWORD *v33; // x0
  double v34; // d0
  double v35; // d1
  double v36; // d2
  double v37; // d3
  double v38; // d4
  double v39; // d5
  double v40; // d6
  double v41; // d7

  v15 = qword_4921C0;
  v16 = sub_40B890(
          qword_4921C0 + qword_4921B0 + 1864,
          a1,
          a2,
          a3,
          a4,
          a5,
          a6,
          a7,
          a8,
          (__int64)&qword_4921C0,
          a11,
          a12,
          a13,
          a14,
          a15);
  if ( v16 )
  {
    v17 = v16;
    v18 = (v16 + v15 + 1863) / v15 * v15;
    ifunc_40DE70(v18 - 1856, 0, 1872);
    *(_QWORD *)(v18 - 1864) = v17;
    v19 = qword_4921A0 + 14;
    v33 = (_QWORD *)sub_40CCB0(
                      qword_4921A0 + 16,
                      0x10u,
                      v25,
                      v26,
                      v27,
                      v28,
                      v29,
                      v30,
                      v31,
                      v32,
                      v20,
                      v21,
                      v22,
                      v23,
                      v24);
    if ( v33 )
    {
      *v33 = v19;
      *(_QWORD *)v18 = v33 + 2;
      return v18;
    }
    sub_40C1A0(v17, v34, v35, v36, v37, v38, v39, v40, v41);
  }
  return 0;
}
