__int64 *__fastcall sub_404430(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // x21
  __int64 v5; // x22
  __int64 v6; // x23
  __int64 v7; // x24
  int v9; // w1
  __int64 *result; // x0
  unsigned __int64 StatusReg; // x21
  int v12; // w0
  __int64 v13; // x1
  int v14; // w1
  void *v15; // x2
  int v16; // w1
  int v17; // w1
  void *v18; // x2
  __int64 v19; // x22
  __int64 v20; // x1
  int v21; // w1
  void *v22; // x2
  int v23; // w1
  void *v24; // x2
  void *v25; // x1
  __int64 v26; // x0
  __int64 **v27; // x2
  __int64 v28; // x1
  __int64 *v29; // x1
  _QWORD v30[4]; // [xsp+18h] [xbp-28h] BYREF
  __int64 v31; // [xsp+38h] [xbp-8h]
  __int64 v32; // [xsp+60h] [xbp+20h]
  __int64 v33; // [xsp+68h] [xbp+28h]
  __int64 v34; // [xsp+70h] [xbp+30h]
  __int64 v35; // [xsp+78h] [xbp+38h]

  v9 = *(_DWORD *)a1;
  v31 = qword_48DD60;
  if ( (v9 & 0x80) == 0 )
  {
    v33 = v5;
    StatusReg = _ReadStatusReg(TPIDR_EL0);
    *(_DWORD *)a1 = v9 | 0x80;
    v30[0] = sub_403DE0;
    v30[1] = 0;
    v4 = StatusReg - 1856;
    sub_406E20(v30);
    v12 = (unsigned __int8)byte_490F08;
    if ( byte_490F08 )
    {
      v13 = qword_492640;
      if ( !qword_492640 )
      {
        v17 = *(_DWORD *)a1;
        qword_492630 = a1;
        LODWORD(qword_492638) = 1;
        qword_492640 = v4;
        if ( (v17 & 0x8000) != 0 )
        {
          v16 = HIDWORD(qword_492638);
          qword_492630 = 0;
          v18 = off_490050;
          off_490050 = (_UNKNOWN *)a1;
          *(_QWORD *)(a1 + 104) = v18;
          goto LABEL_20;
        }
        v19 = *(_QWORD *)(a1 + 136);
        v20 = *(_QWORD *)(v19 + 8);
LABEL_33:
        if ( !v20 )
        {
          *(_QWORD *)(v19 + 8) = v4;
          v24 = off_490050;
          *(_DWORD *)v19 = 1;
          v23 = *(_DWORD *)(v19 + 4);
          off_490050 = (_UNKNOWN *)a1;
          *(_QWORD *)(a1 + 104) = v24;
          goto LABEL_35;
        }
LABEL_24:
        if ( v4 == v20 )
        {
          ++*(_DWORD *)(v19 + 4);
          v25 = off_490050;
          off_490050 = (_UNKNOWN *)a1;
          *(_QWORD *)(a1 + 104) = v25;
        }
        else
        {
          if ( _aarch64_cas4_acq(0, 1u, (atomic_uint *)v19) )
            sub_406F40(v19);
          v19 = *(_QWORD *)(a1 + 136);
          v21 = *(_DWORD *)a1;
          v22 = off_490050;
          *(_QWORD *)(v19 + 8) = v4;
          off_490050 = (_UNKNOWN *)a1;
          *(_QWORD *)(a1 + 104) = v22;
          v12 = (unsigned __int8)byte_490F08;
          if ( (v21 & 0x8000) != 0 )
          {
LABEL_12:
            qword_492630 = 0;
            v16 = HIDWORD(qword_492638);
            if ( !v12 )
              goto LABEL_13;
LABEL_20:
            if ( !v16 )
            {
              LODWORD(qword_492638) = 0;
              qword_492640 = 0;
LABEL_16:
              sub_406EA4(v30);
              v5 = v33;
              goto LABEL_2;
            }
LABEL_22:
            HIDWORD(qword_492638) = v16 - 1;
            goto LABEL_16;
          }
        }
        v23 = *(_DWORD *)(v19 + 4);
        if ( !v12 )
        {
          if ( v23 )
          {
            *(_DWORD *)(v19 + 4) = v23 - 1;
            qword_492630 = 0;
            v16 = HIDWORD(qword_492638);
LABEL_13:
            if ( !v16 )
            {
              qword_492640 = 0;
              if ( (int)_aarch64_swp4_rel(0, (atomic_uint *)&qword_492638) > 1 )
                sub_407040(&qword_492638);
              goto LABEL_16;
            }
            goto LABEL_22;
          }
          *(_QWORD *)(v19 + 8) = 0;
          if ( (int)_aarch64_swp4_rel(0, (atomic_uint *)v19) > 1 )
            sub_407040(v19);
          v12 = (unsigned __int8)byte_490F08;
          goto LABEL_12;
        }
LABEL_35:
        if ( v23 )
        {
          *(_DWORD *)(v19 + 4) = v23 - 1;
          qword_492630 = 0;
          v16 = HIDWORD(qword_492638);
        }
        else
        {
          v16 = HIDWORD(qword_492638);
          qword_492630 = 0;
          *(_DWORD *)v19 = 0;
          *(_QWORD *)(v19 + 8) = 0;
        }
        goto LABEL_20;
      }
    }
    else
    {
      v13 = qword_492640;
    }
    if ( v4 == v13 )
    {
      ++HIDWORD(qword_492638);
    }
    else
    {
      if ( _aarch64_cas4_acq(0, 1u, (atomic_uint *)&qword_492638) )
        sub_406F40(&qword_492638);
      v12 = (unsigned __int8)byte_490F08;
      qword_492640 = v4;
    }
    v14 = *(_DWORD *)a1;
    qword_492630 = a1;
    if ( (v14 & 0x8000) != 0 )
    {
      v15 = off_490050;
      off_490050 = (_UNKNOWN *)a1;
      *(_QWORD *)(a1 + 104) = v15;
      goto LABEL_12;
    }
    v19 = *(_QWORD *)(a1 + 136);
    v20 = *(_QWORD *)(v19 + 8);
    if ( !v12 )
      goto LABEL_24;
    goto LABEL_33;
  }
LABEL_2:
  result = &qword_48DD60;
  if ( v31 != qword_48DD60 )
  {
    v32 = v4;
    v33 = v5;
    v34 = v6;
    v35 = v7;
    v26 = sub_412340(&qword_48DD60, 0, v31 - qword_48DD60, a4);
    v27 = *(__int64 ***)(v26 + 96);
    result = (__int64 *)(v28 - *(_QWORD *)(v26 + 24));
    while ( v27 )
    {
      v29 = (__int64 *)*((int *)v27 + 4);
      v27 = (__int64 **)*v27;
      if ( (__int64)result > (__int64)v29 )
        result = v29;
    }
  }
  return result;
}
