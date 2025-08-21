__int64 __fastcall _gconv_transform_internal_ucs4(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 *a3,
        unsigned __int64 a4,
        unsigned __int64 *a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v8; // x14
  unsigned __int64 v9; // x13
  unsigned __int64 v10; // x24
  int v11; // w8
  unsigned __int64 *v12; // x21
  __int64 v14; // x27
  unsigned __int64 *v15; // x28
  __int64 v16; // x1
  unsigned __int64 *v17; // x0
  unsigned __int64 v18; // x11
  unsigned __int64 v19; // x22
  unsigned __int64 v20; // x19
  unsigned __int64 v21; // x26
  __int64 *v22; // x23
  __int64 v24; // x12
  unsigned __int64 v25; // x25
  signed __int64 v26; // x0
  __int64 v27; // x2
  __int64 v28; // x0
  __int64 v29; // x2
  unsigned __int64 v30; // x20
  unsigned __int64 v31; // x2
  int v32; // w1
  unsigned int v33; // w0
  unsigned __int64 v34; // x4
  unsigned __int64 *v35; // x25
  unsigned __int64 *v36; // x24
  unsigned int v37; // w7
  int v38; // w28
  unsigned int v39; // w19
  unsigned __int64 v40; // x26
  bool v41; // zf
  int *v43; // x5
  int v44; // w8
  unsigned __int64 v45; // x2
  unsigned __int64 v47; // x0
  bool v48; // cc
  __int64 v49; // x1
  signed __int64 v50; // x1
  __int64 v51; // x3
  __int64 v52; // x1
  unsigned __int64 v53; // x2
  unsigned __int64 v54; // x3
  unsigned __int64 v55; // x1
  unsigned int *v56; // x2
  __int64 v57; // x0
  unsigned int v58; // w0
  __int64 v60; // [xsp+10h] [xbp-40h]
  __int64 v61; // [xsp+20h] [xbp-30h]
  __int64 (__fastcall *v62)(__int64, __int64, unsigned __int64 *, unsigned __int64, _QWORD, __int64 *, _QWORD, _QWORD); // [xsp+28h] [xbp-28h]
  __int64 v63; // [xsp+30h] [xbp-20h]
  unsigned int v64; // [xsp+38h] [xbp-18h]
  unsigned __int64 v65; // [xsp+40h] [xbp-10h] BYREF

  v8 = a1 + 104;
  v9 = 0;
  v10 = a2;
  v11 = *(_DWORD *)(a2 + 16);
  v12 = a5;
  v14 = a6;
  LODWORD(v15) = a7;
  v16 = a2 + 48;
  if ( (v11 & 1) == 0 )
  {
    v9 = *(_QWORD *)(a1 + 144);
    if ( *(_QWORD *)(a1 + 104) )
      v9 ^= _pointer_chk_guard_local;
  }
  if ( !(_DWORD)a7 )
  {
    if ( a5 )
      v17 = a5;
    else
      v17 = (unsigned __int64 *)v10;
    v18 = *(_QWORD *)(v10 + 8);
    v19 = *v17;
    if ( (_DWORD)a8 )
    {
      v43 = *(int **)(v10 + 32);
      v44 = *v43;
      LODWORD(v45) = *v43 & 7;
      if ( (_DWORD)v45 )
      {
        if ( a5 )
          goto LABEL_86;
        v45 = (int)v45;
        if ( *a3 < a4 && (unsigned __int64)(int)v45 <= 3 )
        {
          v47 = *a3 + 1;
          do
          {
            ++v45;
            *a3 = v47;
            v48 = v45 <= 3 && a4 > v47;
            *((_BYTE *)v43 + v45 + 3) = *(_BYTE *)(v47++ - 1);
          }
          while ( v48 );
        }
        if ( v45 <= 3 )
        {
          v39 = 7;
          *v43 = v44 & 0xFFFFFFF8 | v45;
          return v39;
        }
        v19 += 4LL;
        *(_BYTE *)(v19 - 4) = *((_BYTE *)v43 + 7);
        *(_BYTE *)(v19 - 3) = *((_BYTE *)v43 + 6);
        *(_BYTE *)(v19 - 2) = *((_BYTE *)v43 + 5);
        *(_BYTE *)(v19 - 1) = *((_BYTE *)v43 + 4);
        *v43 &= 0xFFFFFFF8;
      }
    }
    v61 = v16;
    v20 = v18;
    v21 = v10;
    v22 = (__int64 *)v14;
    v10 = v19;
    v64 = a8;
    v15 = a3;
    v62 = (__int64 (__fastcall *)(__int64, __int64, unsigned __int64 *, unsigned __int64, _QWORD, __int64 *, _QWORD, _QWORD))v9;
    v63 = v8;
    while ( 1 )
    {
      v24 = 0;
      v25 = *v15;
      if ( v22 )
        v24 = *v22;
      v12 = (unsigned __int64 *)(a4 - v25);
      v26 = v20 - v10;
      if ( (__int64)(v20 - v10) > (__int64)(a4 - v25) )
        v26 = a4 - v25;
      v27 = v26 / 4;
      if ( v26 / 4 )
      {
        v28 = 0;
        do
        {
          *(_DWORD *)(v10 + 4 * v28) = bswap32(*(_DWORD *)(v25 + 4 * v28));
          ++v28;
        }
        while ( v27 != v28 );
        v29 = 4 * v27;
        v30 = v10 + v29;
        v31 = v25 + v29;
      }
      else
      {
        v30 = v10;
        v31 = *v15;
      }
      *v15 = v31;
      v14 = 4;
      if ( v31 != a4 )
      {
        if ( v20 < v30 + 4 )
          v14 = 5;
        else
          v14 = 7;
      }
      if ( a5 )
      {
        v39 = v14;
        *a5 = v30;
        return v39;
      }
      v32 = *(_DWORD *)(v21 + 16);
      ++*(_DWORD *)(v21 + 20);
      if ( (v32 & 1) != 0 )
      {
        v36 = (unsigned __int64 *)v21;
        v35 = v15;
        v39 = v14;
        v40 = a4;
        v37 = v64;
        v38 = 0;
        *v36 = v30;
        goto LABEL_31;
      }
      v60 = v24;
      if ( v30 <= v10 )
        goto LABEL_30;
      v65 = *(_QWORD *)v21;
      v33 = v62(v63, v61, &v65, v30, 0, v22, 0, v64);
      if ( v33 == 4 )
      {
        if ( (_DWORD)v14 != 5 )
        {
LABEL_30:
          v35 = v15;
          v36 = (unsigned __int64 *)v21;
          v37 = v64;
          v38 = 0;
          v39 = v14;
          v40 = a4;
          goto LABEL_31;
        }
      }
      else
      {
        v34 = v65;
        if ( v65 == v30 )
          goto LABEL_27;
        v49 = 0;
        if ( v22 )
          v49 = *v22;
        if ( v49 == v60 )
        {
          *v15 -= v30 - v65;
          if ( v33 )
          {
LABEL_75:
            v36 = (unsigned __int64 *)v21;
            v35 = v15;
            v40 = a4;
            v39 = v33;
            v37 = v64;
            v38 = 0;
LABEL_31:
            if ( v37 )
              v41 = v39 == 7;
            else
              v41 = 0;
            if ( !v41 )
              return v39;
            v54 = *v35;
            v55 = v40 - *v35;
            if ( v55 <= 4 )
            {
              v56 = (unsigned int *)v36[4];
              v57 = 0;
              if ( v55 )
              {
                do
                {
                  *((_BYTE *)v56 + v57 + 4) = *(_BYTE *)(v54 + v57);
                  ++v57;
                }
                while ( v55 != v57 );
                v38 = v55;
              }
              v58 = *v56;
              v39 = 7;
              *v35 = v40;
              *v56 = v58 & 0xFFFFFFF8 | v38;
              return v39;
            }
LABEL_84:
            _libc_assert_fail(
              "cnt_after <= sizeof (data->__statep->__value.__wchb)",
              "../iconv/skeleton.c",
              647,
              "__gconv_transform_internal_ucs4");
            goto LABEL_85;
          }
        }
        else
        {
          v50 = v65 - v10;
          if ( (__int64)(v65 - v10) > (__int64)v12 )
            v50 = a4 - v25;
          v51 = v50 / 4;
          if ( v50 / 4 )
          {
            v52 = 0;
            do
            {
              *(_DWORD *)(v10 + 4 * v52) = bswap32(*(_DWORD *)(v25 + 4 * v52));
              ++v52;
            }
            while ( v51 != v52 );
            v25 += 4 * v51;
            v53 = v10 + 4 * v51;
          }
          else
          {
            v53 = v10;
          }
          *v15 = v25;
          if ( v25 == a4 || v34 >= v53 + 4 )
          {
            if ( v53 == v34 )
            {
              _libc_assert_fail(
                "nstatus == __GCONV_FULL_OUTPUT",
                "../iconv/skeleton.c",
                595,
                "__gconv_transform_internal_ucs4");
              break;
            }
LABEL_85:
            _libc_assert_fail("outbuf == outerr", "../iconv/skeleton.c", 594, "__gconv_transform_internal_ucs4");
LABEL_86:
            _libc_assert_fail("outbufstart == NULL", "../iconv/skeleton.c", 467, "__gconv_transform_internal_ucs4");
          }
          if ( v53 != v34 )
            goto LABEL_85;
          if ( v53 != v10 )
          {
LABEL_27:
            if ( v33 )
              goto LABEL_75;
            goto LABEL_28;
          }
          --*(_DWORD *)(v21 + 20);
          if ( v33 )
            goto LABEL_75;
        }
      }
LABEL_28:
      v10 = *(_QWORD *)v21;
    }
  }
  if ( v12 )
  {
    _libc_assert_fail(
      "outbufstart == NULL",
      "../iconv/skeleton.c",
      350,
      "__gconv_transform_internal_ucs4",
      a5,
      a6,
      a7,
      a8);
    goto LABEL_84;
  }
  **(_QWORD **)(v10 + 32) = 0;
  if ( (*(_DWORD *)(v10 + 16) & 1) != 0 )
    return 0;
  return ((__int64 (__fastcall *)(__int64, __int64, _QWORD, _QWORD, _QWORD, __int64, _QWORD, __int64))v9)(
           v8,
           v16,
           0,
           0,
           0,
           v14,
           (unsigned int)v15,
           a8);
}
