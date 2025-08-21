void **__fastcall sub_412AD0(
        void **a1,
        __int64 a2,
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
  void **v15; // x19
  __int64 v16; // x20
  _QWORD *v17; // x0

  if ( a1 )
  {
    v15 = a1;
    v16 = qword_4921A0 + 14;
    v17 = (_QWORD *)sub_40CCB0(qword_4921A0 + 16, 0x10u, a8, a9, a10, a11, a12, a13, a14, a15, a3, a4, a5, a6, a7);
    if ( v17 )
    {
      *v17 = v16;
      *v15 = v17 + 2;
LABEL_4:
      sub_412480(v15, 1u);
      return v15;
    }
  }
  else
  {
    v15 = (void **)sub_4129E0(a8, a9, a10, a11, a12, a13, a14, a15, 0, a2, a3, a4, a5, a6, a7);
    if ( v15 )
      goto LABEL_4;
  }
  return 0;
}
