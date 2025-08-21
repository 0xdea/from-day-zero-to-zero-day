__int64 *__fastcall sub_440370(unsigned __int64 a1, __int64 *a2, __int64 a3, double **a4)
{
  __int16 v5; // w20
  __int64 v9; // x0
  unsigned __int8 *v10; // x21
  unsigned __int8 *v11; // x25
  unsigned __int8 v12; // w0
  double *v13; // x24
  int v14; // w20
  bool v15; // cc
  __int64 v16; // x8
  __int64 *result; // x0
  __int64 v18; // x0
  __int64 v19; // x0
  _QWORD v20[4]; // [xsp+8h] [xbp-98h] BYREF
  int v21; // [xsp+28h] [xbp-78h]
  unsigned __int8 *v22; // [xsp+30h] [xbp-70h]
  unsigned __int8 *v23; // [xsp+38h] [xbp-68h]
  char v24; // [xsp+40h] [xbp-60h]
  unsigned __int8 v25; // [xsp+41h] [xbp-5Fh]
  unsigned __int64 v26; // [xsp+48h] [xbp-58h]
  __int64 v27; // [xsp+50h] [xbp-50h]
  _BYTE v28[64]; // [xsp+58h] [xbp-48h] BYREF
  __int64 v29; // [xsp+98h] [xbp-8h] BYREF

  v5 = *(_WORD *)(a3 + 12);
  v29 = qword_48DD60;
  if ( (v5 & 0x100) != 0 )
  {
    v9 = a2[4];
    v10 = *(unsigned __int8 **)(v9 + 72);
    v11 = *(unsigned __int8 **)(v9 + 80);
    v22 = v11;
    v23 = v10;
    if ( !*v10 )
    {
      v10 = *(unsigned __int8 **)(a2[1] + 56);
      v23 = v10;
    }
  }
  else
  {
    v18 = a2[1];
    v10 = *(unsigned __int8 **)(v18 + 56);
    v11 = *(unsigned __int8 **)(v18 + 64);
    v22 = v11;
    v23 = v10;
  }
  v12 = ifunc_40DFD0(v11);
  v25 = v12;
  v13 = *a4;
  v14 = v5 & 0x800;
  if ( v10[1] )
    v15 = 1;
  else
    v15 = v12 > 1u;
  if ( v15 )
  {
    v24 = ifunc_40DFD0(v10);
    v16 = 0;
    if ( !v14 )
      goto LABEL_10;
    goto LABEL_17;
  }
  if ( v14 )
  {
    v24 = ifunc_40DFD0(v10);
LABEL_17:
    v16 = *a2;
LABEL_10:
    v20[0] = v28;
    v20[1] = v28;
    v20[2] = &v29;
    v20[3] = 0;
    v21 = 8;
    v26 = a1;
    v27 = v16;
    sub_43E8A4((unsigned __int64)v20, (__int64)a2, 0x2Cu, 0x2Eu, a3, v13);
    if ( v21 )
      sub_440264((__int64)v20);
    else
      *(_DWORD *)(v26 + 32) = 0;
    goto LABEL_12;
  }
  sub_43E8A4(a1, (__int64)a2, *v11, *v10, a3, v13);
LABEL_12:
  result = &qword_48DD60;
  if ( v29 != qword_48DD60 )
  {
    v19 = sub_412340();
    return (__int64 *)sub_440500(v19);
  }
  return result;
}
