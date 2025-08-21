__int64 *__fastcall sub_405410(unsigned int *a1)
{
  unsigned __int64 v1; // x22
  int v2; // w4
  unsigned int v3; // w3
  __int64 v4; // x23
  __int64 v5; // x0
  unsigned int *v6; // x0
  int v7; // w2
  unsigned int *v8; // x1
  int v9; // w0
  int v10; // w0
  __int64 v11; // x3
  __int64 *v12; // x0
  __int64 v13; // x20
  __int64 v14; // x21
  __int64 v15; // x22
  __int64 v16; // x23
  __int64 v17; // x24
  __int64 v19; // x0
  _QWORD *i; // x1
  __int64 v21; // x0
  __int64 *result; // x0
  _QWORD v23[4]; // [xsp-48h] [xbp-48h] BYREF
  __int64 v24; // [xsp-28h] [xbp-28h]
  __int64 v25; // [xsp-20h] [xbp-20h]
  __int64 v26; // [xsp-18h] [xbp-18h]
  __int64 v27; // [xsp-10h] [xbp-10h]
  __int64 v28; // [xsp-8h] [xbp-8h]
  __int64 v29; // [xsp+0h] [xbp+0h]
  __int64 v30; // [xsp+8h] [xbp+8h]
  __int64 v31; // [xsp+10h] [xbp+10h]
  __int64 v32; // [xsp+18h] [xbp+18h]

  v19 = *((_QWORD *)a1 + 7);
  if ( v19 && (*a1 & 1) == 0 )
  {
    sub_40C1A0(v19);
    *((_QWORD *)a1 + 7) = 0;
    *((_QWORD *)a1 + 8) = 0;
  }
  for ( i = (_QWORD *)*((_QWORD *)a1 + 12); i; i = (_QWORD *)*i )
    i[1] = 0;
  v21 = *((_QWORD *)a1 + 9);
  if ( v21 )
  {
    sub_40C1A0(v21);
    *((_QWORD *)a1 + 9) = 0;
  }
  result = (__int64 *)*a1;
  if ( ((unsigned __int8)result & 0x80) != 0 )
  {
    v25 = v29;
    v26 = v30;
    v27 = v31;
    v28 = v13;
    v29 = v14;
    v30 = v15;
    v31 = v16;
    v32 = v17;
    v1 = _ReadStatusReg(TPIDR_EL0) - 1856;
    v24 = qword_48DD60;
    v23[0] = sub_403DE0;
    v23[1] = 0;
    sub_406E20(v23);
    v2 = (unsigned __int8)byte_490F08;
    if ( byte_490F08 )
    {
      if ( !qword_492640 )
      {
        v3 = *a1;
        qword_492630 = (__int64)a1;
        LODWORD(qword_492638) = 1;
        qword_492640 = v1;
        if ( (v3 & 0x8000) == 0 )
        {
          v4 = *((_QWORD *)a1 + 17);
          v5 = *(_QWORD *)(v4 + 8);
LABEL_48:
          if ( !v5 )
          {
            *(_DWORD *)v4 = 1;
            v6 = (unsigned int *)off_490050;
            *(_QWORD *)(v4 + 8) = v1;
            if ( !v6 )
            {
              v9 = *(_DWORD *)(v4 + 4);
              *a1 = v3 & 0xFFFFFF7F;
              goto LABEL_51;
            }
            goto LABEL_59;
          }
LABEL_17:
          if ( v1 != v5 )
          {
            if ( _aarch64_cas4_acq(0, 1u, (atomic_uint *)v4) )
              sub_406F40(v4);
            v3 = *a1;
            v6 = (unsigned int *)off_490050;
            *(_QWORD *)(*((_QWORD *)a1 + 17) + 8LL) = v1;
            v2 = (unsigned __int8)byte_490F08;
            v7 = v3 & 0x8000;
            if ( !v6 )
              goto LABEL_27;
LABEL_21:
            if ( a1 != v6 )
              goto LABEL_22;
            goto LABEL_44;
          }
          v6 = (unsigned int *)off_490050;
          ++*(_DWORD *)(v4 + 4);
          if ( !v6 )
          {
            *a1 = v3 & 0xFFFFFF7F;
LABEL_29:
            v9 = *(_DWORD *)(v4 + 4);
            if ( !v2 )
            {
              if ( v9 )
              {
                *(_DWORD *)(v4 + 4) = v9 - 1;
                qword_492630 = 0;
                v10 = HIDWORD(qword_492638);
                goto LABEL_32;
              }
              *(_QWORD *)(v4 + 8) = 0;
              if ( (int)_aarch64_swp4_rel(0, (atomic_uint *)v4) > 1 )
                sub_407040(v4);
              qword_492630 = 0;
              v10 = HIDWORD(qword_492638);
              if ( byte_490F08 )
              {
LABEL_40:
                if ( !v10 )
                {
                  LODWORD(qword_492638) = 0;
                  qword_492640 = 0;
                  goto LABEL_35;
                }
LABEL_45:
                HIDWORD(qword_492638) = v10 - 1;
LABEL_35:
                sub_406EA4(v23);
                result = &qword_48DD60;
                if ( v24 != qword_48DD60 )
                {
                  v12 = (__int64 *)sub_412340(&qword_48DD60, 0, v24 - qword_48DD60, v11);
                  return sub_404410(v12);
                }
                return result;
              }
LABEL_32:
              if ( !v10 )
              {
                qword_492640 = 0;
                if ( (int)_aarch64_swp4_rel(0, (atomic_uint *)&qword_492638) > 1 )
                  sub_407040(&qword_492638);
                goto LABEL_35;
              }
              goto LABEL_45;
            }
LABEL_51:
            if ( v9 )
            {
              *(_DWORD *)(v4 + 4) = v9 - 1;
              qword_492630 = 0;
              v10 = HIDWORD(qword_492638);
            }
            else
            {
              qword_492630 = 0;
              *(_QWORD *)(v4 + 8) = 0;
              v10 = HIDWORD(qword_492638);
              *(_DWORD *)v4 = 0;
            }
            goto LABEL_40;
          }
LABEL_59:
          v7 = 0;
          if ( a1 != v6 )
          {
LABEL_22:
            v8 = (unsigned int *)*((_QWORD *)v6 + 13);
            if ( v8 )
            {
              while ( a1 != v8 )
              {
                v6 = v8;
                v8 = (unsigned int *)*((_QWORD *)v8 + 13);
                if ( !v8 )
                  goto LABEL_27;
              }
              *((_QWORD *)v6 + 13) = *((_QWORD *)a1 + 13);
            }
LABEL_27:
            *a1 = v3 & 0xFFFFFF7F;
            if ( !v7 )
            {
              v4 = *((_QWORD *)a1 + 17);
              goto LABEL_29;
            }
LABEL_39:
            qword_492630 = 0;
            v10 = HIDWORD(qword_492638);
            if ( v2 )
              goto LABEL_40;
            goto LABEL_32;
          }
LABEL_44:
          off_490050 = (_UNKNOWN *)*((_QWORD *)a1 + 13);
          goto LABEL_27;
        }
LABEL_37:
        v7 = 0x8000;
        v6 = (unsigned int *)off_490050;
        if ( !off_490050 )
        {
          *a1 = v3 & 0xFFFFFF7F;
          goto LABEL_39;
        }
        goto LABEL_21;
      }
      if ( v1 != qword_492640 )
        goto LABEL_12;
    }
    else if ( v1 != qword_492640 )
    {
LABEL_12:
      if ( _aarch64_cas4_acq(0, 1u, (atomic_uint *)&qword_492638) )
        sub_406F40(&qword_492638);
      v2 = (unsigned __int8)byte_490F08;
      qword_492640 = v1;
LABEL_15:
      v3 = *a1;
      qword_492630 = (__int64)a1;
      if ( (v3 & 0x8000) == 0 )
      {
        v4 = *((_QWORD *)a1 + 17);
        v5 = *(_QWORD *)(v4 + 8);
        if ( !v2 )
          goto LABEL_17;
        goto LABEL_48;
      }
      goto LABEL_37;
    }
    ++HIDWORD(qword_492638);
    goto LABEL_15;
  }
  return result;
}
