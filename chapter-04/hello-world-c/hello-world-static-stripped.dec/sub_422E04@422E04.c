__int64 *__fastcall sub_422E04(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
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
  unsigned __int64 v15; // x19
  __int64 v16; // x20
  __int64 v17; // x21
  void *v18; // x22
  __int64 (__fastcall *v19)(_QWORD, _QWORD, _QWORD); // x23
  __int64 v20; // x25
  __int64 v21; // x26
  __int64 v22; // x27
  __int64 v23; // x28
  unsigned __int64 v24; // x24
  _BYTE *v25; // x20
  int v26; // w3
  double v27; // d0
  double v28; // d1
  double v29; // d2
  double v30; // d3
  double v31; // d4
  double v32; // d5
  double v33; // d6
  double v34; // d7
  __int64 *result; // x0
  unsigned __int64 v36; // x0
  unsigned __int64 StatusReg; // x27
  int v38; // w28
  __int64 v39; // x0
  unsigned __int64 v40; // x27
  int v41; // w28
  __int64 v42; // x0
  int v43; // w21
  unsigned __int64 v44; // x27
  __int64 v45; // x20
  unsigned __int64 v46; // x3
  __int64 v47; // x28
  __int128 *v48; // x20
  int v49; // w0
  __int128 *i; // x27
  __int64 v51; // x20
  unsigned __int64 v52; // x28
  __int64 v53; // x26
  __int128 *v54; // x20
  unsigned __int64 v55; // [xsp+0h] [xbp-440h]
  unsigned __int64 v56; // [xsp+8h] [xbp-438h]
  unsigned __int64 v57; // [xsp+10h] [xbp-430h] BYREF
  int v58; // [xsp+18h] [xbp-428h]
  __int64 (__fastcall *v59)(_QWORD, _QWORD, _QWORD); // [xsp+20h] [xbp-420h]
  void *v60; // [xsp+28h] [xbp-418h]
  _BYTE *v61; // [xsp+30h] [xbp-410h]
  _BYTE v62[968]; // [xsp+38h] [xbp-408h] BYREF
  __int64 v63; // [xsp+400h] [xbp-40h]
  __int64 v64; // [xsp+438h] [xbp-8h]
  unsigned __int64 v65; // [xsp+450h] [xbp+10h]
  __int64 v66; // [xsp+458h] [xbp+18h]
  __int64 v67; // [xsp+460h] [xbp+20h]
  void *v68; // [xsp+468h] [xbp+28h]
  __int64 v69; // [xsp+480h] [xbp+40h]
  __int64 v70; // [xsp+488h] [xbp+48h]
  __int64 v71; // [xsp+490h] [xbp+50h]
  __int64 v72; // [xsp+498h] [xbp+58h]

  v63 = 0;
  v24 = a2;
  v64 = qword_48DD60;
  if ( a2 > 1 )
  {
    v65 = v15;
    v19 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))a4;
    v66 = v16;
    v15 = a3;
    v67 = v17;
    v68 = v18;
    v18 = a5;
    v69 = v20;
    v20 = a1;
    v70 = v21;
    if ( a3 > 0x20 )
    {
      v36 = a3 + 16 * a2;
      v25 = v62;
      if ( v36 > 0x400 )
      {
        v71 = v22;
        StatusReg = _ReadStatusReg(TPIDR_EL0);
        v72 = v23;
        v38 = *(_DWORD *)(StatusReg + 40);
        v39 = sub_40B890(v36, a6, a7, a8, a9, a10, a11, a12, a13, 0, a3, a4, a5, &qword_48DD60, a15);
        *(_DWORD *)(StatusReg + 40) = v38;
        v25 = (_BYTE *)v39;
        if ( !v39 )
          goto LABEL_24;
        v22 = v71;
        v23 = v72;
      }
      v57 = 8;
      v58 = 2;
      v59 = v19;
      v60 = v18;
      v61 = v25;
      sub_422CD0((__int64 *)&v57, v20, v24, v15);
    }
    else
    {
      v25 = v62;
      if ( a2 * a3 > 0x400 )
      {
        v71 = v22;
        v40 = _ReadStatusReg(TPIDR_EL0);
        v72 = v23;
        v41 = *(_DWORD *)(v40 + 40);
        v42 = sub_40B890(a2 * a3, a6, a7, a8, a9, a10, a11, a12, a13, 0, a3, a4, a5, &qword_48DD60, a15);
        *(_DWORD *)(v40 + 40) = v41;
        v25 = (_BYTE *)v42;
        if ( !v42 )
          goto LABEL_23;
        v22 = v71;
        v23 = v72;
      }
      v57 = v15;
      v26 = 3;
      if ( ((v15 | v20) & 3) == 0 )
      {
        v26 = 1;
        if ( v15 != 4 )
        {
          v26 = 3;
          if ( v15 == 8 )
          {
            if ( (v20 & 7) != 0 )
              v26 = 3;
            else
              v26 = 0;
          }
        }
      }
      v58 = v26;
      v59 = v19;
      v60 = v18;
      v61 = v25;
      sub_422A90((__int64 *)&v57, (__int64 *)v20, v24);
    }
    if ( v25 != v62 )
      sub_40C1A0((unsigned __int64)v25, v27, v28, v29, v30, v31, v32, v33, v34);
    v15 = v65;
    v16 = v66;
    v17 = v67;
    v18 = v68;
    v20 = v69;
    v21 = v70;
  }
  while ( 1 )
  {
    result = &qword_48DD60;
    if ( v64 == qword_48DD60 )
      return result;
    v65 = v15;
    v66 = v16;
    v67 = v17;
    v68 = v18;
    v69 = v20;
    v70 = v21;
    v71 = v22;
    v72 = v23;
    sub_412340();
LABEL_23:
    if ( ((v15 | v20) & 3) != 0 )
      goto LABEL_24;
    if ( v15 == 4 )
    {
      v43 = 1;
      goto LABEL_25;
    }
    if ( v15 != 8 || (v20 & 7) != 0 )
LABEL_24:
      v43 = 3;
    else
      v43 = 0;
LABEL_25:
    v44 = --v24 | 1;
    v55 = v24 >> 1;
    do
    {
      if ( v44 <= v24 )
      {
        v45 = v55;
        v46 = v44;
        while ( 1 )
        {
          if ( v24 <= v46
            || (v56 = v46,
                v47 = 2 * (v45 + 1),
                v49 = v19(v20 + v15 * v46, v20 + 2 * (v15 + v45 * v15), v18),
                v46 = v56,
                (v49 & 0x80000000) == 0) )
          {
            v47 = v46;
          }
          if ( v47 == v45 )
            break;
          v48 = (__int128 *)(v20 + v15 * v45);
          if ( (v19(v48, v20 + v15 * v47, v18) & 0x80000000) == 0 )
            break;
          sub_422970((__int128 *)(v20 + v15 * v47), v48, v15, v43);
          v46 = 2 * v47 + 1;
          if ( v46 > v24 )
            break;
          v45 = v47;
        }
      }
      v44 -= 2LL;
      --v55;
    }
    while ( v55 != -1 );
    for ( i = (__int128 *)(v20 + v15 * v24); ; i = (__int128 *)((char *)i - v15) )
    {
      sub_422970((__int128 *)v20, i, v15, v43);
      if ( !--v24 )
        break;
      v51 = 0;
      v52 = 1;
      while ( 1 )
      {
        if ( v24 <= v52
          || (v53 = 2 * (v51 + 1), (v19(v20 + v15 * v52, v20 + 2 * (v15 + v51 * v15), v18) & 0x80000000) == 0) )
        {
          v53 = v52;
        }
        if ( v53 == v51 )
          break;
        v54 = (__int128 *)(v20 + v15 * v51);
        if ( (v19(v54, v20 + v15 * v53, v18) & 0x80000000) == 0 )
          break;
        v52 = 2 * v53 + 1;
        sub_422970((__int128 *)(v20 + v15 * v53), v54, v15, v43);
        if ( v24 < v52 )
          break;
        v51 = v53;
      }
    }
    v15 = v65;
    v16 = v66;
    v17 = v67;
    v18 = v68;
    v20 = v69;
    v21 = v70;
    v22 = v71;
    v23 = v72;
  }
}
