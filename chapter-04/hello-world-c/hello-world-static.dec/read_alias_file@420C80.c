// bad sp value at call has been detected, the output may be wrong!
__int64 __fastcall read_alias_file(__int64 a1, int a2)
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
  __int64 v55; // x8
  unsigned __int64 v56; // x25
  __int64 v57; // x6
  __int64 v58; // x5
  __int64 v59; // x19
  __int64 v60; // x0
  __int64 v61; // x0
  __int64 v62; // x1
  __int64 v63; // x0
  __int64 v64; // x1
  unsigned __int64 v65; // x1
  __int64 v66; // x3
  __int64 v67; // x0
  __int64 v68; // x11
  int64x2_t *v69; // x10
  int64x2_t v70; // q1
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

  v2 = a2;
  v3 = a2 + 29LL;
  v4 = v3 & 0xFFFFFFFFFFFF0000LL;
  v6 = v3 & 0xFFF0;
  v7 = (__int64 *)&v75[-v4];
  if ( v75 != (_BYTE *)v7 )
  {
    do
      v73 = 0;
    while ( &v71 != v7 );
  }
  v71 = 0;
  if ( v6 >= 0x400uLL )
    v73 = 0;
  v8 = j_memcpy(v72);
  *(_QWORD *)(v8 + a2) = *(_QWORD *)"/locale.alias";
  strcpy((char *)(v8 + v2 + 6), "e.alias");
  v9 = (_DWORD *)fopen64(v8, "rce");
  v10 = v9;
  if ( !v9 )
    return 0;
  v11 = *v9;
  v12 = 0;
  *v9 |= 0x8000u;
  if ( (v11 & 0x10) != 0 )
  {
    fclose(v9);
    return 0;
  }
  v13 = (__int64 *)(_ReadStatusReg(TPIDR_EL0) + 72);
  while ( fgets_unlocked(v82, 400, v10) )
  {
    v15 = v82;
    v19 = strchr(v82, 10, v14);
    v28 = *v13;
    v29 = v82[0];
    if ( (*(_WORD *)(*v13 + 2LL * v82[0]) & 0x2000) != 0 )
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
          goto LABEL_42;
      }
      *(_BYTE *)v35 = 0;
      v37 = v35 + 1;
      v34 = *(unsigned __int8 *)(v35 + 1);
    }
    else
    {
LABEL_42:
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
      goto LABEL_38;
    while ( 1 )
    {
      v35 = *(unsigned __int16 *)(v28 + 2LL * (unsigned __int8)v39);
      if ( (v35 & 0x2000) != 0 )
        break;
      v41 = *((unsigned __int8 *)v40 + 1);
      v40 = (_WORD *)((char *)v40 + 1);
      v39 = v41;
      if ( !v41 )
        goto LABEL_38;
    }
    if ( v39 == 10 )
    {
      *v40 = 2560;
LABEL_38:
      v43 = nmap;
      v42 = maxmap;
      if ( nmap >= (unsigned __int64)maxmap )
        goto LABEL_50;
      goto LABEL_39;
    }
    *(_BYTE *)v40 = 0;
    v43 = nmap;
    v42 = maxmap;
    if ( nmap >= (unsigned __int64)maxmap )
    {
LABEL_50:
      if ( v42 )
      {
        v66 = 2 * v42;
        v65 = 32 * v42;
      }
      else
      {
        v65 = 1600;
        v66 = 100;
      }
      v81 = v66;
      v67 = realloc(map_0, v65, v20, v21, v22, v23, v24, v25, v26, v27, v35, v66, v16, v17, v18);
      if ( !v67 )
        break;
      maxmap = v81;
      map_0 = v67;
    }
LABEL_39:
    v81 = strlen(v15) + 1;
    v44 = strlen(v37) + 1;
    v53 = string_space_act;
    v54 = string_space;
    v55 = string_space_act + v81;
    v56 = string_space_act + v81 + v44;
    if ( v56 > string_space_max )
    {
      v62 = v81 + v44;
      if ( (unsigned __int64)(v81 + v44) < 0x400 )
        v62 = 1024;
      v79 = v81;
      v76 = string_space_act + v81;
      v77 = string_space_act;
      v78 = v44;
      v80 = string_space;
      v81 = v62 + string_space_max;
      v63 = realloc(
              string_space,
              v62 + string_space_max,
              v45,
              v46,
              v47,
              v48,
              v49,
              v50,
              v51,
              v52,
              (__int64)&v74,
              v44,
              (void *)string_space,
              (void *)string_space_max,
              (void *)0x400);
      if ( !v63 )
        break;
      v57 = map_0;
      v55 = v76;
      v53 = v77;
      v44 = v78;
      v64 = v81;
      if ( v63 == v80 )
      {
        v58 = 16 * v43;
      }
      else
      {
        v58 = 0;
        if ( v43 )
        {
          v58 = 16 * v43;
          v68 = map_0 + 16 * v43;
          v69 = (int64x2_t *)map_0;
          v70 = vdupq_n_s64(v63 - v80);
          do
          {
            *v69 = vaddq_s64(*v69, v70);
            ++v69;
          }
          while ( v69 != (int64x2_t *)v68 );
        }
      }
      v54 = v63;
      string_space_max = v64;
      string_space = v63;
    }
    else
    {
      v57 = map_0;
      v58 = 16 * v43;
    }
    v59 = v57 + v58;
    ++v12;
    v77 = v44;
    v78 = v55;
    v79 = v54;
    v80 = v58;
    v81 = v57;
    v60 = j_memcpy(v54 + v53);
    *(_QWORD *)(v81 + v80) = v60;
    v61 = j_memcpy(v79 + v78);
    nmap = v43 + 1;
    *(_QWORD *)(v59 + 8) = v61;
    string_space_act = v56;
LABEL_16:
    if ( !v19 )
    {
      while ( fgets_unlocked(v82, 400, v10) && !strchr(v82, 10, v33) )
        ;
    }
    if ( (*v10 & 0x10) != 0 )
      break;
  }
  fclose(v10);
  if ( v12 )
    qsort(map_0, nmap, 16, alias_compare);
  return v12;
}
