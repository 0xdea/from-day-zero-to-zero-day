_QWORD *__fastcall nl_make_l10nflist(
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
  unsigned __int64 v24; // x22
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  void *v28; // x4
  void *v29; // x5
  void *v30; // x6
  double v31; // d0
  double v32; // d1
  double v33; // d2
  double v34; // d3
  double v35; // d4
  double v36; // d5
  double v37; // d6
  double v38; // d7
  __int64 v39; // x0
  __int64 v40; // x20
  __int64 v41; // x26
  _BYTE *i; // x25
  __int64 v43; // x0
  _BYTE *v44; // x25
  _BYTE *v45; // x0
  _QWORD *v46; // x22
  __int64 v47; // x3
  void *v48; // x4
  void *v49; // x6
  double v50; // d0
  double v51; // d1
  double v52; // d2
  double v53; // d3
  double v54; // d4
  double v55; // d5
  double v56; // d6
  double v57; // d7
  _QWORD *v58; // x26
  int v59; // w0
  signed int v60; // w0
  __int64 v61; // x1
  __int64 v62; // x25
  __int64 v63; // x26
  __int64 v64; // x27
  int v65; // w0
  __int64 v66; // x0
  __int64 v67; // x2
  __int64 v68; // x3
  void *v69; // x4
  void *v70; // x5
  void *v71; // x6
  double v72; // d0
  double v73; // d1
  double v74; // d2
  double v75; // d3
  double v76; // d4
  double v77; // d5
  double v78; // d6
  double v79; // d7
  __int64 v80; // x1
  _QWORD *v81; // x0
  double v82; // d0
  double v83; // d1
  double v84; // d2
  double v85; // d3
  double v86; // d4
  double v87; // d5
  double v88; // d6
  double v89; // d7
  __int64 v90; // x27
  __int64 v91; // x28
  __int64 v92; // x0
  __int64 v93; // x2
  __int64 v94; // x20
  __int64 v95; // x22
  __int64 v96; // x0
  __int64 v97; // x1
  int v98; // w3
  __int64 v99; // x20
  unsigned __int64 v100; // x25
  unsigned __int64 v101; // x22
  __int64 v102; // x0
  __int64 v103; // x0
  int v104; // w23
  __int64 v105; // x28
  __int64 v106; // x3
  __int64 l10nflist; // x0
  __int64 v108; // x1
  __int64 v110; // x0
  int v115; // [xsp+A8h] [xbp+88h]
  __int64 v116; // [xsp+A8h] [xbp+88h]
  unsigned int v117; // [xsp+A8h] [xbp+88h]
  __int64 v118; // [xsp+B0h] [xbp+90h]

  v11 = a4;
  v14 = a3 + 2;
  v115 = a4 & 4;
  v17 = strlen(a5);
  v18 = 0;
  if ( v115 )
    v18 = strlen(a6) + 1;
  v19 = v17 + v18 + v14;
  v20 = 0;
  if ( (v11 & 2) != 0 )
    v20 = strlen(a7) + 1;
  v21 = 0;
  if ( (v11 & 1) != 0 )
    v21 = strlen(a8) + 1;
  v22 = v20 + v21 + v19;
  v23 = 0;
  if ( (v11 & 8) != 0 )
    v23 = strlen(a9) + 1;
  v24 = strlen(a10) + v23 + v22;
  v39 = malloc(v24, v31, v32, v33, v34, v35, v36, v37, v38, v25, v26, v27, v28, v29, v30);
  v40 = v39;
  if ( !v39 )
    return 0;
  _memcpy_chk(v39, a2, a3, v24);
  if ( a3 )
  {
    v41 = a3;
    for ( i = (_BYTE *)v40; ; i = v44 + 1 )
    {
      v43 = strlen(i);
      v44 = &i[v43];
      v41 = v41 - v43 - 1;
      if ( !v41 )
        break;
      *v44 = 58;
    }
  }
  *(_BYTE *)(v40 + a3 - 1) = 47;
  v45 = (_BYTE *)stpcpy(v40 + a3, a5);
  if ( v115 )
  {
    *v45 = 95;
    v45 = (_BYTE *)stpcpy(v45 + 1, a6);
    if ( (v11 & 2) == 0 )
    {
LABEL_16:
      if ( (v11 & 1) == 0 )
        goto LABEL_17;
LABEL_55:
      *v45 = 46;
      v45 = (_BYTE *)stpcpy(v45 + 1, a8);
      if ( (v11 & 8) == 0 )
        goto LABEL_18;
      goto LABEL_56;
    }
  }
  else if ( (v11 & 2) == 0 )
  {
    goto LABEL_16;
  }
  *v45 = 46;
  v45 = (_BYTE *)stpcpy(v45 + 1, a7);
  if ( (v11 & 1) != 0 )
    goto LABEL_55;
LABEL_17:
  if ( (v11 & 8) == 0 )
    goto LABEL_18;
LABEL_56:
  *v45 = 64;
  v45 = (_BYTE *)stpcpy(v45 + 1, a9);
LABEL_18:
  *v45 = 47;
  v46 = 0;
  j_memcpy(v45 + 1);
  v58 = (_QWORD *)*a1;
  v118 = *a1;
  if ( *a1 )
  {
    do
    {
      if ( *v58 )
      {
        v59 = strcmp(*v58, v40);
        if ( !v59 )
          goto LABEL_60;
        if ( v59 < 0 )
          break;
        v46 = v58;
      }
      v58 = (_QWORD *)v58[3];
    }
    while ( v58 );
  }
  if ( a11 )
  {
    v60 = ((v11 >> 1) & 0xFFFFD555) + (v11 & 0x5555);
    v61 = v60 & 0x3333;
    v62 = a3;
    v63 = a2;
    v64 = 0;
    v65 = (((v60 >> 2) & 0xFFFFF333) + v61 + ((int)(((v60 >> 2) & 0xFFFFF333) + v61) >> 4)) & 0xF0F;
    v116 = 1 << (v65 + BYTE1(v65));
    if ( a3 )
    {
      do
      {
        v66 = strlen(v63);
        v80 = v62 - v66;
        ++v64;
        v62 = v62 - v66 - 1;
        v63 += v66 + 1;
      }
      while ( v80 != 1 );
      v81 = (_QWORD *)malloc(16 * v64 * v116 + 40, v72, v73, v74, v75, v76, v77, v78, v79, 1, v67, v68, v69, v70, v71);
      v58 = v81;
      if ( v81 )
      {
        v90 = a3;
        v91 = a2;
        *v81 = v40;
        do
        {
          v92 = strlen(v91);
          v93 = v90 - v92;
          ++v62;
          v90 = v90 - v92 - 1;
          v91 += v92 + 1;
        }
        while ( v93 != 1 );
        if ( v62 == 1 )
        {
          v58[2] = 0;
          *((_DWORD *)v58 + 2) = (v11 & 3) == 3;
          if ( v46 )
            goto LABEL_32;
        }
        else
        {
          *((_DWORD *)v58 + 2) = 1;
          v58[2] = 0;
          if ( v46 )
          {
LABEL_32:
            v58[3] = v46[3];
            v46[3] = v58;
            goto LABEL_33;
          }
        }
        *a1 = (__int64)v58;
        v58[3] = v118;
LABEL_33:
        v94 = a3;
        v95 = a2;
        do
        {
          v96 = strlen(v95);
          v97 = v94 - v96;
          ++v90;
          v94 = v94 - v96 - 1;
          v95 += v96 + 1;
        }
        while ( v97 != 1 );
        v98 = v11 - (v90 == 1);
LABEL_36:
        v99 = 0;
        if ( (v98 & 0x80000000) == 0 )
        {
          do
          {
            while ( (v98 & ~v11) != 0 )
              --v98;
            if ( a3 )
            {
              v100 = a2;
              v101 = a2 + a3;
              do
              {
                v117 = v98;
                v102 = strlen(v100);
                v58[++v99 + 3] = nl_make_l10nflist(a1, v100, v102 + 1, v117, a5, a6, a7, a8, a9, a10, 1);
                v98 = v117;
                if ( v101 <= v100 )
                  break;
                v103 = strlen(v100);
                v98 = v117;
                v100 += v103 + 1;
              }
              while ( v101 > v100 );
            }
            --v98;
          }
          while ( v98 != -1 );
        }
        if ( !(unsigned int)strncmp(a10, "LC_MESSAGES", 11) && (v11 & 0x80000000) == 0 )
        {
          v104 = ~v11;
          v105 = v99;
          do
          {
            for ( ; (v11 & v104) != 0; --v11 )
              ;
            v106 = (unsigned int)v11;
            ++v99;
            --v11;
            l10nflist = nl_make_l10nflist(a1, "/usr/share/locale-langpack", 27, v106, a5, a6, a7, a8, a9, a10, 1);
            v108 = v105 + 4;
            v105 = v99;
            v58[v108] = l10nflist;
          }
          while ( v11 != -1 );
        }
        v58[v99 + 4] = 0;
        return v58;
      }
    }
    else
    {
      v110 = malloc(0x28u, v50, v51, v52, v53, v54, v55, v56, v57, v61, 4294964019LL, v47, v48, (void *)0xF0F, v49);
      v58 = (_QWORD *)v110;
      if ( v110 )
      {
        *(_QWORD *)v110 = v40;
        *(_DWORD *)(v110 + 8) = 1;
        *(_QWORD *)(v110 + 16) = 0;
        if ( v46 )
        {
          *(_QWORD *)(v110 + 24) = v46[3];
          v98 = v11;
          v46[3] = v110;
        }
        else
        {
          v98 = v11;
          *a1 = v110;
          *(_QWORD *)(v110 + 24) = v118;
        }
        goto LABEL_36;
      }
    }
    free(v40, v82, v83, v84, v85, v86, v87, v88, v89);
    return 0;
  }
  v58 = 0;
LABEL_60:
  free(v40, v50, v51, v52, v53, v54, v55, v56, v57);
  return v58;
}
