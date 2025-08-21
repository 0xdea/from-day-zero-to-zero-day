__int64 __fastcall _gconv_transform_internal_ucs2(
        __int64 a1,
        unsigned __int64 a2,
        unsigned int *a3,
        unsigned int *a4,
        _WORD **a5,
        _QWORD *a6,
        unsigned int a7,
        __int64 a8)
{
  unsigned int *v8; // x22
  unsigned __int64 v9; // x25
  unsigned int v10; // w26
  __int64 v11; // x27
  __int64 v12; // x13
  __int64 v13; // x15
  _WORD **v14; // x10
  int v15; // w11
  unsigned int v16; // w18
  unsigned __int64 v18; // x21
  __int64 v19; // x14
  unsigned __int64 v20; // x12
  _QWORD *v21; // x24
  unsigned int *v22; // x28
  unsigned __int64 *v23; // x6
  unsigned int **v24; // x0
  unsigned int *v25; // x23
  int v26; // w0
  __int64 v27; // x2
  __int64 v28; // x3
  unsigned int *v29; // x1
  unsigned __int64 v30; // x19
  char v31; // w0
  unsigned __int64 v32; // x0
  unsigned __int64 v33; // x8
  bool v34; // cc
  __int64 i; // x0
  int v36; // w1
  unsigned int *v37; // x22
  unsigned __int64 v38; // x9
  _QWORD *v39; // x26
  int v40; // w7
  _WORD *v41; // x3
  unsigned int *v42; // x0
  unsigned int *v43; // x2
  unsigned int *v44; // x5
  unsigned int v45; // w6
  _QWORD *v46; // x0
  int v47; // w1
  unsigned int v48; // w0
  unsigned __int64 v49; // x10
  __int64 v51; // x2
  int v52; // w15
  _WORD *v53; // x2
  unsigned int v54; // w7
  int v55; // w16
  unsigned int *v56; // x0
  unsigned int *v57; // x3
  unsigned int v58; // w5
  _WORD *v59; // x1
  __int64 v60; // x0
  unsigned int v61; // w7
  __int64 v62; // x0
  bool v63; // zf
  unsigned int *v64; // x3
  char *v65; // x1
  unsigned int *v66; // x4
  char *v67; // x0
  unsigned int v68; // w0
  unsigned int v69; // w0
  _WORD *v70; // x0
  _WORD *v71; // x1
  char *v72; // x0
  unsigned int *v73; // x2
  unsigned __int64 v74; // x1
  unsigned int *v75; // x0
  unsigned __int64 v76; // x0
  int v77; // w0
  _WORD *v78; // x1
  unsigned int v79; // w0
  signed int v80; // w0
  __int64 v81; // x1
  __int64 v82; // x27
  unsigned __int64 v83; // x1
  __int64 v84; // x0
  _QWORD *v85; // [xsp+0h] [xbp-80h]
  __int64 v86; // [xsp+0h] [xbp-80h]
  _WORD *v87; // [xsp+8h] [xbp-78h]
  int v88; // [xsp+8h] [xbp-78h]
  unsigned __int64 v89; // [xsp+8h] [xbp-78h]
  unsigned __int64 *v90; // [xsp+8h] [xbp-78h]
  unsigned int v91; // [xsp+10h] [xbp-70h]
  __int64 (__fastcall *v92)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD); // [xsp+10h] [xbp-70h]
  unsigned __int64 *v93; // [xsp+18h] [xbp-68h]
  __int64 v94; // [xsp+18h] [xbp-68h]
  __int64 (__fastcall *v95)(__int64, __int64, unsigned __int64 *, _WORD *, _QWORD, _QWORD *, _QWORD, _QWORD); // [xsp+20h] [xbp-60h]
  __int64 v96; // [xsp+20h] [xbp-60h]
  __int64 v97; // [xsp+28h] [xbp-58h]
  char v98; // [xsp+28h] [xbp-58h]
  __int64 v99; // [xsp+30h] [xbp-50h]
  unsigned __int64 v100; // [xsp+30h] [xbp-50h]
  _WORD **v101; // [xsp+38h] [xbp-48h]
  __int64 v102; // [xsp+40h] [xbp-40h]
  unsigned int v103; // [xsp+48h] [xbp-38h]
  int v104; // [xsp+48h] [xbp-38h]
  int v105; // [xsp+4Ch] [xbp-34h]
  unsigned __int64 v106; // [xsp+50h] [xbp-30h] BYREF
  unsigned __int64 v107; // [xsp+58h] [xbp-28h] BYREF
  unsigned int *v108; // [xsp+60h] [xbp-20h]
  unsigned int *v109; // [xsp+68h] [xbp-18h]
  unsigned int v110; // [xsp+70h] [xbp-10h] BYREF
  _BYTE v111[4]; // [xsp+74h] [xbp-Ch] BYREF

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
    {
LABEL_153:
      _libc_assert_fail("outbufstart == NULL", "../iconv/skeleton.c", 350, "__gconv_transform_internal_ucs2");
      goto LABEL_154;
    }
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
  v23 = &v106;
  if ( a5 )
    v24 = (unsigned int **)a5;
  else
    v24 = (unsigned int **)a2;
  v9 = *(_QWORD *)(a2 + 8);
  if ( !a6 )
    v23 = 0;
  v25 = *v24;
  v106 = 0;
  if ( (_DWORD)a8 )
  {
    v11 = *(_QWORD *)(a2 + 32);
    v26 = *(_DWORD *)v11 & 7;
    if ( v26 )
    {
      if ( a5 )
        _libc_assert_fail("outbufstart == NULL", "../iconv/skeleton.c", 467, "__gconv_transform_internal_ucs2");
      v27 = *(_QWORD *)a3;
      v108 = *(unsigned int **)v22;
      v109 = v25;
      if ( v26 > 4 )
      {
        _libc_assert_fail(
          "(state->__count & 7) <= sizeof (state->__value)",
          "../iconv/loop.c",
          309,
          "internal_ucs2_loop_single");
        goto LABEL_157;
      }
      v8 = &v110;
      v28 = v11 + 4;
      v29 = &v110;
      v30 = 0;
      do
      {
        v31 = *(_BYTE *)(v28 + v30++);
        *(_BYTE *)v29 = v31;
        v29 = (unsigned int *)((char *)v29 + 1);
      }
      while ( v30 < (*(_DWORD *)v11 & 7u) );
      if ( (unsigned __int64)a4 >= v27 - v30 + 4 )
      {
        v32 = v27 + 1;
        if ( v9 >= (unsigned __int64)v25 + 2 )
        {
          do
          {
            v33 = v30++;
            v108 = (unsigned int *)v32;
            v34 = v30 <= 3 && (unsigned __int64)a4 > v32;
            v111[v30 - 5] = *(_BYTE *)(v32++ - 1);
          }
          while ( v34 );
          v108 = &v110;
          if ( v110 > 0xFFFF )
          {
            if ( v110 >> 7 != 7168 )
            {
              if ( v23 )
              {
                if ( (v15 & 8) != 0 )
                  goto LABEL_140;
                if ( (v15 & 2) != 0 )
                {
                  v74 = *v23;
                  v75 = (unsigned int *)v111;
                  v108 = (unsigned int *)v111;
                  *v23 = v74 + 1;
                  goto LABEL_124;
                }
              }
              return 6;
            }
            v108 = (unsigned int *)v111;
          }
          else if ( v110 - 55296 <= 0x7FF )
          {
            if ( !v23 || (v15 & 2) == 0 )
              return 6;
            v76 = *v23;
            v108 = (unsigned int *)v111;
            *v23 = v76 + 1;
          }
          else
          {
            *(_WORD *)v25 = v110;
            v108 = (unsigned int *)v111;
            v109 = (unsigned int *)((char *)v25 + 2);
          }
          for ( i = 4; ; i = (char *)v75 - (char *)v8 )
          {
            v36 = *(_DWORD *)v11;
            if ( (*(_DWORD *)v11 & 7LL) < i )
            {
              v15 = *(_DWORD *)(v18 + 16);
              v37 = (unsigned int *)(*(_QWORD *)v22 + i - (v36 & 7));
              *(_QWORD *)v22 = v37;
              v38 = v106;
              v25 = v109;
              *(_DWORD *)v11 = v36 & 0xFFFFFFF8;
              goto LABEL_29;
            }
LABEL_154:
            v75 = (unsigned int *)_libc_assert_fail(
                                    "inptr - bytebuf > (state->__count & 7)",
                                    "../iconv/loop.c",
                                    385,
                                    "internal_ucs2_loop_single");
LABEL_155:
            v83 = *v23;
            v108 = ++v75;
            *v23 = v83 + 1;
LABEL_126:
            if ( v75 == v8 )
              break;
LABEL_124:
            ;
          }
          return 6;
        }
        return 5;
      }
      *(_QWORD *)v22 = a4;
      v72 = (char *)a4 + v30 - v27;
      if ( (unsigned __int64)v72 <= 4 )
      {
        v73 = (unsigned int *)(v27 + 1);
        if ( v30 < (unsigned __int64)v72 )
        {
          do
          {
            v108 = v73;
            v73 = (unsigned int *)((char *)v73 + 1);
            *(_BYTE *)(v28 + v30++) = *((_BYTE *)v73 - 2);
          }
          while ( v72 != (char *)v30 );
        }
        return 7;
      }
      _libc_assert_fail(
        "inlen_after <= sizeof (state->__value.__wchb)",
        "../iconv/loop.c",
        338,
        "internal_ucs2_loop_single");
      goto LABEL_152;
    }
  }
  v37 = *(unsigned int **)a3;
  v38 = 0;
