__int64 __fastcall sub_431720(
        __int64 a1,
        unsigned __int64 *a2,
        __int64 (__fastcall *a3)(__int64, _QWORD, __int64, __int64 *, __int64))
{
  __int64 v3; // x30
  unsigned __int64 *v5; // x22
  unsigned __int64 v6; // x19
  char *v8; // x23
  __int64 v9; // x21
  int v10; // w24
  int i; // w0
  __int64 v12; // x2
  __int64 *v13; // x3
  __int64 v14; // x4
  double v15; // d0
  double v16; // d1
  double v17; // d2
  double v18; // d3
  double v19; // d4
  double v20; // d5
  double v21; // d6
  double v22; // d7
  _QWORD *v23; // x1
  int v24; // w20
  unsigned __int64 v25; // x19
  __int64 result; // x0
  unsigned __int64 v27; // x3
  _QWORD *v28; // x1
  int v29; // w20
  _QWORD *v30; // x26
  unsigned __int64 v31; // x0
  unsigned __int64 v32; // x1
  bool v33; // cc
  unsigned __int64 v34; // x21
  unsigned __int64 *j; // x25
  unsigned __int64 v36; // x2
  _QWORD *v37; // x2
  unsigned __int64 v38; // x3
  _QWORD *v39; // x1
  unsigned __int64 v40; // x3
  __int64 v41; // x6
  __int64 *v42; // x5
  __int64 v43; // x3
  unsigned __int64 v44; // x4
  unsigned __int64 v45; // x0
  unsigned __int64 v46; // x1
  __int64 v47; // x7
  __int64 v48; // x3
  __int64 v49; // x6
  __int64 v50; // x1
  __int64 v51; // x7
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
  void (__fastcall *v73)(__int64, __int64, _QWORD); // x1
  bool v74; // zf
  _QWORD v75[2]; // [xsp+0h] [xbp-10160h] BYREF
  _BYTE v76[1008]; // [xsp+10h] [xbp-10150h] BYREF
  __int64 v77; // [xsp+400h] [xbp-FD60h]
  __int64 *v78; // [xsp+FFF0h] [xbp-170h]
  __int64 v79; // [xsp+FFF8h] [xbp-168h]
  _QWORD v80[2]; // [xsp+10000h] [xbp-160h] BYREF
  char v81; // [xsp+10010h] [xbp-150h] BYREF
  __int64 v82; // [xsp+10158h] [xbp-8h]
  __int64 v83; // [xsp+10160h] [xbp+0h] BYREF

  v82 = qword_48DD60;
  v80[1] = 0;
  if ( !a2 || (v5 = a2, v6 = *a2 & 0xFFFFFFFFFFFFFFFELL, *a2 <= 1) )
  {
LABEL_10:
    v6 = 0;
    goto LABEL_11;
  }
  v8 = &v81;
  v9 = 0;
  v10 = 40;
  for ( i = a3(a1, *(_QWORD *)(*a2 & 0xFFFFFFFFFFFFFFFELL), (__int64)a3, &qword_48DD60, 0);
        ;
        i = a3(a1, *v23, v12, v13, v14) )
  {
    v24 = i;
    if ( !i )
      break;
    if ( v10 == (_DWORD)v9 )
    {
      v10 += 20;
      v27 = 8LL * v10;
      v28 = (_QWORD *)((char *)v80 - ((v27 + 15) & 0xFFFFFFFFFFFF0000LL));
      if ( v80 != v28 )
      {
        do
          v77 = 0;
        while ( v75 != v28 );
      }
      v75[0] = 0;
      if ( (((_WORD)v27 + 15) & 0xFFF0u) >= 0x400uLL )
        v77 = 0;
      v8 = (char *)sub_412300((__int64)v76, (__int64)v8, 8 * v9, v27);
    }
    v25 = *v5;
    *(_QWORD *)&v8[8 * v9] = v5;
    v6 = v25 & 0xFFFFFFFFFFFFFFFELL;
    if ( v24 < 0 )
    {
      v5 = (unsigned __int64 *)(v6 + 8);
      ++v9;
      v23 = (_QWORD *)(*(_QWORD *)(v6 + 8) & 0xFFFFFFFFFFFFFFFELL);
      if ( !v23 )
        goto LABEL_10;
    }
    else
    {
      v23 = *(_QWORD **)(v6 + 16);
      v5 = (unsigned __int64 *)(v6 + 16);
      ++v9;
      if ( !v23 )
        goto LABEL_10;
    }
  }
  v29 = v9;
  v30 = (_QWORD *)(*v5 & 0xFFFFFFFFFFFFFFFELL);
  v31 = v30[1];
  v32 = v30[2];
  if ( v32 )
    v33 = v31 > 1;
  else
    v33 = 0;
  if ( v33 )
  {
    v34 = 8LL * (int)v9;
    for ( j = v30 + 2; ; j = v37 + 1 )
    {
      if ( v10 == v29 )
      {
        v10 += 20;
        v38 = 8LL * v10;
        v39 = (_QWORD *)((char *)v80 - ((v38 + 15) & 0xFFFFFFFFFFFF0000LL));
        if ( v80 != v39 )
        {
          do
            v77 = 0;
          while ( v75 != v39 );
        }
        v75[0] = 0;
        if ( (((_WORD)v38 + 15) & 0xFFF0u) >= 0x400uLL )
          v77 = 0;
        v8 = (char *)sub_412300((__int64)v76, (__int64)v8, v34, v38);
        ++v29;
        v37 = (_QWORD *)(*j & 0xFFFFFFFFFFFFFFFELL);
        *(_QWORD *)&v8[v34] = v5;
        v34 += 8LL;
        v31 = v37[1];
        if ( v31 <= 1 )
        {
LABEL_32:
          v32 = v37[2];
          goto LABEL_33;
        }
      }
      else
      {
        v36 = *j;
        *(_QWORD *)&v8[v34] = v5;
        ++v29;
        v34 += 8LL;
        v37 = (_QWORD *)(v36 & 0xFFFFFFFFFFFFFFFELL);
        v31 = v37[1];
        if ( v31 <= 1 )
          goto LABEL_32;
      }
      v5 = j;
    }
  }
  if ( v31 > 1 )
    v32 = v31 & 0xFFFFFFFFFFFFFFFELL;
  if ( !(_DWORD)v9 )
  {
    *v5 = *v5 & 1 | v32;
    v37 = v30;
    if ( (v31 & 1) != 0 )
      goto LABEL_49;
    goto LABEL_54;
  }
  v37 = (_QWORD *)(*v5 & 0xFFFFFFFFFFFFFFFELL);
LABEL_33:
  v40 = **(_QWORD **)&v8[8 * v29 - 8] & 0xFFFFFFFFFFFFFFFELL;
  if ( v37 != *(_QWORD **)(v40 + 16) )
  {
    *(_QWORD *)(v40 + 8) = *(_QWORD *)(v40 + 8) & 1LL | v32;
    v31 = v37[1];
    if ( v30 != v37 )
      goto LABEL_35;
LABEL_84:
    if ( (v31 & 1) == 0 )
      goto LABEL_37;
    v30 = v37;
    goto LABEL_49;
  }
  *(_QWORD *)(v40 + 16) = v32;
  if ( v30 == v37 )
    goto LABEL_84;
LABEL_35:
  *v30 = *v37;
  if ( (v31 & 1) != 0 )
    goto LABEL_48;
  if ( !v29 )
  {
LABEL_54:
    if ( v32 )
    {
LABEL_55:
      *(_QWORD *)(v32 + 8) &= ~1uLL;
      sub_40C1A0((unsigned __int64)v37, v15, v16, v17, v18, v19, v20, v21, v22);
      goto LABEL_11;
    }
LABEL_48:
    v30 = v37;
    goto LABEL_49;
  }
  while ( 1 )
  {
LABEL_37:
    if ( v32 && (*(_QWORD *)(v32 + 8) & 1) != 0 )
      goto LABEL_55;
    v41 = v29;
    v42 = *(__int64 **)&v8[8 * v29 - 8];
    v43 = *v42;
    v44 = *v42 & 0xFFFFFFFFFFFFFFFELL;
    v45 = *(_QWORD *)(v44 + 8) & 0xFFFFFFFFFFFFFFFELL;
    if ( v32 == v45 )
      break;
    v46 = *(_QWORD *)(v45 + 8);
    if ( (v46 & 1) != 0 )
    {
      v47 = *(_QWORD *)(v45 + 16);
      *(_QWORD *)(v45 + 8) = v46 & 0xFFFFFFFFFFFFFFFELL;
      *(_QWORD *)(v44 + 8) = v47 | 1;
      *(_QWORD *)(v45 + 16) = v44;
      *v42 = v43 & 1 | v45;
      v42 = (__int64 *)(v45 + 16);
      v45 = v47 & 0xFFFFFFFFFFFFFFFELL;
      ++v29;
      *(_QWORD *)&v8[8 * v41] = v42;
      v46 = *(_QWORD *)((v47 & 0xFFFFFFFFFFFFFFFELL) + 8);
    }
    v48 = *(_QWORD *)(v45 + 16);
    if ( v48 && (*(_QWORD *)(v48 + 8) & 1) != 0 )
    {
      v49 = *(_QWORD *)(v44 + 8) & 1LL;
      if ( v46 <= 1 )
        goto LABEL_45;
      v57 = v46 & 0xFFFFFFFFFFFFFFFELL;
LABEL_59:
      if ( (*(_QWORD *)(v57 + 8) & 1) != 0 )
      {
        v58 = v46 | 1;
        if ( !v49 )
          v58 = v57;
        *(_QWORD *)(v45 + 8) = v58;
        v30 = v37;
        v59 = v45 | *v42 & 1;
        *(_QWORD *)(v44 + 8) &= ~1uLL;
        *(_QWORD *)((*(_QWORD *)(v45 + 8) & 0xFFFFFFFFFFFFFFFELL) + 8) &= ~1uLL;
        *(_QWORD *)(v44 + 8) = *(_QWORD *)(v44 + 8) & 1LL | v48;
        *(_QWORD *)(v45 + 16) = v44;
        *v42 = v59;
        goto LABEL_49;
      }
LABEL_45:
      v50 = *(_QWORD *)(v48 + 8);
      v51 = *(_QWORD *)(v48 + 16);
      v74 = v49 == 0;
      v52 = v50 | 1;
      v53 = v50 & 0xFFFFFFFFFFFFFFFELL;
      if ( !v74 )
        v53 = v52;
      v54 = *v42;
      *(_QWORD *)(v48 + 8) = v53;
      *(_QWORD *)(v44 + 8) = *(_QWORD *)(v44 + 8) & 1LL | v51;
      v55 = *(_QWORD *)(v48 + 8);
      *(_QWORD *)(v45 + 16) = v55 & 0xFFFFFFFFFFFFFFFELL;
      *(_QWORD *)(v48 + 8) = v45 | v55 & 1;
      *(_QWORD *)(v48 + 16) = v44;
      v56 = *(_QWORD *)(v44 + 8);
      *v42 = v54 & 1 | v48;
      *(_QWORD *)(v44 + 8) = v56 & 0xFFFFFFFFFFFFFFFELL;
      goto LABEL_48;
    }
    if ( v46 > 1 )
    {
      v57 = v46 & 0xFFFFFFFFFFFFFFFELL;
      if ( (*(_QWORD *)((v46 & 0xFFFFFFFFFFFFFFFELL) + 8) & 1) != 0 )
      {
        v49 = *(_QWORD *)(v44 + 8) & 1LL;
        goto LABEL_59;
      }
    }
LABEL_63:
    *(_QWORD *)(v45 + 8) = v46 | 1;
    --v29;
    v32 = v44;
    if ( !v29 )
      goto LABEL_54;
  }
  v45 = *(_QWORD *)(v44 + 16);
  v46 = *(_QWORD *)(v45 + 8);
  if ( (v46 & 1) != 0 )
  {
    *(_QWORD *)(v45 + 8) = v46 & 0xFFFFFFFFFFFFFFFELL;
    ++v29;
    *(_QWORD *)(v44 + 8) |= 1uLL;
    v60 = *(_QWORD *)(v45 + 8);
    v61 = v60 & 0xFFFFFFFFFFFFFFFELL;
    *(_QWORD *)(v44 + 16) = v60 & 0xFFFFFFFFFFFFFFFELL;
    *(_QWORD *)(v45 + 8) = v60 & 1 | v44;
    v46 = *(_QWORD *)((v60 & 0xFFFFFFFFFFFFFFFELL) + 8);
    *v42 = v43 & 1 | v45;
    v42 = (__int64 *)(v45 + 8);
    v45 = v61;
    *(_QWORD *)&v8[8 * v41] = v42;
  }
  if ( v46 <= 1 || (v62 = v46 & 0xFFFFFFFFFFFFFFFELL, (*(_QWORD *)((v46 & 0xFFFFFFFFFFFFFFFELL) + 8) & 1) == 0) )
  {
    v63 = *(_QWORD *)(v45 + 16);
    if ( v63 && (*(_QWORD *)(v63 + 8) & 1) != 0 )
    {
      v64 = *(_QWORD *)(v44 + 8) & 1LL;
      goto LABEL_76;
    }
    goto LABEL_63;
  }
  v63 = *(_QWORD *)(v45 + 16);
  v64 = *(_QWORD *)(v44 + 8) & 1LL;
  if ( !v63 )
  {
LABEL_70:
    v65 = *(_QWORD *)(v62 + 8);
    if ( v64 )
      v66 = v65 | 1;
    else
      v66 = v65 & 0xFFFFFFFFFFFFFFFELL;
    *(_QWORD *)(v62 + 8) = v66;
    v30 = v37;
    v67 = *(_QWORD *)(v45 + 8);
    *(_QWORD *)(v44 + 16) = v65 & 0xFFFFFFFFFFFFFFFELL;
    v68 = *v42 & 1;
    *(_QWORD *)(v45 + 8) = v67 & 1 | *(_QWORD *)(v62 + 16);
    *(_QWORD *)(v62 + 16) = v45;
    *(_QWORD *)(v62 + 8) = *(_QWORD *)(v62 + 8) & 1LL | v44;
    *v42 = v68 | v62;
    *(_QWORD *)(v44 + 8) &= ~1uLL;
    goto LABEL_49;
  }
LABEL_76:
  if ( (*(_QWORD *)(v63 + 8) & 1) == 0 )
  {
    v62 = v46 & 0xFFFFFFFFFFFFFFFELL;
    goto LABEL_70;
  }
  v69 = v46 | 1;
  v70 = v46 & 0xFFFFFFFFFFFFFFFELL;
  v30 = v37;
  if ( v64 )
    v70 = v69;
  v71 = *v42;
  *(_QWORD *)(v45 + 8) = v70;
  *(_QWORD *)(v44 + 8) &= ~1uLL;
  *(_QWORD *)(v63 + 8) &= ~1uLL;
  v72 = *(_QWORD *)(v45 + 8);
  *(_QWORD *)(v44 + 16) = v72 & 0xFFFFFFFFFFFFFFFELL;
  *(_QWORD *)(v45 + 8) = v72 & 1 | v44;
  *v42 = v45 | v71 & 1;
LABEL_49:
  sub_40C1A0((unsigned __int64)v30, v15, v16, v17, v18, v19, v20, v21, v22);
LABEL_11:
  if ( v82 == qword_48DD60 )
    return v6;
  result = sub_412340();
  v78 = &v83;
  v79 = v3;
  if ( result )
    v74 = v73 == 0;
  else
    v74 = 1;
  if ( !v74 )
    return sub_431100(result, v73, 0);
  return result;
}
