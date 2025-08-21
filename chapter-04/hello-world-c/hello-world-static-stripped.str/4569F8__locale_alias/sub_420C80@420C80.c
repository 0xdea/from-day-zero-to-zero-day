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
  _BYTE *v14; // x19
  __int64 v15; // x4
  __int64 v16; // x5
  __int64 v17; // x27
  long double v18; // q0
  long double v19; // q1
  long double v20; // q2
  long double v21; // q3
  long double v22; // q4
  long double v23; // q5
  long double v24; // q6
  long double v25; // q7
  __int64 v26; // x3
  int v27; // w1
  int v28; // t1
  int v31; // w1
  __int64 v32; // x2
  int v33; // t1
  __int64 v34; // x26
  int v35; // t1
  int v36; // w1
  _WORD *v37; // x0
  int v38; // t1
  __int64 v39; // x0
  __int64 v40; // x28
  __int64 v41; // x3
  long double v42; // q0
  long double v43; // q1
  long double v44; // q2
  long double v45; // q3
  long double v46; // q4
  long double v47; // q5
  long double v48; // q6
  long double v49; // q7
  __int64 v50; // x9
  __int64 v51; // x4
  __int64 v52; // x2
  __int64 v53; // x8
  unsigned __int64 v54; // x25
  __int64 v55; // x6
  __int64 v56; // x5
  _BYTE *v57; // x1
  __int64 v58; // x19
  __int64 v59; // x0
  __int64 v60; // x0
  __int64 v61; // x1
  char *v62; // x0
  __int64 v63; // x1
  unsigned __int64 v64; // x1
  __int64 v65; // x3
  char *v66; // x0
  __int64 v67; // x11
  int64x2_t *v68; // x10
  int64x2_t v69; // q1
  __int64 v70; // x0
  __int64 v71; // [xsp+0h] [xbp-101E0h] BYREF
  _BYTE v72[1008]; // [xsp+10h] [xbp-101D0h] BYREF
  __int64 v73; // [xsp+400h] [xbp-FDE0h]
  __int64 v74; // [xsp+C1E0h] [xbp-4000h] BYREF
  _BYTE v75[16]; // [xsp+10000h] [xbp-1E0h] BYREF
  __int64 v76; // [xsp+10010h] [xbp-1D0h]
  __int64 v77; // [xsp+10018h] [xbp-1C8h]
  __int64 v78; // [xsp+10020h] [xbp-1C0h]
  __int64 v79; // [xsp+10028h] [xbp-1B8h]
  __int64 v80; // [xsp+10030h] [xbp-1B0h]
  __int64 v81; // [xsp+10038h] [xbp-1A8h]
  _BYTE v82[400]; // [xsp+10048h] [xbp-198h] BYREF
  __int64 v83; // [xsp+101D8h] [xbp-8h]

  v2 = a2;
  v3 = a2 + 29LL;
  v4 = v3 & 0xFFFFFFFFFFFF0000LL;
  v6 = v3 & 0xFFF0;
  v7 = (__int64 *)&v75[-v4];
  v83 = qword_48DD60;
  if ( v75 != (_BYTE *)v7 )
  {
    do
      v73 = 0;
    while ( &v71 != v7 );
  }
  v71 = 0;
  if ( v6 >= 0x400uLL )
    v73 = 0;
  v8 = j_ifunc_40DC90(v72, a1, a2);
  *(_QWORD *)(v8 + a2) = *(_QWORD *)"/locale.alias";
  strcpy((char *)(v8 + v2 + 6), "e.alias");
  v9 = (_DWORD *)sub_428EF0(v8);
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
  while ( sub_42C530(v82, 400, v10) )
  {
    v14 = v82;
    v17 = sub_42F180(v82, 10);
    v26 = *v13;
    v27 = v82[0];
    if ( (*(_WORD *)(*v13 + 2LL * v82[0]) & 0x2000) != 0 )
    {
      do
      {
        v28 = (unsigned __int8)*++v14;
        v27 = v28;
      }
      while ( (*(_WORD *)(v26 + 2LL * (unsigned __int8)v28) & 0x2000) != 0 );
    }
    if ( v27 == 35 || v27 == 0 )
      goto LABEL_16;
    v31 = (unsigned __int8)v14[1];
    v32 = (__int64)(v14 + 1);
    if ( v14[1] )
    {
      while ( (*(_WORD *)(v26 + 2LL * (unsigned __int8)v31) & 0x2000) == 0 )
      {
        v33 = *(unsigned __int8 *)++v32;
        v31 = v33;
        if ( !v33 )
          goto LABEL_43;
      }
      *(_BYTE *)v32 = 0;
      v34 = v32 + 1;
      v31 = *(unsigned __int8 *)(v32 + 1);
    }
    else
    {
LABEL_43:
      v34 = v32;
    }
    if ( (*(_WORD *)(v26 + 2LL * (unsigned __int8)v31) & 0x2000) != 0 )
    {
      do
      {
        v35 = *(unsigned __int8 *)++v34;
        v31 = v35;
        v32 = *(unsigned __int16 *)(v26 + 2LL * (unsigned __int8)v35);
      }
      while ( (v32 & 0x2000) != 0 );
    }
    if ( !v31 )
      goto LABEL_16;
    v36 = *(unsigned __int8 *)(v34 + 1);
    v37 = (_WORD *)(v34 + 1);
    if ( !*(_BYTE *)(v34 + 1) )
      goto LABEL_39;
    while ( 1 )
    {
      v32 = *(unsigned __int16 *)(v26 + 2LL * (unsigned __int8)v36);
      if ( (v32 & 0x2000) != 0 )
        break;
      v38 = *((unsigned __int8 *)v37 + 1);
      v37 = (_WORD *)((char *)v37 + 1);
      v36 = v38;
      if ( !v38 )
        goto LABEL_39;
    }
    if ( v36 == 10 )
    {
      *v37 = 2560;
LABEL_39:
      v40 = qword_496948;
      v39 = qword_496950;
      if ( qword_496948 >= (unsigned __int64)qword_496950 )
        goto LABEL_51;
      goto LABEL_40;
    }
    *(_BYTE *)v37 = 0;
    v40 = qword_496948;
    v39 = qword_496950;
    if ( qword_496948 >= (unsigned __int64)qword_496950 )
    {
LABEL_51:
      if ( v39 )
      {
        v65 = 2 * v39;
        v64 = 32 * v39;
      }
      else
      {
        v64 = 1600;
        v65 = 100;
      }
      v81 = v65;
      v66 = sub_40C434(qword_496958, v64, v18, v19, v20, v21, v22, v23, v24, v25, v32, v65, v15, v16);
      if ( !v66 )
        break;
      qword_496950 = v81;
      qword_496958 = (__int64)v66;
    }
LABEL_40:
    v81 = ifunc_40DFD0(v14) + 1;
    v41 = ifunc_40DFD0(v34) + 1;
    v50 = qword_496960;
    v51 = qword_496970;
    v52 = v81;
    v53 = qword_496960 + v81;
    v54 = qword_496960 + v81 + v41;
    if ( v54 > qword_496968 )
    {
      v61 = v81 + v41;
      if ( (unsigned __int64)(v81 + v41) < 0x400 )
        v61 = 1024;
      v79 = v81;
      v76 = qword_496960 + v81;
      v77 = qword_496960;
      v78 = v41;
      v80 = qword_496970;
      v81 = v61 + qword_496968;
      v62 = sub_40C434(
              qword_496970,
              v61 + qword_496968,
              v42,
              v43,
              v44,
              v45,
              v46,
              v47,
              v48,
              v49,
              (__int64)&v74,
              v41,
              qword_496970,
              qword_496968);
      if ( !v62 )
        break;
      v55 = qword_496958;
      v53 = v76;
      v50 = v77;
      v41 = v78;
      v52 = v79;
      v63 = v81;
      if ( v62 == (char *)v80 )
      {
        v56 = 16 * v40;
      }
      else
      {
        v56 = 0;
        if ( v40 )
        {
          v56 = 16 * v40;
          v67 = qword_496958 + 16 * v40;
          v68 = (int64x2_t *)qword_496958;
          v69 = vdupq_n_s64((unsigned __int64)&v62[-v80]);
          do
          {
            *v68 = vaddq_s64(*v68, v69);
            ++v68;
          }
          while ( v68 != (int64x2_t *)v67 );
        }
      }
      v51 = (__int64)v62;
      qword_496968 = v63;
      qword_496970 = (__int64)v62;
    }
    else
    {
      v55 = qword_496958;
      v56 = 16 * v40;
    }
    v57 = v14;
    v58 = v55 + v56;
    ++v12;
    v77 = v41;
    v78 = v53;
    v79 = v51;
    v80 = v56;
    v81 = v55;
    v59 = j_ifunc_40DC90(v51 + v50, v57, v52);
    *(_QWORD *)(v81 + v80) = v59;
    v60 = j_ifunc_40DC90(v79 + v78, v34, v77);
    qword_496948 = v40 + 1;
    *(_QWORD *)(v58 + 8) = v60;
    qword_496960 = v54;
LABEL_16:
    if ( !v17 )
    {
      while ( sub_42C530(v82, 400, v10) && !sub_42F180(v82, 10) )
        ;
    }
    if ( (*v10 & 0x10) != 0 )
      break;
  }
  sub_428AD0(v10);
  if ( v12 )
    sub_4231C0(qword_496958, qword_496948, 16, sub_420C60);
LABEL_20:
  if ( v83 == qword_48DD60 )
    return v12;
  v70 = sub_412340();
  return sub_4210F0(v70);
}
