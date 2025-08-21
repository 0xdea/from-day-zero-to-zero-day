__int64 __fastcall sub_447FA0(
        __int64 a1,
        int a2,
        int a3,
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
  __int64 v15; // x19
  unsigned int v16; // w20
  int v19; // w0

  if ( !a1 )
    return 0;
  v15 = a1;
  v16 = 0;
  do
  {
    while ( (*(_WORD *)(v15 + 868) & 0x4000) != 0 )
    {
      v15 = *(_QWORD *)(v15 + 24);
      if ( !v15 )
        return v16;
    }
    v19 = sub_4477A0((__int64 *)v15, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15);
    v15 = *(_QWORD *)(v15 + 24);
    v16 |= v19 != 0;
  }
  while ( v15 );
  return v16;
}
