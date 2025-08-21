__int64 __fastcall _gconv_transform_ucs2reverse_internal(
        __int64 a1,
        __int64 a2,
        unsigned __int16 **a3,
        unsigned __int16 *a4,
        _QWORD *a5,
        __int64 *a6,
        unsigned int a7,
        unsigned int a8)
{
  unsigned __int16 *v8; // x21
  __int64 v9; // x22
  int v12; // w15
  _DWORD **v16; // x0
  __int64 *v17; // x1
  _DWORD *v18; // x24
  unsigned __int64 v19; // x9
  unsigned int *v20; // x1
  unsigned int v21; // w0
  int v22; // w3
  char *v23; // x4
  unsigned __int64 v24; // x7
  unsigned __int64 v25; // x6
  int v26; // w2
  __int64 v27; // x13
  unsigned __int16 *v28; // x1
  _DWORD *v29; // x3
  _DWORD *v30; // x19
  unsigned __int16 *v31; // x4
  int v32; // w0
  unsigned __int16 *v33; // x0
  __int64 *v34; // x0
  unsigned int v35; // w25
  int v36; // w1
  unsigned int v37; // w0
  unsigned __int64 v38; // x1
  bool v39; // zf
  __int64 v41; // x2
  int v42; // w15
  unsigned __int16 *v43; // x3
  _DWORD *v44; // x7
  _DWORD *v45; // x6
  unsigned __int16 *v46; // x10
  int v47; // w2
  unsigned __int16 *v48; // x2
  __int64 v49; // x0
  char *v50; // x2
  char *v51; // x0
  int *v52; // x1
  unsigned __int8 *v53; // x4
  unsigned __int16 *v54; // x3
  unsigned __int64 v55; // x1
  unsigned int *v56; // x4
  __int64 v57; // x0
  unsigned int v58; // w0
  __int64 v59; // x0
  unsigned __int64 v60; // x1
  unsigned int **v61; // x2
  unsigned int *v62; // x3
  _WORD **v63; // x4
  _QWORD *v64; // x5
  unsigned int v65; // w6
  __int64 v66; // x7
  unsigned __int64 v67; // [xsp+0h] [xbp-60h]
  __int64 v68; // [xsp+8h] [xbp-58h]
  __int64 (__fastcall *v69)(__int64, __int64, unsigned __int64 *, _DWORD *, _QWORD, __int64 *, _QWORD, _QWORD); // [xsp+10h] [xbp-50h]
  __int64 v70; // [xsp+18h] [xbp-48h]
  __int64 v71; // [xsp+20h] [xbp-40h]
  __int64 *v72; // [xsp+30h] [xbp-30h]
  unsigned int v74; // [xsp+3Ch] [xbp-24h]
  __int64 v75; // [xsp+48h] [xbp-18h] BYREF
  unsigned __int64 v76; // [xsp+50h] [xbp-10h] BYREF
  unsigned __int16 *vars20; // [xsp+80h] [xbp+20h]
  __int64 vars28; // [xsp+88h] [xbp+28h]

  v12 = *(_DWORD *)(a2 + 16);
  v69 = 0;
  v70 = a1 + 104;
  v71 = a2 + 48;
  v74 = a7;
  if ( (v12 & 1) == 0 )
  {
    v69 = *(__int64 (__fastcall **)(__int64, __int64, unsigned __int64 *, _DWORD *, _QWORD, __int64 *, _QWORD, _QWORD))(a1 + 144);
    if ( *(_QWORD *)(a1 + 104) )
      v69 = (__int64 (__fastcall *)(__int64, __int64, unsigned __int64 *, _DWORD *, _QWORD, __int64 *, _QWORD, _QWORD))(*(_QWORD *)(a1 + 144) ^ _pointer_chk_guard_local);
  }
  if ( a7 )
  {
    if ( a5 )
    {
      vars20 = v8;
      vars28 = v9;
      _libc_assert_fail("outbufstart == NULL", "../iconv/skeleton.c", 350, "__gconv_transform_ucs2reverse_internal");
      goto LABEL_108;
    }
    **(_QWORD **)(a2 + 32) = 0;
    if ( (*(_DWORD *)(a2 + 16) & 1) != 0 )
      return 0;
    return v69(v70, a2 + 48, 0, 0, 0, a6, a7, a8);
  }
  else
  {
    if ( a5 )
      v16 = (_DWORD **)a5;
    else
      v16 = (_DWORD **)a2;
    v8 = (unsigned __int16 *)&v75;
    if ( a6 )
      v17 = &v75;
    else
      v17 = 0;
    v18 = *v16;
    v72 = v17;
    v75 = 0;
    v19 = *(_QWORD *)(a2 + 8);
    if ( !a8 || (v20 = *(unsigned int **)(a2 + 32), v21 = *v20, (v22 = *v20 & 7) == 0) )
    {
      v8 = *a3;
      v27 = 0;
      v9 = 10240;
LABEL_23:
      if ( a6 )
        v27 += *a6;
      if ( a4 != v8 )
      {
        v28 = v8 + 1;
        if ( a4 < v8 + 1 )
        {
          v30 = v18;
          v28 = v8;
          v35 = 7;
          goto LABEL_36;
        }
        v29 = v18 + 1;
        v30 = v18;
        if ( v19 < (unsigned __int64)(v18 + 1) )
        {
          v28 = v8;
          v35 = 5;
          goto LABEL_36;
        }
        v31 = v8;
        v32 = (unsigned __int16)__rev16(*v8);
        if ( (unsigned __int16)(v32 + 10240) <= 0x7FFu )
          goto LABEL_33;
        goto LABEL_29;
      }
      v30 = v18;
      v28 = a4;
      v35 = 4;
LABEL_36:
      *a3 = v28;
      if ( a5 )
      {
LABEL_45:
        *a5 = v30;
        return v35;
      }
LABEL_37:
      v36 = *(_DWORD *)(a2 + 16);
      ++*(_DWORD *)(a2 + 20);
      if ( (v36 & 1) != 0 )
      {
        v49 = *a6;
        *(_QWORD *)a2 = v30;
        *a6 = v49 + v75;
        goto LABEL_48;
      }
      v67 = v19;
      v68 = v27;
      if ( v30 <= v18 )
        goto LABEL_48;
      v76 = *(_QWORD *)a2;
      v37 = v69(v70, v71, &v76, v30, 0, a6, 0, a8);
      v19 = v67;
      if ( v37 == 4 )
      {
        if ( v35 == 5 )
          goto LABEL_42;
        goto LABEL_48;
      }
      v38 = v76;
      if ( (_DWORD *)v76 == v30 )
        goto LABEL_41;
      v41 = 0;
      if ( a6 )
        v41 = *a6;
      if ( v41 + v75 == v68 )
      {
        *a3 = (unsigned __int16 *)((char *)*a3 - (__int64)((__int64)v30 - v76) / 2);
        goto LABEL_41;
      }
      v42 = *(_DWORD *)(a2 + 16);
      if ( a4 == v8 )
      {
        *a3 = a4;
        if ( (_DWORD *)v38 != v18 )
          goto LABEL_69;
      }
      else
      {
        v43 = v8 + 1;
        if ( a4 < v8 + 1 )
        {
          *a3 = v8;
          if ( (_DWORD *)v38 != v18 )
            goto LABEL_69;
        }
        else
        {
          v44 = v18 + 1;
          v45 = v18;
          if ( v76 < (unsigned __int64)(v18 + 1) )
          {
            *a3 = v8;
            if ( (_DWORD *)v38 == v18 )
            {
LABEL_85:
              --*(_DWORD *)(a2 + 20);
              goto LABEL_41;
            }
            goto LABEL_69;
          }
          v46 = v8;
          v47 = (unsigned __int16)__rev16(*v8);
          if ( (unsigned __int16)(v47 + 10240) > 0x7FFu )
          {
LABEL_60:
            *v45 = v47;
            v45 = v44;
            goto LABEL_61;
          }
          while ( v72 && (v42 & 2) != 0 )
          {
            ++*v72;
LABEL_61:
            if ( a4 == v43 )
              goto LABEL_68;
            v48 = v43 + 1;
            if ( a4 < v43 + 1 )
              goto LABEL_68;
            v44 = v45 + 1;
            if ( v38 < (unsigned __int64)(v45 + 1) )
            {
              *a3 = v43;
              if ( (_DWORD *)v38 == v45 )
              {
                if ( (_DWORD *)v38 == v18 )
                  goto LABEL_85;
LABEL_41:
                if ( !v37 )
                {
LABEL_42:
                  v8 = *a3;
                  v18 = *(_DWORD **)a2;
                  v27 = v75;
                  v12 = *(_DWORD *)(a2 + 16);
                  goto LABEL_23;
                }
                v35 = v37;
LABEL_48:
                if ( a8 )
                  v39 = v35 == 7;
                else
                  v39 = 0;
                if ( !v39 )
                  return v35;
LABEL_96:
                v54 = *a3;
                v55 = (char *)a4 - (char *)*a3;
                if ( v55 <= 4 )
                {
                  v56 = *(unsigned int **)(a2 + 32);
                  v57 = 0;
                  if ( v55 )
                  {
                    do
                    {
                      *((_BYTE *)v56 + v57 + 4) = *((_BYTE *)v54 + v57);
                      ++v57;
                    }
                    while ( v55 != v57 );
                    v74 = v55;
                  }
                  v58 = *v56 & 0xFFFFFFF8;
                  *a3 = a4;
                  *v56 = v58 | v74;
                  return v35;
                }
LABEL_108:
                _libc_assert_fail(
                  "cnt_after <= sizeof (data->__statep->__value.__wchb)",
                  "../iconv/skeleton.c",
                  647,
                  "__gconv_transform_ucs2reverse_internal");
LABEL_109:
                _libc_assert_fail(
                  "inptr - bytebuf > (state->__count & 7)",
                  "../iconv/loop.c",
                  385,
                  "ucs2reverse_internal_loop_single");
                goto LABEL_110;
              }
LABEL_69:
              v34 = (__int64 *)_libc_assert_fail(
                                 "outbuf == outerr",
                                 "../iconv/skeleton.c",
                                 594,
                                 "__gconv_transform_ucs2reverse_internal");
              while ( 2 )
              {
                ++*v34;
                if ( v28 == a4 )
                {
LABEL_71:
                  v35 = 4;
                  goto LABEL_36;
                }
LABEL_30:
                v33 = v28 + 1;
                if ( a4 >= v28 + 1 )
                {
                  v29 = v30 + 1;
                  if ( v19 < (unsigned __int64)(v30 + 1) )
                  {
                    v35 = 5;
                    goto LABEL_36;
                  }
                  ++v28;
                  v31 = v33 - 1;
                  v32 = (unsigned __int16)__rev16(*(v33 - 1));
                  if ( (unsigned __int16)(v32 + 10240) <= 0x7FFu )
                  {
LABEL_33:
                    v34 = v72;
                    if ( v72 && (v12 & 2) != 0 )
                      continue;
                    v28 = v31;
                    v35 = 6;
                    goto LABEL_36;
                  }
LABEL_29:
                  *v30 = v32;
                  v30 = v29;
                  if ( v28 == a4 )
                    goto LABEL_71;
                  goto LABEL_30;
                }
                break;
              }
              *a3 = v28;
              v35 = 7;
              if ( a5 )
                goto LABEL_45;
              goto LABEL_37;
            }
            ++v43;
            v46 = v48 - 1;
            v47 = (unsigned __int16)__rev16(*(v48 - 1));
            if ( (unsigned __int16)(v47 + 10240) > 0x7FFu )
              goto LABEL_60;
          }
          v43 = v46;
LABEL_68:
          *a3 = v43;
          if ( (_DWORD *)v38 != v45 )
            goto LABEL_69;
        }
      }
      _libc_assert_fail(
        "nstatus == __GCONV_FULL_OUTPUT",
        "../iconv/skeleton.c",
        595,
        "__gconv_transform_ucs2reverse_internal");
      goto LABEL_96;
    }
    if ( !a5 )
    {
      v23 = (char *)*a3;
      if ( (*v20 & 7) <= 4 )
      {
        v24 = (unsigned __int64)*a3;
        v25 = 2;
        if ( v22 == 1 )
        {
          v24 = (unsigned __int64)(v23 + 1);
          v25 = 1;
        }
        if ( (unsigned __int64)a4 >= v24 )
        {
          if ( v19 < (unsigned __int64)(v18 + 1) )
            return 5;
          v26 = (unsigned __int16)__rev16(*((unsigned __int8 *)v20 + 4) | ((unsigned __int8)*v23 << 8));
          if ( (unsigned __int16)(v26 + 10240) <= 0x7FFu )
          {
            if ( !v72 || (v12 & 2) == 0 )
              return 6;
            ++*v72;
          }
          else
          {
            *v18++ = v26;
            v21 = *v20;
            v22 = *v20 & 7;
          }
          if ( v22 <= 1 )
          {
            v27 = v75;
            v12 = *(_DWORD *)(a2 + 16);
            v8 = (unsigned __int16 *)&v23[-v22 + 2];
            *a3 = v8;
            v9 = 10240;
            *v20 = v21 & 0xFFFFFFF8;
            goto LABEL_23;
          }
          goto LABEL_109;
        }
        *a3 = a4;
        v50 = (char *)((char *)a4 - v23 + v25);
        if ( (unsigned __int64)v50 <= 4 )
        {
          if ( v25 < (unsigned __int64)v50 )
          {
            v51 = (char *)v25;
            v52 = (int *)(v20 + 1);
            v53 = (unsigned __int8 *)&v23[-v25];
            do
            {
              v51[(_QWORD)v52] = v51[(_QWORD)v53];
              ++v51;
            }
            while ( v50 != v51 );
          }
          return 7;
        }
LABEL_110:
        _libc_assert_fail(
          "inlen_after <= sizeof (state->__value.__wchb)",
          "../iconv/loop.c",
          338,
          "ucs2reverse_internal_loop_single");
        vars20 = v8;
        vars28 = v9;
      }
      _libc_assert_fail(
        "(state->__count & 7) <= sizeof (state->__value)",
        "../iconv/loop.c",
        309,
        "ucs2reverse_internal_loop_single",
        v23);
    }
    v59 = _libc_assert_fail("outbufstart == NULL", "../iconv/skeleton.c", 467, "__gconv_transform_ucs2reverse_internal");
    return _gconv_transform_internal_ucs2reverse(v59, v60, v61, v62, v63, v64, v65, v66);
  }
}
