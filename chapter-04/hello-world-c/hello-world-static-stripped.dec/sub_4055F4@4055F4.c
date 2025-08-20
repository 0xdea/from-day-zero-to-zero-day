__int64 sub_4055F4()
{
  void *v0; // x24
  __int64 v1; // x26
  __int64 v2; // x27
  __int64 v3; // x30
  __int64 *v4; // x20
  unsigned __int64 v5; // x22
  double v6; // d0
  double v7; // d1
  double v8; // d2
  double v9; // d3
  double v10; // d4
  double v11; // d5
  double v12; // d6
  double v13; // d7
  __int64 *v14; // x19
  __int64 v15; // x23
  __int64 v16; // x27
  __int64 v17; // x27
  int v18; // w0
  int v19; // w0
  __int64 v20; // x27
  __int64 v21; // x0
  int v22; // w0
  __int64 v23; // x3
  __int64 result; // x0
  unsigned __int64 v25; // x22
  double v26; // d0
  double v27; // d1
  double v28; // d2
  double v29; // d3
  double v30; // d4
  double v31; // d5
  double v32; // d6
  double v33; // d7
  int *v34; // x19
  __int64 v35; // x20
  int v36; // w0
  __int64 v37; // x1
  __int64 v38; // x0
  int v39; // w1
  int v40; // w0
  __int64 v41; // x20
  int v42; // w0
  __int64 v43; // x3
  __int64 v44; // x0
  __int64 v45; // x1
  __int64 v46; // x19
  _QWORD v47[4]; // [xsp+28h] [xbp-A8h] BYREF
  __int64 v48; // [xsp+48h] [xbp-88h]
  __int64 *v49; // [xsp+50h] [xbp-80h]
  __int64 v50; // [xsp+58h] [xbp-78h]
  __int64 *v51; // [xsp+60h] [xbp-70h]
  __int64 *v52; // [xsp+68h] [xbp-68h]
  char *v53; // [xsp+70h] [xbp-60h]
  unsigned __int64 v54; // [xsp+78h] [xbp-58h]
  __int64 v55; // [xsp+80h] [xbp-50h]
  void *v56; // [xsp+88h] [xbp-48h]
  _QWORD *v57; // [xsp+90h] [xbp-40h]
  __int64 v58; // [xsp+98h] [xbp-38h]
  _QWORD v59[4]; // [xsp+A8h] [xbp-28h] BYREF
  __int64 v60; // [xsp+C8h] [xbp-8h]
  __int64 v61; // [xsp+D0h] [xbp+0h] BYREF
  __int64 v62; // [xsp+120h] [xbp+50h]

  v4 = (__int64 *)&unk_492000;
  v5 = _ReadStatusReg(TPIDR_EL0) - 1856;
  v60 = qword_48DD60;
  v59[0] = sub_403DE0;
  v59[1] = 0;
  sub_406E20(v59);
  if ( byte_490F08 )
  {
    if ( !qword_492640 )
    {
      LODWORD(qword_492638) = 1;
      v15 = 0;
      v14 = (__int64 *)off_490050;
      qword_492640 = v5;
      if ( off_490050 )
        goto LABEL_8;
LABEL_43:
      v22 = HIDWORD(qword_492638);
      if ( HIDWORD(qword_492638) )
        goto LABEL_34;
      LODWORD(qword_492638) = 0;
      qword_492640 = 0;
      goto LABEL_35;
    }
    if ( v5 != qword_492640 )
      goto LABEL_4;
LABEL_46:
    ++HIDWORD(qword_492638);
    goto LABEL_7;
  }
  if ( v5 == qword_492640 )
    goto LABEL_46;
LABEL_4:
  if ( _aarch64_cas4_acq(0, 1u, (atomic_uint *)&qword_492638) )
    sub_406F40(&qword_492638);
  qword_492640 = v5;
LABEL_7:
  v14 = (__int64 *)off_490050;
  if ( off_490050 )
  {
LABEL_8:
    v15 = 0;
    v0 = &unk_48DD70;
    v1 = 0xFFFFFFFFLL;
    v62 = v2;
    while ( 1 )
    {
      v19 = *(_DWORD *)v14;
      qword_492630 = (__int64)v14;
      if ( (v19 & 0x8000) == 0 )
      {
        v20 = v14[17];
        v21 = *(_QWORD *)(v20 + 8);
        if ( byte_490F08 && !v21 )
        {
          *(_DWORD *)v20 = 1;
          *(_QWORD *)(v20 + 8) = v5;
        }
        else if ( v5 == v21 )
        {
          ++*(_DWORD *)(v20 + 4);
        }
        else
        {
          if ( _aarch64_cas4_acq(0, 1u, (atomic_uint *)v14[17]) )
            sub_406F40(v20);
          *(_QWORD *)(v14[17] + 8) = v5;
        }
      }
      if ( *((int *)v14 + 48) > 0 )
      {
        if ( *(_QWORD *)(v14[20] + 32) > *(_QWORD *)(v14[20] + 24) )
        {
          v16 = v14[27];
          if ( (unsigned __int64)(v16 - (_QWORD)&unk_48DD70) > 0x92F )
            goto LABEL_29;
          goto LABEL_11;
        }
      }
      else if ( v14[5] > (unsigned __int64)v14[4] )
      {
        v16 = v14[27];
        if ( (unsigned __int64)(v16 - (_QWORD)&unk_48DD70) > 0x92F )
LABEL_29:
          sub_401A50(v6, v7, v8, v9, v10, v11, v12, v13);
LABEL_11:
        if ( (*(unsigned int (__fastcall **)(__int64 *, __int64))(v16 + 24))(v14, 0xFFFFFFFFLL) == -1 )
          v15 = 0xFFFFFFFFLL;
        else
          v15 = (unsigned int)v15;
      }
      if ( (*(_DWORD *)v14 & 0x8000) != 0 )
      {
LABEL_18:
        v14 = (__int64 *)v14[13];
        qword_492630 = 0;
        if ( !v14 )
          goto LABEL_31;
      }
      else
      {
        v17 = v14[17];
        v18 = *(_DWORD *)(v17 + 4);
        if ( byte_490F08 )
        {
          if ( !v18 )
          {
            *(_DWORD *)v17 = 0;
            *(_QWORD *)(v17 + 8) = 0;
            goto LABEL_18;
          }
        }
        else if ( !v18 )
        {
          *(_QWORD *)(v17 + 8) = 0;
          if ( (int)_aarch64_swp4_rel(0, (atomic_uint *)v17) > 1 )
            sub_407040(v17);
          goto LABEL_18;
        }
        v14 = (__int64 *)v14[13];
        qword_492630 = 0;
        *(_DWORD *)(v17 + 4) = v18 - 1;
        if ( !v14 )
        {
LABEL_31:
          v2 = v62;
          goto LABEL_32;
        }
      }
    }
  }
  v15 = 0;
LABEL_32:
  v22 = HIDWORD(qword_492638);
  if ( byte_490F08 )
    goto LABEL_43;
  if ( HIDWORD(qword_492638) )
  {
LABEL_34:
    v4 = &qword_492630;
    HIDWORD(qword_492638) = v22 - 1;
    goto LABEL_35;
  }
  qword_492640 = 0;
  v14 = &qword_492638;
  if ( (int)_aarch64_swp4_rel(0, (atomic_uint *)&qword_492638) > 1 )
    sub_407040(&qword_492638);
LABEL_35:
  sub_406EA4(v59);
  if ( v60 == qword_48DD60 )
    return (unsigned int)v15;
  v62 = v2;
  sub_412340(&qword_48DD60, 0, v60 - qword_48DD60, v23);
  v49 = &v61;
  v50 = v3;
  v51 = v14;
  v52 = v4;
  v53 = &byte_490F08;
  v54 = v5;
  v25 = _ReadStatusReg(TPIDR_EL0) - 1856;
  v55 = v15;
  v56 = v0;
  v57 = v59;
  v58 = v1;
  v48 = qword_48DD60;
  v47[0] = sub_403DE0;
  v47[1] = 0;
  sub_406E20(v47);
  if ( !byte_490F08 )
  {
    if ( v25 != qword_492640 )
      goto LABEL_53;
LABEL_92:
    ++HIDWORD(qword_492638);
    goto LABEL_56;
  }
  if ( !qword_492640 )
  {
    LODWORD(qword_492638) = 1;
    v34 = (int *)off_490050;
    qword_492640 = v25;
    if ( !off_490050 )
      goto LABEL_89;
    while ( 1 )
    {
LABEL_71:
      v40 = *v34;
      qword_492630 = (__int64)v34;
      if ( (v40 & 0x8000) != 0 )
      {
        if ( (*(_QWORD *)v34 & 0x208LL) != 0x200 )
          goto LABEL_70;
        goto LABEL_73;
      }
      v35 = *((_QWORD *)v34 + 17);
      v36 = (unsigned __int8)byte_490F08;
      v37 = *(_QWORD *)(v35 + 8);
      if ( byte_490F08 )
      {
        if ( !v37 )
          break;
      }
      if ( v25 != v37 )
      {
        if ( _aarch64_cas4_acq(0, 1u, *((atomic_uint **)v34 + 17)) )
          sub_406F40(v35);
        v38 = *(_QWORD *)v34;
        *(_QWORD *)(*((_QWORD *)v34 + 17) + 8LL) = v25;
        if ( (v38 & 0x208) == 0x200 )
          goto LABEL_73;
        goto LABEL_64;
      }
      v45 = *(_QWORD *)v34 & 0x208LL;
      ++*(_DWORD *)(v35 + 4);
      if ( v45 == 512 )
      {
        v41 = *((_QWORD *)v34 + 27);
        if ( (unsigned __int64)(v41 - (_QWORD)&unk_48DD70) > 0x92F )
          goto LABEL_87;
        goto LABEL_74;
      }
LABEL_66:
      v39 = *(_DWORD *)(v35 + 4);
      if ( v36 )
      {
LABEL_83:
        if ( v39 )
          goto LABEL_75;
        *(_DWORD *)v35 = 0;
        *(_QWORD *)(v35 + 8) = 0;
LABEL_70:
        v34 = (int *)*((_QWORD *)v34 + 13);
        qword_492630 = 0;
        if ( !v34 )
          goto LABEL_76;
      }
      else
      {
        if ( !v39 )
        {
          *(_QWORD *)(v35 + 8) = 0;
          if ( (int)_aarch64_swp4_rel(0, (atomic_uint *)v35) > 1 )
            sub_407040(v35);
          goto LABEL_70;
        }
LABEL_75:
        v34 = (int *)*((_QWORD *)v34 + 13);
        qword_492630 = 0;
        *(_DWORD *)(v35 + 4) = v39 - 1;
        if ( !v34 )
          goto LABEL_76;
      }
    }
    v44 = *(_QWORD *)v34;
    *(_DWORD *)v35 = 1;
    *(_QWORD *)(v35 + 8) = v25;
    if ( (v44 & 0x208) != 0x200 )
    {
      v39 = *(_DWORD *)(v35 + 4);
      goto LABEL_83;
    }
LABEL_73:
    v41 = *((_QWORD *)v34 + 27);
    if ( (unsigned __int64)(v41 - (_QWORD)&unk_48DD70) > 0x92F )
LABEL_87:
      sub_401A50(v26, v27, v28, v29, v30, v31, v32, v33);
LABEL_74:
    (*(void (__fastcall **)(int *, __int64))(v41 + 24))(v34, 0xFFFFFFFFLL);
LABEL_64:
    if ( (*v34 & 0x8000) != 0 )
      goto LABEL_70;
    v35 = *((_QWORD *)v34 + 17);
    v36 = (unsigned __int8)byte_490F08;
    goto LABEL_66;
  }
  if ( v25 == qword_492640 )
    goto LABEL_92;
LABEL_53:
  if ( _aarch64_cas4_acq(0, 1u, (atomic_uint *)&qword_492638) )
    sub_406F40(&qword_492638);
  qword_492640 = v25;
LABEL_56:
  v34 = (int *)off_490050;
  if ( off_490050 )
    goto LABEL_71;
LABEL_76:
  v42 = HIDWORD(qword_492638);
  if ( !byte_490F08 )
  {
    if ( !HIDWORD(qword_492638) )
    {
      qword_492640 = 0;
      if ( (int)_aarch64_swp4_rel(0, (atomic_uint *)&qword_492638) > 1 )
        sub_407040(&qword_492638);
      goto LABEL_79;
    }
    goto LABEL_78;
  }
LABEL_89:
  v42 = HIDWORD(qword_492638);
  if ( !HIDWORD(qword_492638) )
  {
    LODWORD(qword_492638) = 0;
    qword_492640 = 0;
    goto LABEL_79;
  }
LABEL_78:
  HIDWORD(qword_492638) = v42 - 1;
LABEL_79:
  sub_406EA4(v47);
  result = (__int64)&qword_48DD60;
  if ( v48 != qword_48DD60 )
  {
    sub_412340(&qword_48DD60, 0, v48 - qword_48DD60, v43);
    result = 1;
    v46 = qword_492650;
    for ( byte_49264C = 1; v46; qword_492650 = v46 )
    {
      result = sub_40C1A0(*(_QWORD *)(v46 + 176));
      v46 = *(_QWORD *)(v46 + 168);
    }
  }
  return result;
}
