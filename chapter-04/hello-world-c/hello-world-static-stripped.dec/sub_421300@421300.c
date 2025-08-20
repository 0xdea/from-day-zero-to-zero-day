_QWORD *__fastcall sub_421300(
        __int64 *a1,
        __int64 a2,
        unsigned __int64 a3,
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
  unsigned __int64 v14; // x22
  __int64 v17; // x28
  __int64 v18; // x0
  unsigned __int64 v19; // x28
  __int64 v20; // x20
  __int64 v21; // x0
  unsigned __int64 v22; // x20
  __int64 v23; // x22
  __int64 v24; // x0
  unsigned __int64 v25; // x22
  __int64 v26; // x28
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x3
  void *v30; // x4
  void *v31; // x5
  void *v32; // x6
  double v33; // d0
  double v34; // d1
  double v35; // d2
  double v36; // d3
  double v37; // d4
  double v38; // d5
  double v39; // d6
  double v40; // d7
  __int64 v41; // x0
  unsigned __int64 v42; // x20
  __int64 v43; // x26
  _BYTE *i; // x25
  __int64 v45; // x0
  _BYTE *v46; // x25
  _BYTE *v47; // x0
  _QWORD *v48; // x22
  __int64 v49; // x3
  void *v50; // x4
  void *v51; // x6
  double v52; // d0
  double v53; // d1
  double v54; // d2
  double v55; // d3
  double v56; // d4
  double v57; // d5
  double v58; // d6
  double v59; // d7
  _QWORD *v60; // x26
  int v61; // w0
  signed int v62; // w0
  __int64 v63; // x1
  __int64 v64; // x25
  __int64 v65; // x26
  __int64 v66; // x27
  int v67; // w0
  __int64 v68; // x0
  __int64 v69; // x2
  __int64 v70; // x3
  void *v71; // x4
  void *v72; // x5
  void *v73; // x6
  double v74; // d0
  double v75; // d1
  double v76; // d2
  double v77; // d3
  double v78; // d4
  double v79; // d5
  double v80; // d6
  double v81; // d7
  __int64 v82; // x1
  _QWORD *v83; // x0
  double v84; // d0
  double v85; // d1
  double v86; // d2
  double v87; // d3
  double v88; // d4
  double v89; // d5
  double v90; // d6
  double v91; // d7
  __int64 v92; // x27
  __int64 v93; // x28
  __int64 v94; // x0
  __int64 v95; // x2
  __int64 v96; // x20
  __int64 v97; // x22
  __int64 v98; // x0
  __int64 v99; // x1
  int v100; // w3
  __int64 v101; // x20
  unsigned __int64 v102; // x25
  unsigned __int64 v103; // x22
  __int64 v104; // x0
  __int64 v105; // x0
  int v106; // w23
  __int64 v107; // x28
  __int64 v108; // x3
  __int64 v109; // x0
  __int64 v110; // x1
  __int64 v112; // x0
  int v117; // [xsp+A8h] [xbp+88h]
  __int64 v118; // [xsp+A8h] [xbp+88h]
  unsigned int v119; // [xsp+A8h] [xbp+88h]
  __int64 v120; // [xsp+B0h] [xbp+90h]

  v11 = a4;
  v14 = a3 + 2;
  v117 = a4 & 4;
  v17 = ifunc_40DFD0(a5);
  v18 = 0;
  if ( v117 )
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
  v41 = sub_40B890(v25, v33, v34, v35, v36, v37, v38, v39, v40, v27, v28, v29, v30, v31, v32);
  v42 = v41;
  if ( !v41 )
    return 0;
  sub_412300(v41, a2, a3, v25);
  if ( a3 )
  {
    v43 = a3;
    for ( i = (_BYTE *)v42; ; i = v46 + 1 )
    {
      v45 = ifunc_40DFD0(i);
      v46 = &i[v45];
      v43 = v43 - v45 - 1;
      if ( !v43 )
        break;
      *v46 = 58;
    }
  }
  *(_BYTE *)(v42 + a3 - 1) = 47;
  v47 = (_BYTE *)sub_42EFC0(v42 + a3, a5);
  if ( v117 )
  {
    *v47 = 95;
    v47 = (_BYTE *)sub_42EFC0(v47 + 1, a6);
    if ( (v11 & 2) == 0 )
    {
LABEL_16:
      if ( (v11 & 1) == 0 )
        goto LABEL_17;
LABEL_55:
      *v47 = 46;
      v47 = (_BYTE *)sub_42EFC0(v47 + 1, a8);
      if ( (v11 & 8) == 0 )
        goto LABEL_18;
      goto LABEL_56;
    }
  }
  else if ( (v11 & 2) == 0 )
  {
    goto LABEL_16;
  }
  *v47 = 46;
  v47 = (_BYTE *)sub_42EFC0(v47 + 1, a7);
  if ( (v11 & 1) != 0 )
    goto LABEL_55;
LABEL_17:
  if ( (v11 & 8) == 0 )
    goto LABEL_18;
LABEL_56:
  *v47 = 64;
  v47 = (_BYTE *)sub_42EFC0(v47 + 1, a9);
LABEL_18:
  *v47 = 47;
  v48 = 0;
  j_ifunc_40DC90(v47 + 1, a10, v26 + 1);
  v60 = (_QWORD *)*a1;
  v120 = *a1;
  if ( *a1 )
  {
    do
    {
      if ( *v60 )
      {
        v61 = sub_42F240(*v60, v42);
        if ( !v61 )
          goto LABEL_60;
        if ( v61 < 0 )
          break;
        v48 = v60;
      }
      v60 = (_QWORD *)v60[3];
    }
    while ( v60 );
  }
  if ( a11 )
  {
    v62 = ((v11 >> 1) & 0xFFFFD555) + (v11 & 0x5555);
    v63 = v62 & 0x3333;
    v64 = a3;
    v65 = a2;
    v66 = 0;
    v67 = (((v62 >> 2) & 0xFFFFF333) + v63 + ((int)(((v62 >> 2) & 0xFFFFF333) + v63) >> 4)) & 0xF0F;
    v118 = 1 << (v67 + BYTE1(v67));
    if ( a3 )
    {
      do
      {
        v68 = ifunc_40DFD0(v65);
        v82 = v64 - v68;
        ++v66;
        v64 = v64 - v68 - 1;
        v65 += v68 + 1;
      }
      while ( v82 != 1 );
      v83 = (_QWORD *)sub_40B890(
                        16 * v66 * v118 + 40,
                        v74,
                        v75,
                        v76,
                        v77,
                        v78,
                        v79,
                        v80,
                        v81,
                        1,
                        v69,
                        v70,
                        v71,
                        v72,
                        v73);
      v60 = v83;
      if ( v83 )
      {
        v92 = a3;
        v93 = a2;
        *v83 = v42;
        do
        {
          v94 = ifunc_40DFD0(v93);
          v95 = v92 - v94;
          ++v64;
          v92 = v92 - v94 - 1;
          v93 += v94 + 1;
        }
        while ( v95 != 1 );
        if ( v64 == 1 )
        {
          v60[2] = 0;
          *((_DWORD *)v60 + 2) = (v11 & 3) == 3;
          if ( v48 )
            goto LABEL_32;
        }
        else
        {
          *((_DWORD *)v60 + 2) = 1;
          v60[2] = 0;
          if ( v48 )
          {
LABEL_32:
            v60[3] = v48[3];
            v48[3] = v60;
            goto LABEL_33;
          }
        }
        *a1 = (__int64)v60;
        v60[3] = v120;
LABEL_33:
        v96 = a3;
        v97 = a2;
        do
        {
          v98 = ifunc_40DFD0(v97);
          v99 = v96 - v98;
          ++v92;
          v96 = v96 - v98 - 1;
          v97 += v98 + 1;
        }
        while ( v99 != 1 );
        v100 = v11 - (v92 == 1);
LABEL_36:
        v101 = 0;
        if ( (v100 & 0x80000000) == 0 )
        {
          do
          {
            while ( (v100 & ~v11) != 0 )
              --v100;
            if ( a3 )
            {
              v102 = a2;
              v103 = a2 + a3;
              do
              {
                v119 = v100;
                v104 = ifunc_40DFD0(v102);
                v60[++v101 + 3] = sub_421300(a1, v102, v104 + 1, v119, a5, a6, a7, a8, a9, a10, 1);
                v100 = v119;
                if ( v103 <= v102 )
                  break;
                v105 = ifunc_40DFD0(v102);
                v100 = v119;
                v102 += v105 + 1;
              }
              while ( v103 > v102 );
            }
            --v100;
          }
          while ( v100 != -1 );
        }
        if ( !(unsigned int)sub_42F424(a10, "LC_MESSAGES", 11) && (v11 & 0x80000000) == 0 )
        {
          v106 = ~v11;
          v107 = v101;
          do
          {
            for ( ; (v11 & v106) != 0; --v11 )
              ;
            v108 = (unsigned int)v11;
            ++v101;
            --v11;
            v109 = sub_421300(a1, "/usr/share/locale-langpack", 27, v108, a5, a6, a7, a8, a9, a10, 1);
            v110 = v107 + 4;
            v107 = v101;
            v60[v110] = v109;
          }
          while ( v11 != -1 );
        }
        v60[v101 + 4] = 0;
        return v60;
      }
    }
    else
    {
      v112 = sub_40B890(0x28u, v52, v53, v54, v55, v56, v57, v58, v59, v63, 4294964019LL, v49, v50, (void *)0xF0F, v51);
      v60 = (_QWORD *)v112;
      if ( v112 )
      {
        *(_QWORD *)v112 = v42;
        *(_DWORD *)(v112 + 8) = 1;
        *(_QWORD *)(v112 + 16) = 0;
        if ( v48 )
        {
          *(_QWORD *)(v112 + 24) = v48[3];
          v100 = v11;
          v48[3] = v112;
        }
        else
        {
          v100 = v11;
          *a1 = v112;
          *(_QWORD *)(v112 + 24) = v120;
        }
        goto LABEL_36;
      }
    }
    sub_40C1A0(v42, v84, v85, v86, v87, v88, v89, v90, v91);
    return 0;
  }
  v60 = 0;
LABEL_60:
  sub_40C1A0(v42, v52, v53, v54, v55, v56, v57, v58, v59);
  return v60;
}
