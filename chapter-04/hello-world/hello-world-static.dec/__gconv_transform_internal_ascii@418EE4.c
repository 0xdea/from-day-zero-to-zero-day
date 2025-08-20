__int64 __fastcall _gconv_transform_internal_ascii(
        __int64 a1,
        __int64 a2,
        unsigned int **a3,
        unsigned __int64 a4,
        unsigned __int64 *a5,
        _QWORD *a6,
        unsigned int a7,
        unsigned int a8)
{
  unsigned __int64 v8; // x23
  _QWORD *v9; // x24
  __int64 v10; // x13
  __int64 v11; // x15
  unsigned __int64 *v12; // x10
  int v13; // w11
  int v14; // w18
  __int64 v17; // x14
  unsigned __int64 v18; // x12
  unsigned __int64 *v21; // x0
  __int64 *v22; // x6
  unsigned int *v23; // x9
  int v24; // w0
  unsigned int *v25; // x2
  _DWORD *v26; // x3
  unsigned int *v27; // x1
  unsigned __int64 v28; // x19
  char v29; // w0
  unsigned int *v30; // x0
  unsigned __int64 v31; // x8
  bool v32; // cc
  unsigned int *v33; // x0
  __int64 v34; // x0
  unsigned int v35; // w1
  unsigned int *v36; // x22
  __int64 v37; // x27
  unsigned int *v38; // x26
  unsigned __int64 *v39; // x22
  _QWORD *v40; // x28
  __int64 v41; // x25
  __int64 v42; // x27
  _BYTE *v43; // x21
  int v44; // w7
  _BYTE *v45; // x19
  unsigned int *v46; // x0
  unsigned int *v47; // x3
  unsigned int v48; // w2
  unsigned __int64 *v49; // x0
  int v50; // w1
  unsigned int v51; // w0
  unsigned __int64 v52; // x7
  unsigned int v53; // w26
  __int64 v55; // x1
  int v56; // w19
  _BYTE *v57; // x1
  unsigned int v58; // w25
  int v59; // w4
  unsigned int *v60; // x2
  unsigned int v61; // w0
  _BYTE *v62; // x2
  __int64 v63; // x21
  unsigned int v64; // w7
  unsigned __int64 *v65; // x28
  __int64 v66; // x0
  bool v67; // zf
  unsigned int v68; // w0
  unsigned int **v69; // x28
  unsigned int *v70; // x22
  unsigned __int64 v71; // x3
  unsigned __int64 v72; // x1
  unsigned int *v73; // x4
  __int64 v74; // x0
  unsigned int v75; // w0
  _BYTE *v76; // x2
  unsigned __int64 v77; // x0
  unsigned int *v78; // x2
  __int64 v79; // x1
  int v80; // w0
  _BYTE *v81; // x2
  unsigned int v82; // w0
  signed int v83; // w0
  __int64 v84; // x1
  __int64 v85; // x1
  unsigned __int64 *v86; // [xsp+0h] [xbp-80h]
  __int64 v87; // [xsp+0h] [xbp-80h]
  unsigned int v88; // [xsp+8h] [xbp-78h]
  __int64 *v89; // [xsp+8h] [xbp-78h]
  unsigned int *v90; // [xsp+10h] [xbp-70h]
  __int64 (__fastcall *v91)(__int64, __int64, _BYTE **, _BYTE *, _QWORD, _QWORD *, _QWORD, _QWORD); // [xsp+18h] [xbp-68h]
  __int64 (__fastcall *v92)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD); // [xsp+18h] [xbp-68h]
  __int64 v93; // [xsp+20h] [xbp-60h]
  __int64 v94; // [xsp+20h] [xbp-60h]
  __int64 v95; // [xsp+28h] [xbp-58h]
  __int64 v96; // [xsp+28h] [xbp-58h]
  __int64 *v97; // [xsp+30h] [xbp-50h]
  char v98; // [xsp+30h] [xbp-50h]
  unsigned __int64 v99; // [xsp+38h] [xbp-48h]
  __int64 v100; // [xsp+40h] [xbp-40h]
  int v101; // [xsp+48h] [xbp-38h]
  unsigned int v102; // [xsp+4Ch] [xbp-34h]
  __int64 v103; // [xsp+50h] [xbp-30h] BYREF
  _BYTE *v104; // [xsp+58h] [xbp-28h] BYREF
  unsigned int *v105; // [xsp+60h] [xbp-20h]
  _BYTE *v106; // [xsp+68h] [xbp-18h]
  unsigned int v107; // [xsp+70h] [xbp-10h] BYREF
  _BYTE v108[4]; // [xsp+74h] [xbp-Ch] BYREF
  unsigned __int64 vars30; // [xsp+B0h] [xbp+30h]
  _QWORD *vars38; // [xsp+B8h] [xbp+38h]

  v10 = a1;
  v11 = a2 + 48;
  v12 = a5;
  v13 = *(_DWORD *)(a2 + 16);
  v14 = a7;
  v17 = a1 + 104;
  v18 = 0;
  if ( (v13 & 1) == 0 )
  {
    v18 = *(_QWORD *)(a1 + 144);
    if ( *(_QWORD *)(a1 + 104) )
      v18 ^= _pointer_chk_guard_local;
  }
  if ( a7 )
  {
    if ( !a5 )
    {
      **(_QWORD **)(a2 + 32) = 0;
      if ( (*(_DWORD *)(a2 + 16) & 1) != 0 )
        return 0;
      return ((__int64 (__fastcall *)(__int64, __int64, _QWORD, _QWORD, _QWORD, _QWORD *, _QWORD))v18)(
               a1 + 104,
               v11,
               0,
               0,
               0,
               a6,
               a7);
    }
    goto LABEL_146;
  }
  if ( a5 )
    v21 = a5;
  else
    v21 = (unsigned __int64 *)a2;
  v22 = &v103;
  v9 = *(_QWORD **)(a2 + 8);
  if ( !a6 )
    v22 = 0;
  v8 = *v21;
  v103 = 0;
  if ( !a8 || (v23 = *(unsigned int **)(a2 + 32), (v24 = *v23 & 7) == 0) )
  {
    v36 = *a3;
    v37 = 0;
    goto LABEL_28;
  }
  if ( a5 )
  {
LABEL_147:
    _libc_assert_fail("outbufstart == NULL", "../iconv/skeleton.c", 467, "__gconv_transform_internal_ascii");
    goto LABEL_148;
  }
  v25 = *a3;
  v105 = *a3;
  v106 = (_BYTE *)v8;
  if ( v24 > 4 )
  {
LABEL_148:
    _libc_assert_fail(
      "(state->__count & 7) <= sizeof (state->__value)",
      "../iconv/loop.c",
      309,
      "internal_ascii_loop_single");
LABEL_149:
    _libc_assert_fail(
      "inlen_after <= sizeof (state->__value.__wchb)",
      "../iconv/loop.c",
      338,
      "internal_ascii_loop_single");
    vars30 = v8;
    vars38 = v9;
  }
  v26 = v23 + 1;
  v27 = &v107;
  v28 = 0;
  do
  {
    v29 = *((_BYTE *)v26 + v28++);
    *(_BYTE *)v27 = v29;
    v27 = (unsigned int *)((char *)v27 + 1);
  }
  while ( v28 < (*v23 & 7) );
  if ( a4 < (unsigned __int64)v25 - v28 + 4 )
  {
    *a3 = (unsigned int *)a4;
    v77 = a4 - (_QWORD)v25 + v28;
    if ( v77 > 4 )
      goto LABEL_149;
    v78 = (unsigned int *)((char *)v25 + 1);
    if ( v28 < v77 )
    {
      do
      {
        v105 = v78;
        v78 = (unsigned int *)((char *)v78 + 1);
        *((_BYTE *)v26 + v28++) = *((_BYTE *)v78 - 2);
      }
      while ( v77 != v28 );
    }
    return 7;
  }
  v30 = (unsigned int *)((char *)v25 + 1);
  if ( v8 >= (unsigned __int64)v9 )
    return 5;
  do
  {
    v31 = v28++;
    v105 = v30;
    v32 = v28 <= 3 && a4 > (unsigned __int64)v30;
    v108[v28 - 5] = *((_BYTE *)v30 - 1);
    v30 = (unsigned int *)((char *)v30 + 1);
  }
  while ( v32 );
  v105 = &v107;
  if ( v107 <= 0x7F )
  {
    v106 = (_BYTE *)(v8 + 1);
    *(_BYTE *)v8 = v107;
    v33 = v105 + 1;
    v105 = v33;
    if ( v33 != &v107 )
    {
LABEL_24:
      while ( 1 )
      {
        v34 = (char *)v33 - (char *)&v107;
LABEL_25:
        v35 = *v23;
        if ( (*v23 & 7LL) < v34 )
          break;
        v33 = (unsigned int *)_libc_assert_fail(
                                "inptr - bytebuf > (state->__count & 7)",
                                "../iconv/loop.c",
                                385,
                                "internal_ascii_loop_single");
LABEL_151:
        v85 = *v22;
        v105 = ++v33;
        *v22 = v85 + 1;
LABEL_137:
        if ( v33 == &v107 )
          return 6;
      }
      v13 = *(_DWORD *)(a2 + 16);
      v36 = (unsigned int *)((char *)*a3 + v34 - (v35 & 7));
      *a3 = v36;
      v37 = v103;
      v8 = (unsigned __int64)v106;
      *v23 = v35 & 0xFFFFFFF8;
      goto LABEL_28;
    }
    goto LABEL_96;
  }
  if ( v107 >> 7 == 7168 )
  {
    v34 = 4;
    v105 = (unsigned int *)v108;
    goto LABEL_25;
  }
  if ( !v22 )
    return 6;
  if ( (v13 & 8) == 0 )
  {
    if ( (v13 & 2) != 0 )
    {
      v79 = *v22;
      v33 = (unsigned int *)v108;
      v105 = (unsigned int *)v108;
      *v22 = v79 + 1;
      goto LABEL_24;
    }
    return 6;
  }
  v87 = v10;
  v89 = v22;
  v90 = v23;
  v92 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))v18;
  v94 = v10 + 104;
  v96 = v11;
  v98 = v13;
  v99 = v31;
  v102 = a8;
  v82 = _gconv_transliterate(v10, a2);
  v10 = v87;
  v22 = v89;
  v53 = v82;
  v23 = v90;
  v18 = (unsigned __int64)v92;
  v67 = v82 == 6;
  v17 = v94;
  v11 = v96;
  v12 = 0;
  v33 = v105;
  a8 = v102;
  if ( v67 )
  {
    if ( (v98 & 2) != 0 )
      goto LABEL_151;
    goto LABEL_137;
  }
  if ( v53 == 5 )
  {
    if ( v105 != &v107 )
      goto LABEL_24;
    return 5;
  }
  if ( v105 != &v107 )
    goto LABEL_24;
  if ( v53 == 7 )
  {
    if ( v28 == 4 )
      goto LABEL_144;
    v83 = *v90 & 0xFFFFFFF8;
    *a3 = (unsigned int *)((char *)*a3 + v28 - (*v90 & 7LL));
    if ( (__int64)v28 <= v83 )
      goto LABEL_143;
    if ( v28 > 4 )
      goto LABEL_142;
    v84 = 1;
    *v90 = v83 | v28;
    do
    {
      *((_BYTE *)v90 + v84 + 3) = v108[v84 - 5];
      ++v84;
    }
    while ( v99 + 2 != v84 );
    return 7;
  }
  if ( v53 )
    return v53;