LABEL_29:
  while ( 2 )
  {
    v39 = v21;
    v21 = (_QWORD *)v18;
    v18 = (unsigned __int64)v25;
    v25 = v22;
    v22 = v37;
    v8 = (unsigned int *)v9;
    v9 = v38;
    v91 = a8;
    v40 = v15;
    v11 = 0xFFFF;
    v85 = v14;
    v93 = v23;
    v95 = (__int64 (__fastcall *)(__int64, __int64, unsigned __int64 *, _WORD *, _QWORD, _QWORD *, _QWORD, _QWORD))v20;
    v97 = v19;
    v99 = v13;
    v102 = v12;
    while ( 1 )
    {
      if ( v39 )
        v9 += *v39;
      v108 = v22;
      v109 = (unsigned int *)v18;
      v41 = (_WORD *)v18;
      v42 = v22;
      v30 = 4;
      while ( a4 != v42 )
      {
        v43 = v42 + 1;
        if ( a4 < v42 + 1 )
        {
          *(_QWORD *)v25 = v108;
          v46 = v85;
          v30 = 7;
          if ( v85 )
            goto LABEL_47;
          goto LABEL_40;
        }
        v44 = (unsigned int *)(v41 + 1);
        if ( v8 < (unsigned int *)(v41 + 1) )
        {
          v42 = v108;
          v30 = 5;
          break;
        }
        v45 = *v42;
        if ( *v42 > 0xFFFF )
        {
          if ( v45 >> 7 == 7168 )
          {
            ++v42;
            v108 = v43;
            continue;
          }
          if ( !v93 )
            goto LABEL_60;
          if ( (v21[2] & 8) != 0 )
          {
            v88 = v40;
            v69 = _gconv_transliterate(v102, v21);
            v30 = v69;
            v40 = v88;
            if ( v69 != 6 )
            {
              v42 = v108;
              v41 = v109;
              if ( (_DWORD)v30 == 5 )
                break;
              continue;
            }
            v41 = v109;
          }
          v42 = v108;
          if ( (v40 & 2) == 0 )
          {
            v30 = 6;
            break;
          }
          v42 = v108 + 1;
          v30 = 6;
          ++v108;
          ++*v93;
        }
        else if ( v45 - 55296 <= 0x7FF )
        {
          if ( !v93 || (v40 & 2) == 0 )
          {
LABEL_60:
            v42 = v108;
            v30 = 6;
            break;
          }
          ++v42;
          v30 = 6;
          v108 = v43;
          ++*v93;
        }
        else
        {
          ++v42;
          *v41++ = v45;
          v108 = v43;
          v109 = v44;
        }
      }
      *(_QWORD *)v25 = v42;
      v46 = v85;
      if ( v85 )
      {
LABEL_47:
        v10 = v30;
        *v46 = v41;
        return v10;
      }
LABEL_40:
      v47 = *((_DWORD *)v21 + 4);
      ++*((_DWORD *)v21 + 5);
      if ( (v47 & 1) != 0 )
      {
        v18 = (unsigned __int64)v21;
        v21 = v39;
        v22 = v25;
        v60 = *v39;
        v10 = v30;
        v61 = v91;
        v62 = v60 + v106;
        *(_QWORD *)v18 = v41;
        *v21 = v62;
        goto LABEL_78;
      }
      if ( v18 >= (unsigned __int64)v41 )
      {
        v48 = v30;
        goto LABEL_44;
      }
      v107 = *v21;
      v87 = v41;
      v48 = v95(v97, v99, &v107, v41, 0, v39, 0, v91);
      if ( v48 == 4 )
      {
        v48 = v30;
        if ( (_DWORD)v30 == 5 )
          goto LABEL_45;
        goto LABEL_44;
      }
      v49 = v107;
      if ( (_WORD *)v107 != v87 )
        break;
LABEL_44:
      if ( v48 )
      {
        v61 = v91;
        v18 = (unsigned __int64)v21;
        v22 = v25;
        v10 = v48;
LABEL_78:
        if ( v61 )
          v63 = v10 == 7;
        else
          v63 = 0;
        if ( v63 )
        {
          v64 = *(unsigned int **)v22;
          v65 = (char *)a4 - *(_QWORD *)v22;
          if ( (unsigned __int64)v65 > 4 )
          {
LABEL_152:
            _libc_assert_fail(
              "cnt_after <= sizeof (data->__statep->__value.__wchb)",
              "../iconv/skeleton.c",
              647,
              "__gconv_transform_internal_ucs2");
            goto LABEL_153;
          }
          v66 = *(unsigned int **)(v18 + 32);
          v67 = 0;
          if ( v65 )
          {
            do
            {
              v67[(_QWORD)(v66 + 1)] = v67[(_QWORD)v64];
              ++v67;
            }
            while ( v65 != v67 );
            v16 = (unsigned int)v65;
          }
          v68 = *v66;
          *(_QWORD *)v22 = a4;
          *v66 = v68 & 0xFFFFFFF8 | v16;
        }
        return v10;
      }
LABEL_45:
      v22 = *(unsigned int **)v25;
      v18 = *v21;
      v9 = v106;
      v40 = *((_DWORD *)v21 + 4);
    }
    v51 = 0;
    if ( v39 )
      v51 = *v39;
    if ( v51 + v106 == v9 )
    {
      *(_QWORD *)v25 -= 2 * ((_QWORD)v87 - v107);
      goto LABEL_44;
    }
    v52 = *((_DWORD *)v21 + 4);
    *(_QWORD *)v25 = v22;
    v108 = v22;
    v109 = (unsigned int *)v18;
    if ( v22 == a4 )
    {
      if ( v49 == v18 )
        goto LABEL_139;
LABEL_101:
      _libc_assert_fail("outbuf == outerr", "../iconv/skeleton.c", 594, "__gconv_transform_internal_ucs2");
      return 0;
    }
    v53 = (_WORD *)v18;
    v54 = v48;
    v55 = 4;
    v9 = 0xFFFF;
    v30 = 4294912000LL;
    do
    {
      v56 = v22 + 1;
      if ( a4 < v22 + 1 )
      {
LABEL_99:
        v8 = v108;
        v22 = v25;
LABEL_100:
        v70 = (_WORD *)v107;
        *(_QWORD *)v22 = v8;
        if ( v70 == v53 )
          goto LABEL_139;
        goto LABEL_101;
      }
      v57 = (unsigned int *)(v53 + 1);
      if ( v49 < (unsigned __int64)(v53 + 1) )
      {
        v71 = (_WORD *)v107;
        *(_QWORD *)v25 = v108;
        v48 = v54;
        if ( v71 != v53 )
          goto LABEL_101;
        goto LABEL_75;
      }
      v58 = *v22;
      if ( *v22 <= 0xFFFF )
      {
        if ( v58 - 55296 <= 0x7FF )
        {
          if ( !v93 || (v52 & 2) == 0 )
            goto LABEL_99;
          ++v22;
          v55 = 6;
          v108 = v56;
          ++*v93;
        }
        else
        {
          ++v22;
          *v53++ = v58;
          v108 = v56;
          v109 = v57;
        }
        continue;
      }
      if ( v58 >> 7 == 7168 )
      {
        ++v22;
        v108 = v56;
        continue;
      }
      if ( !v93 )
        goto LABEL_99;
      if ( (v21[2] & 8) != 0 )
      {
        v89 = v49;
        v103 = v54;
        v105 = v52;
        v77 = _gconv_transliterate(v102, v21);
        v55 = v77;
        v49 = v89;
        v54 = v103;
        v52 = v105;
        if ( v77 != 6 )
        {
          v22 = v108;
          v53 = v109;
          if ( v77 == 5 )
          {
            v78 = (_WORD *)v107;
            *(_QWORD *)v25 = v108;
            v48 = v103;
            if ( v78 != v53 )
              goto LABEL_101;
            goto LABEL_75;
          }
          continue;
        }
        v53 = v109;
      }
      if ( (v52 & 2) == 0 )
      {
        v22 = v25;
        v8 = v108;
        goto LABEL_100;
      }
      v22 = v108 + 1;
      v55 = 6;
      ++v108;
      ++*v93;
    }
    while ( a4 != v22 );
    v59 = (_WORD *)v107;
    *(_QWORD *)v25 = a4;
    v48 = v54;
    if ( v59 != v53 )
      goto LABEL_101;
    if ( v55 == 5 )
    {
LABEL_75:
      if ( v53 == (_WORD *)v18 )
        --*((_DWORD *)v21 + 5);
      goto LABEL_44;
    }
LABEL_139:
    _libc_assert_fail("nstatus == __GCONV_FULL_OUTPUT", "../iconv/skeleton.c", 595, "__gconv_transform_internal_ucs2");
LABEL_140:
    v86 = v12;
    v90 = v23;
    v92 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))v20;
    v94 = v19;
    v96 = v13;
    v98 = v15;
    v100 = v33;
    v101 = v14;
    v104 = a8;
    v79 = _gconv_transliterate(v12, v18);
    v12 = v86;
    v23 = v90;
    v10 = v79;
    v20 = (unsigned __int64)v92;
    v19 = v94;
    v63 = v79 == 6;
    v13 = v96;
    v14 = v101;
    v75 = v108;
    LODWORD(a8) = v104;
    if ( v63 )
    {
      if ( (v98 & 2) != 0 )
        goto LABEL_155;
      goto LABEL_126;
    }
    if ( v10 == 5 )
    {
      if ( v108 != v8 )
        goto LABEL_124;
      return 5;
    }
    if ( v108 != v8 )
      goto LABEL_124;
    if ( v10 != 7 )
      goto LABEL_158;
    if ( v30 == 4 )
    {
LABEL_157:
      _libc_assert_fail("inend != &bytebuf[MAX_NEEDED_INPUT]", "../iconv/loop.c", 403, "internal_ucs2_loop_single");
LABEL_158:
      if ( v10 )
        return v10;
      v37 = *(unsigned int **)v22;
      v38 = v106;
      v15 = *(_DWORD *)(v18 + 16);
      continue;
    }
    break;
  }
  v80 = *(_DWORD *)v11 & 0xFFFFFFF8;
  *(_QWORD *)v22 += v30 - (*(_DWORD *)v11 & 7LL);
  if ( (__int64)v30 > v80 )
  {
    if ( v30 <= 4 )
    {
      v81 = 1;
      *(_DWORD *)v11 = v80 | v30;
      v82 = v11 + 3;
      do
      {
        *(_BYTE *)(v82 + v81) = *((_BYTE *)v8 + v81 - 1);
        ++v81;
      }
      while ( v81 != v100 + 2 );
      return 7;
    }
    _libc_assert_fail(
      "inend - inptr <= sizeof (state->__value.__wchb)",
      "../iconv/loop.c",
      414,
      "internal_ucs2_loop_single");
  }
  v84 = _libc_assert_fail("inend - inptr > (state->__count & ~7)", "../iconv/loop.c", 413, "internal_ucs2_loop_single");
  return _gconv_transform_ucs2reverse_internal(v84);
}
