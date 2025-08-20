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
  int v17; // [xsp+Ch] [xbp-94h] BYREF
  int *v18; // [xsp+20h] [xbp-80h]
  _BYTE *v19; // [xsp+28h] [xbp-78h]
  _QWORD *v20; // [xsp+30h] [xbp-70h]
  __int64 v21; // [xsp+38h] [xbp-68h]
  int v22; // [xsp+40h] [xbp-60h]
  void *v23; // [xsp+48h] [xbp-58h]
  _BYTE v24[16]; // [xsp+58h] [xbp-48h] BYREF
  _QWORD var38[9]; // [xsp+68h] [xbp-38h] BYREF

  while ( 1 )
  {
    var38[1] = var38[7];
    var38[2] = var38[8];
    StatusReg = _ReadStatusReg(TPIDR_EL0);
    v5 = a1;
    *(_QWORD *)&a4 = 1;
    if ( !a3 )
      a3 = &unk_4969F0;
    v6 = **(_QWORD **)(StatusReg + 16);
    v17 = a2;
    if ( !v5 )
      a2 = 0;
    v7 = *(__int64 **)(v6 + 32);
    var38[0] = qword_48DD60;
    v17 = a2;
    v8 = *v7;
    v19 = v24;
    v20 = var38;
    v22 = 1;
    v23 = a3;
    v21 = 1;
    if ( !v8 )
    {
      sub_410320(v6);
      v8 = *v7;
    }
    v9 = *(_QWORD **)(v8 + 16);
    v10 = v9[5];
    if ( *v9 )
      v10 ^= qword_48DD68;
    if ( v17 )
    {
      v18 = &v17;
      v11 = ((__int64 (__fastcall *)(long double))v10)(a4);
      if ( (v11 & 0xFFFFFFFB) == 0 )
        goto LABEL_12;
    }
    else
    {
      v11 = ((__int64 (__fastcall *)(long double))v10)(a4);
      if ( (v11 & 0xFFFFFFFB) == 0 )
      {
        v12 = v19++;
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
    v13 = v19 - v24;
    if ( v5 )
      j_ifunc_40DC90(v5, v24, v19 - v24);
LABEL_14:
    if ( var38[0] == qword_48DD60 )
      return v13;
    v15 = sub_412340();
    a1 = sub_431EB0(v15, v16);
  }
}
