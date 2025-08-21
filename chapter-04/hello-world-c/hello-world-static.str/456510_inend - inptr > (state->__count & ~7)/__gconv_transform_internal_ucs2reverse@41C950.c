__int64 __fastcall _gconv_transform_internal_ucs2reverse(
        __int64 a1,
        unsigned __int64 a2,
        unsigned int **a3,
        unsigned int *a4,
        _WORD **a5,
        _QWORD *a6,
        unsigned int a7,
        __int64 a8)
{
  _WORD *v8; // x23
  unsigned __int64 v9; // x25
  __int64 v10; // x26
  unsigned int v11; // w27
  __int64 v12; // x13
  __int64 v13; // x15
  _WORD **v14; // x10
  int v15; // w11
  unsigned int v16; // w18
  unsigned __int64 v18; // x21
  __int64 v19; // x14
  unsigned __int64 v20; // x12
  _QWORD *v21; // x24
  unsigned int **v22; // x28
  _WORD **v23; // x0
  unsigned __int64 *v24; // x6
  int v25; // w0
  unsigned int *v26; // x2
  unsigned int *v27; // x22
  __int64 v28; // x3
  unsigned int *v29; // x1
  unsigned __int64 v30; // x19
  char v31; // w0
  unsigned __int64 v32; // x0
  unsigned __int64 v33; // x8
  bool v34; // cc
  __int64 v35; // x0
  int v36; // w1
  unsigned __int64 v37; // x9
  _QWORD *v38; // x27
  int v39; // w7
  _WORD *v40; // x3
  unsigned int *v41; // x1
  unsigned int *v42; // x5
  _WORD *v43; // x6
  unsigned int v44; // w2
  _QWORD *v45; // x0
  int v46; // w1
  unsigned int v47; // w0
  unsigned __int64 v48; // x10
  __int64 v50; // x2
  int v51; // w15
  _WORD *v52; // x3
  unsigned int v53; // w7
  int v54; // w16
  unsigned int *v55; // x2
  _WORD *v56; // x5
  unsigned int v57; // w0
  _WORD *v58; // x1
  __int64 v59; // x0
  unsigned int v60; // w7
  __int64 v61; // x0
  bool v62; // zf
  unsigned int v63; // w0
  _WORD *v64; // x0
  unsigned int *v65; // x3
  char *v66; // x1
  unsigned int *v67; // x4
  char *v68; // x0
  unsigned int v69; // w0
  _WORD *v70; // x1
  char *v71; // x0
  unsigned __int64 v72; // x1
  unsigned int *v73; // x0
  unsigned __int64 v74; // x1
  unsigned __int64 v75; // x0
  int v76; // w0
  _WORD *v77; // x1
  unsigned int v78; // w0
  signed int v79; // w0
  __int64 v80; // x1
  __int64 v81; // x26
  __int64 v82; // x0
  __int64 v83; // x1
  _QWORD *v84; // [xsp+0h] [xbp-80h]
  __int64 v85; // [xsp+0h] [xbp-80h]
  _WORD *v86; // [xsp+8h] [xbp-78h]
  int v87; // [xsp+8h] [xbp-78h]
  unsigned __int64 v88; // [xsp+8h] [xbp-78h]
  unsigned __int64 *v89; // [xsp+8h] [xbp-78h]
  unsigned int v90; // [xsp+14h] [xbp-6Ch]
  char v91; // [xsp+14h] [xbp-6Ch]
  unsigned __int64 *v92; // [xsp+18h] [xbp-68h]
  __int64 (__fastcall *v93)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD); // [xsp+18h] [xbp-68h]
  __int64 (__fastcall *v94)(__int64, __int64, unsigned __int64 *, _WORD *, _QWORD, _QWORD *, _QWORD, _QWORD); // [xsp+20h] [xbp-60h]
  __int64 v95; // [xsp+20h] [xbp-60h]
  __int64 v96; // [xsp+28h] [xbp-58h]
  __int64 v97; // [xsp+28h] [xbp-58h]
  __int64 v98; // [xsp+30h] [xbp-50h]
  unsigned __int64 v99; // [xsp+30h] [xbp-50h]
  _WORD **v100; // [xsp+38h] [xbp-48h]
  __int64 v101; // [xsp+40h] [xbp-40h]
  unsigned int v102; // [xsp+48h] [xbp-38h]
  int v103; // [xsp+48h] [xbp-38h]
  int v104; // [xsp+4Ch] [xbp-34h]
  unsigned __int64 v105; // [xsp+50h] [xbp-30h] BYREF
  unsigned __int64 v106; // [xsp+58h] [xbp-28h] BYREF
  unsigned int *v107; // [xsp+60h] [xbp-20h]
  _WORD *v108; // [xsp+68h] [xbp-18h]
  unsigned int v109; // [xsp+70h] [xbp-10h] BYREF
  _BYTE v110[4]; // [xsp+74h] [xbp-Ch] BYREF
  unsigned __int64 vars40; // [xsp+C0h] [xbp+40h]
  __int64 vars48; // [xsp+C8h] [xbp+48h]

  v12 = a1;
  v13 = a2 + 48;
  v14 = a5;
  v15 = *(_DWORD *)(a2 + 16);
  v16 = a7;
  v18 = a2;
  v19 = a1 + 104;
  v20 = 0;
  v21 = a6;
  v22 = a3;
  if ( (v15 & 1) == 0 )
  {
    v20 = *(_QWORD *)(a1 + 144);
    if ( *(_QWORD *)(a1 + 104) )
      v20 ^= _pointer_chk_guard_local;
  }
  if ( a7 )
  {
    if ( a5 )
      goto LABEL_157;
    **(_QWORD **)(a2 + 32) = 0;
    if ( (*(_DWORD *)(a2 + 16) & 1) == 0 )
      return ((__int64 (__fastcall *)(__int64, __int64, _QWORD, _QWORD, _QWORD, _QWORD *, _QWORD, __int64))v20)(
               a1 + 104,
               v13,
               0,
               0,
               0,
               a6,
               a7,
               a8);
    return 0;
  }
  if ( a5 )
    v23 = a5;
  else
    v23 = (_WORD **)a2;
  v24 = &v105;
  v9 = *(_QWORD *)(a2 + 8);
  if ( !a6 )
    v24 = 0;
  v8 = *v23;
  v105 = 0;
  if ( (_DWORD)a8 )
  {
    v10 = *(_QWORD *)(a2 + 32);
    v25 = *(_DWORD *)v10 & 7;
    if ( v25 )
    {
      if ( a5 )
        goto LABEL_159;
      v26 = *a3;
      v107 = *v22;
      v108 = v8;
      if ( v25 > 4 )
      {
        _libc_assert_fail(
          "(state->__count & 7) <= sizeof (state->__value)",
          "../iconv/loop.c",
          309,
          "internal_ucs2reverse_loop_single");
        vars40 = v9;
        vars48 = v10;
      }
      v27 = &v109;
      v28 = v10 + 4;
      v29 = &v109;
      v30 = 0;
      do
      {
        v31 = *(_BYTE *)(v28 + v30++);
        *(_BYTE *)v29 = v31;
        v29 = (unsigned int *)((char *)v29 + 1);
      }
      while ( v30 < (*(_DWORD *)v10 & 7u) );
      if ( a4 < (unsigned int *)((char *)v26 - v30 + 4) )
      {
        *v22 = a4;
        v71 = (char *)((char *)a4 - (char *)v26 + v30);
        if ( (unsigned __int64)v71 > 4 )
        {
          _libc_assert_fail(
            "inlen_after <= sizeof (state->__value.__wchb)",
            "../iconv/loop.c",
            338,
            "internal_ucs2reverse_loop_single");
          goto LABEL_156;
        }
        if ( v30 < (unsigned __int64)v71 )
        {
          do
          {
            v26 = (unsigned int *)((char *)v26 + 1);
            v107 = v26;
            *(_BYTE *)(v28 + v30++) = *((_BYTE *)v26 - 1);
          }
          while ( v71 != (char *)v30 );
        }
        return 7;
      }
      v32 = (unsigned __int64)v26 + 1;
      if ( v9 < (unsigned __int64)(v8 + 1) )
        return 5;
      do
      {
        v33 = v30++;
        v107 = (unsigned int *)v32;
        v34 = v30 <= 3 && (unsigned __int64)a4 > v32;
        v110[v30 - 5] = *(_BYTE *)(v32++ - 1);
      }
      while ( v34 );
      v107 = &v109;
      if ( v109 > 0xFFFF )
      {
        if ( v109 >> 7 == 7168 )
        {
          v107 = (unsigned int *)v110;
          goto LABEL_25;
        }
        if ( v24 )
        {
          if ( (v15 & 8) != 0 )
            goto LABEL_141;
          if ( (v15 & 2) != 0 )
          {
            v72 = *v24;
            v73 = (unsigned int *)v110;
            v107 = (unsigned int *)v110;
            *v24 = v72 + 1;
            goto LABEL_126;
          }
        }
      }
      else
      {
        if ( v109 - 55296 > 0x7FF )
        {
          *v8 = __rev16(v109);
          v107 = (unsigned int *)v110;
          v108 = v8 + 1;
LABEL_25:
          v35 = 4;
          goto LABEL_26;
        }
        if ( v24 && (v15 & 2) != 0 )
        {
          v75 = *v24;
          v107 = (unsigned int *)v110;
          *v24 = v75 + 1;
          goto LABEL_25;
        }
      }
      return 6;
    }
  }
  v27 = *a3;
  v37 = 0;
