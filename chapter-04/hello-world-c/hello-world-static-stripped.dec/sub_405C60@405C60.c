__int64 sub_405C60()
{
  __int64 v0; // x23
  __int64 v1; // x24
  unsigned __int64 v2; // x22
  unsigned int v3; // w25
  double v4; // d0
  double v5; // d1
  double v6; // d2
  double v7; // d3
  double v8; // d4
  double v9; // d5
  double v10; // d6
  double v11; // d7
  int *v12; // x19
  int v13; // w1
  __int64 v14; // x20
  __int64 v15; // x0
  __int64 v16; // x3
  __int64 v17; // x2
  __int64 v18; // x20
  int v19; // w0
  __int64 v20; // x3
  __int64 result; // x0
  int v22; // w0
  __int64 v23; // x0
  double v24; // d0
  double v25; // d1
  double v26; // d2
  double v27; // d3
  double v28; // d4
  double v29; // d5
  double v30; // d6
  double v31; // d7
  unsigned int *v32; // x1
  unsigned int *v33; // x19
  unsigned int v34; // w1
  __int64 v35; // x20
  __int64 v36; // x0
  _QWORD v37[4]; // [xsp+28h] [xbp-28h] BYREF
  __int64 v38; // [xsp+48h] [xbp-8h]
  __int64 v39; // [xsp+80h] [xbp+30h]
  __int64 v40; // [xsp+88h] [xbp+38h]

  v2 = _ReadStatusReg(TPIDR_EL0) - 1856;
  v38 = qword_48DD60;
  v3 = sub_4055F4();
  v37[0] = sub_403DE0;
  v37[1] = 0;
  sub_406E20(v37);
  if ( !byte_490F08 )
  {
    if ( v2 != qword_492640 )
      goto LABEL_4;
LABEL_48:
    ++HIDWORD(qword_492638);
    goto LABEL_7;
  }
  if ( !qword_492640 )
  {
    LODWORD(qword_492638) = 1;
    v12 = (int *)off_490050;
    qword_492640 = v2;
    if ( !off_490050 )
    {
LABEL_45:
      v19 = HIDWORD(qword_492638);
      if ( HIDWORD(qword_492638) )
        goto LABEL_29;
      LODWORD(qword_492638) = 0;
      qword_492640 = 0;
      goto LABEL_30;
    }
    while ( 1 )
    {
LABEL_8:
      v13 = *v12;
      qword_492630 = (__int64)v12;
      if ( (v13 & 0x8000) == 0 )
      {
        v14 = *((_QWORD *)v12 + 17);
        v15 = *(_QWORD *)(v14 + 8);
        if ( byte_490F08 && !v15 )
        {
          *(_DWORD *)v14 = 1;
          *(_QWORD *)(v14 + 8) = v2;
          if ( (v13 & 2) != 0 )
          {
LABEL_41:
            v12[48] = -1;
            goto LABEL_33;
          }
          goto LABEL_16;
        }
        if ( v2 == v15 )
        {
          ++*(_DWORD *)(v14 + 4);
          if ( (v13 & 2) != 0 )
            goto LABEL_41;
LABEL_16:
          if ( v12[48] )
          {
            if ( (byte_49264C & 1) == 0 && (v13 & 1) == 0 )
            {
              v16 = qword_492650;
              v17 = *((_QWORD *)v12 + 7);
              *v12 = v13 | 1;
              qword_492650 = (__int64)v12;
              *((_QWORD *)v12 + 21) = v16;
              *((_QWORD *)v12 + 22) = v17;
            }
            v18 = *((_QWORD *)v12 + 27);
            if ( (unsigned __int64)(v18 - (_QWORD)&unk_48DD70) > 0x92F )
              sub_401A50(v4, v5, v6, v7, v8, v9, v10, v11);
            (*(void (__fastcall **)(int *, _QWORD, _QWORD))(v18 + 88))(v12, 0, 0);
            if ( v12[48] > 0 )
              sub_4299A0(v12, 0, 0, 0);
            v13 = *v12;
          }
          goto LABEL_25;
        }
        if ( _aarch64_cas4_acq(0, 1u, *((atomic_uint **)v12 + 17)) )
          sub_406F40(v14);
        v13 = *v12;
        *(_QWORD *)(*((_QWORD *)v12 + 17) + 8LL) = v2;
      }
      if ( (v13 & 2) == 0 )
        goto LABEL_16;
LABEL_25:
      v12[48] = -1;
      if ( (v13 & 0x8000) != 0 )
        goto LABEL_26;
      v14 = *((_QWORD *)v12 + 17);
LABEL_33:
      v22 = *(_DWORD *)(v14 + 4);
      if ( !byte_490F08 )
      {
        if ( !v22 )
        {
          *(_QWORD *)(v14 + 8) = 0;
          if ( (int)_aarch64_swp4_rel(0, (atomic_uint *)v14) > 1 )
            sub_407040(v14);
          goto LABEL_26;
        }
LABEL_36:
        *(_DWORD *)(v14 + 4) = v22 - 1;
        goto LABEL_26;
      }
      if ( v22 )
        goto LABEL_36;
      *(_DWORD *)v14 = 0;
      *(_QWORD *)(v14 + 8) = 0;
LABEL_26:
      v12 = (int *)*((_QWORD *)v12 + 13);
      qword_492630 = 0;
      if ( !v12 )
        goto LABEL_27;
    }
  }
  if ( v2 == qword_492640 )
    goto LABEL_48;
LABEL_4:
  if ( _aarch64_cas4_acq(0, 1u, (atomic_uint *)&qword_492638) )
    sub_406F40(&qword_492638);
  qword_492640 = v2;
LABEL_7:
  v12 = (int *)off_490050;
  if ( off_490050 )
    goto LABEL_8;
LABEL_27:
  v19 = HIDWORD(qword_492638);
  if ( byte_490F08 )
    goto LABEL_45;
  if ( HIDWORD(qword_492638) )
  {
LABEL_29:
    HIDWORD(qword_492638) = v19 - 1;
    goto LABEL_30;
  }
  qword_492640 = 0;
  if ( (int)_aarch64_swp4_rel(0, (atomic_uint *)&qword_492638) > 1 )
    sub_407040(&qword_492638);
LABEL_30:
  sub_406EA4(v37);
  if ( v38 == qword_48DD60 )
    return v3;
  v39 = v0;
  v40 = v1;
  v23 = sub_412340(&qword_48DD60, 0, v38 - qword_48DD60, v20);
  v33 = v32;
  v34 = *v32;
  *(_QWORD *)(v23 + 8) = v33;
  v35 = v23;
  if ( (v34 & 0x800) != 0 )
  {
    sub_4047E0(v33, v24, v25, v26, v27, v28, v29, v30, v31);
    v34 = *v33;
  }
  v36 = *((_QWORD *)v33 + 1);
  if ( (v34 & 0x100) != 0 )
    result = (unsigned int)v36 - (unsigned int)*((_QWORD *)v33 + 2);
  else
    result = (unsigned int)v36 - (unsigned int)*((_QWORD *)v33 + 3);
  *(_QWORD *)v35 = *((_QWORD *)v33 + 12);
  *(_DWORD *)(v35 + 16) = result;
  *((_QWORD *)v33 + 12) = v35;
  return result;
}
