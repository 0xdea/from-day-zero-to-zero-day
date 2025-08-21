_QWORD *__fastcall nl_make_l10nflist(
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
  __int64 v25; // x1
  __int16 *v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  __int64 v29; // x5
  __int64 v30; // x0
  __int64 v31; // x20
  __int64 v32; // x26
  _BYTE *i; // x25
  __int64 v34; // x0
  _BYTE *v35; // x25
  _BYTE *v36; // x0
  __int64 v37; // x22
  __int64 v38; // x3
  __int64 v39; // x4
  __int64 v40; // x26
  int v41; // w0
  signed int v42; // w0
  __int64 v43; // x1
  __int64 v44; // x25
  unsigned __int64 v45; // x26
  __int64 v46; // x27
  int v47; // w0
  __int64 v48; // x0
  __int16 *v49; // x2
  __int64 v50; // x3
  __int64 v51; // x4
  __int64 v52; // x5
  __int64 v53; // x1
  _QWORD *v54; // x0
  __int64 v55; // x27
  unsigned __int64 v56; // x28
  __int64 v57; // x0
  __int64 v58; // x2
  __int64 v59; // x20
  unsigned __int64 v60; // x22
  __int64 v61; // x0
  __int64 v62; // x1
  int v63; // w3
  __int64 v64; // x20
  unsigned __int64 v65; // x25
  unsigned __int64 v66; // x22
  __int64 v67; // x0
  __int64 v68; // x0
  int v69; // w23
  __int64 v70; // x28
  int v71; // w3
  _QWORD *l10nflist; // x0
  __int64 v73; // x1
  __int64 v75; // x0
  int v80; // [xsp+A8h] [xbp+88h]
  __int64 v81; // [xsp+A8h] [xbp+88h]
  int v82; // [xsp+A8h] [xbp+88h]
  __int64 j; // [xsp+B0h] [xbp+90h]

  v11 = a4;
  v14 = a3 + 2;
  v80 = a4 & 4;
  v17 = strlen(a5);
  v18 = 0;
  if ( v80 )
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
  v24 = strlen(a10);
  v30 = malloc(v24 + v23 + v22, v25, v26, v27, v28, v29);
  v31 = v30;
  if ( !v30 )
    return 0;
  _memcpy_chk(v30, a2, a3);
  if ( a3 )
  {
    v32 = a3;
    for ( i = (_BYTE *)v31; ; i = v35 + 1 )
    {
      v34 = strlen(i);
      v35 = &i[v34];
      v32 = v32 - v34 - 1;
      if ( !v32 )
        break;
      *v35 = 58;
    }
  }
  *(_BYTE *)(v31 + a3 - 1) = 47;
  v36 = (_BYTE *)stpcpy(v31 + a3, a5);
  if ( v80 )
  {
    *v36 = 95;
    v36 = (_BYTE *)stpcpy(v36 + 1, a6);
    if ( (v11 & 2) == 0 )
    {
LABEL_16:
      if ( (v11 & 1) == 0 )
        goto LABEL_17;
LABEL_55:
      *v36 = 46;
      v36 = (_BYTE *)stpcpy(v36 + 1, a8);
      if ( (v11 & 8) == 0 )
        goto LABEL_18;
      goto LABEL_56;
    }
  }
  else if ( (v11 & 2) == 0 )
  {
    goto LABEL_16;
  }
  *v36 = 46;
  v36 = (_BYTE *)stpcpy(v36 + 1, a7);
  if ( (v11 & 1) != 0 )
    goto LABEL_55;
LABEL_17:
  if ( (v11 & 8) == 0 )
    goto LABEL_18;
LABEL_56:
  *v36 = 64;
  v36 = (_BYTE *)stpcpy(v36 + 1, a9);
LABEL_18:
  *v36 = 47;
  v37 = 0;
  j_memcpy(v36 + 1);
  v40 = *a1;
  for ( j = *a1; v40; v40 = *(_QWORD *)(v40 + 24) )
  {
    if ( *(_QWORD *)v40 )
    {
      v41 = strcmp(*(_QWORD *)v40, v31);
      if ( !v41 )
        goto LABEL_60;
      if ( v41 < 0 )
        break;
      v37 = v40;
    }
  }
  if ( a11 )
  {
    v42 = ((v11 >> 1) & 0xFFFFD555) + (v11 & 0x5555);
    v43 = v42 & 0x3333;
    v44 = a3;
    v45 = a2;
    v46 = 0;
    v47 = (((v42 >> 2) & 0xFFFFF333) + v43 + ((int)(((v42 >> 2) & 0xFFFFF333) + v43) >> 4)) & 0xF0F;
    v81 = 1 << (v47 + BYTE1(v47));
    if ( a3 )
    {
      do
      {
        v48 = strlen(v45);
        v53 = v44 - v48;
        ++v46;
        v44 = v44 - v48 - 1;
        v45 += v48 + 1;
      }
      while ( v53 != 1 );
      v54 = (_QWORD *)malloc(16 * v46 * v81 + 40, 1, v49, v50, v51, v52);
      v40 = (__int64)v54;
      if ( v54 )
      {
        v55 = a3;
        v56 = a2;
        *v54 = v31;
        do
        {
          v57 = strlen(v56);
          v58 = v55 - v57;
          ++v44;
          v55 = v55 - v57 - 1;
          v56 += v57 + 1;
        }
        while ( v58 != 1 );
        if ( v44 == 1 )
        {
          *(_QWORD *)(v40 + 16) = 0;
          *(_DWORD *)(v40 + 8) = (v11 & 3) == 3;
          if ( v37 )
            goto LABEL_32;
        }
        else
        {
          *(_DWORD *)(v40 + 8) = 1;
          *(_QWORD *)(v40 + 16) = 0;
          if ( v37 )
          {
LABEL_32:
            *(_QWORD *)(v40 + 24) = *(_QWORD *)(v37 + 24);
            *(_QWORD *)(v37 + 24) = v40;
            goto LABEL_33;
          }
        }
        *a1 = v40;
        *(_QWORD *)(v40 + 24) = j;
LABEL_33:
        v59 = a3;
        v60 = a2;
        do
        {
          v61 = strlen(v60);
          v62 = v59 - v61;
          ++v55;
          v59 = v59 - v61 - 1;
          v60 += v61 + 1;
        }
        while ( v62 != 1 );
        v63 = v11 - (v55 == 1);
LABEL_36:
        v64 = 0;
        if ( (v63 & 0x80000000) == 0 )
        {
          do
          {
            while ( (v63 & ~v11) != 0 )
              --v63;
            if ( a3 )
            {
              v65 = a2;
              v66 = a2 + a3;
              do
              {
                v82 = v63;
                v67 = strlen(v65);
                ++v64;
                *(_QWORD *)(v40 + 24 + 8 * v64) = nl_make_l10nflist(a1, v65, v67 + 1, v82, a5, a6, a7, a8, a9, a10, 1);
                v63 = v82;
                if ( v66 <= v65 )
                  break;
                v68 = strlen(v65);
                v63 = v82;
                v65 += v68 + 1;
              }
              while ( v66 > v65 );
            }
            --v63;
          }
          while ( v63 != -1 );
        }
        if ( !(unsigned int)strncmp(a10, "LC_MESSAGES", 11) && (v11 & 0x80000000) == 0 )
        {
          v69 = ~v11;
          v70 = v64;
          do
          {
            for ( ; (v11 & v69) != 0; --v11 )
              ;
            v71 = v11;
            ++v64;
            --v11;
            l10nflist = nl_make_l10nflist(
                          a1,
                          (unsigned __int64)"/usr/share/locale-langpack",
                          27,
                          v71,
                          a5,
                          a6,
                          a7,
                          a8,
                          a9,
                          a10,
                          1);
            v73 = v70 + 4;
            v70 = v64;
            *(_QWORD *)(v40 + 8 * v73) = l10nflist;
          }
          while ( v11 != -1 );
        }
        *(_QWORD *)(v40 + 8 * (v64 + 4)) = 0;
        return (_QWORD *)v40;
      }
    }
    else
    {
      v75 = malloc(0x28u, v43, (__int16 *)0xFFFFF333LL, v38, v39, 3855);
      v40 = v75;
      if ( v75 )
      {
        *(_QWORD *)v75 = v31;
        *(_DWORD *)(v75 + 8) = 1;
        *(_QWORD *)(v75 + 16) = 0;
        if ( v37 )
        {
          *(_QWORD *)(v75 + 24) = *(_QWORD *)(v37 + 24);
          v63 = v11;
          *(_QWORD *)(v37 + 24) = v75;
        }
        else
        {
          v63 = v11;
          *a1 = v75;
          *(_QWORD *)(v75 + 24) = j;
        }
        goto LABEL_36;
      }
    }
    free(v31);
    return 0;
  }
  v40 = 0;
LABEL_60:
  free(v31);
  return (_QWORD *)v40;
}
