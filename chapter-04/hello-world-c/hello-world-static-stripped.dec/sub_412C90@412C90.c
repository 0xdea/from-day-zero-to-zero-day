__int64 __fastcall sub_412C90(
        __int64 result,
        char a2,
        double a3,
        double a4,
        double a5,
        double a6,
        double a7,
        double a8,
        double a9,
        double a10,
        __int64 a11,
        __int64 a12,
        void *a13,
        void *a14,
        void *a15)
{
  unsigned __int64 v15; // x19
  __int64 v17; // x21
  __int64 i; // x20
  __int64 v19; // x1
  __int64 v20; // x19
  _QWORD *v21; // x0
  unsigned __int64 v22; // x22

  v15 = *(_QWORD *)(result + 1176);
  v17 = result;
  for ( i = qword_4921A8; ; i = *(_QWORD *)(i + 8) )
  {
    v19 = *(_QWORD *)i;
    if ( *(_QWORD *)i > v15 )
      goto LABEL_5;
    v15 -= v19;
    if ( !*(_QWORD *)(i + 8) )
      break;
  }
  if ( v15 )
  {
    sub_41F250("idx == 0", "dl-tls.c", 1044, "_dl_add_to_slotinfo");
LABEL_12:
    sub_432250(12, "dlopen", 0, "cannot create TLS data structures");
  }
  v21 = (_QWORD *)sub_40B890(0x3F0u, a3, a4, a5, a6, a7, a8, a9, a10, v19, 0, a12, a13, a14, a15);
  v22 = (unsigned __int64)v21;
  if ( !v21 )
    goto LABEL_12;
  *v21 = 62;
  v21[1] = 0;
  result = ifunc_40DE70(v21 + 2, 0, 992);
  atomic_store(v22, (unsigned __int64 *)(i + 8));
  i = v22;
LABEL_5:
  if ( (a2 & 1) != 0 )
  {
    v20 = i + 16 * v15;
    *(_QWORD *)(v20 + 24) = v17;
    result = qword_4921D0 + 1;
    *(_QWORD *)(v20 + 16) = qword_4921D0 + 1;
  }
  return result;
}
