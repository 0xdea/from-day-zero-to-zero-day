__int64 __fastcall dl_sort_maps(__int64 *a1, unsigned int a2, unsigned __int8 a3, char a4)
{
  unsigned int v8; // w24
  __int64 result; // x0
  unsigned int v10; // w23
  __int64 v11; // x2
  __int64 *v12; // x22
  _QWORD *v13; // x1
  int v14; // w21
  __int64 v15; // x26
  unsigned int v16; // w27
  __int64 v17; // x8
  unsigned __int16 v18; // w28
  unsigned int v19; // w20
  __int64 *v20; // x19
  __int64 v21; // x2
  __int64 *v22; // x1
  __int64 v23; // x7
  __int64 v24; // x7
  __int64 v25; // x2
  int *v26; // x1
  _DWORD *v27; // x1
  int v28; // t1
  int v29; // w7
  __int64 v30; // x9
  __int64 *v31; // x1
  __int64 v32; // x7
  __int64 v33; // x20
  unsigned __int64 v34; // x7
  __int64 v35; // x5
  __int64 v36; // x0
  __int64 v37; // x2
  _QWORD *v38; // x1
  unsigned __int16 *v39; // x9
  __int64 v40; // x6
  unsigned __int16 **v41; // x11
  __int64 v42; // x10
  unsigned __int16 *v43; // x4
  __int64 v44; // x2
  __int64 **v45; // x8
  __int64 v46; // x6
  __int64 v47; // x0
  __int64 v48; // x2
  _QWORD *v49; // x1
  unsigned __int16 *v50; // x4
  _QWORD v51[2]; // [xsp+0h] [xbp-10010h] BYREF
  unsigned __int16 v52[504]; // [xsp+10h] [xbp-10000h] BYREF
  __int64 v53; // [xsp+400h] [xbp-FC10h]
  _BYTE v54[16]; // [xsp+10000h] [xbp-10h] BYREF
  _BYTE *v55; // [xsp+10078h] [xbp+68h]
  __int64 *v56; // [xsp+10080h] [xbp+70h]
  unsigned int v57; // [xsp+1008Ch] [xbp+7Ch]
  unsigned __int16 *v58; // [xsp+10090h] [xbp+80h]
  __int64 v59; // [xsp+10098h] [xbp+88h]
  __int64 v60; // [xsp+100A0h] [xbp+90h]
  __int64 v61; // [xsp+100A8h] [xbp+98h]
  char v62; // [xsp+100BFh] [xbp+AFh]
  unsigned __int16 *v63; // [xsp+100C0h] [xbp+B0h] BYREF
  __int64 *v64; // [xsp+100C8h] [xbp+B8h] BYREF

  v8 = dl_dso_sort_algo;
  if ( dl_dso_sort_algo )
  {
    v33 = *a1;
    v34 = 8LL * a2;
    LODWORD(v35) = a2 - 1;
    if ( (int)(a2 - 1) >= 0 )
    {
      v35 = (unsigned int)v35;
      v36 = (unsigned int)v35;
      do
      {
        v37 = a1[v36--];
        *(_WORD *)(v37 + 868) &= ~0x200u;
      }
      while ( (v36 & 0x80000000) == 0 );
      v38 = &v54[-((v34 + 15) & 0xFFFFF0000LL)];
      if ( v54 != (_BYTE *)v38 )
      {
        do
          v53 = 0;
        while ( v51 != v38 );
      }
      v51[0] = 0;
      if ( (((_WORD)v34 + 15) & 0xFFF0u) >= 0x400uLL )
        v53 = 0;
      v39 = v52;
      v40 = (unsigned int)v35;
      v41 = &v63;
      v42 = 0x420000000000LL;
      v62 = 0;
      v63 = &v52[v34 / 2];
      while ( 1 )
      {
        if ( (*(_QWORD *)(a1[v40] + 864) & v42) == 0 )
          dfs_traversal_part_0(v41);
        v43 = v63;
        if ( v39 == v63 )
          break;
        if ( (--v40 & 0x80000000) != 0 )
          goto LABEL_68;
      }
      if ( (v62 & 1) != 0 )
      {
        result = v35;
        do
        {
          v44 = *(_QWORD *)&v43[4 * result--];
          *(_WORD *)(v44 + 868) &= ~0x200u;
        }
        while ( (result & 0x80000000) == 0 );
        v45 = &v64;
        v46 = 0x420000000000LL;
        v64 = &a1[v34 / 8];
        while ( 1 )
        {
          if ( (*(_QWORD *)(*(_QWORD *)&v43[4 * v35] + 864LL) & v46) == 0 )
            result = dfs_traversal_part_0(v45);
          if ( a1 == v64 )
            break;
          if ( (--v35 & 0x80000000) != 0 )
            _libc_assert_fail("maps_head == maps", (__int64)"dl-sort-maps.c", 0x104u, (__int64)"_dl_sort_maps_dfs");
        }
        goto LABEL_55;
      }
LABEL_70:
      result = j_memcpy(a1);
LABEL_55:
      if ( (a3 & 1) != 0 )
      {
        result = *a1;
        if ( v33 != *a1 )
        {
          v47 = 1;
          do
            v48 = v47++;
          while ( v33 != a1[v47 - 1] );
          if ( a2 <= (unsigned int)v48 )
            _libc_assert_fail("i < nmaps", (__int64)"dl-sort-maps.c", 0x119u, (__int64)"_dl_sort_maps_dfs");
          result = j_memmove(a1 + 1, a1, 8 * v48);
          *a1 = v33;
        }
      }
      return result;
    }
    v49 = &v54[-((v34 + 15) & 0xFFFFF0000LL)];
    if ( v54 != (_BYTE *)v49 )
    {
      do
        v53 = 0;
      while ( v51 != v49 );
    }
    v51[0] = 0;
    if ( (((_WORD)v34 + 15) & 0xFFF0u) >= 0x400uLL )
      v53 = 0;
    v62 = 0;
    v50 = &v52[v34 / 2];
    v63 = &v52[v34 / 2];
    if ( (a4 & 1) != 0 )
    {
      if ( v52 == v50 )
        goto LABEL_70;
    }
    else if ( v52 == v50 )
    {
      goto LABEL_70;
    }
LABEL_68:
    _libc_assert_fail("rpo_head == rpo", (__int64)"dl-sort-maps.c", 0xE5u, (__int64)"_dl_sort_maps_dfs");
  }
  result = (__int64)v54;
  v10 = a2 - a3;
  v55 = v54;
  if ( v10 > 1 )
  {
    v11 = 2LL * (a2 - a3);
    v12 = &a1[a3];
    v13 = &v54[-((v11 + 15) & 0x3FFFF0000LL)];
    if ( v54 != (_BYTE *)v13 )
    {
      do
        v53 = 0;
      while ( v51 != v13 );
    }
    v51[0] = 0;
    if ( ((2 * (_WORD)v10 + 15) & 0xFFF0u) >= 0x400uLL )
      v53 = 0;
    memset(v52, 0, v11);
    v14 = a4 & 1;
    v15 = 0;
    v16 = 1;
    v56 = &v12[v10 - 1];
    v57 = v10 - 1;
    while ( 1 )
    {
LABEL_8:
      v58 = &v52[v15];
      v17 = v12[v15];
      v18 = *v58 + 1;
      *v58 = v18;
      if ( !v14 || v17 == *(_QWORD *)(v17 + 40) && *(_DWORD *)(v17 + 1068) != -1 )
      {
        v19 = v57;
        if ( v8 < v57 )
        {
          v20 = v56;
          do
          {
            v21 = *v20;
            v22 = *(__int64 **)(*v20 + 1032);
            if ( v22 )
            {
              while ( 1 )
              {
                v24 = *v22;
                if ( !*v22 )
                  break;
                ++v22;
                if ( v17 == v24 )
                {
LABEL_20:
                  v59 = v17;
                  v60 = v16;
                  v61 = v19 - v8;
                  j_memmove(&v12[v15], &v12[v16], 8 * v61);
                  v23 = v60;
                  *v20 = v59;
                  if ( v52[v23] > v10 - v8 )
                    goto LABEL_21;
                  j_memmove(v58, &v52[v23], 2 * v61);
                  v52[v19] = v18;
                  goto LABEL_8;
                }
              }
            }
            if ( v14 )
            {
              v26 = *(int **)(v21 + 1040);
              if ( v26 )
              {
                v28 = *v26;
                v27 = v26 + 2;
                v29 = v28 - 1;
                while ( v29 != -1 )
                {
                  v30 = *(_QWORD *)&v27[2 * v29--];
                  if ( v17 == v30 )
                  {
                    v31 = *(__int64 **)(v17 + 1032);
                    if ( v31 )
                    {
                      while ( 1 )
                      {
                        v32 = *v31;
                        if ( !*v31 )
                          break;
                        ++v31;
                        if ( v21 == v32 )
                          goto LABEL_13;
                      }
                    }
                    goto LABEL_20;
                  }
                }
              }
            }
LABEL_13:
            --v19;
            --v20;
          }
          while ( v8 != v19 );
        }
      }
      if ( v10 == v16 )
        return (__int64)v55;
      v23 = v16;
LABEL_21:
      v8 = v16;
      v15 = v16;
      v25 = 2LL * (v10 - v16++);
      memset(&v52[v23], 0, v25);
    }
  }
  return result;
}
