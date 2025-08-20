__int64 __fastcall sub_441480(
        __int64 a1,
        __int64 (__fastcall *a2)(_BYTE *, void *, _BYTE *),
        __int64 a3,
        unsigned __int64 a4,
        void *a5,
        double a6,
        double a7,
        double a8,
        double a9,
        double a10,
        double a11,
        double a12,
        double a13,
        __int64 a14,
        void *a15)
{
  __int64 v20; // x3
  _BYTE *v21; // x20
  unsigned int v22; // w6
  __int64 v23; // x5
  unsigned int v24; // w19
  double v25; // d0
  double v26; // d1
  double v27; // d2
  double v28; // d3
  double v29; // d4
  double v30; // d5
  double v31; // d6
  double v32; // d7
  unsigned int *v34; // x0
  unsigned int v35; // w1
  unsigned int *v36; // x20
  unsigned int *v37; // x19
  unsigned int v38; // t1
  int v39; // w0
  unsigned int v40; // w20
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x3
  void *v44; // x4
  void *v45; // x5
  void *v46; // x6
  double v47; // d0
  double v48; // d1
  double v49; // d2
  double v50; // d3
  double v51; // d4
  double v52; // d5
  double v53; // d6
  double v54; // d7
  __int64 v55; // x19
  __int64 v56; // x0
  __int64 v57; // x21
  unsigned __int8 v58; // w4
  int v59; // w3
  __int64 v60; // x1
  __int64 v61; // x1
  __int64 v62; // x2
  __int64 v63; // x3
  void *v64; // x4
  void *v65; // x5
  void *v66; // x6
  _BYTE v67[32]; // [xsp+40h] [xbp-110h] BYREF
  _BYTE v68[232]; // [xsp+60h] [xbp-F0h] BYREF
  __int64 v69; // [xsp+148h] [xbp-8h]

  v69 = qword_48DD60;
  v20 = 0;
  if ( a4 > 4 )
  {
    v21 = (_BYTE *)sub_40CCB0(a4, 8u, a6, a7, a8, a9, a10, a11, a12, a13, a3, 0, a5, &qword_48DD60, a15);
    if ( !v21 )
    {
      v24 = -1;
      goto LABEL_10;
    }
    goto LABEL_4;
  }
  if ( a4 )
  {
    v21 = v67;
LABEL_4:
    v22 = 0;
    v23 = 0;
    do
    {
      ++v22;
      *(_QWORD *)&v21[8 * v23] = a3 + 16 * v23;
      v23 = v22;
    }
    while ( v22 < a4 );
    sub_44A6E0(v68, a1, a3, v20);
    v24 = a2(v68, a5, v21);
    if ( (sub_44A740(v68) & 1) == 0 )
      v24 = -1;
    if ( v21 != v67 )
      sub_40C1A0((unsigned __int64)v21, v25, v26, v27, v28, v29, v30, v31, v32);
    goto LABEL_10;
  }
  sub_44A6E0(v68, a1, a3, 0);
  v24 = a2(v68, a5, v67);
  if ( (sub_44A740(v68) & 1) == 0 )
    v24 = -1;
LABEL_10:
  if ( v69 == qword_48DD60 )
    return v24;
  v34 = (unsigned int *)sub_412340();
  v35 = *v34;
  if ( *v34 )
  {
    v36 = v34;
    v37 = v34;
    while ( v35 <= 0xFF )
    {
      v38 = v37[1];
      ++v37;
      v35 = v38;
      if ( !v38 )
      {
        if ( (unsigned int)(dword_496BE0 - 16) <= 7 )
        {
          v39 = 28;
          goto LABEL_21;
        }
        if ( _aarch64_cas4_acq(0, 1u, (atomic_uint *)algn_496BE4) )
          sub_406F40(algn_496BE4, v47, v48, v49, v50, v51, v52, v53, v54, v41, v42, v43, v44, v45, v46);
        if ( (qword_496BE8
           || (qword_496BE8 = sub_40CCB0(0xFFu, 8u, v47, v48, v49, v50, v51, v52, v53, v54, v42, v43, v44, v45, v46)) != 0)
          && (v55 = (char *)v37 - (char *)v36,
              v56 = sub_40B890(v55 + 16, v47, v48, v49, v50, v51, v52, v53, v54, v41, v42, v43, v44, v45, v46),
              (v57 = v56) != 0) )
        {
          v58 = *v36;
          v59 = 1 << dword_496BE0++;
          *(_QWORD *)v56 = *(_QWORD *)(qword_496BE8 + 8LL * v58);
          *(_DWORD *)(v56 + 8) = v59;
          sub_42FF80(v56 + 12, (__int64)(v36 + 1), v55 >> 2);
          v60 = *(unsigned __int8 *)v36;
          v40 = *(_DWORD *)(v57 + 8);
          *(_QWORD *)(qword_496BE8 + 8 * v60) = v57;
        }
        else
        {
          v40 = -1;
        }
        if ( (int)_aarch64_swp4_rel(0, (atomic_uint *)algn_496BE4) > 1 )
          sub_407040(algn_496BE4, v61, v62, v63, v64, v65, v66);
        return v40;
      }
    }
  }
  v39 = 22;
LABEL_21:
  v40 = -1;
  *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40) = v39;
  return v40;
}
