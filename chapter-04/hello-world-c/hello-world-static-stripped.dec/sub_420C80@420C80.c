// bad sp value at call has been detected, the output may be wrong!
__int64 __fastcall sub_420C80(__int64 a1, int a2)
{
  __int64 v2; // x20
  __int64 v3; // x3
  unsigned __int64 v4; // x5
  unsigned __int16 v6; // w3
  __int64 *v7; // x5
  __int64 v8; // x0
  _DWORD *v9; // x0
  _DWORD *v10; // x21
  int v11; // w1
  __int64 v12; // x24
  __int64 *v13; // x22
  __int64 v14; // x2
  _BYTE *v15; // x19
  void *v16; // x4
  void *v17; // x5
  void *v18; // x6
  __int64 v19; // x27
  double v20; // d0
  double v21; // d1
  double v22; // d2
  double v23; // d3
  double v24; // d4
  double v25; // d5
  double v26; // d6
  double v27; // d7
  __int64 v28; // x3
  int v29; // w1
  int v30; // t1
  __int64 v33; // x2
  int v34; // w1
  __int64 v35; // x2
  int v36; // t1
  __int64 v37; // x26
  int v38; // t1
  int v39; // w1
  _WORD *v40; // x0
  int v41; // t1
  __int64 v42; // x0
  __int64 v43; // x28
  __int64 v44; // x3
  double v45; // d0
  double v46; // d1
  double v47; // d2
  double v48; // d3
  double v49; // d4
  double v50; // d5
  double v51; // d6
  double v52; // d7
  __int64 v53; // x9
  __int64 v54; // x4
  __int64 v55; // x2
  __int64 v56; // x8
  unsigned __int64 v57; // x25
  __int64 v58; // x6
  __int64 v59; // x5
  _BYTE *v60; // x1
  __int64 v61; // x19
  __int64 v62; // x0
  __int64 v63; // x0
  __int64 v64; // x1
  __int64 v65; // x0
  __int64 v66; // x1
  unsigned __int64 v67; // x1
  __int64 v68; // x3
  __int64 v69; // x0
  __int64 v70; // x11
  int64x2_t *v71; // x10
  int64x2_t v72; // q1
  __int64 v73; // x0
  __int64 v74; // [xsp+0h] [xbp-101E0h] BYREF
  _BYTE v75[1008]; // [xsp+10h] [xbp-101D0h] BYREF
  __int64 v76; // [xsp+400h] [xbp-FDE0h]
  __int64 v77; // [xsp+C1E0h] [xbp-4000h] BYREF
  _BYTE v78[16]; // [xsp+10000h] [xbp-1E0h] BYREF
  __int64 v79; // [xsp+10010h] [xbp-1D0h]
  __int64 v80; // [xsp+10018h] [xbp-1C8h]
  __int64 v81; // [xsp+10020h] [xbp-1C0h]
  __int64 v82; // [xsp+10028h] [xbp-1B8h]
  __int64 v83; // [xsp+10030h] [xbp-1B0h]
  __int64 v84; // [xsp+10038h] [xbp-1A8h]
  _BYTE v85[400]; // [xsp+10048h] [xbp-198h] BYREF
  __int64 v86; // [xsp+101D8h] [xbp-8h]

  v2 = a2;
  v3 = a2 + 29LL;
  v4 = v3 & 0xFFFFFFFFFFFF0000LL;
  v6 = v3 & 0xFFF0;
  v7 = (__int64 *)&v78[-v4];
  v86 = qword_48DD60;
  if ( v78 != (_BYTE *)v7 )
  {
    do
      v76 = 0;
    while ( &v74 != v7 );
  }
  v74 = 0;
  if ( v6 >= 0x400uLL )
    v76 = 0;
  v8 = j_ifunc_40DC90(v75, a1, a2);
  *(_QWORD *)(v8 + a2) = *(_QWORD *)"/locale.alias";
  strcpy((char *)(v8 + v2 + 6), "e.alias");
  v9 = (_DWORD *)sub_428EF0(v8, "rce");
  v10 = v9;
  if ( !v9 )
    goto LABEL_57;
  v11 = *v9;
  v12 = 0;
  *v9 |= 0x8000u;
  if ( (v11 & 0x10) != 0 )
  {
    sub_428AD0(v9);
LABEL_57:
    v12 = 0;
    goto LABEL_20;
  }
  v13 = (__int64 *)(_ReadStatusReg(TPIDR_EL0) + 72);
  while ( sub_42C530(v85, 400, v10) )
  {
    v15 = v85;
    v19 = sub_42F180(v85, 10, v14);
    v28 = *v13;
    v29 = v85[0];
    if ( (*(_WORD *)(*v13 + 2LL * v85[0]) & 0x2000) != 0 )
    {
      do
      {
        v30 = (unsigned __int8)*++v15;
        v29 = v30;
      }
      while ( (*(_WORD *)(v28 + 2LL * (unsigned __int8)v30) & 0x2000) != 0 );
    }
    if ( v29 == 35 || v29 == 0 )
      goto LABEL_16;
    v34 = (unsigned __int8)v15[1];
    v35 = (__int64)(v15 + 1);
    if ( v15[1] )
    {
      while ( (*(_WORD *)(v28 + 2LL * (unsigned __int8)v34) & 0x2000) == 0 )
      {
        v36 = *(unsigned __int8 *)++v35;
        v34 = v36;
        if ( !v36 )
          goto LABEL_43;
      }
      *(_BYTE *)v35 = 0;
      v37 = v35 + 1;
      v34 = *(unsigned __int8 *)(v35 + 1);
    }
    else
    {
LABEL_43:
      v37 = v35;
    }
    if ( (*(_WORD *)(v28 + 2LL * (unsigned __int8)v34) & 0x2000) != 0 )
    {
      do
      {
        v38 = *(unsigned __int8 *)++v37;
        v34 = v38;
        v35 = *(unsigned __int16 *)(v28 + 2LL * (unsigned __int8)v38);
      }
      while ( (v35 & 0x2000) != 0 );
    }
    if ( !v34 )
      goto LABEL_16;
    v39 = *(unsigned __int8 *)(v37 + 1);
    v40 = (_WORD *)(v37 + 1);
    if ( !*(_BYTE *)(v37 + 1) )
      goto LABEL_39;
    while ( 1 )
    {
      v35 = *(unsigned __int16 *)(v28 + 2LL * (unsigned __int8)v39);
      if ( (v35 & 0x2000) != 0 )
        break;
      v41 = *((unsigned __int8 *)v40 + 1);
      v40 = (_WORD *)((char *)v40 + 1);
      v39 = v41;
      if ( !v41 )
        goto LABEL_39;
    }
    if ( v39 == 10 )
    {
      *v40 = 2560;
LABEL_39:
      v43 = qword_496948;
      v42 = qword_496950;
      if ( qword_496948 >= (unsigned __int64)qword_496950 )
        goto LABEL_51;
      goto LABEL_40;
    }
    *(_BYTE *)v40 = 0;
    v43 = qword_496948;
    v42 = qword_496950;
    if ( qword_496948 >= (unsigned __int64)qword_496950 )
    {
LABEL_51:
      if ( v42 )
      {
        v68 = 2 * v42;
        v67 = 32 * v42;
      }
      else
      {
        v67 = 1600;
        v68 = 100;
      }
      v84 = v68;
      v69 = sub_40C434(qword_496958, v67, v20, v21, v22, v23, v24, v25, v26, v27, v35, v68, v16, v17, v18);
      if ( !v69 )
        break;
      qword_496950 = v84;
      qword_496958 = v69;
    }
LABEL_40:
    v84 = ifunc_40DFD0(v15) + 1;
    v44 = ifunc_40DFD0(v37) + 1;
    v53 = qword_496960;
    v54 = qword_496970;
    v55 = v84;
    v56 = qword_496960 + v84;
    v57 = qword_496960 + v84 + v44;
    if ( v57 > qword_496968 )
    {
      v64 = v84 + v44;
      if ( (unsigned __int64)(v84 + v44) < 0x400 )
        v64 = 1024;
      v82 = v84;
      v79 = qword_496960 + v84;
      v80 = qword_496960;
      v81 = v44;
      v83 = qword_496970;
      v84 = v64 + qword_496968;
      v65 = sub_40C434(
              qword_496970,
              v64 + qword_496968,
              v45,
              v46,
              v47,
              v48,
              v49,
              v50,
              v51,
              v52,
              (__int64)&v77,
              v44,
              (void *)qword_496970,
              (void *)qword_496968,
              (void *)0x400);
      if ( !v65 )
        break;
      v58 = qword_496958;
      v56 = v79;
      v53 = v80;
      v44 = v81;
      v55 = v82;
      v66 = v84;
      if ( v65 == v83 )
      {
        v59 = 16 * v43;
      }
      else
      {
        v59 = 0;
        if ( v43 )
        {
          v59 = 16 * v43;
          v70 = qword_496958 + 16 * v43;
          v71 = (int64x2_t *)qword_496958;
          v72 = vdupq_n_s64(v65 - v83);
          do
          {
            *v71 = vaddq_s64(*v71, v72);
            ++v71;
          }
          while ( v71 != (int64x2_t *)v70 );
        }
      }
      v54 = v65;
      qword_496968 = v66;
      qword_496970 = v65;
    }
    else
    {
      v58 = qword_496958;
      v59 = 16 * v43;
    }
    v60 = v15;
    v61 = v58 + v59;
    ++v12;
    v80 = v44;
    v81 = v56;
    v82 = v54;
    v83 = v59;
    v84 = v58;
    v62 = j_ifunc_40DC90(v54 + v53, v60, v55);
    *(_QWORD *)(v84 + v83) = v62;
    v63 = j_ifunc_40DC90(v82 + v81, v37, v80);
    qword_496948 = v43 + 1;
    *(_QWORD *)(v61 + 8) = v63;
    qword_496960 = v57;
LABEL_16:
    if ( !v19 )
    {
      while ( sub_42C530(v85, 400, v10) && !sub_42F180(v85, 10, v33) )
        ;
    }
    if ( (*v10 & 0x10) != 0 )
      break;
  }
  sub_428AD0(v10);
  if ( v12 )
    sub_4231C0(qword_496958, qword_496948, 16, sub_420C60);
LABEL_20:
  if ( v86 == qword_48DD60 )
    return v12;
  v73 = sub_412340();
  return sub_4210F0(v73);
}
