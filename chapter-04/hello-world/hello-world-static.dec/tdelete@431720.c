unsigned __int64 __fastcall tdelete(
        __int64 a1,
        unsigned __int64 *a2,
        __int64 (__fastcall *a3)(__int64, _QWORD, __int64, __int64 *, __int64))
{
  unsigned __int64 *v4; // x22
  unsigned __int64 v5; // x19
  char *v7; // x23
  __int64 v8; // x21
  int v9; // w24
  int i; // w0
  __int64 v11; // x2
  __int64 *v12; // x3
  __int64 v13; // x4
  double v14; // d0
  double v15; // d1
  double v16; // d2
  double v17; // d3
  double v18; // d4
  double v19; // d5
  double v20; // d6
  double v21; // d7
  _QWORD *v22; // x1
  int v23; // w20
  unsigned __int64 v24; // x19
  unsigned __int64 v26; // x3
  _QWORD *v27; // x1
  int v28; // w20
  _QWORD *v29; // x26
  unsigned __int64 v30; // x0
  unsigned __int64 v31; // x1
  bool v32; // cc
  unsigned __int64 v33; // x21
  unsigned __int64 *j; // x25
  unsigned __int64 v35; // x2
  _QWORD *v36; // x2
  unsigned __int64 v37; // x3
  _QWORD *v38; // x1
  unsigned __int64 v39; // x3
  __int64 v40; // x6
  __int64 *v41; // x5
  __int64 v42; // x3
  unsigned __int64 v43; // x4
  unsigned __int64 v44; // x0
  unsigned __int64 v45; // x1
  __int64 v46; // x7
  __int64 v47; // x3
  __int64 v48; // x6
  __int64 v49; // x1
  __int64 v50; // x7
  bool v51; // zf
  __int64 v52; // x6
  unsigned __int64 v53; // x1
  __int64 v54; // x6
  __int64 v55; // x1
  __int64 v56; // x0
  unsigned __int64 v57; // x7
  __int64 v58; // x1
  __int64 v59; // x1
  __int64 v60; // x1
  unsigned __int64 v61; // x7
  unsigned __int64 v62; // x3
  __int64 v63; // x6
  __int64 v64; // x7
  __int64 v65; // x1
  unsigned __int64 v66; // x6
  __int64 v67; // x6
  __int64 v68; // x1
  __int64 v69; // x3
  unsigned __int64 v70; // x1
  __int64 v71; // x3
  __int64 v72; // x1
  _QWORD v73[2]; // [xsp+0h] [xbp-10160h] BYREF
  _BYTE v74[1008]; // [xsp+10h] [xbp-10150h] BYREF
  __int64 v75; // [xsp+400h] [xbp-FD60h]
  _QWORD v76[2]; // [xsp+10000h] [xbp-160h] BYREF
  char v77; // [xsp+10010h] [xbp-150h] BYREF

  v76[1] = 0;
  if ( !a2 )
    return 0;
  v4 = a2;
  v5 = *a2 & 0xFFFFFFFFFFFFFFFELL;
  if ( *a2 <= 1 )
    return 0;
  v7 = &v77;
  v8 = 0;
  v9 = 40;
  for ( i = a3(a1, *(_QWORD *)(*a2 & 0xFFFFFFFFFFFFFFFELL), (__int64)a3, &_stack_chk_guard, 0);
        ;
        i = a3(a1, *v22, v11, v12, v13) )
  {
    v23 = i;
    if ( !i )
      break;
    if ( v9 == (_DWORD)v8 )
    {
      v9 += 20;
      v26 = 8LL * v9;
      v27 = (_QWORD *)((char *)v76 - ((v26 + 15) & 0xFFFFFFFFFFFF0000LL));
      if ( v76 != v27 )
      {
        do
          v75 = 0;
        while ( v73 != v27 );
      }
      v73[0] = 0;
      if ( (((_WORD)v26 + 15) & 0xFFF0u) >= 0x400uLL )
        v75 = 0;
      v7 = (char *)_memcpy_chk((__int64)v74, (__int64)v7, 8 * v8, v26);
    }
    v24 = *v4;
    *(_QWORD *)&v7[8 * v8] = v4;
    v5 = v24 & 0xFFFFFFFFFFFFFFFELL;
    if ( v23 < 0 )
    {
      v4 = (unsigned __int64 *)(v5 + 8);
      ++v8;
      v22 = (_QWORD *)(*(_QWORD *)(v5 + 8) & 0xFFFFFFFFFFFFFFFELL);
      if ( !v22 )
        return 0;
    }
    else
    {
      v22 = *(_QWORD **)(v5 + 16);
      v4 = (unsigned __int64 *)(v5 + 16);
      ++v8;
      if ( !v22 )
        return 0;
    }
  }
  v28 = v8;
  v29 = (_QWORD *)(*v4 & 0xFFFFFFFFFFFFFFFELL);
  v30 = v29[1];
  v31 = v29[2];
  if ( v31 )
    v32 = v30 > 1;
  else
    v32 = 0;
  if ( v32 )
  {
    v33 = 8LL * (int)v8;
    for ( j = v29 + 2; ; j = v36 + 1 )
    {
      if ( v9 == v28 )
      {
        v9 += 20;
        v37 = 8LL * v9;
        v38 = (_QWORD *)((char *)v76 - ((v37 + 15) & 0xFFFFFFFFFFFF0000LL));
        if ( v76 != v38 )
        {
          do
            v75 = 0;
          while ( v73 != v38 );
        }
        v73[0] = 0;
        if ( (((_WORD)v37 + 15) & 0xFFF0u) >= 0x400uLL )
          v75 = 0;
        v7 = (char *)_memcpy_chk((__int64)v74, (__int64)v7, v33, v37);
        ++v28;
        v36 = (_QWORD *)(*j & 0xFFFFFFFFFFFFFFFELL);
        *(_QWORD *)&v7[v33] = v4;
        v33 += 8LL;
        v30 = v36[1];
        if ( v30 <= 1 )
        {
LABEL_31:
          v31 = v36[2];
          goto LABEL_32;
        }
      }
      else
      {
        v35 = *j;
        *(_QWORD *)&v7[v33] = v4;
        ++v28;
        v33 += 8LL;
        v36 = (_QWORD *)(v35 & 0xFFFFFFFFFFFFFFFELL);
        v30 = v36[1];
        if ( v30 <= 1 )
          goto LABEL_31;
      }
      v4 = j;
    }
  }
  if ( v30 > 1 )
    v31 = v30 & 0xFFFFFFFFFFFFFFFELL;
  if ( !(_DWORD)v8 )
  {
    *v4 = *v4 & 1 | v31;
    v36 = v29;
    if ( (v30 & 1) != 0 )
      goto LABEL_48;
    goto LABEL_53;
  }
  v36 = (_QWORD *)(*v4 & 0xFFFFFFFFFFFFFFFELL);
LABEL_32:
  v39 = **(_QWORD **)&v7[8 * v28 - 8] & 0xFFFFFFFFFFFFFFFELL;
  if ( v36 != *(_QWORD **)(v39 + 16) )
  {
    *(_QWORD *)(v39 + 8) = *(_QWORD *)(v39 + 8) & 1LL | v31;
    v30 = v36[1];
    if ( v29 != v36 )
      goto LABEL_34;
LABEL_83:
    if ( (v30 & 1) == 0 )
      goto LABEL_36;
    v29 = v36;
    goto LABEL_48;
  }
  *(_QWORD *)(v39 + 16) = v31;
  if ( v29 == v36 )
    goto LABEL_83;
LABEL_34:
  *v29 = *v36;
  if ( (v30 & 1) != 0 )
    goto LABEL_47;
  if ( !v28 )
  {
LABEL_53:
    if ( v31 )
    {
LABEL_54:
      *(_QWORD *)(v31 + 8) &= ~1uLL;
      free((__int64)v36, v14, v15, v16, v17, v18, v19, v20, v21);
      return v5;
    }
LABEL_47:
    v29 = v36;
    goto LABEL_48;
  }
  while ( 1 )
  {
LABEL_36:
    if ( v31 && (*(_QWORD *)(v31 + 8) & 1) != 0 )
      goto LABEL_54;
    v40 = v28;
    v41 = *(__int64 **)&v7[8 * v28 - 8];
    v42 = *v41;
    v43 = *v41 & 0xFFFFFFFFFFFFFFFELL;
    v44 = *(_QWORD *)(v43 + 8) & 0xFFFFFFFFFFFFFFFELL;
    if ( v31 == v44 )
      break;
    v45 = *(_QWORD *)(v44 + 8);
    if ( (v45 & 1) != 0 )
    {
      v46 = *(_QWORD *)(v44 + 16);
      *(_QWORD *)(v44 + 8) = v45 & 0xFFFFFFFFFFFFFFFELL;
      *(_QWORD *)(v43 + 8) = v46 | 1;
      *(_QWORD *)(v44 + 16) = v43;
      *v41 = v42 & 1 | v44;
      v41 = (__int64 *)(v44 + 16);
      v44 = v46 & 0xFFFFFFFFFFFFFFFELL;
      ++v28;
      *(_QWORD *)&v7[8 * v40] = v41;
      v45 = *(_QWORD *)((v46 & 0xFFFFFFFFFFFFFFFELL) + 8);
    }
    v47 = *(_QWORD *)(v44 + 16);
    if ( v47 && (*(_QWORD *)(v47 + 8) & 1) != 0 )
    {
      v48 = *(_QWORD *)(v43 + 8) & 1LL;
      if ( v45 <= 1 )
        goto LABEL_44;
      v57 = v45 & 0xFFFFFFFFFFFFFFFELL;
LABEL_58:
      if ( (*(_QWORD *)(v57 + 8) & 1) != 0 )
      {
        v58 = v45 | 1;
        if ( !v48 )
          v58 = v57;
        *(_QWORD *)(v44 + 8) = v58;
        v29 = v36;
        v59 = v44 | *v41 & 1;
        *(_QWORD *)(v43 + 8) &= ~1uLL;
        *(_QWORD *)((*(_QWORD *)(v44 + 8) & 0xFFFFFFFFFFFFFFFELL) + 8) &= ~1uLL;
        *(_QWORD *)(v43 + 8) = *(_QWORD *)(v43 + 8) & 1LL | v47;
        *(_QWORD *)(v44 + 16) = v43;
        *v41 = v59;
        goto LABEL_48;
      }
LABEL_44:
      v49 = *(_QWORD *)(v47 + 8);
      v50 = *(_QWORD *)(v47 + 16);
      v51 = v48 == 0;
      v52 = v49 | 1;
      v53 = v49 & 0xFFFFFFFFFFFFFFFELL;
      if ( !v51 )
        v53 = v52;
      v54 = *v41;
      *(_QWORD *)(v47 + 8) = v53;
      *(_QWORD *)(v43 + 8) = *(_QWORD *)(v43 + 8) & 1LL | v50;
      v55 = *(_QWORD *)(v47 + 8);
      *(_QWORD *)(v44 + 16) = v55 & 0xFFFFFFFFFFFFFFFELL;
      *(_QWORD *)(v47 + 8) = v44 | v55 & 1;
      *(_QWORD *)(v47 + 16) = v43;
      v56 = *(_QWORD *)(v43 + 8);
      *v41 = v54 & 1 | v47;
      *(_QWORD *)(v43 + 8) = v56 & 0xFFFFFFFFFFFFFFFELL;
      goto LABEL_47;
    }
    if ( v45 > 1 )
    {
      v57 = v45 & 0xFFFFFFFFFFFFFFFELL;
      if ( (*(_QWORD *)((v45 & 0xFFFFFFFFFFFFFFFELL) + 8) & 1) != 0 )
      {
        v48 = *(_QWORD *)(v43 + 8) & 1LL;
        goto LABEL_58;
      }
    }
LABEL_62:
    *(_QWORD *)(v44 + 8) = v45 | 1;
    --v28;
    v31 = v43;
    if ( !v28 )
      goto LABEL_53;
  }
  v44 = *(_QWORD *)(v43 + 16);
  v45 = *(_QWORD *)(v44 + 8);
  if ( (v45 & 1) != 0 )
  {
    *(_QWORD *)(v44 + 8) = v45 & 0xFFFFFFFFFFFFFFFELL;
    ++v28;
    *(_QWORD *)(v43 + 8) |= 1uLL;
    v60 = *(_QWORD *)(v44 + 8);
    v61 = v60 & 0xFFFFFFFFFFFFFFFELL;
    *(_QWORD *)(v43 + 16) = v60 & 0xFFFFFFFFFFFFFFFELL;
    *(_QWORD *)(v44 + 8) = v60 & 1 | v43;
    v45 = *(_QWORD *)((v60 & 0xFFFFFFFFFFFFFFFELL) + 8);
    *v41 = v42 & 1 | v44;
    v41 = (__int64 *)(v44 + 8);
    v44 = v61;
    *(_QWORD *)&v7[8 * v40] = v41;
  }
  if ( v45 <= 1 || (v62 = v45 & 0xFFFFFFFFFFFFFFFELL, (*(_QWORD *)((v45 & 0xFFFFFFFFFFFFFFFELL) + 8) & 1) == 0) )
  {
    v63 = *(_QWORD *)(v44 + 16);
    if ( v63 && (*(_QWORD *)(v63 + 8) & 1) != 0 )
    {
      v64 = *(_QWORD *)(v43 + 8) & 1LL;
      goto LABEL_75;
    }
    goto LABEL_62;
  }
  v63 = *(_QWORD *)(v44 + 16);
  v64 = *(_QWORD *)(v43 + 8) & 1LL;
  if ( !v63 )
  {
LABEL_69:
    v65 = *(_QWORD *)(v62 + 8);
    if ( v64 )
      v66 = v65 | 1;
    else
      v66 = v65 & 0xFFFFFFFFFFFFFFFELL;
    *(_QWORD *)(v62 + 8) = v66;
    v29 = v36;
    v67 = *(_QWORD *)(v44 + 8);
    *(_QWORD *)(v43 + 16) = v65 & 0xFFFFFFFFFFFFFFFELL;
    v68 = *v41 & 1;
    *(_QWORD *)(v44 + 8) = v67 & 1 | *(_QWORD *)(v62 + 16);
    *(_QWORD *)(v62 + 16) = v44;
    *(_QWORD *)(v62 + 8) = *(_QWORD *)(v62 + 8) & 1LL | v43;
    *v41 = v68 | v62;
    *(_QWORD *)(v43 + 8) &= ~1uLL;
    goto LABEL_48;
  }
LABEL_75:
  if ( (*(_QWORD *)(v63 + 8) & 1) == 0 )
  {
    v62 = v45 & 0xFFFFFFFFFFFFFFFELL;
    goto LABEL_69;
  }
  v69 = v45 | 1;
  v70 = v45 & 0xFFFFFFFFFFFFFFFELL;
  v29 = v36;
  if ( v64 )
    v70 = v69;
  v71 = *v41;
  *(_QWORD *)(v44 + 8) = v70;
  *(_QWORD *)(v43 + 8) &= ~1uLL;
  *(_QWORD *)(v63 + 8) &= ~1uLL;
  v72 = *(_QWORD *)(v44 + 8);
  *(_QWORD *)(v43 + 16) = v72 & 0xFFFFFFFFFFFFFFFELL;
  *(_QWORD *)(v44 + 8) = v72 & 1 | v43;
  *v41 = v44 | v71 & 1;
LABEL_48:
  free((__int64)v29, v14, v15, v16, v17, v18, v19, v20, v21);
  return v5;
}
