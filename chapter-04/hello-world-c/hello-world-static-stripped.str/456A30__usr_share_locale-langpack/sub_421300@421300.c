_QWORD *__fastcall sub_421300(
        __int64 *a1,
        unsigned __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        int a11)
{
  int v11; // w19
  __int64 v14; // x22
  __int64 v17; // x28
  __int64 v18; // x0
  __int64 v19; // x28
  __int64 v20; // x20
  __int64 v21; // x0
  __int64 v22; // x20
  __int64 v23; // x22
  __int64 v24; // x0
  unsigned __int64 v25; // x22
  __int64 v26; // x28
  __int64 v27; // x1
  __int16 *v28; // x2
  __int64 v29; // x3
  __int64 v30; // x4
  __int64 v31; // x5
  long double v32; // q0
  long double v33; // q1
  long double v34; // q2
  long double v35; // q3
  long double v36; // q4
  long double v37; // q5
  long double v38; // q6
  long double v39; // q7
  __int64 v40; // x0
  __int64 v41; // x20
  __int64 v42; // x26
  _BYTE *i; // x25
  __int64 v44; // x0
  _BYTE *v45; // x25
  _BYTE *v46; // x0
  __int64 v47; // x22
  __int64 v48; // x3
  __int64 v49; // x4
  long double v50; // q0
  long double v51; // q1
  long double v52; // q2
  long double v53; // q3
  long double v54; // q4
  long double v55; // q5
  long double v56; // q6
  long double v57; // q7
  __int64 v58; // x26
  int v59; // w0
  signed int v60; // w0
  __int64 v61; // x1
  __int64 v62; // x25
  unsigned __int64 v63; // x26
  __int64 v64; // x27
  int v65; // w0
  __int64 v66; // x0
  __int16 *v67; // x2
  __int64 v68; // x3
  __int64 v69; // x4
  __int64 v70; // x5
  long double v71; // q0
  long double v72; // q1
  long double v73; // q2
  long double v74; // q3
  long double v75; // q4
  long double v76; // q5
  long double v77; // q6
  long double v78; // q7
  __int64 v79; // x1
  _QWORD *v80; // x0
  __int64 v81; // x27
  unsigned __int64 v82; // x28
  __int64 v83; // x0
  __int64 v84; // x2
  __int64 v85; // x20
  unsigned __int64 v86; // x22
  __int64 v87; // x0
  __int64 v88; // x1
  int v89; // w3
  __int64 v90; // x20
  unsigned __int64 v91; // x25
  unsigned __int64 v92; // x22
  __int64 v93; // x0
  __int64 v94; // x0
  int v95; // w23
  __int64 v96; // x28
  int v97; // w3
  _QWORD *v98; // x0
  __int64 v99; // x1
  __int64 v101; // x0
  int v106; // [xsp+A8h] [xbp+88h]
  __int64 v107; // [xsp+A8h] [xbp+88h]
  int v108; // [xsp+A8h] [xbp+88h]
  __int64 j; // [xsp+B0h] [xbp+90h]

  v11 = a4;
  v14 = a3 + 2;
  v106 = a4 & 4;
  v17 = ifunc_40DFD0(a5);
  v18 = 0;
  if ( v106 )
    v18 = ifunc_40DFD0(a6) + 1;
  v19 = v17 + v18 + v14;
  v20 = 0;
  if ( (v11 & 2) != 0 )
    v20 = ifunc_40DFD0(a7) + 1;
  v21 = 0;
  if ( (v11 & 1) != 0 )
    v21 = ifunc_40DFD0(a8) + 1;
  v22 = v20 + v21 + v19;
  v23 = 0;
  if ( (v11 & 8) != 0 )
    v23 = ifunc_40DFD0(a9) + 1;
  v24 = ifunc_40DFD0(a10);
  v25 = v24 + v23 + v22;
  v26 = v24;
  v40 = sub_40B890(v25, v32, v33, v34, v35, v36, v37, v38, v39, v27, v28, v29, v30, v31);
  v41 = v40;
  if ( !v40 )
    return 0;
  sub_412300(v40, a2, a3, v25);
  if ( a3 )
  {
    v42 = a3;
    for ( i = (_BYTE *)v41; ; i = v45 + 1 )
    {
      v44 = ifunc_40DFD0(i);
      v45 = &i[v44];
      v42 = v42 - v44 - 1;
      if ( !v42 )
        break;
      *v45 = 58;
    }
  }
  *(_BYTE *)(v41 + a3 - 1) = 47;
  v46 = (_BYTE *)sub_42EFC0(v41 + a3, a5);
  if ( v106 )
  {
    *v46 = 95;
    v46 = (_BYTE *)sub_42EFC0(v46 + 1, a6);
    if ( (v11 & 2) == 0 )
    {
LABEL_16:
      if ( (v11 & 1) == 0 )
        goto LABEL_17;
LABEL_55:
      *v46 = 46;
      v46 = (_BYTE *)sub_42EFC0(v46 + 1, a8);
      if ( (v11 & 8) == 0 )
        goto LABEL_18;
      goto LABEL_56;
    }
  }
  else if ( (v11 & 2) == 0 )
  {
    goto LABEL_16;
  }
  *v46 = 46;
  v46 = (_BYTE *)sub_42EFC0(v46 + 1, a7);
  if ( (v11 & 1) != 0 )
    goto LABEL_55;
LABEL_17:
  if ( (v11 & 8) == 0 )
    goto LABEL_18;
LABEL_56:
  *v46 = 64;
  v46 = (_BYTE *)sub_42EFC0(v46 + 1, a9);
LABEL_18:
  *v46 = 47;
  v47 = 0;
  j_ifunc_40DC90(v46 + 1, a10, v26 + 1);
  v58 = *a1;
  for ( j = *a1; v58; v58 = *(_QWORD *)(v58 + 24) )
  {
    if ( *(_QWORD *)v58 )
    {
      v59 = sub_42F240(*(_QWORD *)v58, v41);
      if ( !v59 )
        goto LABEL_60;
      if ( v59 < 0 )
        break;
      v47 = v58;
    }
  }
  if ( a11 )
  {
    v60 = ((v11 >> 1) & 0xFFFFD555) + (v11 & 0x5555);
    v61 = v60 & 0x3333;
    v62 = a3;
    v63 = a2;
    v64 = 0;
    v65 = (((v60 >> 2) & 0xFFFFF333) + v61 + ((int)(((v60 >> 2) & 0xFFFFF333) + v61) >> 4)) & 0xF0F;
    v107 = 1 << (v65 + BYTE1(v65));
    if ( a3 )
    {
      do
      {
        v66 = ifunc_40DFD0(v63);
        v79 = v62 - v66;
        ++v64;
        v62 = v62 - v66 - 1;
        v63 += v66 + 1;
      }
      while ( v79 != 1 );
      v80 = (_QWORD *)sub_40B890(16 * v64 * v107 + 40, v71, v72, v73, v74, v75, v76, v77, v78, 1, v67, v68, v69, v70);
      v58 = (__int64)v80;
      if ( v80 )
      {
        v81 = a3;
        v82 = a2;
        *v80 = v41;
        do
        {
          v83 = ifunc_40DFD0(v82);
          v84 = v81 - v83;
          ++v62;
          v81 = v81 - v83 - 1;
          v82 += v83 + 1;
        }
        while ( v84 != 1 );
        if ( v62 == 1 )
        {
          *(_QWORD *)(v58 + 16) = 0;
          *(_DWORD *)(v58 + 8) = (v11 & 3) == 3;
          if ( v47 )
            goto LABEL_32;
        }
        else
        {
          *(_DWORD *)(v58 + 8) = 1;
          *(_QWORD *)(v58 + 16) = 0;
          if ( v47 )
          {
LABEL_32:
            *(_QWORD *)(v58 + 24) = *(_QWORD *)(v47 + 24);
            *(_QWORD *)(v47 + 24) = v58;
            goto LABEL_33;
          }
        }
        *a1 = v58;
        *(_QWORD *)(v58 + 24) = j;
LABEL_33:
        v85 = a3;
        v86 = a2;
        do
        {
          v87 = ifunc_40DFD0(v86);
          v88 = v85 - v87;
          ++v81;
          v85 = v85 - v87 - 1;
          v86 += v87 + 1;
        }
        while ( v88 != 1 );
        v89 = v11 - (v81 == 1);
LABEL_36:
        v90 = 0;
        if ( (v89 & 0x80000000) == 0 )
        {
          do
          {
            while ( (v89 & ~v11) != 0 )
              --v89;
            if ( a3 )
            {
              v91 = a2;
              v92 = a2 + a3;
              do
              {
                v108 = v89;
                v93 = ifunc_40DFD0(v91);
                ++v90;
                *(_QWORD *)(v58 + 24 + 8 * v90) = sub_421300(a1, v91, v93 + 1, v108, a5, a6, a7, a8, a9, a10, 1);
                v89 = v108;
                if ( v92 <= v91 )
                  break;
                v94 = ifunc_40DFD0(v91);
                v89 = v108;
                v91 += v94 + 1;
              }
              while ( v92 > v91 );
            }
            --v89;
          }
          while ( v89 != -1 );
        }
        if ( !(unsigned int)sub_42F424(a10, "LC_MESSAGES", 11) && (v11 & 0x80000000) == 0 )
        {
          v95 = ~v11;
          v96 = v90;
          do
          {
            for ( ; (v11 & v95) != 0; --v11 )
              ;
            v97 = v11;
            ++v90;
            --v11;
            v98 = sub_421300(a1, (unsigned __int64)"/usr/share/locale-langpack", 27, v97, a5, a6, a7, a8, a9, a10, 1);
            v99 = v96 + 4;
            v96 = v90;
            *(_QWORD *)(v58 + 8 * v99) = v98;
          }
          while ( v11 != -1 );
        }
        *(_QWORD *)(v58 + 8 * (v90 + 4)) = 0;
        return (_QWORD *)v58;
      }
    }
    else
    {
      v101 = sub_40B890(0x28u, v50, v51, v52, v53, v54, v55, v56, v57, v61, (__int16 *)0xFFFFF333LL, v48, v49, 3855);
      v58 = v101;
      if ( v101 )
      {
        *(_QWORD *)v101 = v41;
        *(_DWORD *)(v101 + 8) = 1;
        *(_QWORD *)(v101 + 16) = 0;
        if ( v47 )
        {
          *(_QWORD *)(v101 + 24) = *(_QWORD *)(v47 + 24);
          v89 = v11;
          *(_QWORD *)(v47 + 24) = v101;
        }
        else
        {
          v89 = v11;
          *a1 = v101;
          *(_QWORD *)(v101 + 24) = j;
        }
        goto LABEL_36;
      }
    }
    sub_40C1A0(v41);
    return 0;
  }
  v58 = 0;
LABEL_60:
  sub_40C1A0(v41);
  return (_QWORD *)v58;
}
