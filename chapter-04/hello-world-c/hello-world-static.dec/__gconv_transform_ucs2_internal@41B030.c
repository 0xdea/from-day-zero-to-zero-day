__int64 __fastcall _gconv_transform_ucs2_internal(
        __int64 a1,
        __int64 a2,
        unsigned __int64 *a3,
        unsigned __int64 a4,
        _QWORD *a5,
        __int64 *a6,
        unsigned int a7,
        unsigned int a8)
{
  int v10; // w16
  _DWORD **v14; // x0
  __int64 *v15; // x1
  unsigned __int64 v16; // x9
  _DWORD *v17; // x25
  unsigned int *v18; // x6
  unsigned int v19; // w0
  int v20; // w1
  unsigned __int8 *v21; // x2
  unsigned __int8 *v22; // x7
  unsigned __int64 v23; // x4
  unsigned int v24; // w26
  int v25; // w3
  __int64 v26; // x14
  unsigned __int16 *v27; // x24
  unsigned __int16 *v28; // x0
  _DWORD *v29; // x2
  _DWORD *v30; // x19
  int v31; // w3
  unsigned __int16 *v32; // x4
  unsigned __int16 *v33; // x1
  int v34; // w1
  unsigned int v35; // w0
  unsigned __int64 v36; // x1
  __int64 v38; // x2
  int v39; // w14
  unsigned __int16 *v40; // x2
  _DWORD *v41; // x6
  _DWORD *v42; // x4
  int v43; // w7
  unsigned __int16 *v44; // x10
  unsigned __int16 *v45; // x3
  __int64 v46; // x0
  bool v47; // zf
  unsigned __int64 v48; // x3
  unsigned __int64 v49; // x1
  unsigned int *v50; // x4
  __int64 v51; // x0
  unsigned int v52; // w0
  unsigned __int64 v53; // x1
  unsigned __int64 v54; // x0
  int *v55; // x6
  unsigned __int8 *v56; // x2
  __int64 v57; // x0
  unsigned __int64 v58; // [xsp+0h] [xbp-60h]
  __int64 v59; // [xsp+8h] [xbp-58h]
  __int64 (__fastcall *v60)(__int64, __int64, unsigned __int64 *, _DWORD *, _QWORD, __int64 *, _QWORD, _QWORD); // [xsp+10h] [xbp-50h]
  __int64 v61; // [xsp+18h] [xbp-48h]
  __int64 v62; // [xsp+20h] [xbp-40h]
  __int64 *v63; // [xsp+30h] [xbp-30h]
  int v65; // [xsp+3Ch] [xbp-24h]
  __int64 v66; // [xsp+48h] [xbp-18h] BYREF
  unsigned __int64 v67; // [xsp+50h] [xbp-10h] BYREF

  v10 = *(_DWORD *)(a2 + 16);
  v60 = 0;
  v61 = a1 + 104;
  v62 = a2 + 48;
  v65 = a7;
  if ( (v10 & 1) == 0 )
  {
    v60 = *(__int64 (__fastcall **)(__int64, __int64, unsigned __int64 *, _DWORD *, _QWORD, __int64 *, _QWORD, _QWORD))(a1 + 144);
    if ( *(_QWORD *)(a1 + 104) )
      v60 = (__int64 (__fastcall *)(__int64, __int64, unsigned __int64 *, _DWORD *, _QWORD, __int64 *, _QWORD, _QWORD))(*(_QWORD *)(a1 + 144) ^ _pointer_chk_guard_local);
  }
  if ( !a7 )
  {
    if ( a5 )
      v14 = (_DWORD **)a5;
    else
      v14 = (_DWORD **)a2;
    if ( a6 )
      v15 = &v66;
    else
      v15 = 0;
    v16 = *(_QWORD *)(a2 + 8);
    v17 = *v14;
    v63 = v15;
    v66 = 0;
    if ( a8 )
    {
      v18 = *(unsigned int **)(a2 + 32);
      v19 = *v18;
      v20 = *v18 & 7;
      if ( v20 )
      {
        if ( a5 )
        {
LABEL_115:
          v57 = _libc_assert_fail("outbufstart == NULL", "../iconv/skeleton.c", 467, "__gconv_transform_ucs2_internal");
          return _gconv_transform_internal_ucs2(v57);
        }
        v21 = (unsigned __int8 *)*a3;
        if ( (*v18 & 7) > 4 )
        {
LABEL_114:
          _libc_assert_fail(
            "(state->__count & 7) <= sizeof (state->__value)",
            "../iconv/loop.c",
            309,
            "ucs2_internal_loop_single");
          goto LABEL_115;
        }
        v22 = (unsigned __int8 *)*a3;
        v23 = 2;
        if ( v20 == 1 )
        {
          v22 = v21 + 1;
          v23 = 1;
        }
        if ( a4 >= (unsigned __int64)v22 )
        {
          v24 = 5;
          if ( v16 < (unsigned __int64)(v17 + 1) )
            return v24;
          v25 = (unsigned __int16)(*((unsigned __int8 *)v18 + 4) | (*v21 << 8));
          if ( (unsigned __int16)(v25 + 10240) <= 0x7FFu )
          {
            if ( !v63 || (v10 & 2) == 0 )
              return 6;
            ++*v63;
          }
          else
          {
            *v17++ = v25;
            v19 = *v18;
            v20 = *v18 & 7;
          }
          if ( v20 <= 1 )
          {
            v26 = v66;
            v10 = *(_DWORD *)(a2 + 16);
            v27 = (unsigned __int16 *)&v21[-v20 + 2];
            *a3 = (unsigned __int64)v27;
            *v18 = v19 & 0xFFFFFFF8;
            goto LABEL_23;
          }
          _libc_assert_fail(
            "inptr - bytebuf > (state->__count & 7)",
            "../iconv/loop.c",
            385,
            "ucs2_internal_loop_single");
          goto LABEL_111;
        }
        *a3 = a4;
        v53 = a4 - (_QWORD)v21 + v23;
        if ( v53 <= 4 )
        {
          if ( v23 < v53 )
          {
            v54 = v23;
            v55 = (int *)(v18 + 1);
            v56 = &v21[-v23];
            do
            {
              *((_BYTE *)v55 + v54) = v56[v54];
              ++v54;
            }
            while ( v53 != v54 );
          }
          return 7;
        }
        _libc_assert_fail(
          "inlen_after <= sizeof (state->__value.__wchb)",
          "../iconv/loop.c",
          338,
          "ucs2_internal_loop_single");
LABEL_113:
        _libc_assert_fail("outbufstart == NULL", "../iconv/skeleton.c", 350, "__gconv_transform_ucs2_internal");
        goto LABEL_114;
      }
    }
    v27 = (unsigned __int16 *)*a3;
    v26 = 0;
LABEL_23:
    if ( a6 )
      v26 += *a6;
    if ( (unsigned __int16 *)a4 == v27 )
    {
      v30 = v17;
      v28 = (unsigned __int16 *)a4;
      v24 = 4;
    }
    else
    {
      v28 = v27 + 1;
      if ( (unsigned __int64)(v27 + 1) > a4 )
      {
        v30 = v17;
        v28 = v27;
        v24 = 7;
      }
      else
      {
        v29 = v17 + 1;
        v30 = v17;
        if ( (unsigned __int64)(v17 + 1) > v16 )
        {
          v28 = v27;
          v24 = 5;
        }
        else
        {
          v31 = *v27;
          v32 = v27;
          v24 = 4;
          if ( (unsigned __int16)(v31 + 10240) <= 0x7FFu )
            goto LABEL_33;
LABEL_29:
          *v30 = v31;
          v30 = v29;
          if ( (unsigned __int16 *)a4 != v28 )
          {
            while ( 1 )
            {
              v33 = v28 + 1;
              if ( a4 < (unsigned __int64)(v28 + 1) )
                break;
              v29 = v30 + 1;
              if ( v16 < (unsigned __int64)(v30 + 1) )
              {
                v24 = 5;
                goto LABEL_36;
              }
              ++v28;
              v32 = v33 - 1;
              v31 = *(v33 - 1);
              if ( (unsigned __int16)(v31 + 10240) > 0x7FFu )
                goto LABEL_29;
LABEL_33:
              if ( !v63 || (v10 & 2) == 0 )
              {
                v28 = v32;
                v24 = 6;
                goto LABEL_36;
              }
              v24 = 6;
              ++*v63;
              if ( (unsigned __int16 *)a4 == v28 )
                goto LABEL_36;
            }
            *a3 = (unsigned __int64)v28;
            v24 = 7;
            if ( a5 )
            {
LABEL_45:
              *a5 = v30;
              return v24;
            }
LABEL_37:
            v34 = *(_DWORD *)(a2 + 16);
            ++*(_DWORD *)(a2 + 20);
            if ( (v34 & 1) != 0 )
            {
              v46 = *a6;
              *(_QWORD *)a2 = v30;
              *a6 = v46 + v66;
              goto LABEL_68;
            }
            v59 = v26;
            if ( v30 <= v17 )
            {
              v35 = v24;
              goto LABEL_41;
            }
            v58 = v16;
            v67 = *(_QWORD *)a2;
            v35 = v60(v61, v62, &v67, v30, 0, a6, 0, a8);
            v16 = v58;
            if ( v35 == 4 )
            {
              v35 = v24;
              if ( v24 != 5 )
                goto LABEL_41;
              goto LABEL_42;
            }
            v36 = v67;
            if ( (_DWORD *)v67 == v30 )
              goto LABEL_41;
            v38 = 0;
            if ( a6 )
              v38 = *a6;
            if ( v38 + v66 == v59 )
            {
              *a3 -= (__int64)((__int64)v30 - v67) / 2;
              goto LABEL_41;
            }
            v39 = *(_DWORD *)(a2 + 16);
            if ( (unsigned __int16 *)a4 == v27 )
            {
              *a3 = a4;
              if ( (_DWORD *)v36 != v17 )
                goto LABEL_88;
            }
            else
            {
              v40 = v27 + 1;
              if ( a4 < (unsigned __int64)(v27 + 1) )
              {
                *a3 = (unsigned __int64)v27;
                if ( (_DWORD *)v36 != v17 )
                  goto LABEL_88;
                goto LABEL_103;
              }
              v41 = v17 + 1;
              v42 = v17;
              if ( v67 < (unsigned __int64)(v17 + 1) )
              {
LABEL_104:
                *a3 = (unsigned __int64)v27;
                if ( (_DWORD *)v36 == v17 )
                {
LABEL_92:
                  --*(_DWORD *)(a2 + 20);
                  goto LABEL_41;
                }
                goto LABEL_88;
              }
              v43 = *v27;
              v44 = v27;
              if ( (unsigned __int16)(v43 + 10240) > 0x7FFu )
              {
LABEL_58:
                *v42 = v43;
                v42 = v41;
                goto LABEL_59;
              }
              while ( v63 && (v39 & 2) != 0 )
              {
                ++*v63;
LABEL_59:
                if ( (unsigned __int16 *)a4 == v40 )
                {
                  *a3 = a4;
                  if ( (_DWORD *)v36 != v42 )
                    goto LABEL_88;
                  goto LABEL_103;
                }
                v45 = v40 + 1;
                if ( a4 < (unsigned __int64)(v40 + 1) )
                  goto LABEL_87;
                v41 = v42 + 1;
                if ( v36 < (unsigned __int64)(v42 + 1) )
                {
                  *a3 = (unsigned __int64)v40;
                  if ( (_DWORD *)v36 == v42 )
                  {
                    if ( (_DWORD *)v36 == v17 )
                      goto LABEL_92;
LABEL_41:
                    if ( !v35 )
                    {
LABEL_42:
                      v27 = (unsigned __int16 *)*a3;
                      v17 = *(_DWORD **)a2;
                      v26 = v66;
                      v10 = *(_DWORD *)(a2 + 16);
                      goto LABEL_23;
                    }
                    v24 = v35;
LABEL_68:
                    if ( a8 )
                      v47 = v24 == 7;
                    else
                      v47 = 0;
                    if ( !v47 )
                      return v24;
                    v48 = *a3;
                    v49 = a4 - *a3;
                    if ( v49 <= 4 )
                    {
                      v50 = *(unsigned int **)(a2 + 32);
                      v51 = 0;
                      if ( v49 )
                      {
                        do
                        {
                          *((_BYTE *)v50 + v51 + 4) = *(_BYTE *)(v48 + v51);
                          ++v51;
                        }
                        while ( v49 != v51 );
                        v65 = v49;
                      }
                      v52 = *v50 & 0xFFFFFFF8;
                      *a3 = a4;
                      *v50 = v52 | v65;
                      return v24;
                    }
LABEL_111:
                    _libc_assert_fail(
                      "cnt_after <= sizeof (data->__statep->__value.__wchb)",
                      "../iconv/skeleton.c",
                      647,
                      "__gconv_transform_ucs2_internal");
                  }
LABEL_88:
                  _libc_assert_fail("outbuf == outerr", "../iconv/skeleton.c", 594, "__gconv_transform_ucs2_internal");
                  return 0;
                }
                ++v40;
                v44 = v45 - 1;
                v43 = *(v45 - 1);
                if ( (unsigned __int16)(v43 + 10240) > 0x7FFu )
                  goto LABEL_58;
              }
              v40 = v44;
LABEL_87:
              *a3 = (unsigned __int64)v40;
              if ( (_DWORD *)v36 != v42 )
                goto LABEL_88;
            }
LABEL_103:
            v35 = _libc_assert_fail(
                    "nstatus == __GCONV_FULL_OUTPUT",
                    "../iconv/skeleton.c",
                    595,
                    "__gconv_transform_ucs2_internal");
            goto LABEL_104;
          }
        }
      }
    }
LABEL_36:
    *a3 = (unsigned __int64)v28;
    if ( a5 )
      goto LABEL_45;
    goto LABEL_37;
  }
  if ( a5 )
    goto LABEL_113;
  **(_QWORD **)(a2 + 32) = 0;
  if ( (*(_DWORD *)(a2 + 16) & 1) != 0 )
    return 0;
  return v60(v61, a2 + 48, 0, 0, 0, a6, a7, a8);
}
