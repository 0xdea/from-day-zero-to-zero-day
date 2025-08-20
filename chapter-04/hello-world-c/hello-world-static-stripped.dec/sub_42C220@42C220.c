__int64 __fastcall sub_42C220(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _QWORD *a5,
        __int64 a6,
        __int64 a7,
        _QWORD *a8)
{
  __int64 *v10; // x0
  __int64 v12; // x2
  unsigned __int64 v13; // x8
  int v14; // w0

  v10 = (__int64 *)a1[7];
  v12 = *v10;
  v13 = v10[5];
  a1[8] = a6;
  a1[9] = a7;
  a1[12] = a2;
  if ( v12 )
    v13 ^= qword_48DD68;
  v14 = ((__int64 (*)(void))v13)();
  *a5 = a3;
  *a8 = a1[8];
  if ( v14 == 5 )
    return 1;
  if ( v14 <= 5 )
    return 2 * (unsigned int)((v14 & 0xFFFFFFFB) != 0);
  return (unsigned int)(v14 != 7) + 1;
}
