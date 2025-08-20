__int64 *__fastcall sub_410320(__int64 a1)
{
  _QWORD *v2; // x20
  __int64 v3; // x2
  __int64 v4; // x3
  void *v5; // x4
  void *v6; // x5
  void *v7; // x6
  double v8; // d0
  double v9; // d1
  double v10; // d2
  double v11; // d3
  double v12; // d4
  double v13; // d5
  double v14; // d6
  double v15; // d7
  _QWORD *v16; // x22
  _BYTE *v17; // x4
  char *v18; // x7
  __int64 v19; // x0
  __int64 v20; // x8
  int v21; // w1
  __int64 v22; // x2
  int v23; // w3
  unsigned __int64 v24; // x5
  bool v25; // zf
  int v26; // t1
  __int64 v27; // x2
  unsigned __int64 v28; // x0
  unsigned __int16 v29; // w2
  _QWORD *v30; // x0
  _BYTE *v31; // x21
  _BYTE *v32; // x2
  _BYTE *v33; // x6
  int v34; // t1
  double v35; // d0
  double v36; // d1
  double v37; // d2
  double v38; // d3
  double v39; // d4
  double v40; // d5
  double v41; // d6
  double v42; // d7
  __int64 v43; // x0
  unsigned __int64 v44; // x1
  __int64 v45; // x0
  unsigned __int64 v46; // x1
  __int64 v47; // x3
  __int64 *result; // x0
  _OWORD *v49; // x19
  long double v50; // q0
  __int64 v51; // x0
  _OWORD **v52; // x20
  _OWORD *v53; // x1
  __int128 v54; // q1
  __int64 v55; // x1
  __int64 v56; // x2
  __int64 v57; // x3
  void *v58; // x4
  void *v59; // x5
  void *v60; // x6
  double v61; // d0
  double v62; // d1
  double v63; // d2
  double v64; // d3
  double v65; // d4
  double v66; // d5
  double v67; // d6
  double v68; // d7
  __int64 v69; // x1
  char v70; // w21
  int v71; // w0
  __int64 v72; // x1
  int v73; // w0
  bool v74; // w0
  __int64 v75; // x1
  __int64 v76; // x2
  __int64 v77; // x3
  void *v78; // x4
  void *v79; // x5
  void *v80; // x6
  double v81; // d0
  double v82; // d1
  double v83; // d2
  double v84; // d3
  double v85; // d4
  double v86; // d5
  double v87; // d6
  double v88; // d7
  _QWORD v89[2]; // [xsp+30h] [xbp-10030h] BYREF
  _BYTE v90[1008]; // [xsp+40h] [xbp-10020h] BYREF
  __int64 v91; // [xsp+430h] [xbp-FC30h]
  _BYTE v92[24]; // [xsp+10030h] [xbp-30h] BYREF
  unsigned __int64 v93; // [xsp+10048h] [xbp-18h] BYREF
  __int64 v94; // [xsp+10050h] [xbp-10h] BYREF
  __int64 v95; // [xsp+10058h] [xbp-8h]

  v2 = *(_QWORD **)(a1 + 32);
  v95 = qword_48DD60;
  sub_42E1E0(&unk_4968B8, &qword_48DD60, 0);
  if ( !*v2 )
  {
    v16 = (_QWORD *)sub_40CCB0(1u, 0x20u, v8, v9, v10, v11, v12, v13, v14, v15, v3, v4, v5, v6, v7);
    if ( !v16 )
    {
LABEL_31:
      *v2 = &off_48C3A0;
      goto LABEL_24;
    }
    v17 = *(_BYTE **)(a1 + 168);
    if ( *(_DWORD *)(a1 + 44) )
    {
      v19 = 11;
      v18 = "TRANSLIT";
      v20 = 8;
    }
    else
    {
      v18 = "";
      v19 = 3;
      v20 = 0;
    }
    v21 = (unsigned __int8)*v17;
    if ( *v17 )
    {
      v22 = *(_QWORD *)(a1 + 168);
      v23 = (unsigned __int8)*v17;
      v24 = 0;
      do
      {
        v25 = v23 == 47;
        v26 = *(unsigned __int8 *)++v22;
        v23 = v26;
        if ( v25 )
          ++v24;
      }
      while ( v23 );
      v27 = v22 - (_QWORD)v17 + v19 + 15;
      v28 = v27 & 0xFFFFFFFFFFFF0000LL;
      v29 = v27 & 0xFFF0;
      v30 = &v92[-v28];
      if ( v92 != (_BYTE *)v30 )
      {
        do
          v91 = 0;
        while ( v89 != v30 );
      }
      v89[0] = 0;
      if ( v29 >= 0x400uLL )
        v91 = 0;
      v31 = v90;
      v32 = v90;
      do
      {
        v33 = v32;
        *v32++ = dword_45DDA0[v21];
        v34 = (unsigned __int8)*++v17;
        v21 = v34;
      }
      while ( v34 );
      if ( v24 > 1 )
      {
LABEL_17:
        *v32 = 0;
        if ( !(unsigned int)sub_415FB0("INTERNAL", v31, &v94, &v93, 0) )
        {
          v44 = v93;
          v43 = v94;
          if ( v93 <= 1 )
          {
            *v16 = v94;
            v16[1] = v44;
            if ( v43 )
            {
              if ( !(unsigned int)sub_415FB0(v31, "INTERNAL", &v94, &v93, 0) )
              {
                v46 = v93;
                v45 = v94;
                if ( v93 <= 1 )
                {
                  v16[2] = v94;
                  v16[3] = v46;
                  if ( v45 )
                  {
LABEL_23:
                    *v2 = v16;
                    goto LABEL_24;
                  }
                  goto LABEL_36;
                }
                sub_416234(v94);
              }
              v16[2] = 0;
LABEL_36:
              if ( *v16 )
                sub_416234(*v16);
LABEL_30:
              sub_40C1A0((unsigned __int64)v16, v35, v36, v37, v38, v39, v40, v41, v42);
              goto LABEL_31;
            }
LABEL_29:
            if ( v16[2] )
              goto LABEL_23;
            goto LABEL_30;
          }
          sub_416234(v94);
        }
        *v16 = 0;
        goto LABEL_29;
      }
      *v32 = 47;
      if ( v24 )
      {
        v32 = v33 + 2;
        goto LABEL_17;
      }
    }
    else
    {
      v32 = v89;
      v31 = v89;
      LOBYTE(v89[0]) = 47;
    }
    v32[1] = 47;
    if ( v20 )
    {
      v32 += 10;
      *((_QWORD *)v32 - 1) = *(_QWORD *)v18;
    }
    else
    {
      v32 += 2;
    }
    goto LABEL_17;
  }
LABEL_24:
  sub_42DFB0(&unk_4968B8);
  result = &qword_48DD60;
  if ( v95 != qword_48DD60 )
  {
    v49 = (_OWORD *)sub_412340(&qword_48DD60, 0, v95 - qword_48DD60, v47);
    v51 = **(_QWORD **)(_ReadStatusReg(TPIDR_EL0) + 16);
    v52 = *(_OWORD ***)(v51 + 32);
    v53 = *v52;
    if ( !*v52 )
    {
      sub_410320(v51, v50);
      v53 = *v52;
    }
    v54 = v53[1];
    *v49 = *v53;
    v49[1] = v54;
    if ( _aarch64_cas4_acq(0, 1u, (atomic_uint *)dword_496870) )
      sub_406F40(dword_496870, v61, v62, v63, v64, v65, v66, v67, v68, v55, v56, v57, v58, v59, v60);
    v69 = *(_QWORD *)v49;
    v70 = 0;
    if ( **(_QWORD **)v49 )
    {
      v71 = *(_DWORD *)(v69 + 16);
      *(_DWORD *)(v69 + 16) = v71 + 1;
      v70 = __OFADD__(v71, 1);
    }
    v72 = *((_QWORD *)v49 + 2);
    if ( *(_QWORD *)v72 )
    {
      v73 = *(_DWORD *)(v72 + 16);
      *(_DWORD *)(v72 + 16) = v73 + 1;
      v74 = __OFADD__(v73, 1);
      v70 |= v74;
    }
    result = (__int64 *)_aarch64_swp4_rel(0, (atomic_uint *)dword_496870);
    if ( (int)result > 1 )
      result = (__int64 *)sub_407040(dword_496870, v75, v76, v77, v78, v79, v80);
    if ( (v70 & 1) != 0 )
      sub_401A30(
        (__int64)"Fatal glibc error: gconv module reference counter overflow\n",
        v81,
        v82,
        v83,
        v84,
        v85,
        v86,
        v87,
        v88);
  }
  return result;
}
