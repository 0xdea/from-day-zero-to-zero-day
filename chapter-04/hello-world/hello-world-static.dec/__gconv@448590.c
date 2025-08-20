__int64 __fastcall _gconv(_QWORD *a1, __int64 *a2, unsigned __int64 a3, __int64 *a4, __int64 a5, _QWORD *a6)
{
  unsigned __int64 v6; // x21
  __int64 v11; // x2
  __int64 *v12; // x0
  _QWORD *v13; // x1
  __int64 v14; // x3
  unsigned __int64 v15; // x22
  __int64 v16; // x28
  unsigned int v17; // w4
  _DWORD *v18; // x1
  unsigned __int64 v19; // x0

  if ( a1 != (_QWORD *)-1LL )
  {
    v6 = *a1 - 1LL;
    if ( !a6 )
      _libc_assert_fail("irreversible != NULL", (__int64)"gconv.c", 0x2Au, (__int64)"__gconv");
    *a6 = 0;
    v11 = 0;
    if ( a4 )
      v11 = *a4;
    v12 = (__int64 *)a1[1];
    v13 = &a1[6 * v6];
    v14 = *v12;
    v15 = v12[5];
    v13[2] = v11;
    v13[3] = a5;
    if ( v14 )
      v15 ^= _pointer_chk_guard_local;
    if ( a2 && (v16 = *a2) != 0 )
    {
      if ( !a4 || !*a4 )
        _libc_assert_fail("outbuf != NULL && *outbuf != NULL", (__int64)"gconv.c", 0x46u, (__int64)"__gconv");
      while ( 1 )
      {
        v17 = ((__int64 (__fastcall *)(__int64 *, _QWORD *))v15)(v12, a1 + 2);
        if ( v17 != 4 )
          break;
        if ( *a2 == v16 )
          break;
        v12 = (__int64 *)a1[1];
        if ( a3 < *a2 + *((int *)v12 + 18) )
          break;
        v16 = *a2;
      }
    }
    else
    {
      v17 = ((__int64 (__fastcall *)(__int64 *, _QWORD *))v15)(v12, a1 + 2);
      if ( !v17 )
      {
        v18 = (_DWORD *)a1 + 9;
        v19 = 0;
        do
        {
          ++v19;
          *v18 = 0;
          v18 += 12;
        }
        while ( v6 >= v19 );
      }
      if ( !a4 )
        return v17;
    }
    if ( *a4 )
      *a4 = a1[6 * v6 + 2];
    return v17;
  }
  return 8;
}
