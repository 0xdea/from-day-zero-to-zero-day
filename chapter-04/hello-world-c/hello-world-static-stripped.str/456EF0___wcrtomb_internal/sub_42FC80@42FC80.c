__int64 __fastcall sub_42FC80(__int64 a1, int a2, void *a3, long double a4)
{
  unsigned __int64 StatusReg; // x21
  __int64 v5; // x19
  __int64 v6; // x0
  __int64 *v7; // x20
  __int64 v8; // x1
  _QWORD *v9; // x0
  unsigned __int64 v10; // x8
  int v11; // w0
  _BYTE *v12; // x0
  __int64 v13; // x20
  __int64 v15; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  __int64 v20; // x5
  __int64 v21; // x6
  __int64 v22; // x7
  __int64 v23; // [xsp+0h] [xbp-A0h]
  _QWORD v24[3]; // [xsp+8h] [xbp-98h] BYREF
  char *v25; // [xsp+20h] [xbp-80h]
  _QWORD *v26; // [xsp+28h] [xbp-78h]
  __int64 *v27; // [xsp+30h] [xbp-70h]
  __int64 v28; // [xsp+38h] [xbp-68h]
  __int64 v29; // [xsp+40h] [xbp-60h]
  void *v30; // [xsp+48h] [xbp-58h]
  __int64 v31; // [xsp+50h] [xbp-50h]
  _QWORD v32[2]; // [xsp+58h] [xbp-48h] BYREF
  __int64 v33; // [xsp+68h] [xbp-38h] BYREF
  __int64 v34; // [xsp+70h] [xbp-30h]
  __int64 v35; // [xsp+78h] [xbp-28h]
  __int64 vars0; // [xsp+A0h] [xbp+0h]
  __int64 vars8; // [xsp+A8h] [xbp+8h]

  while ( 1 )
  {
    v34 = vars0;
    v35 = vars8;
    StatusReg = _ReadStatusReg(TPIDR_EL0);
    v5 = a1;
    *(_QWORD *)&a4 = 1;
    if ( !a3 )
      a3 = &unk_4969F0;
    v6 = **(_QWORD **)(StatusReg + 16);
    HIDWORD(v24[0]) = a2;
    if ( !v5 )
      a2 = 0;
    v7 = *(__int64 **)(v6 + 32);
    v33 = qword_48DD60;
    HIDWORD(v24[0]) = a2;
    v8 = *v7;
    v26 = v32;
    v27 = &v33;
    LODWORD(v29) = 1;
    v30 = a3;
    v28 = 1;
    if ( !v8 )
    {
      sub_410320(v6);
      v8 = *v7;
    }
    v9 = *(_QWORD **)(v8 + 16);
    v10 = v9[5];
    if ( *v9 )
      v10 ^= qword_48DD68;
    if ( HIDWORD(v24[0]) )
    {
      v25 = (char *)v24 + 4;
      v11 = ((__int64 (__fastcall *)(long double))v10)(a4);
      if ( (v11 & 0xFFFFFFFB) == 0 )
        goto LABEL_12;
    }
    else
    {
      v11 = ((__int64 (__fastcall *)(long double))v10)(a4);
      if ( (v11 & 0xFFFFFFFB) == 0 )
      {
        v12 = v26;
        v26 = (_QWORD *)((char *)v26 + 1);
        *v12 = 0;
        goto LABEL_12;
      }
    }
    if ( (unsigned int)(v11 - 6) <= 1 )
    {
      v13 = -1;
      *(_DWORD *)(StatusReg + 40) = 84;
      goto LABEL_14;
    }
    if ( v11 != 5 )
      sub_41F250(
        "status == __GCONV_OK || status == __GCONV_EMPTY_INPUT || status == __GCONV_ILLEGAL_INPUT || status == __GCONV_IN"
        "COMPLETE_INPUT || status == __GCONV_FULL_OUTPUT",
        (__int64)"wcrtomb.c",
        0x5Eu,
        (__int64)"__wcrtomb_internal");
LABEL_12:
    v13 = (char *)v26 - (char *)v32;
    if ( v5 )
      j_ifunc_40DC90(v5, v32, (char *)v26 - (char *)v32);
LABEL_14:
    if ( v33 == qword_48DD60 )
      return v13;
    v15 = sub_412340();
    a1 = sub_431EB0(
           v15,
           v16,
           v17,
           v18,
           v19,
           v20,
           v21,
           v22,
           v23,
           v24[0],
           v24[1],
           v24[2],
           v25,
           v26,
           v27,
           v28,
           v29,
           v30,
           v31,
           v32[0],
           v32[1],
           v33,
           v34);
  }
}
