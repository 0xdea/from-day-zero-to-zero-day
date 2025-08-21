__int64 __fastcall _wcrtomb_internal(__int64 a1, int a2, void *a3, unsigned __int64 a4, long double a5)
{
  unsigned __int64 StatusReg; // x21
  __int64 v8; // x0
  __int64 *v9; // x20
  __int64 v10; // x1
  _QWORD *v11; // x0
  unsigned __int64 v12; // x8
  int v13; // w0
  _BYTE *v14; // x0
  unsigned __int64 v15; // x20
  __int64 v17; // x0
  int v18; // [xsp+Ch] [xbp-64h] BYREF
  int *v19; // [xsp+20h] [xbp-50h]
  _BYTE *v20; // [xsp+28h] [xbp-48h]
  __int64 *v21; // [xsp+30h] [xbp-40h]
  __int64 v22; // [xsp+38h] [xbp-38h]
  int v23; // [xsp+40h] [xbp-30h]
  void *v24; // [xsp+48h] [xbp-28h]
  _BYTE v25[16]; // [xsp+58h] [xbp-18h] BYREF
  __int64 v26; // [xsp+68h] [xbp-8h] BYREF

  StatusReg = _ReadStatusReg(TPIDR_EL0);
  *(_QWORD *)&a5 = 1;
  if ( !a3 )
    a3 = &state;
  v8 = **(_QWORD **)(StatusReg + 16);
  v18 = a2;
  if ( !a1 )
    a2 = 0;
  v9 = *(__int64 **)(v8 + 32);
  v18 = a2;
  v10 = *v9;
  v20 = v25;
  v21 = &v26;
  v23 = 1;
  v24 = a3;
  v22 = 1;
  if ( !v10 )
  {
    _wcsmbs_load_conv(a5);
    v10 = *v9;
  }
  v11 = *(_QWORD **)(v10 + 16);
  v12 = v11[5];
  if ( *v11 )
    v12 ^= _pointer_chk_guard_local;
  if ( v18 )
  {
    v19 = &v18;
    v13 = ((__int64 (__fastcall *)(long double))v12)(a5);
    if ( (v13 & 0xFFFFFFFB) == 0 )
      goto LABEL_12;
  }
  else
  {
    v13 = ((__int64 (__fastcall *)(long double))v12)(a5);
    if ( (v13 & 0xFFFFFFFB) == 0 )
    {
      v14 = v20++;
      *v14 = 0;
      goto LABEL_12;
    }
  }
  if ( (unsigned int)(v13 - 6) <= 1 )
  {
    v15 = -1;
    *(_DWORD *)(StatusReg + 40) = 84;
    return v15;
  }
  if ( v13 != 5 )
    _libc_assert_fail(
      "status == __GCONV_OK || status == __GCONV_EMPTY_INPUT || status == __GCONV_ILLEGAL_INPUT || status == __GCONV_INCO"
      "MPLETE_INPUT || status == __GCONV_FULL_OUTPUT",
      (__int64)"wcrtomb.c",
      0x5Eu,
      (__int64)"__wcrtomb_internal");
LABEL_12:
  v15 = v20 - v25;
  if ( !a1 )
    return v15;
  if ( v15 <= a4 )
  {
    j_memcpy(a1);
    return v15;
  }
  v17 = _chk_fail();
  return wcrtomb(v17);
}