LABEL_96:
  v36 = *a3;
  v37 = v103;
  v13 = *(_DWORD *)(a2 + 16);
LABEL_28:
  v38 = v36;
  v39 = (unsigned __int64 *)a3;
  v40 = v9;
  v9 = a6;
  v41 = v37;
  v42 = a2;
  v43 = (_BYTE *)v8;
  v88 = a8;
  v44 = v13;
  v86 = v12;
  v91 = (__int64 (__fastcall *)(__int64, __int64, _BYTE **, _BYTE *, _QWORD, _QWORD *, _QWORD, _QWORD))v18;
  v93 = v17;
  v95 = v11;
  v97 = v22;
  v100 = v10;
  while ( 2 )
  {
    if ( v9 )
      v41 += *v9;
    v105 = v38;
    v106 = v43;
    v45 = v43;
    if ( (unsigned int *)a4 == v38 )
    {
      v46 = (unsigned int *)a4;
      v8 = 4;
      goto LABEL_38;
    }
    v46 = v38;
    v8 = 4;
    while ( 1 )
    {
      v47 = v46 + 1;
      if ( a4 < (unsigned __int64)(v46 + 1) )
      {
        *v39 = (unsigned __int64)v105;
        v49 = v86;
        v8 = 7;
        if ( !v86 )
          goto LABEL_39;
LABEL_46:
        v53 = v8;
        *v49 = (unsigned __int64)v45;
        return v53;
      }
      if ( v40 <= (_QWORD *)v45 )
      {
        v46 = v105;
        v8 = 5;
        goto LABEL_38;
      }
      v48 = *v46;
      if ( *v46 <= 0x7F )
      {
        v106 = v45 + 1;
        *v45 = v48;
        v45 = v106;
        v46 = ++v105;
        goto LABEL_37;
      }
      if ( v48 >> 7 == 7168 )
      {
        ++v46;
        v105 = v47;
        goto LABEL_37;
      }
      if ( !v97 )
        break;
      if ( (*(_DWORD *)(v42 + 16) & 8) != 0 )
      {
        v101 = v44;
        v68 = _gconv_transliterate(v100, v42);
        v8 = v68;
        v44 = v101;
        if ( v68 != 6 )
        {
          v46 = v105;
          v45 = v106;
          if ( (_DWORD)v8 == 5 )
            goto LABEL_38;
          goto LABEL_37;
        }
        v45 = v106;
      }
      v46 = v105;
      if ( (v44 & 2) == 0 )
      {
        v8 = 6;
        goto LABEL_38;
      }
      v46 = v105 + 1;
      v8 = 6;
      ++v105;
      ++*v97;
LABEL_37:
      if ( (unsigned int *)a4 == v46 )
        goto LABEL_38;
    }
    v46 = v105;
    v8 = 6;
LABEL_38:
    *v39 = (unsigned __int64)v46;
    v49 = v86;
    if ( v86 )
      goto LABEL_46;
LABEL_39:
    v50 = *(_DWORD *)(v42 + 16);
    ++*(_DWORD *)(v42 + 20);
    if ( (v50 & 1) != 0 )
    {
      v53 = v8;
      v63 = v42;
      v64 = v88;
      v65 = v39;
      v66 = *v9 + v103;
      *(_QWORD *)v42 = v45;
      *v9 = v66;
LABEL_72:
      if ( v64 )
        v67 = v53 == 7;
      else
        v67 = 0;
      if ( !v67 )
        return v53;
      v71 = *v65;
      v72 = a4 - *v65;
      if ( v72 <= 4 )
      {
        v73 = *(unsigned int **)(v63 + 32);
        v74 = 0;
        if ( v72 )
        {
          do
          {
            *((_BYTE *)v73 + v74 + 4) = *(_BYTE *)(v71 + v74);
            ++v74;
          }
          while ( v72 != v74 );
          v14 = v72;
        }
        v75 = *v73 & 0xFFFFFFF8;
        *v65 = a4;
        *v73 = v75 | v14;
        return v53;
      }
      goto LABEL_145;
    }
    if ( v43 >= v45 )
    {
      v51 = v8;
LABEL_43:
      if ( !v51 )
        goto LABEL_44;
      v64 = v88;
      v63 = v42;
      v65 = v39;
      v53 = v51;
      goto LABEL_72;
    }
    v104 = *(_BYTE **)v42;
    v51 = v91(v93, v95, &v104, v45, 0, v9, 0, v88);
    if ( v51 == 4 )
    {
      v51 = v8;
      if ( (_DWORD)v8 == 5 )
      {
LABEL_44:
        v38 = (unsigned int *)*v39;
        v43 = *(_BYTE **)v42;
        v41 = v103;
        v44 = *(_DWORD *)(v42 + 16);
        continue;
      }
      goto LABEL_43;
    }
    break;
  }
  v52 = (unsigned __int64)v104;
  if ( v104 == v45 )
    goto LABEL_43;
  v55 = 0;
  if ( v9 )
    v55 = *v9;
  if ( v55 + v103 == v41 )
  {
    *v39 -= 4 * (v45 - v104);
    goto LABEL_43;
  }
  v56 = *(_DWORD *)(v42 + 16);
  *v39 = (unsigned __int64)v38;
  v105 = v38;
  v106 = v43;
  if ( (unsigned int *)a4 == v38 )
  {
    if ( (_BYTE *)v52 != v43 )
      goto LABEL_91;
    goto LABEL_141;
  }
  v57 = v43;
  v8 = v52;
  v58 = v51;
  v59 = 4;
  while ( 1 )
  {
    v60 = v38 + 1;
    if ( a4 < (unsigned __int64)(v38 + 1) )
    {
LABEL_89:
      v69 = (unsigned int **)v39;
      v70 = v105;
      goto LABEL_90;
    }
    if ( v8 <= (unsigned __int64)v57 )
    {
      v76 = v104;
      *v39 = (unsigned __int64)v105;
      v51 = v58;
      if ( v76 != v57 )
        goto LABEL_91;
      goto LABEL_69;
    }
    v61 = *v38;
    if ( *v38 > 0x7F )
      break;
    v106 = v57 + 1;
    *v57 = v61;
    v57 = v106;
    v38 = ++v105;
LABEL_66:
    if ( (unsigned int *)a4 == v38 )
    {
      v62 = v104;
      *v39 = a4;
      v51 = v58;
      if ( v62 != v57 )
        goto LABEL_91;
      if ( v59 != 5 )
        goto LABEL_141;
      goto LABEL_69;
    }
  }
  if ( v61 >> 7 == 7168 )
  {
    ++v38;
    v105 = v60;
    goto LABEL_66;
  }
  if ( !v97 )
    goto LABEL_89;
  if ( (*(_DWORD *)(v42 + 16) & 8) == 0 )
  {
LABEL_107:
    if ( (v56 & 2) != 0 )
    {
      v38 = v105 + 1;
      v59 = 6;
      ++v105;
      ++*v97;
      goto LABEL_66;
    }
    v69 = (unsigned int **)v39;
    v70 = v105;
LABEL_90:
    *v69 = v70;
    if ( v104 != v57 )
      goto LABEL_91;
LABEL_141:
    _libc_assert_fail("nstatus == __GCONV_FULL_OUTPUT", "../iconv/skeleton.c", 595, "__gconv_transform_internal_ascii");
LABEL_142:
    _libc_assert_fail(
      "inend - inptr <= sizeof (state->__value.__wchb)",
      "../iconv/loop.c",
      414,
      "internal_ascii_loop_single");
LABEL_143:
    _libc_assert_fail("inend - inptr > (state->__count & ~7)", "../iconv/loop.c", 413, "internal_ascii_loop_single");
LABEL_144:
    _libc_assert_fail("inend != &bytebuf[MAX_NEEDED_INPUT]", "../iconv/loop.c", 403, "internal_ascii_loop_single");
LABEL_145:
    _libc_assert_fail(
      "cnt_after <= sizeof (data->__statep->__value.__wchb)",
      "../iconv/skeleton.c",
      647,
      "__gconv_transform_internal_ascii");
LABEL_146:
    vars30 = v8;
    vars38 = v9;
    _libc_assert_fail("outbufstart == NULL", "../iconv/skeleton.c", 350, "__gconv_transform_internal_ascii");
    goto LABEL_147;
  }
  v80 = _gconv_transliterate(v100, v42);
  v59 = v80;
  if ( v80 == 6 )
  {
    v57 = v106;
    goto LABEL_107;
  }
  v38 = v105;
  v57 = v106;
  if ( v80 != 5 )
    goto LABEL_66;
  v81 = v104;
  *v39 = (unsigned __int64)v105;
  v51 = v58;
  if ( v81 == v57 )
  {
LABEL_69:
    if ( v57 == v43 )
      --*(_DWORD *)(v42 + 20);
    goto LABEL_43;
  }
LABEL_91:
  _libc_assert_fail("outbuf == outerr", "../iconv/skeleton.c", 594, "__gconv_transform_internal_ascii");
  return 0;
}
