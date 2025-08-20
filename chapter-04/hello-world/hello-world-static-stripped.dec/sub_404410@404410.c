__int64 *__fastcall sub_404410(__int64 *result)
{
  int v1; // w4
  int v2; // w3
  __int64 v3; // x0
  __int64 *v4; // x0
  int v5; // w2
  __int64 *v6; // x1
  int v7; // w0
  int v8; // w0
  __int64 v9; // x3
  __int64 *v10; // x19
  __int64 *v11; // x20
  _QWORD *v12; // x21
  unsigned __int64 v13; // x22
  __int64 *v14; // x23
  char *v15; // x24
  _QWORD v16[4]; // [xsp+8h] [xbp-58h] BYREF
  __int64 v17; // [xsp+28h] [xbp-38h]
  __int64 *v18; // [xsp+30h] [xbp-30h]
  char *v19; // [xsp+38h] [xbp-28h]
  __int64 *v20; // [xsp+40h] [xbp-20h]
  __int64 *v21; // [xsp+48h] [xbp-18h]
  _QWORD *v22; // [xsp+50h] [xbp-10h]
  unsigned __int64 v23; // [xsp+58h] [xbp-8h]
  __int64 *vars0; // [xsp+60h] [xbp+0h]
  char *vars8; // [xsp+68h] [xbp+8h]

  while ( (*(_DWORD *)result & 0x80) != 0 )
  {
    v18 = vars0;
    v19 = vars8;
    v20 = v10;
    v21 = v11;
    v10 = result;
    v22 = v12;
    v23 = v13;
    v12 = v16;
    vars0 = v14;
    vars8 = v15;
    v13 = _ReadStatusReg(TPIDR_EL0) - 1856;
    v17 = qword_48DD60;
    v15 = &byte_490F08;
    v16[0] = sub_403DE0;
    v16[1] = 0;
    sub_406E20(v16);
    v1 = (unsigned __int8)byte_490F08;
    if ( byte_490F08 )
    {
      if ( !qword_492640 )
      {
        v2 = *(_DWORD *)v10;
        qword_492630 = (__int64)v10;
        LODWORD(qword_492638) = 1;
        qword_492640 = v13;
        if ( (v2 & 0x8000) != 0 )
        {
LABEL_30:
          v5 = 0x8000;
          v4 = (__int64 *)off_490050;
          if ( !off_490050 )
          {
            *(_DWORD *)v10 = v2 & 0xFFFFFF7F;
LABEL_32:
            qword_492630 = 0;
            v8 = HIDWORD(qword_492638);
            if ( v1 )
              goto LABEL_33;
            goto LABEL_25;
          }
          goto LABEL_14;
        }
        v14 = (__int64 *)v10[17];
        v3 = v14[1];
LABEL_41:
        if ( !v3 )
        {
          *(_DWORD *)v14 = 1;
          v4 = (__int64 *)off_490050;
          v14[1] = v13;
          if ( !v4 )
          {
            v7 = *((_DWORD *)v14 + 1);
            *(_DWORD *)v10 = v2 & 0xFFFFFF7F;
LABEL_44:
            if ( v7 )
            {
              *((_DWORD *)v14 + 1) = v7 - 1;
              qword_492630 = 0;
              v8 = HIDWORD(qword_492638);
            }
            else
            {
              qword_492630 = 0;
              v14[1] = 0;
              v8 = HIDWORD(qword_492638);
              *(_DWORD *)v14 = 0;
            }
LABEL_33:
            if ( !v8 )
            {
              v11 = &qword_492630;
              LODWORD(qword_492638) = 0;
              qword_492640 = 0;
              goto LABEL_28;
            }
LABEL_38:
            v11 = &qword_492630;
            HIDWORD(qword_492638) = v8 - 1;
            goto LABEL_28;
          }
          goto LABEL_52;
        }
        goto LABEL_10;
      }
      if ( v13 == qword_492640 )
      {
LABEL_36:
        ++HIDWORD(qword_492638);
        goto LABEL_8;
      }
    }
    else if ( v13 == qword_492640 )
    {
      goto LABEL_36;
    }
    v14 = &qword_492638;
    if ( _aarch64_cas4_acq(0, 1u, (atomic_uint *)&qword_492638) )
      sub_406F40(&qword_492638);
    v1 = (unsigned __int8)byte_490F08;
    qword_492640 = v13;
LABEL_8:
    v2 = *(_DWORD *)v10;
    qword_492630 = (__int64)v10;
    if ( (v2 & 0x8000) != 0 )
      goto LABEL_30;
    v14 = (__int64 *)v10[17];
    v3 = v14[1];
    if ( v1 )
      goto LABEL_41;
LABEL_10:
    if ( v13 == v3 )
    {
      v4 = (__int64 *)off_490050;
      ++*((_DWORD *)v14 + 1);
      if ( !v4 )
      {
        *(_DWORD *)v10 = v2 & 0xFFFFFF7F;
        goto LABEL_22;
      }
LABEL_52:
      v5 = 0;
      if ( v10 != v4 )
      {
LABEL_15:
        v6 = (__int64 *)v4[13];
        if ( v6 )
        {
          while ( v10 != v6 )
          {
            v4 = v6;
            v6 = (__int64 *)v6[13];
            if ( !v6 )
              goto LABEL_20;
          }
          v4[13] = v10[13];
        }
        goto LABEL_20;
      }
      goto LABEL_37;
    }
    if ( _aarch64_cas4_acq(0, 1u, (atomic_uint *)v14) )
      sub_406F40(v14);
    v14 = (__int64 *)v10[17];
    v2 = *(_DWORD *)v10;
    v4 = (__int64 *)off_490050;
    v14[1] = v13;
    v1 = (unsigned __int8)byte_490F08;
    v5 = v2 & 0x8000;
    if ( !v4 )
      goto LABEL_20;
LABEL_14:
    if ( v10 != v4 )
      goto LABEL_15;
LABEL_37:
    off_490050 = (_UNKNOWN *)v10[13];
LABEL_20:
    *(_DWORD *)v10 = v2 & 0xFFFFFF7F;
    if ( v5 )
      goto LABEL_32;
    v14 = (__int64 *)v10[17];
LABEL_22:
    v7 = *((_DWORD *)v14 + 1);
    if ( v1 )
      goto LABEL_44;
    if ( v7 )
    {
      *((_DWORD *)v14 + 1) = v7 - 1;
      qword_492630 = 0;
      v8 = HIDWORD(qword_492638);
    }
    else
    {
      v14[1] = 0;
      if ( (int)_aarch64_swp4_rel(0, (atomic_uint *)v14) > 1 )
        sub_407040(v14);
      qword_492630 = 0;
      v8 = HIDWORD(qword_492638);
      if ( byte_490F08 )
        goto LABEL_33;
    }
LABEL_25:
    if ( v8 )
      goto LABEL_38;
    v11 = &qword_492630;
    v10 = &qword_492638;
    qword_492640 = 0;
    if ( (int)_aarch64_swp4_rel(0, (atomic_uint *)&qword_492638) > 1 )
      sub_407040(&qword_492638);
LABEL_28:
    sub_406EA4(v16);
    result = &qword_48DD60;
    if ( v17 == qword_48DD60 )
      return result;
    result = (__int64 *)sub_412340(&qword_48DD60, 0, v17 - qword_48DD60, v9);
  }
  return result;
}
