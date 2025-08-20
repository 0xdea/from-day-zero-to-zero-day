__int64 __fastcall sub_42EB70(
        unsigned __int64 *a1,
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
  unsigned __int64 v15; // x24
  unsigned __int64 *v17; // x21
  unsigned __int64 v18; // x23
  unsigned __int64 v19; // x22
  __int64 v20; // x20
  __int64 result; // x0
  __int64 v22; // x0

  v15 = a1[1];
  v17 = a1 + 2;
  v18 = *a1;
  v19 = 2 * v15;
  if ( (unsigned __int64 *)*a1 == a1 + 2 )
  {
    v22 = sub_40B890(2 * v15, a8, a9, a10, a11, a12, a13, a14, a15, a2, a3, a4, a5, a6, a7);
    v20 = v22;
    if ( v22 )
    {
      sub_412300(v22, v18, v15, 2 * v15);
      goto LABEL_4;
    }
    return 0;
  }
  if ( v15 > v19 )
  {
    *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40) = 12;
LABEL_9:
    sub_40C1A0(v18, a8, a9, a10, a11, a12, a13, a14, a15);
    *a1 = (unsigned __int64)v17;
    a1[1] = 1024;
    return 0;
  }
  v20 = sub_40C434(*a1, 2 * v15, a8, a9, a10, a11, a12, a13, a14, a15, a3, a4, a5, a6, a7);
  if ( !v20 )
  {
    v18 = *a1;
    goto LABEL_9;
  }
LABEL_4:
  result = 1;
  *a1 = v20;
  a1[1] = v19;
  return result;
}
