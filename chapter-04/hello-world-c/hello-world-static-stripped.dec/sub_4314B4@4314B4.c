_QWORD *__fastcall sub_4314B4(
        __int64 a1,
        unsigned __int64 *a2,
        unsigned __int64 a3,
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
  __int64 *v15; // x21
  unsigned __int64 v16; // x1
  __int64 (__fastcall *v18)(__int64, _QWORD); // x27
  int v19; // w28
  int v20; // w24
  unsigned __int64 *v21; // x26
  __int64 *v22; // x23
  _QWORD *v23; // x20
  int v24; // w19
  __int64 *v25; // x22
  __int64 v26; // x1
  __int64 v27; // x0
  __int64 v29; // x0
  __int64 v30; // x20

  if ( !a2 )
    return 0;
  v15 = (__int64 *)a2;
  v16 = *a2;
  v18 = (__int64 (__fastcall *)(__int64, _QWORD))a3;
  if ( v16 > 1 )
  {
    a3 = v16 & 0xFFFFFFFFFFFFFFFELL;
    *(_QWORD *)((v16 & 0xFFFFFFFFFFFFFFFELL) + 8) &= ~1uLL;
  }
  v19 = 0;
  v20 = 0;
  v21 = 0;
  v22 = 0;
  while ( 1 )
  {
    v23 = (_QWORD *)(v16 & 0xFFFFFFFFFFFFFFFELL);
    if ( v16 <= 1 )
      break;
    v24 = v18(a1, *v23);
    if ( !v24 )
      return v23;
    v25 = v23 + 2;
    sub_431320(*v15, v22, v21, v20, v19, 0);
    if ( v24 < 0 )
    {
      v25 = v23 + 1;
      v19 = v20;
      v21 = (unsigned __int64 *)v22;
      if ( v23[1] <= 1u )
      {
LABEL_11:
        v27 = sub_40B890(0x18u, a8, a9, a10, a11, a12, a13, a14, a15, v26, a3, a4, a5, a6, a7);
        v23 = (_QWORD *)v27;
        if ( !v27 )
          return 0;
        *v25 = v27 | *v25 & 1;
        *(_QWORD *)v27 = a1;
        *(_OWORD *)(v27 + 8) = xmmword_45A920;
        if ( v15 != v25 )
        {
          sub_431320(*v25, v15, (unsigned __int64 *)v22, v24, v20, 1);
          return v23;
        }
        return v23;
      }
    }
    else
    {
      v19 = v20;
      v21 = (unsigned __int64 *)v22;
      if ( v23[2] <= 1u )
        goto LABEL_11;
    }
    v16 = *v25;
    v22 = v15;
    v20 = v24;
    v15 = v25;
  }
  v29 = sub_40B890(0x18u, a8, a9, a10, a11, a12, a13, a14, a15, v16, a3, a4, a5, a6, a7);
  v30 = v29;
  if ( !v29 )
    return 0;
  *v15 = v29 | *v15 & 1;
  *(_QWORD *)v29 = a1;
  *(_OWORD *)(v29 + 8) = xmmword_45A920;
  return (_QWORD *)v30;
}
