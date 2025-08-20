__int64 __fastcall sub_42EC30(
        unsigned __int64 *a1,
        unsigned __int64 a2,
        __int64 a3,
        double a4,
        double a5,
        double a6,
        double a7,
        double a8,
        double a9,
        double a10,
        double a11,
        __int64 a12,
        void *a13,
        void *a14,
        void *a15)
{
  __int64 v15; // x3
  unsigned __int64 v16; // x20
  bool v18; // zf
  __int64 v19; // x0
  unsigned __int64 v21; // x0
  unsigned __int64 *v22; // x20
  unsigned __int64 StatusReg; // x1

  v15 = a2 | a3;
  v16 = a2 * a3;
  if ( (a2 | a3) >> 32 )
    v18 = a2 == 0;
  else
    v18 = 1;
  if ( v18 || (a2 = v16 / a2, a2 == a3) )
  {
    if ( a1[1] < v16 )
    {
      if ( (unsigned __int64 *)*a1 != a1 + 2 )
        sub_40C1A0(*a1, a4, a5, a6, a7, a8, a9, a10, a11);
      v19 = sub_40B890(v16, a4, a5, a6, a7, a8, a9, a10, a11, a2, a3, v15, a13, a14, a15);
      if ( !v19 )
      {
        *a1 = (unsigned __int64)(a1 + 2);
        a1[1] = 1024;
        return 0;
      }
      *a1 = v19;
      a1[1] = v16;
    }
    return 1;
  }
  else
  {
    v22 = a1 + 2;
    v21 = *a1;
    if ( (unsigned __int64 *)v21 != v22 )
      sub_40C1A0(v21, a4, a5, a6, a7, a8, a9, a10, a11);
    StatusReg = _ReadStatusReg(TPIDR_EL0);
    *a1 = (unsigned __int64)v22;
    a1[1] = 1024;
    *(_DWORD *)(StatusReg + 40) = 12;
    return 0;
  }
}
