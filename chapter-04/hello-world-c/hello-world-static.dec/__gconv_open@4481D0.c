__int64 __fastcall _gconv_open(__int64 a1, __int64 *a2, unsigned int a3)
{
  _BYTE *v5; // x22
  _BYTE *v6; // x23
  char v7; // w21
  int v8; // w20
  __int64 v9; // x25
  _QWORD *v10; // x0
  __int64 v11; // x25
  __int64 *v12; // x0
  __int64 v13; // x1
  __int64 v14; // x23
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  void *v18; // x4
  void *v19; // x5
  void *v20; // x6
  unsigned int transform; // w22
  double v22; // d0
  double v23; // d1
  double v24; // d2
  double v25; // d3
  double v26; // d4
  double v27; // d5
  double v28; // d6
  double v29; // d7
  __int64 v31; // x25
  unsigned __int64 v32; // x19
  _QWORD *v33; // x0
  __int64 v34; // x2
  __int64 v35; // x0
  __int64 v36; // x3
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x3
  void *v40; // x4
  void *v41; // x5
  void *v42; // x6
  double v43; // d0
  double v44; // d1
  double v45; // d2
  double v46; // d3
  double v47; // d4
  double v48; // d5
  double v49; // d6
  double v50; // d7
  int v51; // w20
  int v52; // w21
  __int64 v53; // x27
  unsigned __int64 v54; // x28
  __int64 v55; // x25
  unsigned __int64 v56; // x26
  __int64 v57; // x0
  unsigned __int64 v58; // x19
  __int64 v59; // x0
  bool v60; // zf
  unsigned __int64 StatusReg; // x22
  unsigned __int64 v62; // x20
  int v63; // w25
  __int64 v64; // x28
  __int64 v65; // x0
  __int64 v66; // [xsp+0h] [xbp-20040h] BYREF
  _BYTE v67[1008]; // [xsp+10h] [xbp-20030h] BYREF
  __int64 v68; // [xsp+400h] [xbp-1FC40h]
  _QWORD v69[2]; // [xsp+10000h] [xbp-10040h] BYREF
  _BYTE v70[1008]; // [xsp+10010h] [xbp-10030h] BYREF
  __int64 v71; // [xsp+10400h] [xbp-FC40h]
  _BYTE v72[16]; // [xsp+20000h] [xbp-40h] BYREF
  char *v73; // [xsp+20010h] [xbp-30h]
  char ***v74; // [xsp+20018h] [xbp-28h]
  __int64 v75; // [xsp+20028h] [xbp-18h] BYREF
  __int64 v76; // [xsp+20030h] [xbp-10h] BYREF

  v6 = *(_BYTE **)a1;
  v5 = *(_BYTE **)(a1 + 8);
  v7 = *(_BYTE *)(a1 + 16);
  v8 = *(unsigned __int8 *)(a1 + 17);
  if ( *v5 == 47 && v5[1] == 47 && !v5[2] )
  {
    v9 = strlen(*(_QWORD *)(**(_QWORD **)(_ReadStatusReg(TPIDR_EL0) + 16) + 168LL));
    v10 = &v72[-((v9 + 18) & 0xFFFFFFFFFFFF0000LL)];
    if ( v72 != (_BYTE *)v10 )
    {
      do
        v71 = 0;
      while ( v69 != v10 );
    }
    v69[0] = 0;
    if ( (((_WORD)v9 + 18) & 0xFFF0u) >= 0x400uLL )
      v71 = 0;
    v5 = v70;
    strcpy((char *)(j_memcpy(v70) + v9), "//");
  }
  if ( *v6 == 47 && v6[1] == 47 && !v6[2] )
  {
    v11 = strlen(*(_QWORD *)(**(_QWORD **)(_ReadStatusReg(TPIDR_EL0) + 16) + 168LL));
    v12 = (_QWORD *)((char *)v69 - ((v11 + 18) & 0xFFFFFFFFFFFF0000LL));
    if ( v69 != v12 )
    {
      do
        v68 = 0;
      while ( &v66 != v12 );
    }
    v66 = 0;
    if ( (((_WORD)v11 + 18) & 0xFFF0u) >= 0x400uLL )
      v68 = 0;
    v6 = v67;
    strcpy((char *)(j_memcpy(v67) + v11), "//");
  }
  v13 = (__int64)v6;
  v14 = 0;
  transform = _gconv_find_transform((__int64)v5, v13, &v75, (unsigned __int64 *)&v76, a3);
  if ( !transform )
  {
    v31 = v76;
    v32 = 48 * v76 + 16;
    v33 = (_QWORD *)malloc(v32, v22, v23, v24, v25, v26, v27, v28, v29, v15, v16, v17, v18, v19, v20);
    v34 = v75;
    v14 = (__int64)v33;
    if ( v33 )
    {
      v33[1] = v75;
      *v33 = v31;
      v35 = (__int64)(v33 + 2);
      if ( v32 < 0x10 )
        v36 = 16;
      else
        v36 = 48 * v31 + 16;
      _memset_chk(v35, 0, 48 * v31, v36 - 16);
      if ( !v31 )
        goto LABEL_18;
      v51 = 2 * v8;
      v52 = v7 & 1;
      v53 = v14 + 56;
      v54 = 0;
      v74 = nl_C_locobj;
      v55 = 0;
      v73 = "INTERNAL";
      while ( 1 )
      {
        *(_QWORD *)(v53 - 8) = v53;
        if ( v52 )
        {
          v60 = (unsigned int)strcasecmp_l(*(_QWORD *)(v75 + v55 + 24), (__int64)v73, (__int64)v74) == 0;
          v56 = v76;
          if ( v60 )
            v51 |= 8u;
          if ( v76 - 1 <= v54 )
          {
LABEL_32:
            *(_DWORD *)(v14 + 48 * v54 + 32) = v51 | 1;
            goto LABEL_18;
          }
        }
        else
        {
          v56 = v76;
          if ( v76 - 1 <= v54 )
            goto LABEL_32;
        }
        v57 = v75;
        *(_DWORD *)(v53 - 24) = v51;
        v58 = 8160 * *(_DWORD *)(v57 + v55 + 84);
        v59 = malloc(v58, v43, v44, v45, v46, v47, v48, v49, v50, v37, v38, v39, v40, v41, v42);
        *(_QWORD *)(v53 - 40) = v59;
        if ( !v59 )
          break;
        ++v54;
        *(_QWORD *)(v53 - 32) = v59 + v58;
        v55 += 104;
        v53 += 48;
        if ( v56 <= v54 )
          goto LABEL_18;
      }
      StatusReg = _ReadStatusReg(TPIDR_EL0);
      v62 = v54 - 1;
      v63 = *(_DWORD *)(StatusReg + 40);
      if ( v54 )
      {
        v64 = v14 + 48 * v54;
        do
        {
          v65 = *(_QWORD *)(v64 - 32);
          --v62;
          v64 -= 48;
          free(v65, v43, v44, v45, v46, v47, v48, v49, v50);
        }
        while ( v62 != -1 );
      }
      free(v14, v43, v44, v45, v46, v47, v48, v49, v50);
      v34 = v75;
    }
    else
    {
      StatusReg = _ReadStatusReg(TPIDR_EL0);
      v63 = *(_DWORD *)(StatusReg + 40);
    }
    v14 = 0;
    _gconv_close_transform(v34, v76);
    *(_DWORD *)(StatusReg + 40) = v63;
    transform = 3;
  }
LABEL_18:
  *a2 = v14;
  return transform;
}
