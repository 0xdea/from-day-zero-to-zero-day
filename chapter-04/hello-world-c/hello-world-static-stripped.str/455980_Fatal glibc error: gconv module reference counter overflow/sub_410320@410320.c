__int64 *__fastcall sub_410320(__int64 a1)
{
  _QWORD *v2; // x20
  __int64 v3; // x2
  __int64 v4; // x3
  __int64 v5; // x4
  __int64 v6; // x5
  long double v7; // q0
  long double v8; // q1
  long double v9; // q2
  long double v10; // q3
  long double v11; // q4
  long double v12; // q5
  long double v13; // q6
  long double v14; // q7
  _QWORD *v15; // x22
  _BYTE *v16; // x4
  char *v17; // x7
  __int64 v18; // x0
  __int64 v19; // x8
  int v20; // w1
  __int64 v21; // x2
  int v22; // w3
  unsigned __int64 v23; // x5
  bool v24; // zf
  int v25; // t1
  __int64 v26; // x2
  unsigned __int64 v27; // x0
  unsigned __int16 v28; // w2
  _QWORD *v29; // x0
  _BYTE *v30; // x21
  _BYTE *v31; // x2
  _BYTE *v32; // x6
  int v33; // t1
  __int64 v34; // x0
  unsigned __int64 v35; // x1
  __int64 v36; // x0
  unsigned __int64 v37; // x1
  __int64 v38; // x3
  __int64 *result; // x0
  _OWORD *v40; // x19
  long double v41; // q0
  __int64 v42; // x0
  _OWORD **v43; // x20
  _OWORD *v44; // x1
  __int128 v45; // q1
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x3
  void *v49; // x4
  void *v50; // x5
  void *v51; // x6
  __int64 v52; // x1
  char v53; // w21
  int v54; // w0
  __int64 v55; // x1
  int v56; // w0
  bool v57; // w0
  __int64 v58; // x0
  __int64 v59; // x1
  _QWORD v60[2]; // [xsp+30h] [xbp-10030h] BYREF
  _BYTE v61[1008]; // [xsp+40h] [xbp-10020h] BYREF
  __int64 v62; // [xsp+430h] [xbp-FC30h]
  _BYTE v63[24]; // [xsp+10030h] [xbp-30h] BYREF
  unsigned __int64 v64; // [xsp+10048h] [xbp-18h] BYREF
  __int64 v65; // [xsp+10050h] [xbp-10h] BYREF
  __int64 v66; // [xsp+10058h] [xbp-8h]

  v2 = *(_QWORD **)(a1 + 32);
  v66 = qword_48DD60;
  sub_42E1E0((__int64)dword_4968B8);
  if ( !*v2 )
  {
    v15 = (_QWORD *)sub_40CCB0(1u, 0x20u, v7, v8, v9, v10, v11, v12, v13, v14, v3, v4, v5, v6);
    if ( !v15 )
    {
LABEL_31:
      *v2 = &off_48C3A0;
      goto LABEL_24;
    }
    v16 = *(_BYTE **)(a1 + 168);
    if ( *(_DWORD *)(a1 + 44) )
    {
      v18 = 11;
      v17 = "TRANSLIT";
      v19 = 8;
    }
    else
    {
      v17 = "";
      v18 = 3;
      v19 = 0;
    }
    v20 = (unsigned __int8)*v16;
    if ( *v16 )
    {
      v21 = *(_QWORD *)(a1 + 168);
      v22 = (unsigned __int8)*v16;
      v23 = 0;
      do
      {
        v24 = v22 == 47;
        v25 = *(unsigned __int8 *)++v21;
        v22 = v25;
        if ( v24 )
          ++v23;
      }
      while ( v22 );
      v26 = v21 - (_QWORD)v16 + v18 + 15;
      v27 = v26 & 0xFFFFFFFFFFFF0000LL;
      v28 = v26 & 0xFFF0;
      v29 = &v63[-v27];
      if ( v63 != (_BYTE *)v29 )
      {
        do
          v62 = 0;
        while ( v60 != v29 );
      }
      v60[0] = 0;
      if ( v28 >= 0x400uLL )
        v62 = 0;
      v30 = v61;
      v31 = v61;
      do
      {
        v32 = v31;
        *v31++ = dword_45DDA0[v20];
        v33 = (unsigned __int8)*++v16;
        v20 = v33;
      }
      while ( v33 );
      if ( v23 > 1 )
      {
LABEL_17:
        *v31 = 0;
        if ( !(unsigned int)sub_415FB0("INTERNAL", v30, &v65, &v64, 0) )
        {
          v35 = v64;
          v34 = v65;
          if ( v64 <= 1 )
          {
            *v15 = v65;
            v15[1] = v35;
            if ( v34 )
            {
              if ( !(unsigned int)sub_415FB0(v30, "INTERNAL", &v65, &v64, 0) )
              {
                v37 = v64;
                v36 = v65;
                if ( v64 <= 1 )
                {
                  v15[2] = v65;
                  v15[3] = v37;
                  if ( v36 )
                  {
LABEL_23:
                    *v2 = v15;
                    goto LABEL_24;
                  }
                  goto LABEL_36;
                }
                sub_416234(v65);
              }
              v15[2] = 0;
LABEL_36:
              if ( *v15 )
                sub_416234(*v15);
LABEL_30:
              sub_40C1A0(v15);
              goto LABEL_31;
            }
LABEL_29:
            if ( v15[2] )
              goto LABEL_23;
            goto LABEL_30;
          }
          sub_416234(v65);
        }
        *v15 = 0;
        goto LABEL_29;
      }
      *v31 = 47;
      if ( v23 )
      {
        v31 = v32 + 2;
        goto LABEL_17;
      }
    }
    else
    {
      v31 = v60;
      v30 = v60;
      LOBYTE(v60[0]) = 47;
    }
    v31[1] = 47;
    if ( v19 )
    {
      v31 += 10;
      *((_QWORD *)v31 - 1) = *(_QWORD *)v17;
    }
    else
    {
      v31 += 2;
    }
    goto LABEL_17;
  }
LABEL_24:
  sub_42DFB0(dword_4968B8);
  result = &qword_48DD60;
  if ( v66 != qword_48DD60 )
  {
    v40 = (_OWORD *)sub_412340(&qword_48DD60, 0, v66 - qword_48DD60, v38);
    v42 = **(_QWORD **)(_ReadStatusReg(TPIDR_EL0) + 16);
    v43 = *(_OWORD ***)(v42 + 32);
    v44 = *v43;
    if ( !*v43 )
    {
      sub_410320(v42, v41);
      v44 = *v43;
    }
    v45 = v44[1];
    *v40 = *v44;
    v40[1] = v45;
    if ( _aarch64_cas4_acq(0, 1u, (atomic_uint *)dword_496870) )
      sub_406F40(dword_496870, v46, v47, v48, v49, v50, v51);
    v52 = *(_QWORD *)v40;
    v53 = 0;
    if ( **(_QWORD **)v40 )
    {
      v54 = *(_DWORD *)(v52 + 16);
      *(_DWORD *)(v52 + 16) = v54 + 1;
      v53 = __OFADD__(v54, 1);
    }
    v55 = *((_QWORD *)v40 + 2);
    if ( *(_QWORD *)v55 )
    {
      v56 = *(_DWORD *)(v55 + 16);
      *(_DWORD *)(v55 + 16) = v56 + 1;
      v57 = __OFADD__(v56, 1);
      v53 |= v57;
    }
    result = (__int64 *)_aarch64_swp4_rel(0, (atomic_uint *)dword_496870);
    if ( (int)result > 1 )
      result = (__int64 *)sub_407040(dword_496870);
    if ( (v53 & 1) != 0 )
    {
      v58 = sub_401A30("Fatal glibc error: gconv module reference counter overflow\n");
      return (__int64 *)sub_4106C4(v58, v59);
    }
  }
  return result;
}
