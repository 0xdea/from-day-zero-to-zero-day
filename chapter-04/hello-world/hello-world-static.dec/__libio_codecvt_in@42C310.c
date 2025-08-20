__int64 __fastcall _libio_codecvt_in(
        __int64 a1,
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

  v10 = *(__int64 **)a1;
  v12 = *v10;
  v13 = v10[5];
  *(_QWORD *)(a1 + 8) = a6;
  *(_QWORD *)(a1 + 16) = a7;
  *(_QWORD *)(a1 + 40) = a2;
  if ( v12 )
    v13 ^= _pointer_chk_guard_local;
  v14 = ((__int64 (*)(void))v13)();
  *a5 = a3;
  *a8 = *(_QWORD *)(a1 + 8);
  if ( v14 == 5 )
    return 1;
  if ( v14 <= 5 )
    return 2 * (unsigned int)((v14 & 0xFFFFFFFB) != 0);
  return (unsigned int)(v14 != 7) + 1;
}
