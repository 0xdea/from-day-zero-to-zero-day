__int64 __fastcall _gconv_transform_ucs4_internal(
        __int64 a1,
        __int64 a2,
        unsigned __int64 *a3,
        unsigned __int64 a4,
        _QWORD *a5,
        __int64 *a6,
        int a7,
        unsigned int a8)
{
  unsigned __int64 v8; // x15
  int v10; // w16
  __int64 v12; // x3
  __int64 v14; // x1
  __int64 *v15; // x12
  _QWORD *v16; // x0
  unsigned __int64 v17; // x24
  _DWORD *v18; // x26
  __int64 v19; // x27
  unsigned __int64 *v20; // x22
  unsigned __int64 v21; // x25
  unsigned __int64 v22; // x23
  unsigned int *v23; // x20
  __int64 *v25; // x26
  __int64 v26; // x28
  unsigned __int64 v27; // x8
  unsigned int *v28; // x2
  unsigned __int64 v29; // x1
  unsigned int *v30; // x19
  unsigned __int64 v31; // x0
  unsigned int v32; // w0
  int v33; // w21
  unsigned int **v34; // x0
  unsigned int v35; // w0
  unsigned __int64 v36; // x2
  unsigned __int64 v37; // x10
  unsigned int v38; // w22
  int v39; // w6
  unsigned int v40; // w7
  unsigned __int64 *v41; // x23
  unsigned __int64 v42; // x20
  __int64 v43; // x25
  bool v44; // zf
  unsigned int *v46; // x9
  unsigned int v47; // w8
  int v48; // w13
  unsigned __int64 v49; // x0
  unsigned __int64 v50; // x2
  bool v52; // cc
  __int64 v53; // x1
  int v54; // w4
  unsigned int *v55; // x3
  unsigned int *v56; // x8
  unsigned int v57; // w1
  __int64 v58; // x0
  unsigned __int64 v59; // x3
  unsigned __int64 v60; // x1
  unsigned int *v61; // x2
  __int64 v62; // x0
  unsigned int v63; // w0
  unsigned __int64 v65; // [xsp+8h] [xbp-58h]
  unsigned __int64 v66; // [xsp+10h] [xbp-50h]
  __int64 v67; // [xsp+20h] [xbp-40h]
  __int64 (__fastcall *v68)(__int64, __int64, unsigned int **, unsigned int *, _QWORD, __int64 *, _QWORD, _QWORD); // [xsp+28h] [xbp-38h]
  __int64 v69; // [xsp+30h] [xbp-30h]
  __int64 v71; // [xsp+48h] [xbp-18h] BYREF
  unsigned int *v72; // [xsp+50h] [xbp-10h] BYREF

  v8 = 0;
  v10 = *(_DWORD *)(a2 + 16);
  v12 = a1 + 104;
  v14 = a2 + 48;
  if ( (v10 & 1) == 0 )
  {
    v8 = *(_QWORD *)(a1 + 144);
    if ( *(_QWORD *)(a1 + 104) )
      v8 ^= _pointer_chk_guard_local;
  }
  if ( a7 )
  {
    if ( !a5 )
    {
      **(_QWORD **)(a2 + 32) = 0;
      if ( (*(_DWORD *)(a2 + 16) & 1) != 0 )
        return 0;
      return ((__int64 (__fastcall *)(__int64, __int64, _QWORD, _QWORD, _QWORD, __int64 *))v8)(v12, v14, 0, 0, 0, a6);
    }
    goto LABEL_108;
  }
  v15 = &v71;
  if ( a5 )
    v16 = a5;
  else
    v16 = (_QWORD *)a2;
  v17 = *(_QWORD *)(a2 + 8);
  if ( !a6 )
    v15 = 0;
  v18 = (_DWORD *)*v16;
  v71 = 0;
  if ( a8 )
  {
    v46 = *(unsigned int **)(a2 + 32);
    v47 = *v46;
    v48 = *v46 & 7;
    if ( v48 )
    {
      if ( a5 )
        goto LABEL_109;
      v49 = *a3;
      v50 = v48;
      if ( (unsigned __int64)v48 <= 3 && a4 > v49 )
      {
        do
        {
          ++v49;
          ++v50;
          *a3 = v49;
          v52 = v50 <= 3 && a4 > v49;
          *((_BYTE *)v46 + v50 + 3) = *(_BYTE *)(v49 - 1);
        }
        while ( v52 );
      }
      if ( v50 <= 3 )
        goto LABEL_95;
      if ( *((unsigned __int8 *)v46 + 4) > 0x80u )
      {
        if ( (v10 & 2) == 0 )
        {
          v38 = 6;
          *a3 = v49 + v48 - v50;
          return v38;
        }
      }
      else
      {
        *((_BYTE *)++v18 - 4) = *((_BYTE *)v46 + 7);
        *((_BYTE *)v18 - 3) = *((_BYTE *)v46 + 6);
        *((_BYTE *)v18 - 2) = *((_BYTE *)v46 + 5);
        *((_BYTE *)v18 - 1) = *((_BYTE *)v46 + 4);
        v47 = *v46;
      }
      v10 = *(_DWORD *)(a2 + 16);
      *v46 = v47 & 0xFFFFFFF8;
    }
  }
  v19 = a2;
  v20 = a3;
  v21 = a4;
  v22 = v17;
  v23 = v18;
  v25 = v15;
  v26 = 0;
  v67 = v14;
  v68 = (__int64 (__fastcall *)(__int64, __int64, unsigned int **, unsigned int *, _QWORD, __int64 *, _QWORD, _QWORD))v8;
  v69 = v12;
  while ( 1 )
  {
    v27 = *v20;
    if ( a6 )
      v26 += *a6;
    if ( v21 >= v27 + 4 )
    {
      v28 = v23 + 1;
      if ( v22 >= (unsigned __int64)(v23 + 1) )
      {
        v29 = v27 + 4;
        v30 = v23;
        while ( 1 )
        {
          v32 = bswap32(*(_DWORD *)(v29 - 4));
          if ( (v32 & 0x80000000) != 0 )
          {
            if ( !v25 )
            {
              v30 = v23;
              v33 = 6;
              goto LABEL_28;
            }
            if ( (v10 & 2) == 0 )
            {
              v34 = (unsigned int **)a5;
              *v20 = v29 - 4;
              v33 = 6;
              if ( a5 )
              {
LABEL_36:
                v38 = v33;
                *v34 = v30;
                return v38;
              }
              goto LABEL_29;
            }
            ++*v25;
            v31 = v29 + 4;
            if ( v21 < v29 + 4 )
              goto LABEL_24;
          }
          else
          {
            *v30 = v32;
            v31 = v29 + 4;
            v30 = v28;
            if ( v21 < v29 + 4 )
              goto LABEL_24;
          }
          v28 = v30 + 1;
          if ( v22 < (unsigned __int64)(v30 + 1) )
            goto LABEL_24;
          v29 = v31;
        }
      }
    }
    v30 = v23;
    v29 = *v20;
LABEL_24:
    *v20 = v29;
    v33 = 4;
    if ( v21 != v29 )
    {
      if ( v22 < (unsigned __int64)(v30 + 1) )
        v33 = 5;
      else
        v33 = 7;
    }
LABEL_28:
    v34 = (unsigned int **)a5;
    if ( a5 )
      goto LABEL_36;
LABEL_29:
    ++*(_DWORD *)(v19 + 20);
    if ( (v10 & 1) != 0 )
    {
      v58 = *a6;
      *(_QWORD *)v19 = v30;
      v41 = v20;
      v42 = v21;
      v38 = v33;
      v43 = v19;
      v40 = a8;
      v39 = 0;
      *a6 = v58 + v71;
      goto LABEL_39;
    }
    v65 = v27;
    v66 = v27 + 4;
    if ( v23 >= v30 )
      goto LABEL_38;
    v72 = *(unsigned int **)v19;
    v35 = v68(v69, v67, &v72, v30, 0, a6, 0, a8);
    if ( v35 == 4 )
    {
      if ( v33 == 5 )
        goto LABEL_34;
LABEL_38:
      v40 = a8;
      v39 = 0;
      v41 = v20;
      v42 = v21;
      v38 = v33;
      v43 = v19;
LABEL_39:
      if ( v40 )
        v44 = v38 == 7;
      else
        v44 = 0;
      if ( !v44 )
        return v38;
      v59 = *v41;
      v60 = v42 - *v41;
      if ( v60 <= 4 )
      {
        v61 = *(unsigned int **)(v43 + 32);
        v62 = 0;
        if ( v60 )
        {
          do
          {
            *((_BYTE *)v61 + v62 + 4) = *(_BYTE *)(v59 + v62);
            ++v62;
          }
          while ( v60 != v62 );
          v39 = v60;
        }
        v63 = *v61;
        *v41 = v42;
        *v61 = v63 & 0xFFFFFFF8 | v39;
        return v38;
      }
      _libc_assert_fail(
        "cnt_after <= sizeof (data->__statep->__value.__wchb)",
        "../iconv/skeleton.c",
        647,
        "__gconv_transform_ucs4_internal");
LABEL_108:
      _libc_assert_fail("outbufstart == NULL", "../iconv/skeleton.c", 350, "__gconv_transform_ucs4_internal");
LABEL_109:
      _libc_assert_fail("outbufstart == NULL", "../iconv/skeleton.c", 467, "__gconv_transform_ucs4_internal");
    }
    v36 = (unsigned __int64)v72;
    v37 = v66;
    if ( v72 == v30 )
      goto LABEL_33;
    v53 = 0;
    if ( a6 )
      v53 = *a6;
    if ( v53 + v71 == v26 )
    {
      *v20 -= (char *)v30 - (char *)v72;
      goto LABEL_33;
    }
    v54 = *(_DWORD *)(v19 + 16);
    *v20 = v65;
    if ( v21 < v66 )
      break;
    v55 = v23 + 1;
    if ( v36 < (unsigned __int64)(v23 + 1) )
    {
      if ( v21 != v65 )
      {
        v56 = v23;
        goto LABEL_89;
      }
      v56 = v23;
LABEL_93:
      if ( (unsigned int *)v36 == v56 )
        goto LABEL_82;
      goto LABEL_94;
    }
    v56 = v23;
    while ( 1 )
    {
      v57 = bswap32(*(_DWORD *)(v37 - 4));
      if ( (v57 & 0x80000000) == 0 )
      {
        *v56 = v57;
        v56 = v55;
        goto LABEL_66;
      }
      if ( !v25 )
      {
        if ( (unsigned int *)v36 == v23 )
          goto LABEL_82;
LABEL_94:
        _libc_assert_fail("outbuf == outerr", "../iconv/skeleton.c", 594, "__gconv_transform_ucs4_internal");
LABEL_95:
        v38 = 7;
        *v46 = v47 & 0xFFFFFFF8 | v50;
        return v38;
      }
      if ( (v54 & 2) == 0 )
      {
        *v20 = v37 - 4;
        goto LABEL_81;
      }
      ++*v25;
LABEL_66:
      if ( v21 < v37 + 4 )
        goto LABEL_87;
      v55 = v56 + 1;
      if ( v36 < (unsigned __int64)(v56 + 1) )
        break;
      v37 += 4LL;
    }
    *v20 = v37;
    if ( v37 == v21 )
      goto LABEL_93;
LABEL_89:
    if ( (unsigned int *)v36 != v56 )
      goto LABEL_94;
    if ( (unsigned int *)v36 == v23 )
      --*(_DWORD *)(v19 + 20);
LABEL_33:
    if ( v35 )
    {
      v41 = v20;
      v42 = v21;
      v40 = a8;
      v39 = 0;
      v43 = v19;
      v38 = v35;
      goto LABEL_39;
    }
LABEL_34:
    v23 = *(unsigned int **)v19;
    v26 = v71;
    v10 = *(_DWORD *)(v19 + 16);
  }
  v37 = v65;
  v56 = v23;
LABEL_87:
  *v20 = v37;
  if ( v21 == v37 )
    goto LABEL_93;
  if ( v36 < (unsigned __int64)(v56 + 1) )
    goto LABEL_89;
LABEL_81:
  if ( v56 != (unsigned int *)v36 )
    goto LABEL_94;
LABEL_82:
  _libc_assert_fail("nstatus == __GCONV_FULL_OUTPUT", "../iconv/skeleton.c", 595, "__gconv_transform_ucs4_internal");
  return 0;
}
