__int64 __fastcall sub_412C90(
        __int64 result,
        char a2,
        long double a3,
        long double a4,
        long double a5,
        long double a6,
        long double a7,
        long double a8,
        long double a9,
        long double a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14)
{
  unsigned __int64 v14; // x19
  __int64 v16; // x21
  __int64 i; // x20
  __int64 v18; // x1
  __int64 v19; // x19
  _QWORD *v20; // x0
  long double v21; // q0
  unsigned __int64 v22; // x22

  v14 = *(_QWORD *)(result + 1176);
  v16 = result;
  for ( i = qword_4921A8; ; i = *(_QWORD *)(i + 8) )
  {
    v18 = *(_QWORD *)i;
    if ( *(_QWORD *)i > v14 )
      goto LABEL_5;
    v14 -= v18;
    if ( !*(_QWORD *)(i + 8) )
      break;
  }
  if ( v14 )
  {
    v21 = sub_41F250(
            "idx == 0",
            "dl-tls.c",
            1044,
            "_dl_add_to_slotinfo",
            a13,
            a14,
            *(double *)&a3,
            *(double *)&a4,
            *(double *)&a5,
            *(double *)&a6,
            *(double *)&a7,
            *(double *)&a8,
            *(double *)&a9,
            *(double *)&a10);
LABEL_12:
    sub_432250(12, "dlopen", 0, "cannot create TLS data structures", v21);
  }
  v20 = (_QWORD *)sub_40B890(0x3F0u, a3, a4, a5, a6, a7, a8, a9, a10, v18, 0, a12, a13, a14);
  v22 = (unsigned __int64)v20;
  if ( !v20 )
    goto LABEL_12;
  *v20 = 62;
  v20[1] = 0;
  result = ifunc_40DE70(v20 + 2, 0, 992);
  atomic_store(v22, (unsigned __int64 *)(i + 8));
  i = v22;
LABEL_5:
  if ( (a2 & 1) != 0 )
  {
    v19 = i + 16 * v14;
    *(_QWORD *)(v19 + 24) = v16;
    result = qword_4921D0 + 1;
    *(_QWORD *)(v19 + 16) = qword_4921D0 + 1;
  }
  return result;
}
