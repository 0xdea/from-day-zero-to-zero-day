__int64 __fastcall sub_4472F0(__int64 *a1, unsigned int a2, unsigned __int8 a3, char a4)
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
  _QWORD v50[2]; // [xsp+0h] [xbp-10010h] BYREF
  unsigned __int16 v51[504]; // [xsp+10h] [xbp-10000h] BYREF
  __int64 v52; // [xsp+400h] [xbp-FC10h]
  _BYTE v53[16]; // [xsp+10000h] [xbp-10h] BYREF
  _BYTE *v54; // [xsp+10078h] [xbp+68h]
  __int64 *v55; // [xsp+10080h] [xbp+70h]
  unsigned int v56; // [xsp+1008Ch] [xbp+7Ch]
  unsigned __int16 *v57; // [xsp+10090h] [xbp+80h]
  __int64 v58; // [xsp+10098h] [xbp+88h]
  __int64 v59; // [xsp+100A0h] [xbp+90h]
  __int64 v60; // [xsp+100A8h] [xbp+98h]
  char v61; // [xsp+100BFh] [xbp+AFh]
  unsigned __int16 *v62; // [xsp+100C0h] [xbp+B0h] BYREF
  __int64 *v63; // [xsp+100C8h] [xbp+B8h] BYREF

  v8 = dword_496800;
  if ( dword_496800 )
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
      v38 = &v53[-((v34 + 15) & 0xFFFFF0000LL)];
      if ( v53 != (_BYTE *)v38 )
      {
        do
          v52 = 0;
        while ( v50 != v38 );
      }
      v50[0] = 0;
      if ( (((_WORD)v34 + 15) & 0xFFF0u) >= 0x400uLL )
        v52 = 0;
      v39 = v51;
      v40 = (unsigned int)v35;
      v41 = &v62;
      v42 = 0x420000000000LL;
      v61 = 0;
      v62 = &v51[v34 / 2];
      while ( 1 )
      {
        if ( (*(_QWORD *)(a1[v40] + 864) & v42) == 0 )
          sub_4471A0(v41);
        v43 = v62;
        if ( v39 == v62 )
          break;
        if ( (--v40 & 0x80000000) != 0 )
          goto LABEL_68;
      }
      if ( (v61 & 1) != 0 )
      {
        result = v35;
        do
        {
          v44 = *(_QWORD *)&v43[4 * result--];
          *(_WORD *)(v44 + 868) &= ~0x200u;
        }
        while ( (result & 0x80000000) == 0 );
        v45 = &v63;
        v46 = 0x420000000000LL;
        v63 = &a1[v34 / 8];
        while ( 1 )
        {
          if ( (*(_QWORD *)(*(_QWORD *)&v43[4 * v35] + 864LL) & v46) == 0 )
            result = sub_4471A0(v45);
          if ( a1 == v63 )
            break;
          if ( (--v35 & 0x80000000) != 0 )
            sub_41F250("maps_head == maps", (__int64)"dl-sort-maps.c", 0x104u, (__int64)"_dl_sort_maps_dfs");
        }
        goto LABEL_55;
      }
LABEL_70:
      result = j_ifunc_40DC90(a1, v43, v34);
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
            sub_41F250("i < nmaps", (__int64)"dl-sort-maps.c", 0x119u, (__int64)"_dl_sort_maps_dfs");
          result = j_ifunc_40DD80(a1 + 1, a1, 8 * v48);
          *a1 = v33;
        }
      }
      return result;
    }
    v49 = &v53[-((v34 + 15) & 0xFFFFF0000LL)];
    if ( v53 != (_BYTE *)v49 )
    {
      do
        v52 = 0;
      while ( v50 != v49 );
    }
    v50[0] = 0;
    if ( (((_WORD)v34 + 15) & 0xFFF0u) >= 0x400uLL )
      v52 = 0;
    v61 = 0;
    v43 = &v51[v34 / 2];
    v62 = &v51[v34 / 2];
    if ( (a4 & 1) != 0 )
    {
      if ( v51 == v43 )
        goto LABEL_70;
    }
    else if ( v51 == v43 )
    {
      goto LABEL_70;
    }
LABEL_68:
    sub_41F250("rpo_head == rpo", (__int64)"dl-sort-maps.c", 0xE5u, (__int64)"_dl_sort_maps_dfs");
  }
  result = (__int64)v53;
  v10 = a2 - a3;
  v54 = v53;
  if ( v10 > 1 )
  {
    v11 = 2LL * (a2 - a3);
    v12 = &a1[a3];
    v13 = &v53[-((v11 + 15) & 0x3FFFF0000LL)];
    if ( v53 != (_BYTE *)v13 )
    {
      do
        v52 = 0;
      while ( v50 != v13 );
    }
    v50[0] = 0;
    if ( ((2 * (_WORD)v10 + 15) & 0xFFF0u) >= 0x400uLL )
      v52 = 0;
    ifunc_40DE70(v51, 0, v11);
    v14 = a4 & 1;
    v15 = 0;
    v16 = 1;
    v55 = &v12[v10 - 1];
    v56 = v10 - 1;
    while ( 1 )
    {
LABEL_8:
      v57 = &v51[v15];
      v17 = v12[v15];
      v18 = *v57 + 1;
      *v57 = v18;
      if ( !v14 || v17 == *(_QWORD *)(v17 + 40) && *(_DWORD *)(v17 + 1068) != -1 )
      {
        v19 = v56;
        if ( v8 < v56 )
        {
          v20 = v55;
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
                  v58 = v17;
                  v59 = v16;
                  v60 = v19 - v8;
                  j_ifunc_40DD80(&v12[v15], &v12[v16], 8 * v60);
                  v23 = v59;
                  *v20 = v58;
                  if ( v51[v23] > v10 - v8 )
                    goto LABEL_21;
                  j_ifunc_40DD80(v57, &v51[v23], 2 * v60);
                  v51[v19] = v18;
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
        return (__int64)v54;
      v23 = v16;
LABEL_21:
      v8 = v16;
      v15 = v16;
      v25 = 2LL * (v10 - v16++);
      ifunc_40DE70(&v51[v23], 0, v25);
    }
  }
  return result;
}