LABEL_29:
  while ( 2 )
  {
    v38 = v21;
    v21 = (_QWORD *)v18;
    v18 = (unsigned __int64)v8;
    v8 = v22;
    v22 = (unsigned int **)v9;
    v9 = v37;
    v90 = a8;
    v39 = v15;
    v10 = 0xFFFF;
    v84 = v14;
    v92 = v24;
    v94 = (__int64 (__fastcall *)(__int64, __int64, unsigned __int64 *, _WORD *, _QWORD, _QWORD *, _QWORD, _QWORD))v20;
    v96 = v19;
    v98 = v13;
    v101 = v12;
    while ( 2 )
    {
      if ( v38 )
        v9 += *v38;
      v107 = v27;
      v108 = (_WORD *)v18;
      v40 = (_WORD *)v18;
      if ( a4 == v27 )
      {
        v41 = a4;
        v30 = 4;
LABEL_40:
        v45 = v84;
        *(_QWORD *)v8 = v41;
        if ( !v84 )
          goto LABEL_41;
LABEL_48:
        v11 = v30;
        *v45 = v40;
        return v11;
      }
      v41 = v27;
      v30 = 4;
      while ( 1 )
      {
        v42 = v41 + 1;
        if ( a4 < v41 + 1 )
          break;
        v43 = v40 + 1;
        if ( v22 < (unsigned int **)(v40 + 1) )
        {
          v41 = v107;
          v30 = 5;
          goto LABEL_40;
        }
        v44 = *v41;
        if ( *v41 > 0xFFFF )
        {
          if ( v44 >> 7 == 7168 )
          {
            ++v41;
            v107 = v42;
            goto LABEL_39;
          }
          if ( !v92 )
            goto LABEL_61;
          if ( (v21[2] & 8) != 0 )
          {
            v87 = v39;
            v63 = _gconv_transliterate(v101, v21);
            v30 = v63;
            v39 = v87;
            if ( v63 != 6 )
            {
              v41 = v107;
              v40 = v108;
              if ( v63 == 5 )
                goto LABEL_40;
              goto LABEL_39;
            }
            v40 = v108;
          }
          v41 = v107;
          if ( (v39 & 2) == 0 )
          {
            v30 = 6;
            goto LABEL_40;
          }
          v41 = v107 + 1;
          v30 = 6;
          ++v107;
          ++*v92;
        }
        else if ( v44 - 55296 <= 0x7FF )
        {
          if ( !v92 || (v39 & 2) == 0 )
          {
LABEL_61:
            v41 = v107;
            v30 = 6;
            goto LABEL_40;
          }
          ++v41;
          v107 = v42;
          ++*v92;
        }
        else
        {
          ++v41;
          *v40++ = __rev16(v44);
          v107 = v42;
          v108 = v43;
        }
LABEL_39:
        if ( a4 == v41 )
          goto LABEL_40;
      }
      v45 = v84;
      v30 = 7;
      *(_QWORD *)v8 = v107;
      if ( v84 )
        goto LABEL_48;
LABEL_41:
      v46 = *((_DWORD *)v21 + 4);
      ++*((_DWORD *)v21 + 5);
      if ( (v46 & 1) != 0 )
      {
        v18 = (unsigned __int64)v21;
        v21 = v38;
        v22 = (unsigned int **)v8;
        v59 = *v38;
        v11 = v30;
        v60 = v90;
        v61 = v59 + v105;
        *(_QWORD *)v18 = v40;
        *v21 = v61;
        goto LABEL_79;
      }
      if ( v18 >= (unsigned __int64)v40 )
      {
        v47 = v30;
LABEL_45:
        if ( !v47 )
        {
LABEL_46:
          v27 = *(unsigned int **)v8;
          v18 = *v21;
          v9 = v105;
          v39 = *((_DWORD *)v21 + 4);
          continue;
        }
        v60 = v90;
        v18 = (unsigned __int64)v21;
        v22 = (unsigned int **)v8;
        v11 = v47;
LABEL_79:
        if ( v60 )
          v62 = v11 == 7;
        else
          v62 = 0;
        if ( !v62 )
          return v11;
        v65 = *v22;
        v66 = (char *)((char *)a4 - (char *)*v22);
        if ( (unsigned __int64)v66 <= 4 )
        {
          v67 = *(unsigned int **)(v18 + 32);
          v68 = 0;
          if ( v66 )
          {
            do
            {
              v68[(_QWORD)(v67 + 1)] = v68[(_QWORD)v65];
              ++v68;
            }
            while ( v66 != v68 );
            v16 = (unsigned int)v66;
          }
          v69 = *v67 & 0xFFFFFFF8;
          *v22 = a4;
          *v67 = v69 | v16;
          return v11;
        }
LABEL_156:
        _libc_assert_fail(
          "cnt_after <= sizeof (data->__statep->__value.__wchb)",
          "../iconv/skeleton.c",
          647,
          "__gconv_transform_internal_ucs2reverse");
LABEL_157:
        vars40 = v9;
        vars48 = v10;
        _libc_assert_fail("outbufstart == NULL", "../iconv/skeleton.c", 350, "__gconv_transform_internal_ucs2reverse");
LABEL_158:
        _libc_assert_fail(
          "inptr - bytebuf > (state->__count & 7)",
          "../iconv/loop.c",
          385,
          "internal_ucs2reverse_loop_single");
LABEL_159:
        _libc_assert_fail("outbufstart == NULL", "../iconv/skeleton.c", 467, "__gconv_transform_internal_ucs2reverse");
LABEL_160:
        _libc_assert_fail(
          "inend != &bytebuf[MAX_NEEDED_INPUT]",
          "../iconv/loop.c",
          403,
          "internal_ucs2reverse_loop_single");
LABEL_161:
        if ( v11 )
          return v11;
        v27 = *v22;
        v37 = v105;
        v15 = *(_DWORD *)(v18 + 16);
        goto LABEL_29;
      }
      break;
    }
    v106 = *v21;
    v86 = v40;
    v47 = v94(v96, v98, &v106, v40, 0, v38, 0, v90);
    if ( v47 == 4 )
    {
      v47 = v30;
      if ( (_DWORD)v30 == 5 )
        goto LABEL_46;
      goto LABEL_45;
    }
    v48 = v106;
    if ( (_WORD *)v106 == v86 )
      goto LABEL_45;
    v50 = 0;
    if ( v38 )
      v50 = *v38;
    if ( v50 + v105 == v9 )
    {
      *(_QWORD *)v8 -= 2 * ((_QWORD)v86 - v106);
      goto LABEL_45;
    }
    v51 = *((_DWORD *)v21 + 4);
    *(_QWORD *)v8 = v27;
    v107 = v27;
    v108 = (_WORD *)v18;
    if ( a4 == v27 )
    {
      if ( v48 == v18 )
        goto LABEL_140;
LABEL_98:
      _libc_assert_fail("outbuf == outerr", "../iconv/skeleton.c", 594, "__gconv_transform_internal_ucs2reverse");
      return 0;
    }
    v52 = (_WORD *)v18;
    v53 = v47;
    v54 = 4;
    v9 = 0xFFFF;
    v30 = 4294912000LL;
    do
    {
      v55 = v27 + 1;
      if ( a4 < v27 + 1 )
      {
LABEL_96:
        v27 = v107;
        v22 = (unsigned int **)v8;
LABEL_97:
        v64 = (_WORD *)v106;
        *v22 = v27;
        if ( v64 == v52 )
          goto LABEL_140;
        goto LABEL_98;
      }
      v56 = v52 + 1;
      if ( v48 < (unsigned __int64)(v52 + 1) )
      {
        v70 = (_WORD *)v106;
        *(_QWORD *)v8 = v107;
        v47 = v53;
        if ( v70 != v52 )
          goto LABEL_98;
        goto LABEL_76;
      }
      v57 = *v27;
      if ( *v27 <= 0xFFFF )
      {
        if ( v57 - 55296 <= 0x7FF )
        {
          if ( !v92 || (v51 & 2) == 0 )
            goto LABEL_96;
          ++v27;
          v107 = v55;
          ++*v92;
        }
        else
        {
          ++v27;
          *v52++ = __rev16(v57);
          v107 = v55;
          v108 = v56;
        }
        continue;
      }
      if ( v57 >> 7 == 7168 )
      {
        ++v27;
        v107 = v55;
        continue;
      }
      if ( !v92 )
        goto LABEL_96;
      if ( (v21[2] & 8) != 0 )
      {
        v88 = v48;
        v102 = v53;
        v104 = v51;
        v76 = _gconv_transliterate(v101, v21);
        v54 = v76;
        v48 = v88;
        v53 = v102;
        v51 = v104;
        if ( v76 != 6 )
        {
          v27 = v107;
          v52 = v108;
          if ( v76 == 5 )
          {
            v77 = (_WORD *)v106;
            *(_QWORD *)v8 = v107;
            v47 = v102;
            if ( v77 != v52 )
              goto LABEL_98;
            goto LABEL_76;
          }
          continue;
        }
        v52 = v108;
      }
      if ( (v51 & 2) == 0 )
      {
        v22 = (unsigned int **)v8;
        v27 = v107;
        goto LABEL_97;
      }
      v27 = v107 + 1;
      v54 = 6;
      ++v107;
      ++*v92;
    }
    while ( a4 != v27 );
    v58 = (_WORD *)v106;
    *(_QWORD *)v8 = a4;
    v47 = v53;
    if ( v58 != v52 )
      goto LABEL_98;
    if ( v54 == 5 )
    {
LABEL_76:
      if ( v52 == (_WORD *)v18 )
        --*((_DWORD *)v21 + 5);
      goto LABEL_45;
    }
LABEL_140:
    _libc_assert_fail(
      "nstatus == __GCONV_FULL_OUTPUT",
      "../iconv/skeleton.c",
      595,
      "__gconv_transform_internal_ucs2reverse");
LABEL_141:
    v85 = v12;
    v89 = v24;
    v91 = v15;
    v93 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))v20;
    v95 = v19;
    v97 = v13;
    v99 = v33;
    v100 = v14;
    v103 = a8;
    v78 = _gconv_transliterate(v12, v18);
    v12 = v85;
    v24 = v89;
    v11 = v78;
    v20 = (unsigned __int64)v93;
    v19 = v95;
    v62 = v78 == 6;
    v13 = v97;
    v14 = v100;
    v73 = v107;
    LODWORD(a8) = v103;
    if ( v62 )
    {
      if ( (v91 & 2) == 0 )
      {
        if ( v107 == v27 )
          return 6;
        v35 = (char *)v107 - (char *)v27;
LABEL_26:
        v36 = *(_DWORD *)v10;
        if ( (*(_DWORD *)v10 & 7LL) < v35 )
        {
          v15 = *(_DWORD *)(v18 + 16);
          v27 = (unsigned int *)((char *)*v22 + v35 - (v36 & 7));
          *v22 = v27;
          v37 = v105;
          v8 = v108;
          *(_DWORD *)v10 = v36 & 0xFFFFFFF8;
          continue;
        }
        goto LABEL_158;
      }
      v74 = *v89;
      v73 = ++v107;
      *v89 = v74 + 1;
      if ( v73 == v27 )
        return 6;
LABEL_126:
      v35 = (char *)v73 - (char *)v27;
      goto LABEL_26;
    }
    break;
  }
  if ( v11 == 5 )
  {
    if ( v107 == v27 )
      return 5;
    goto LABEL_126;
  }
  if ( v107 != v27 )
    goto LABEL_126;
  if ( v11 != 7 )
    goto LABEL_161;
  if ( v30 == 4 )
    goto LABEL_160;
  v79 = *(_DWORD *)v10 & 0xFFFFFFF8;
  *v22 = (unsigned int *)((char *)*v22 + v30 - (*(_DWORD *)v10 & 7LL));
  if ( (__int64)v30 > v79 )
  {
    if ( v30 <= 4 )
    {
      v80 = 1;
      *(_DWORD *)v10 = v79 | v30;
      v81 = v10 + 3;
      do
      {
        *(_BYTE *)(v81 + v80) = *((_BYTE *)v27 + v80 - 1);
        ++v80;
      }
      while ( v99 + 2 != v80 );
      return 7;
    }
    _libc_assert_fail(
      "inend - inptr <= sizeof (state->__value.__wchb)",
      "../iconv/loop.c",
      414,
      "internal_ucs2reverse_loop_single");
  }
  v82 = _libc_assert_fail(
          "inend - inptr > (state->__count & ~7)",
          "../iconv/loop.c",
          413,
          "internal_ucs2reverse_loop_single");
  return _gconv_transliterate(v82, v83);
}
