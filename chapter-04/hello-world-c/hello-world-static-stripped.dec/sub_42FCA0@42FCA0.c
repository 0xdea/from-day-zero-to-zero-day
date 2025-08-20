__int64 __fastcall sub_42FCA0(_BYTE *a1, __int64 *a2, __int64 a3, __int64 *a4, long double a5)
{
  __int64 v5; // x25
  __int64 v6; // x26
  unsigned __int64 StatusReg; // x21
  __int64 *v9; // x7
  __int64 v11; // x5
  __int64 *v13; // x20
  __int64 v14; // x0
  _QWORD *v15; // x20
  unsigned __int64 v16; // x22
  __int64 v17; // x28
  __int64 v18; // x0
  int v19; // w1
  __int64 result; // x0
  __int64 v21; // x23
  __int64 v22; // x2
  int v23; // w0
  __int64 v24; // [xsp+0h] [xbp-150h] BYREF
  _BYTE v25[8]; // [xsp+8h] [xbp-148h] BYREF
  __int64 v26; // [xsp+10h] [xbp-140h] BYREF
  _BYTE *v27; // [xsp+18h] [xbp-138h] BYREF
  __int64 *v28; // [xsp+20h] [xbp-130h]
  __int64 v29; // [xsp+28h] [xbp-128h]
  int v30; // [xsp+30h] [xbp-120h]
  __int64 *v31; // [xsp+38h] [xbp-118h]
  _BYTE v32[256]; // [xsp+48h] [xbp-108h] BYREF
  __int64 v33; // [xsp+148h] [xbp-8h] BYREF
  __int64 v34; // [xsp+190h] [xbp+40h]
  __int64 v35; // [xsp+198h] [xbp+48h]

  *(_QWORD *)&a5 = 1;
  StatusReg = _ReadStatusReg(TPIDR_EL0);
  v9 = *(__int64 **)(StatusReg + 16);
  if ( !a4 )
    a4 = (__int64 *)&unk_4969F8;
  v33 = qword_48DD60;
  v11 = *v9;
  v13 = *(__int64 **)(*v9 + 32);
  v14 = *v13;
  v30 = 1;
  v31 = a4;
  v29 = 1;
  if ( !v14 )
  {
    sub_410320(v11);
    v14 = *v13;
  }
  v15 = *(_QWORD **)(v14 + 16);
  v16 = v15[5];
  if ( *v15 )
    v16 ^= qword_48DD68;
  v17 = *a2;
  if ( a1 )
  {
    v18 = wcsnlen(*a2, a3);
    v27 = a1;
    v28 = (__int64 *)&a1[a3];
    v19 = ((__int64 (__fastcall *)(_QWORD *, _BYTE **, __int64 *, __int64, _QWORD, _BYTE *, _QWORD, __int64))v16)(
            v15,
            &v27,
            a2,
            v17 + 4 * (v18 + 1),
            0,
            v25,
            0,
            1);
    result = v27 - a1;
    if ( (v19 & 0xFFFFFFFB) != 0 )
    {
      if ( (unsigned int)(v19 - 6) > 1 )
      {
        if ( v19 == 5 )
          goto LABEL_11;
        v34 = v5;
        v35 = v6;
LABEL_27:
        sub_41F250(
          "status == __GCONV_OK || status == __GCONV_EMPTY_INPUT || status == __GCONV_ILLEGAL_INPUT || status == __GCONV_"
          "INCOMPLETE_INPUT || status == __GCONV_FULL_OUTPUT",
          (__int64)"wcsrtombs.c",
          0x80u,
          (__int64)"__wcsrtombs");
      }
      goto LABEL_23;
    }
    if ( !*(v27 - 1) )
    {
      if ( v27 == a1 )
      {
        v34 = v5;
        v35 = v6;
        sub_41F250("data.__outbuf != (unsigned char *) dst", (__int64)"wcsrtombs.c", 0x77u, (__int64)"__wcsrtombs");
      }
      if ( *(_DWORD *)v31 )
      {
        v34 = v5;
        v35 = v6;
        sub_41F250("__mbsinit (data.__statep)", (__int64)"wcsrtombs.c", 0x78u, (__int64)"__wcsrtombs");
      }
      --result;
      *a2 = 0;
    }
  }
  else
  {
    v21 = v17 + 4 * (((__int64 (__fastcall *)(__int64, long double))loc_443570)(*a2, a5) + 1);
    v22 = *v31;
    v24 = v17;
    v26 = v22;
    v28 = &v33;
    v31 = &v26;
    do
    {
      v27 = v32;
      v23 = ((__int64 (__fastcall *)(_QWORD *, _BYTE **, __int64 *, __int64, _QWORD, _BYTE *, _QWORD, __int64))v16)(
              v15,
              &v27,
              &v24,
              v21,
              0,
              v25,
              0,
              1);
      a1 += v27 - v32;
    }
    while ( v23 == 5 );
    if ( (v23 & 0xFFFFFFFB) != 0 )
    {
      if ( (unsigned int)(v23 - 6) > 1 )
        goto LABEL_27;
LABEL_23:
      result = -1;
      *(_DWORD *)(StatusReg + 40) = 84;
      goto LABEL_11;
    }
    result = (__int64)(a1 - 1);
    if ( *(v27 - 1) )
      goto LABEL_25;
  }
LABEL_11:
  if ( v33 != qword_48DD60 )
  {
    v34 = v5;
    v35 = v6;
    sub_412340();
LABEL_25:
    sub_41F250("data.__outbuf[-1] == '\\0'", (__int64)"wcsrtombs.c", 0x5Bu, (__int64)"__wcsrtombs");
  }
  return result;
}
