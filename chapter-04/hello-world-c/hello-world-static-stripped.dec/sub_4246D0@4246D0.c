__int64 *__fastcall sub_4246D0(__int64 a1, __int64 a2, int a3, int a4, unsigned __int8 a5, long double a6)
{
  unsigned __int64 v9; // x25
  __int64 v10; // x27
  __int64 v11; // x2
  __int64 v12; // x0
  __int64 v13; // x2
  unsigned __int64 v14; // x27
  _BOOL4 v15; // w0
  bool v16; // zf
  __int64 v17; // x20
  __int64 v19; // x2
  __int64 v20; // x0
  __int64 v21; // x28
  __int64 *result; // x0
  bool v23; // zf
  __int64 v24; // x1
  unsigned __int8 *v25; // x2
  unsigned __int8 *v26; // x3
  __int64 *v27; // x20
  unsigned __int8 *v28; // x19
  __int64 v29; // x22
  unsigned __int8 *v30; // x21
  __int64 v31; // x4
  __int64 v32; // x23
  char v33; // w5
  unsigned __int64 StatusReg; // x25
  __int16 v35; // t1
  __int64 *v36; // x2
  __int64 v37; // x1
  _BYTE *v38; // x3
  _BOOL4 v39; // [xsp+50h] [xbp-130h]
  int v40; // [xsp+54h] [xbp-12Ch]
  __int64 v41; // [xsp+58h] [xbp-128h] BYREF
  __int64 v42; // [xsp+68h] [xbp-118h] BYREF
  __int64 v43; // [xsp+70h] [xbp-110h] BYREF
  _BYTE v44[256]; // [xsp+78h] [xbp-108h] BYREF
  __int64 v45; // [xsp+178h] [xbp-8h]

  v40 = a5;
  v41 = a2;
  v45 = qword_48DD60;
  v39 = a4 > 0;
  if ( (v39 & (a5 ^ 1)) != 0 )
  {
    v42 = a2;
    v43 = 0;
    if ( a3 < 0 )
    {
      v10 = sub_42FCA0(0, &v42, 0, &v43, a6);
    }
    else
    {
      v9 = a3;
      v10 = 0;
      if ( !a3 )
      {
        v13 = a4;
LABEL_45:
        sub_43E240(a1, 32, v13);
LABEL_14:
        if ( !*(_DWORD *)(a1 + 32) )
          goto LABEL_34;
        goto LABEL_15;
      }
      while ( a2 )
      {
        if ( v9 > 0x100 )
          v11 = 256;
        else
          v11 = v9;
        v12 = sub_42FCA0(v44, &v42, v11, &v43, a6);
        if ( v12 == -1 )
          goto LABEL_33;
        if ( !v12 )
          break;
        v10 += v12;
        v9 -= v12;
        if ( !v9 )
          break;
        a2 = v42;
      }
    }
    v13 = a4 - v10;
    if ( v13 <= 0 )
      goto LABEL_14;
    goto LABEL_45;
  }
LABEL_15:
  v43 = 0;
  if ( a3 < 0 )
  {
    v15 = 1;
    v14 = -1;
  }
  else
  {
    v14 = a3;
    v15 = a3 != 0;
  }
  if ( v41 )
    v16 = !v15;
  else
    v16 = 1;
  if ( v16 )
  {
    v17 = 0;
LABEL_38:
    v23 = !v39 || v40 == 0;
    if ( !v23 && a4 - v17 > 0 )
      sub_43E240(a1, 32, a4 - v17);
  }
  else
  {
    v17 = 0;
    while ( 1 )
    {
      v19 = v14 > 0x100 ? 256LL : v14;
      v20 = sub_42FCA0(v44, &v41, v19, &v43, a6);
      v21 = v20;
      if ( v20 == -1 )
        break;
      if ( v20 )
      {
        sub_43E650(a1, v44, v20);
        v17 += v21;
        if ( a3 >= 0 )
          v14 -= v21;
        if ( v41 && v14 != 0 )
          continue;
      }
      goto LABEL_38;
    }
LABEL_33:
    *(_DWORD *)(a1 + 32) = 0;
  }
LABEL_34:
  result = &qword_48DD60;
  if ( v45 != qword_48DD60 )
  {
    result = (__int64 *)sub_412340();
    v27 = result;
    v28 = v25;
    v29 = v24;
    v30 = v26;
    v32 = v31;
    if ( (v33 & 1) != 0 )
    {
      StatusReg = _ReadStatusReg(TPIDR_EL0);
      if ( v25 != v26 )
      {
        do
        {
          if ( (sub_43E140(v29) & 1) != 0 )
            ((void (__fastcall *)(__int64 *, __int64))loc_43E360)(v27, v32);
          v35 = *v28++;
          result = (__int64 *)((__int64 (__fastcall *)(__int64 *, _QWORD))loc_43E360)(
                                v27,
                                *(_QWORD *)(**(_QWORD **)(StatusReg + 16) + 8LL * (unsigned __int16)(v35 - 7) + 56));
        }
        while ( v30 != v28 );
      }
    }
    else if ( v25 != v26 )
    {
      if ( (sub_43E140(v24) & 1) != 0 )
        goto LABEL_58;
LABEL_54:
      v36 = (__int64 *)v27[1];
      result = (__int64 *)v27[2];
      v37 = *v28;
      v38 = (char *)v36 + 1;
      if ( v36 != result )
      {
LABEL_55:
        v27[1] = (__int64)v38;
        *(_BYTE *)v36 = v37;
        goto LABEL_56;
      }
      while ( 1 )
      {
        result = (__int64 *)sub_43E2F0(v27, v37);
LABEL_56:
        if ( v30 == ++v28 )
          break;
        if ( (sub_43E140(v29) & 1) == 0 )
          goto LABEL_54;
LABEL_58:
        ((void (__fastcall *)(__int64 *, __int64))loc_43E360)(v27, v32);
        v36 = (__int64 *)v27[1];
        result = (__int64 *)v27[2];
        v37 = *v28;
        v38 = (char *)v36 + 1;
        if ( v36 != result )
          goto LABEL_55;
      }
    }
  }
  return result;
}
