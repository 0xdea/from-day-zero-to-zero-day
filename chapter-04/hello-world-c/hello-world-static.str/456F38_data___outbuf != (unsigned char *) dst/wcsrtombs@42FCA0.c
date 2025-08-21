__int64 __fastcall wcsrtombs(_BYTE *a1, _QWORD *a2, __int64 a3, __int64 *a4, long double a5)
{
  __int64 v5; // x25
  __int64 v6; // x26
  unsigned __int64 StatusReg; // x21
  __int64 *v11; // x20
  __int64 v12; // x0
  _QWORD *v13; // x20
  unsigned __int64 v14; // x22
  __int64 v15; // x28
  __int64 v16; // x0
  int v17; // w1
  __int64 result; // x0
  __int64 v19; // x23
  __int64 v20; // x2
  int v21; // w0
  __int64 v22; // [xsp+0h] [xbp-150h] BYREF
  _BYTE v23[8]; // [xsp+8h] [xbp-148h] BYREF
  __int64 v24; // [xsp+10h] [xbp-140h] BYREF
  _BYTE *v25; // [xsp+18h] [xbp-138h] BYREF
  __int64 *v26; // [xsp+20h] [xbp-130h]
  __int64 v27; // [xsp+28h] [xbp-128h]
  int v28; // [xsp+30h] [xbp-120h]
  __int64 *v29; // [xsp+38h] [xbp-118h]
  _BYTE v30[256]; // [xsp+48h] [xbp-108h] BYREF
  __int64 v31; // [xsp+148h] [xbp-8h] BYREF
  __int64 v32; // [xsp+190h] [xbp+40h]
  __int64 v33; // [xsp+198h] [xbp+48h]

  *(_QWORD *)&a5 = 1;
  StatusReg = _ReadStatusReg(TPIDR_EL0);
  if ( !a4 )
    a4 = (__int64 *)&state_0;
  v11 = *(__int64 **)(**(_QWORD **)(StatusReg + 16) + 32LL);
  v12 = *v11;
  v28 = 1;
  v29 = a4;
  v27 = 1;
  if ( !v12 )
  {
    _wcsmbs_load_conv(a5);
    v12 = *v11;
  }
  v13 = *(_QWORD **)(v12 + 16);
  v14 = v13[5];
  if ( *v13 )
    v14 ^= _pointer_chk_guard_local;
  v15 = *a2;
  if ( a1 )
  {
    v16 = wcsnlen(*a2, a3, a5);
    v25 = a1;
    v26 = (__int64 *)&a1[a3];
    v17 = ((__int64 (__fastcall *)(_QWORD *, _BYTE **, _QWORD *, __int64, _QWORD, _BYTE *, _QWORD, __int64))v14)(
            v13,
            &v25,
            a2,
            v15 + 4 * (v16 + 1),
            0,
            v23,
            0,
            1);
    result = v25 - a1;
    if ( (v17 & 0xFFFFFFFB) != 0 )
    {
      if ( (unsigned int)(v17 - 6) > 1 )
      {
        if ( v17 == 5 )
          return result;
        v32 = v5;
        v33 = v6;
LABEL_25:
        _libc_assert_fail(
          "status == __GCONV_OK || status == __GCONV_EMPTY_INPUT || status == __GCONV_ILLEGAL_INPUT || status == __GCONV_"
          "INCOMPLETE_INPUT || status == __GCONV_FULL_OUTPUT",
          (__int64)"wcsrtombs.c",
          0x80u,
          (__int64)"__wcsrtombs");
      }
LABEL_22:
      result = -1;
      *(_DWORD *)(StatusReg + 40) = 84;
      return result;
    }
    if ( !*(v25 - 1) )
    {
      if ( v25 == a1 )
      {
        v32 = v5;
        v33 = v6;
        _libc_assert_fail(
          "data.__outbuf != (unsigned char *) dst",
          (__int64)"wcsrtombs.c",
          0x77u,
          (__int64)"__wcsrtombs");
      }
      if ( *(_DWORD *)v29 )
      {
        v32 = v5;
        v33 = v6;
        _libc_assert_fail("__mbsinit (data.__statep)", (__int64)"wcsrtombs.c", 0x78u, (__int64)"__wcsrtombs");
      }
      --result;
      *a2 = 0;
    }
  }
  else
  {
    v19 = v15 + 4 * (wcslen(*a2, a5) + 1);
    v20 = *v29;
    v22 = v15;
    v24 = v20;
    v26 = &v31;
    v29 = &v24;
    do
    {
      v25 = v30;
      v21 = ((__int64 (__fastcall *)(_QWORD *, _BYTE **, __int64 *, __int64, _QWORD, _BYTE *, _QWORD, __int64))v14)(
              v13,
              &v25,
              &v22,
              v19,
              0,
              v23,
              0,
              1);
      a1 += v25 - v30;
    }
    while ( v21 == 5 );
    if ( (v21 & 0xFFFFFFFB) != 0 )
    {
      if ( (unsigned int)(v21 - 6) > 1 )
        goto LABEL_25;
      goto LABEL_22;
    }
    result = (__int64)(a1 - 1);
    if ( *(v25 - 1) )
      _libc_assert_fail("data.__outbuf[-1] == '\\0'", (__int64)"wcsrtombs.c", 0x5Bu, (__int64)"__wcsrtombs");
  }
  return result;
}
