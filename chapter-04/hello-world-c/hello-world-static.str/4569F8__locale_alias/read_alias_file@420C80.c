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
  __int64 v16; // x4
  __int64 v17; // x5
  __int64 v18; // x27
  __int64 v19; // x3
  int v20; // w1
  int v21; // t1
  __int64 v24; // x2
  int v25; // w1
  __int64 v26; // x2
  int v27; // t1
  __int64 v28; // x26
  int v29; // t1
  int v30; // w1
  _WORD *v31; // x0
  int v32; // t1
  __int64 v33; // x0
  __int64 v34; // x28
  __int64 v35; // x3
  __int64 v36; // x9
  __int64 v37; // x4
  __int64 v38; // x8
  unsigned __int64 v39; // x25
  __int64 v40; // x6
  __int64 v41; // x5
  __int64 v42; // x19
  __int64 v43; // x0
  __int64 v44; // x0
  __int64 v45; // x1
  char *v46; // x0
  __int64 v47; // x1
  unsigned __int64 v48; // x1
  __int64 v49; // x3
  char *v50; // x0
  __int64 v51; // x11
  int64x2_t *v52; // x10
  int64x2_t v53; // q1
  __int64 v54; // [xsp+0h] [xbp-101E0h] BYREF
  _BYTE v55[1008]; // [xsp+10h] [xbp-101D0h] BYREF
  __int64 v56; // [xsp+400h] [xbp-FDE0h]
  __int64 v57; // [xsp+C1E0h] [xbp-4000h] BYREF
  _BYTE v58[16]; // [xsp+10000h] [xbp-1E0h] BYREF
  __int64 v59; // [xsp+10010h] [xbp-1D0h]
  __int64 v60; // [xsp+10018h] [xbp-1C8h]
  __int64 v61; // [xsp+10020h] [xbp-1C0h]
  __int64 v62; // [xsp+10028h] [xbp-1B8h]
  __int64 v63; // [xsp+10030h] [xbp-1B0h]
  __int64 v64; // [xsp+10038h] [xbp-1A8h]
  _BYTE v65[400]; // [xsp+10048h] [xbp-198h] BYREF

  v2 = a2;
  v3 = a2 + 29LL;
  v4 = v3 & 0xFFFFFFFFFFFF0000LL;
  v6 = v3 & 0xFFF0;
  v7 = (__int64 *)&v58[-v4];
  if ( v58 != (_BYTE *)v7 )
  {
    do
      v56 = 0;
    while ( &v54 != v7 );
  }
  v54 = 0;
  if ( v6 >= 0x400uLL )
    v56 = 0;
  v8 = j_memcpy(v55);
  *(_QWORD *)(v8 + a2) = *(_QWORD *)"/locale.alias";
  strcpy((char *)(v8 + v2 + 6), "e.alias");
  v9 = (_DWORD *)fopen64(v8);
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
  while ( fgets_unlocked(v65, 400, v10) )
  {
    v15 = v65;
    v18 = strchr(v65, 10, v14);
    v19 = *v13;
    v20 = v65[0];
    if ( (*(_WORD *)(*v13 + 2LL * v65[0]) & 0x2000) != 0 )
    {
      do
      {
        v21 = (unsigned __int8)*++v15;
        v20 = v21;
      }
      while ( (*(_WORD *)(v19 + 2LL * (unsigned __int8)v21) & 0x2000) != 0 );
    }
    if ( v20 == 35 || v20 == 0 )
      goto LABEL_16;
    v25 = (unsigned __int8)v15[1];
    v26 = (__int64)(v15 + 1);
    if ( v15[1] )
    {
      while ( (*(_WORD *)(v19 + 2LL * (unsigned __int8)v25) & 0x2000) == 0 )
      {
        v27 = *(unsigned __int8 *)++v26;
        v25 = v27;
        if ( !v27 )
          goto LABEL_42;
      }
      *(_BYTE *)v26 = 0;
      v28 = v26 + 1;
      v25 = *(unsigned __int8 *)(v26 + 1);
    }
    else
    {
LABEL_42:
      v28 = v26;
    }
    if ( (*(_WORD *)(v19 + 2LL * (unsigned __int8)v25) & 0x2000) != 0 )
    {
      do
      {
        v29 = *(unsigned __int8 *)++v28;
        v25 = v29;
        v26 = *(unsigned __int16 *)(v19 + 2LL * (unsigned __int8)v29);
      }
      while ( (v26 & 0x2000) != 0 );
    }
    if ( !v25 )
      goto LABEL_16;
    v30 = *(unsigned __int8 *)(v28 + 1);
    v31 = (_WORD *)(v28 + 1);
    if ( !*(_BYTE *)(v28 + 1) )
      goto LABEL_38;
    while ( 1 )
    {
      v26 = *(unsigned __int16 *)(v19 + 2LL * (unsigned __int8)v30);
      if ( (v26 & 0x2000) != 0 )
        break;
      v32 = *((unsigned __int8 *)v31 + 1);
      v31 = (_WORD *)((char *)v31 + 1);
      v30 = v32;
      if ( !v32 )
        goto LABEL_38;
    }
    if ( v30 == 10 )
    {
      *v31 = 2560;
LABEL_38:
      v34 = nmap;
      v33 = maxmap;
      if ( nmap >= (unsigned __int64)maxmap )
        goto LABEL_50;
      goto LABEL_39;
    }
    *(_BYTE *)v31 = 0;
    v34 = nmap;
    v33 = maxmap;
    if ( nmap >= (unsigned __int64)maxmap )
    {
LABEL_50:
      if ( v33 )
      {
        v49 = 2 * v33;
        v48 = 32 * v33;
      }
      else
      {
        v48 = 1600;
        v49 = 100;
      }
      v64 = v49;
      v50 = realloc(map_0, v48, v26, v49, v16, v17);
      if ( !v50 )
        break;
      maxmap = v64;
      map_0 = (__int64)v50;
    }
LABEL_39:
    v64 = strlen(v15) + 1;
    v35 = strlen(v28) + 1;
    v36 = string_space_act;
    v37 = string_space;
    v38 = string_space_act + v64;
    v39 = string_space_act + v64 + v35;
    if ( v39 > string_space_max )
    {
      v45 = v64 + v35;
      if ( (unsigned __int64)(v64 + v35) < 0x400 )
        v45 = 1024;
      v62 = v64;
      v59 = string_space_act + v64;
      v60 = string_space_act;
      v61 = v35;
      v63 = string_space;
      v64 = v45 + string_space_max;
      v46 = realloc(string_space, v45 + string_space_max, (__int64)&v57, v35, string_space, string_space_max);
      if ( !v46 )
        break;
      v40 = map_0;
      v38 = v59;
      v36 = v60;
      v35 = v61;
      v47 = v64;
      if ( v46 == (char *)v63 )
      {
        v41 = 16 * v34;
      }
      else
      {
        v41 = 0;
        if ( v34 )
        {
          v41 = 16 * v34;
          v51 = map_0 + 16 * v34;
          v52 = (int64x2_t *)map_0;
          v53 = vdupq_n_s64((unsigned __int64)&v46[-v63]);
          do
          {
            *v52 = vaddq_s64(*v52, v53);
            ++v52;
          }
          while ( v52 != (int64x2_t *)v51 );
        }
      }
      v37 = (__int64)v46;
      string_space_max = v47;
      string_space = (__int64)v46;
    }
    else
    {
      v40 = map_0;
      v41 = 16 * v34;
    }
    v42 = v40 + v41;
    ++v12;
    v60 = v35;
    v61 = v38;
    v62 = v37;
    v63 = v41;
    v64 = v40;
    v43 = j_memcpy(v37 + v36);
    *(_QWORD *)(v64 + v63) = v43;
    v44 = j_memcpy(v62 + v61);
    nmap = v34 + 1;
    *(_QWORD *)(v42 + 8) = v44;
    string_space_act = v39;
LABEL_16:
    if ( !v18 )
    {
      while ( fgets_unlocked(v65, 400, v10) && !strchr(v65, 10, v24) )
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
