__int64 __fastcall _gconv_transform_internal_utf8(
        __int64 a1,
        unsigned __int64 **a2,
        unsigned __int64 *a3,
        unsigned __int64 a4,
        unsigned __int64 **a5,
        _QWORD *a6,
        unsigned int a7,
        __int64 a8)
{
  __int64 v8; // x23
  __int64 v9; // x24
  __int64 v10; // x15
  unsigned __int64 **v11; // x18
  _QWORD *v12; // x11
  int v13; // w12
  unsigned int v14; // w8
  unsigned __int64 **v16; // x21
  __int64 v17; // x14
  unsigned __int64 v20; // x27
  unsigned __int64 *v21; // x23
  __int64 *v22; // x6
  unsigned __int64 *v23; // x24
  unsigned __int64 v24; // x22
  unsigned __int64 v25; // x0
  unsigned __int64 **v26; // x19
  unsigned __int64 *v27; // x20
  char *v28; // x21
  unsigned __int64 v29; // x24
  unsigned __int64 *v30; // x22
  unsigned __int64 *v31; // x23
  unsigned __int64 *v32; // x26
  unsigned int *v33; // x0
  unsigned int v34; // w28
  unsigned int v35; // w0
  int v36; // w1
  unsigned int v37; // w0
  unsigned __int64 *v38; // x12
  __int64 v41; // x2
  char v42; // w3
  unsigned int *v43; // x10
  int v44; // w0
  unsigned __int64 v45; // x2
  char *v46; // x9
  _DWORD *v47; // x3
  _BYTE *v48; // x1
  unsigned __int64 v49; // x19
  char v50; // w0
  unsigned __int64 v51; // x0
  unsigned __int64 v52; // x22
  bool v53; // cc
  unsigned int v54; // w0
  char *v55; // x0
  unsigned int v56; // w1
  __int64 v57; // x0
  unsigned __int64 *v58; // x1
  int v59; // w4
  unsigned int v60; // w0
  unsigned __int64 *v61; // x2
  unsigned __int64 **v62; // x21
  unsigned __int64 *v63; // x19
  unsigned __int64 *v64; // x26
  unsigned int v65; // w7
  unsigned __int64 v66; // x20
  int v67; // w8
  __int64 v68; // x0
  bool v69; // zf
  unsigned __int64 *v70; // x0
  unsigned __int64 *v71; // x3
  __int64 v73; // x2
  char v74; // w3
  unsigned __int64 v75; // x3
  unsigned __int64 v76; // x1
  unsigned int *v77; // x4
  __int64 v78; // x0
  unsigned int v79; // w0
  unsigned __int64 v80; // x0
  _DWORD *v81; // x2
  __int64 v83; // x1
  char v84; // w2
  int v85; // w0
  unsigned __int64 *v86; // x2
  char *v87; // x22
  __int64 v88; // x1
  unsigned int v89; // w0
  char v90; // w12
  signed int v91; // w0
  unsigned __int64 v92; // x22
  __int64 v93; // x1
  __int64 v94; // x0
  unsigned int v95; // [xsp+0h] [xbp-80h]
  __int64 v96; // [xsp+0h] [xbp-80h]
  _QWORD *v97; // [xsp+8h] [xbp-78h]
  __int64 *v98; // [xsp+8h] [xbp-78h]
  __int64 v99; // [xsp+10h] [xbp-70h]
  unsigned int *v100; // [xsp+10h] [xbp-70h]
  __int64 v101; // [xsp+18h] [xbp-68h]
  unsigned int v102; // [xsp+20h] [xbp-60h]
  __int64 *v103; // [xsp+28h] [xbp-58h]
  char v104; // [xsp+28h] [xbp-58h]
  __int64 v105; // [xsp+30h] [xbp-50h]
  int v107; // [xsp+38h] [xbp-48h]
  unsigned __int64 *v108; // [xsp+38h] [xbp-48h]
  int v109; // [xsp+44h] [xbp-3Ch]
  __int64 v110; // [xsp+50h] [xbp-30h] BYREF
  unsigned __int64 *v111; // [xsp+58h] [xbp-28h] BYREF
  char *v112; // [xsp+60h] [xbp-20h]
  unsigned __int64 *v113; // [xsp+68h] [xbp-18h]
  _DWORD v114[2]; // [xsp+70h] [xbp-10h] BYREF
  __int64 vars30; // [xsp+B0h] [xbp+30h]
  __int64 vars38; // [xsp+B8h] [xbp+38h]

  v10 = a1;
  v11 = a2 + 6;
  v12 = a6;
  v13 = *((_DWORD *)a2 + 4);
  v14 = a7;
  v16 = a2;
  v17 = a1 + 104;
  v20 = 0;
  if ( (v13 & 1) == 0 )
  {
    v20 = *(_QWORD *)(a1 + 144);
    if ( *(_QWORD *)(a1 + 104) )
      v20 ^= _pointer_chk_guard_local;
  }
  if ( a7 )
  {
    if ( a5 )
    {
      _libc_assert_fail("outbufstart == NULL", "../iconv/skeleton.c", 350, "__gconv_transform_internal_utf8");
      vars30 = v8;
      vars38 = v9;
    }
    *a2[4] = 0;
    if ( ((_DWORD)a2[2] & 1) != 0 )
      return 0;
    return ((__int64 (__fastcall *)(__int64, unsigned __int64 **, _QWORD, _QWORD, _QWORD, _QWORD *, _QWORD, __int64))v20)(
             a1 + 104,
             v11,
             0,
             0,
             0,
             a6,
             a7,
             a8);
  }
  if ( a5 )
    a2 = a5;
  v21 = v16[1];
  if ( a6 )
    v22 = &v110;
  else
    v22 = 0;
  v23 = *a2;
  v110 = 0;
  if ( !(_DWORD)a8 || (v43 = (unsigned int *)v16[4], (v44 = *v43 & 7) == 0) )
  {
    v24 = *a3;
    goto LABEL_12;
  }
  if ( a5 )
  {
    _libc_assert_fail("outbufstart == NULL", "../iconv/skeleton.c", 467, "__gconv_transform_internal_utf8");
    goto LABEL_174;
  }
  v45 = *a3;
  v112 = (char *)*a3;
  v113 = v23;
  if ( v44 > 4 )
  {
LABEL_174:
    _libc_assert_fail(
      "(state->__count & 7) <= sizeof (state->__value)",
      "../iconv/loop.c",
      309,
      "internal_utf8_loop_single");
    goto LABEL_175;
  }
  v46 = (char *)v114;
  v47 = v43 + 1;
  v48 = v114;
  v49 = 0;
  do
  {
    v50 = *((_BYTE *)v47 + v49++);
    *v48++ = v50;
  }
  while ( v49 < (*v43 & 7) );
  if ( a4 < v45 - v49 + 4 )
  {
    *a3 = a4;
    v80 = a4 - v45 + v49;
    if ( v80 > 4 )
    {
      _libc_assert_fail(
        "inlen_after <= sizeof (state->__value.__wchb)",
        "../iconv/loop.c",
        338,
        "internal_utf8_loop_single");
      goto LABEL_185;
    }
    v81 = (_DWORD *)(v45 + 1);
    if ( v49 < v80 )
    {
      do
      {
        v112 = (char *)v81;
        v81 = (_DWORD *)((char *)v81 + 1);
        *((_BYTE *)v47 + v49++) = *((_BYTE *)v81 - 2);
      }
      while ( v80 != v49 );
    }
    return 7;
  }
  v51 = v45 + 1;
  if ( v23 >= v21 )
    return 5;
  do
  {
    v52 = v49++;
    v112 = (char *)v51;
    v53 = v49 <= 3 && a4 > v51;
    *((_BYTE *)v114 + v49 - 1) = *(_BYTE *)(v51++ - 1);
  }
  while ( v53 );
  v54 = v114[0];
  v112 = (char *)v114;
  if ( v114[0] <= 0x7Fu )
  {
    v113 = (unsigned __int64 *)((char *)v23 + 1);
    goto LABEL_59;
  }
  if ( (unsigned int)(v114[0] - 55296) <= 0x7FF || v114[0] < 0 )
  {
    if ( !v22 )
      return 6;
    if ( (v13 & 8) == 0 )
    {
      if ( (v13 & 2) == 0 )
        return 6;
      v87 = (char *)v114;
      goto LABEL_160;
    }
    v96 = v10;
    v98 = v22;
    v100 = v43;
    v101 = v10 + 104;
    v104 = v13;
    v109 = a8;
    v89 = _gconv_transliterate(v10, v16);
    v10 = v96;
    v22 = v98;
    v34 = v89;
    v43 = v100;
    v17 = v101;
    v69 = v89 == 6;
    v12 = a6;
    v46 = (char *)v114;
    v55 = v112;
    v90 = v104;
    v14 = 0;
    LODWORD(a8) = v109;
    if ( v69 )
    {
LABEL_178:
      v87 = v55;
      if ( (v90 & 2) == 0 )
      {
LABEL_161:
        if ( v55 != v46 )
          goto LABEL_60;
        return 6;
      }
LABEL_160:
      v88 = *v22;
      v55 = v87 + 4;
      v112 = v87 + 4;
      *v22 = v88 + 1;
      goto LABEL_161;
    }
    if ( v34 != 5 )
    {
      if ( v112 != (char *)v114 )
        goto LABEL_60;
      if ( v34 != 7 )
      {
        if ( v34 )
          return v34;
        goto LABEL_124;
      }
      if ( v49 == 4 )
        goto LABEL_177;
      v91 = *v100 & 0xFFFFFFF8;
      *a3 += v49 - (*v100 & 7LL);
      if ( (__int64)v49 <= v91 )
      {
LABEL_176:
        _libc_assert_fail("inend - inptr > (state->__count & ~7)", "../iconv/loop.c", 413, "internal_utf8_loop_single");
LABEL_177:
        v55 = (char *)_libc_assert_fail(
                        "inend != &bytebuf[MAX_NEEDED_INPUT]",
                        "../iconv/loop.c",
                        403,
                        "internal_utf8_loop_single");
        goto LABEL_178;
      }
      if ( v49 <= 4 )
      {
        v92 = v52 + 2;
        v93 = 1;
        *v100 = v91 | v49;
        do
        {
          *((_BYTE *)v100 + v93 + 3) = *((_BYTE *)v114 + v93 - 1);
          ++v93;
        }
        while ( v92 != v93 );
        return 7;
      }
LABEL_175:
      _libc_assert_fail(
        "inend - inptr <= sizeof (state->__value.__wchb)",
        "../iconv/loop.c",
        414,
        "internal_utf8_loop_single");
      goto LABEL_176;
    }
    if ( v112 != (char *)v114 )
      goto LABEL_60;
    return 5;
  }
  if ( v114[0] <= 0x7FFu )
  {
    v83 = 2;
  }
  else if ( v114[0] <= 0xFFFFu )
  {
    v83 = 3;
  }
  else if ( v114[0] <= 0x1FFFFFu )
  {
    v83 = 4;
  }
  else
  {
    v83 = (v114[0] > 0x3FFFFFFu) + 5LL;
  }
  if ( v21 < (unsigned __int64 *)((char *)v23 + v83) )
    return 5;
  *(_BYTE *)v23 = -256 >> v83;
  v113 = (unsigned __int64 *)((char *)v113 + v83);
  do
  {
    --v83;
    v84 = v54 & 0x3F | 0x80;
    v54 >>= 6;
    *((_BYTE *)v23 + v83) = v84;
  }
  while ( v83 != 1 );
  LOBYTE(v54) = v54 | *(_BYTE *)v23;
LABEL_59:
  *(_BYTE *)v23 = v54;
  v55 = v112 + 4;
  v112 = v55;
  if ( v55 == (char *)v114 )
  {
LABEL_124:
    v24 = *a3;
    v13 = *((_DWORD *)v16 + 4);
    goto LABEL_12;
  }
LABEL_60:
  v56 = *v43;
  v57 = v55 - v46;
  if ( v57 <= (*v43 & 7LL) )
    goto LABEL_186;
  v13 = *((_DWORD *)v16 + 4);
  v24 = *a3 + v57 - (v56 & 7);
  *a3 = v24;
  v23 = v113;
  *v43 = v56 & 0xFFFFFFF8;
LABEL_12:
  v25 = a4;
  v26 = v16;
  v27 = v23;
  v28 = (char *)v24;
  v29 = v25;
  v30 = v21;
  v31 = a3;
  v95 = a8;
  v97 = v12;
  v99 = v17;
  v102 = v14;
  v103 = v22;
  v105 = v10;
  while ( 1 )
  {
    v32 = v27;
    v112 = v28;
    v113 = v27;
    if ( (char *)v29 != v28 )
    {
      v33 = (unsigned int *)v28;
      v34 = 4;
      while ( 1 )
      {
        if ( v29 < (unsigned __int64)(v33 + 1) )
        {
          *v31 = (unsigned __int64)v112;
          v34 = 7;
          if ( a5 )
          {
LABEL_29:
            *a5 = v32;
            return v34;
          }
          goto LABEL_22;
        }
        if ( v30 <= v32 )
          goto LABEL_31;
        v35 = *v33;
        if ( v35 <= 0x7F )
        {
          v113 = (unsigned __int64 *)((char *)v32 + 1);
LABEL_19:
          *(_BYTE *)v32 = v35;
          v32 = v113;
          v33 = (unsigned int *)(v112 + 4);
          v112 += 4;
          goto LABEL_20;
        }
        if ( v35 - 55296 > 0x7FF && (v35 & 0x80000000) == 0 )
        {
          if ( v35 <= 0x7FF )
          {
            v41 = 2;
          }
          else if ( v35 <= 0xFFFF )
          {
            v41 = 3;
          }
          else if ( v35 <= 0x1FFFFF )
          {
            v41 = 4;
          }
          else
          {
            v41 = (v35 > 0x3FFFFFF) + 5LL;
          }
          if ( v30 < (unsigned __int64 *)((char *)v32 + v41) )
          {
LABEL_31:
            v33 = (unsigned int *)v112;
            v34 = 5;
            goto LABEL_21;
          }
          *(_BYTE *)v32 = -256 >> v41;
          v113 = (unsigned __int64 *)((char *)v113 + v41);
          do
          {
            --v41;
            v42 = v35 & 0x3F | 0x80;
            v35 >>= 6;
            *((_BYTE *)v32 + v41) = v42;
          }
          while ( v41 != 1 );
          LOBYTE(v35) = v35 | *(_BYTE *)v32;
          goto LABEL_19;
        }
        if ( !v103 )
        {
          v33 = (unsigned int *)v112;
          v34 = 6;
          goto LABEL_21;
        }
        if ( ((_DWORD)v26[2] & 8) != 0 )
        {
          v107 = v13;
          v34 = _gconv_transliterate(v105, v26);
          v13 = v107;
          if ( v34 != 6 )
          {
            v33 = (unsigned int *)v112;
            v32 = v113;
            if ( v34 == 5 )
              goto LABEL_21;
            goto LABEL_20;
          }
          v32 = v113;
        }
        v33 = (unsigned int *)v112;
        if ( (v13 & 2) == 0 )
        {
          v34 = 6;
          goto LABEL_21;
        }
        v33 = (unsigned int *)(v112 + 4);
        v34 = 6;
        v112 += 4;
        ++*v103;
LABEL_20:
        if ( (unsigned int *)v29 == v33 )
          goto LABEL_21;
      }
    }
    v33 = (unsigned int *)v29;
    v34 = 4;
LABEL_21:
    *v31 = (unsigned __int64)v33;
    if ( a5 )
      goto LABEL_29;
LABEL_22:
    v36 = *((_DWORD *)v26 + 4);
    ++*((_DWORD *)v26 + 5);
    if ( (v36 & 1) != 0 )
      goto LABEL_73;
    if ( v32 <= v27 )
    {
      v37 = v34;
      goto LABEL_26;
    }
    v111 = *v26;
    v37 = ((__int64 (__fastcall *)(__int64, unsigned __int64 **, unsigned __int64 **, unsigned __int64 *, _QWORD, _QWORD *, _QWORD, _QWORD))v20)(
            v99,
            v11,
            &v111,
            v32,
            0,
            v97,
            0,
            v95);
    if ( v37 == 4 )
    {
      v37 = v34;
      if ( v34 == 5 )
        goto LABEL_27;
      goto LABEL_26;
    }
    v38 = v111;
    if ( v111 != v32 )
      break;
LABEL_26:
    if ( v37 )
    {
      v65 = v95;
      v62 = v26;
      v67 = v102;
      v64 = v31;
      v66 = v29;
      v34 = v37;
      goto LABEL_74;
    }
LABEL_27:
    v27 = *v26;
    v28 = (char *)*v31;
    v13 = *((_DWORD *)v26 + 4);
  }
  v32 = (unsigned __int64 *)*((unsigned int *)v26 + 4);
  *v31 = (unsigned __int64)v28;
  v112 = v28;
  v113 = v27;
  if ( (char *)v29 == v28 )
  {
    if ( v38 != v27 )
      goto LABEL_89;
    goto LABEL_72;
  }
  v58 = v27;
  v34 = v37;
  v59 = 4;
  while ( v29 >= (unsigned __int64)(v28 + 4) )
  {
    if ( v38 <= v58 )
      goto LABEL_90;
    v60 = *(_DWORD *)v28;
    if ( *(_DWORD *)v28 <= 0x7Fu )
    {
      v113 = (unsigned __int64 *)((char *)v58 + 1);
LABEL_68:
      *(_BYTE *)v58 = v60;
      v58 = v113;
      v28 = v112 + 4;
      v112 += 4;
      goto LABEL_69;
    }
    if ( v60 - 55296 > 0x7FF && (v60 & 0x80000000) == 0 )
    {
      if ( v60 <= 0x7FF )
      {
        v73 = 2;
      }
      else if ( v60 <= 0xFFFF )
      {
        v73 = 3;
      }
      else if ( v60 <= 0x1FFFFF )
      {
        v73 = 4;
      }
      else
      {
        v73 = (v60 > 0x3FFFFFF) + 5LL;
      }
      if ( v38 < (unsigned __int64 *)((char *)v58 + v73) )
        goto LABEL_90;
      *(_BYTE *)v58 = -256 >> v73;
      v113 = (unsigned __int64 *)((char *)v113 + v73);
      do
      {
        --v73;
        v74 = v60 & 0x3F | 0x80;
        v60 >>= 6;
        *((_BYTE *)v58 + v73) = v74;
      }
      while ( v73 != 1 );
      LOBYTE(v60) = v60 | *(_BYTE *)v58;
      goto LABEL_68;
    }
    if ( !v103 )
      break;
    if ( ((_DWORD)v26[2] & 8) == 0
      || (v108 = v38, v85 = _gconv_transliterate(v105, v26), v59 = v85, v38 = v108, v58 = v113, v85 == 6) )
    {
      if ( ((unsigned __int8)v32 & 2) == 0 )
      {
        v32 = v31;
        v30 = (unsigned __int64 *)v112;
        goto LABEL_88;
      }
      v28 = v112 + 4;
      v59 = 6;
      v112 += 4;
      ++*v103;
    }
    else
    {
      v28 = v112;
      v58 = v113;
      if ( v85 == 5 )
      {
        v86 = v111;
        *v31 = (unsigned __int64)v112;
        v37 = v34;
        if ( v58 != v86 )
        {
          do
          {
LABEL_89:
            _libc_assert_fail("outbuf == outerr", "../iconv/skeleton.c", 594, "__gconv_transform_internal_utf8");
LABEL_90:
            v71 = v111;
            *v31 = (unsigned __int64)v112;
            v37 = v34;
          }
          while ( v58 != v71 );
        }
LABEL_91:
        if ( v58 == v27 )
          --*((_DWORD *)v26 + 5);
        goto LABEL_26;
      }
    }
LABEL_69:
    if ( (char *)v29 == v28 )
    {
      v61 = v111;
      *v31 = v29;
      v37 = v34;
      if ( v61 != v58 )
        goto LABEL_89;
      if ( v59 != 5 )
        goto LABEL_72;
      goto LABEL_91;
    }
  }
  v30 = (unsigned __int64 *)v112;
  v32 = v31;
LABEL_88:
  v70 = v111;
  *v32 = (unsigned __int64)v30;
  if ( v70 != v58 )
    goto LABEL_89;
LABEL_72:
  _libc_assert_fail("nstatus == __GCONV_FULL_OUTPUT", "../iconv/skeleton.c", 595, "__gconv_transform_internal_utf8");
LABEL_73:
  v62 = v26;
  v63 = v32;
  v64 = v31;
  v65 = v95;
  v66 = v29;
  v67 = v102;
  v68 = *v97 + v110;
  *v62 = v63;
  *v97 = v68;
LABEL_74:
  if ( v65 )
    v69 = v34 == 7;
  else
    v69 = 0;
  if ( !v69 )
    return v34;
  v75 = *v64;
  v76 = v66 - *v64;
  if ( v76 <= 4 )
  {
    v77 = (unsigned int *)v62[4];
    v78 = 0;
    if ( v76 )
    {
      do
      {
        *((_BYTE *)v77 + v78 + 4) = *(_BYTE *)(v75 + v78);
        ++v78;
      }
      while ( v76 != v78 );
      v67 = v76;
    }
    v79 = *v77 & 0xFFFFFFF8;
    *v64 = v66;
    *v77 = v79 | v67;
    return v34;
  }
LABEL_185:
  _libc_assert_fail(
    "cnt_after <= sizeof (data->__statep->__value.__wchb)",
    "../iconv/skeleton.c",
    647,
    "__gconv_transform_internal_utf8");
LABEL_186:
  v94 = _libc_assert_fail("inptr - bytebuf > (state->__count & 7)", "../iconv/loop.c", 385, "internal_utf8_loop_single");
  return _gconv_transform_utf8_internal(v94);
}
