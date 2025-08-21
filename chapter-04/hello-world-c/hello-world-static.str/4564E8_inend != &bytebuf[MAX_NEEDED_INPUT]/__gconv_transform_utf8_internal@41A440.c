__int64 __fastcall _gconv_transform_utf8_internal(
        __int64 a1,
        __int64 a2,
        unsigned __int8 **a3,
        unsigned __int8 *a4,
        unsigned int **a5,
        __int64 *a6,
        int a7,
        unsigned int a8)
{
  unsigned __int8 *v8; // x20
  unsigned int *v9; // x22
  unsigned int *v10; // x24
  unsigned int v11; // w25
  unsigned __int64 v12; // x28
  int v14; // w14
  unsigned int **v19; // x0
  __int64 *v20; // x1
  unsigned int *v21; // x1
  unsigned __int8 *v22; // x6
  unsigned int v23; // w0
  unsigned __int8 *v24; // x8
  __int64 v25; // x2
  unsigned int v26; // w7
  unsigned __int8 *v27; // x16
  __int64 v28; // x5
  unsigned __int8 v29; // w2
  unsigned int i; // w15
  int v31; // w1
  unsigned int v32; // w0
  unsigned __int64 v33; // x2
  __int64 v34; // x0
  int *v36; // x5
  int v37; // w6
  unsigned int v38; // w2
  unsigned __int64 v39; // x0
  unsigned __int64 v40; // x1
  unsigned __int8 *v41; // x9
  unsigned __int64 v42; // x3
  unsigned int *v43; // x7
  unsigned __int8 v44; // w0
  unsigned __int8 *v45; // x2
  unsigned __int8 *v46; // x4
  char v47; // t1
  int v48; // w0
  __int64 v49; // x0
  int v50; // w14
  unsigned int *v51; // x6
  unsigned int *v52; // x5
  __int64 v53; // x4
  unsigned int v54; // w1
  unsigned int v55; // w12
  unsigned __int64 v56; // x15
  __int64 v57; // x4
  unsigned __int8 v58; // w3
  unsigned int j; // w8
  unsigned __int8 *v60; // x3
  __int64 v61; // x0
  bool v62; // zf
  unsigned __int8 *v63; // x5
  _DWORD *v64; // x6
  __int64 v65; // x7
  int v66; // w0
  int v67; // w0
  char v68; // w2
  int v69; // w3
  unsigned __int8 *v70; // x1
  char v71; // t1
  unsigned int v72; // w17
  char *v73; // x16
  __int64 v74; // x8
  unsigned int v75; // w15
  unsigned int v76; // w2
  char *v77; // x3
  unsigned int v78; // w12
  char *v79; // x2
  int v80; // w7
  int v81; // w0
  int v82; // w4
  char v83; // w1
  char *v84; // x2
  char v85; // t1
  char *v86; // x0
  __int64 v87; // x1
  __int64 (__fastcall *v89)(__int64, __int64, unsigned int **, unsigned int *, _QWORD, __int64 *, _QWORD, _QWORD); // [xsp+10h] [xbp-40h]
  __int64 v90; // [xsp+18h] [xbp-38h]
  __int64 v91; // [xsp+20h] [xbp-30h]
  __int64 *v92; // [xsp+28h] [xbp-28h]
  __int64 v93; // [xsp+30h] [xbp-20h] BYREF
  unsigned int *v94; // [xsp+38h] [xbp-18h] BYREF
  unsigned __int8 v95; // [xsp+40h] [xbp-10h] BYREF
  _BYTE v96[7]; // [xsp+41h] [xbp-Fh] BYREF

  v14 = *(_DWORD *)(a2 + 16);
  v89 = 0;
  v90 = a1 + 104;
  v91 = a2 + 48;
  if ( (v14 & 1) == 0 )
  {
    v89 = *(__int64 (__fastcall **)(__int64, __int64, unsigned int **, unsigned int *, _QWORD, __int64 *, _QWORD, _QWORD))(a1 + 144);
    if ( *(_QWORD *)(a1 + 104) )
      v89 = (__int64 (__fastcall *)(__int64, __int64, unsigned int **, unsigned int *, _QWORD, __int64 *, _QWORD, _QWORD))(*(_QWORD *)(a1 + 144) ^ _pointer_chk_guard_local);
  }
  if ( !a7 )
  {
    v8 = (unsigned __int8 *)&v93;
    if ( a5 )
      v19 = a5;
    else
      v19 = (unsigned int **)a2;
    if ( a6 )
      v20 = &v93;
    else
      v20 = 0;
    v12 = *(_QWORD *)(a2 + 8);
    v10 = *v19;
    v92 = v20;
    v93 = 0;
    if ( !a8 || (v36 = *(int **)(a2 + 32), (v37 = *v36 & 7) == 0) )
    {
      v8 = *a3;
      goto LABEL_13;
    }
    if ( !a5 )
    {
      v38 = v36[1];
      v39 = *v36 >> 8;
      v40 = (unsigned __int8)*v36;
      v41 = *a3;
      v95 = inmask_9[v39 - 2];
      do
      {
        v42 = v39--;
        if ( v40 > v39 )
          v96[v42 - 2] = v38 & 0x3F | 0x80;
        v38 >>= 6;
      }
      while ( v39 > 1 );
      v43 = v10 + 1;
      v44 = v38 | v95;
      if ( v12 < (unsigned __int64)(v10 + 1) )
        return 5;
      v45 = v41;
      v46 = &v95;
      v95 = v44;
      do
      {
        ++v40;
        v47 = *v45++;
        v96[v40 - 2] = v47;
      }
      while ( v40 != 6 && a4 > v45 );
      v48 = v95;
      if ( v95 <= 0x7Fu )
      {
        *v10 = v95;
        v49 = 1;
        v37 = *v36 & 7;
        goto LABEL_73;
      }
      while ( 1 )
      {
        v72 = v48 - 194;
        v73 = (char *)&v46[v40];
        if ( (unsigned int)(v48 - 194) > 0x1D )
        {
          if ( (v48 & 0xF0) != 0xE0 )
            goto LABEL_193;
          v74 = 3;
          v75 = v48 & 0xF;
          v76 = 3;
        }
        else
        {
          v74 = 2;
          v75 = v48 & 0x1F;
          v76 = 2;
        }
LABEL_138:
        v77 = v96;
        v78 = 1;
        if ( v73 < (char *)&v46[v74] )
        {
          if ( v73 <= v96 )
          {
            if ( v40 != 1 )
              goto LABEL_143;
          }
          else
          {
            v79 = v96;
            do
            {
              if ( (*v79 & 0xC0) != 0x80 )
                break;
              v79 = (char *)&v46[++v78];
            }
            while ( v73 > v79 );
            if ( v73 != v79 )
              goto LABEL_143;
            if ( v40 == 6 )
            {
              LOBYTE(v48) = _libc_assert_fail(
                              "inend != &bytebuf[MAX_NEEDED_INPUT]",
                              "../iconv/loop.c",
                              403,
                              "utf8_internal_loop_single");
              goto LABEL_178;
            }
          }
          v80 = v40;
          *a3 = &v41[v40 - v37];
          if ( v72 <= 0x1D )
          {
            v81 = v48 & 0x1F;
            v82 = 512;
            v83 = 1;
LABEL_170:
            if ( v73 > v77 )
            {
              v84 = v77;
              do
              {
                v85 = *v84++;
                v81 = v85 & 0x3F | (v81 << 6);
              }
              while ( v84 != v73 );
              v83 += (_BYTE)v77 - (_BYTE)v84;
            }
            v11 = 7;
            *v36 = v80 | v82;
            v36[1] = v81 << (6 * v83);
            return v11;
          }
          if ( (v48 & 0xF0) == 0xE0 )
          {
            v81 = v48 & 0xF;
            v82 = 768;
            v83 = 2;
            goto LABEL_170;
          }
LABEL_178:
          if ( (v48 & 0xF8) == 0xF0 )
          {
            v81 = v48 & 7;
            v82 = 1024;
            v83 = 3;
          }
          else if ( (v48 & 0xFC) == 0xF8 )
          {
            v81 = v48 & 3;
            v82 = 1280;
            v83 = 4;
          }
          else
          {
            v81 = v48 & 1;
            v82 = 1536;
            v83 = 5;
          }
          goto LABEL_170;
        }
        while ( (*v77 & 0xC0) == 0x80 )
        {
          ++v78;
          v75 = *v77++ & 0x3F | (v75 << 6);
          if ( v76 == v78 )
            goto LABEL_148;
        }
        if ( v76 > v78 )
          goto LABEL_143;
LABEL_148:
        if ( v76 != 2 && !(v75 >> (5 * v76 - 4)) || v75 - 55296 <= 0x7FF )
          goto LABEL_143;
        *v10 = v75;
        v49 = v74;
        v37 = *v36 & 7;
LABEL_73:
        if ( v49 <= v37 )
        {
          _libc_assert_fail(
            "inptr - bytebuf > (state->__count & 7)",
            "../iconv/loop.c",
            385,
            "utf8_internal_loop_single",
            v46);
          goto LABEL_204;
        }
        v14 = *(_DWORD *)(a2 + 16);
        v8 = &v41[v49 - v37];
        *a3 = v8;
        v10 = v43;
        *v36 = 0;
LABEL_13:
        if ( a4 == v8 )
        {
          v22 = a4;
          v9 = v10;
          v11 = 4;
          goto LABEL_32;
        }
        v21 = v10 + 1;
        v22 = v8;
        v9 = v10;
        if ( v12 < (unsigned __int64)(v10 + 1) )
        {
LABEL_31:
          v11 = 5;
          goto LABEL_32;
        }
        v11 = 4;
        while ( 1 )
        {
          v24 = v22 + 1;
          v23 = *v22;
          if ( v23 <= 0x7F )
            goto LABEL_16;
          if ( v23 - 194 <= 0x1D )
          {
            v25 = 2;
            v23 &= 0x1Fu;
            v26 = 2;
LABEL_22:
            v27 = &v22[v25];
            v28 = 1;
            if ( a4 < &v22[v25] )
              goto LABEL_49;
            do
            {
LABEL_25:
              v29 = v22[v28];
              i = v28;
              if ( (v29 & 0xC0) != 0x80 )
                goto LABEL_26;
              ++v28;
              v23 = v29 & 0x3F | (v23 << 6);
            }
            while ( v26 > (unsigned int)v28 );
            ++i;
LABEL_26:
            if ( i < v26 || v26 != 2 && !(v23 >> (5 * v26 - 4)) || v23 - 55296 <= 0x7FF )
              goto LABEL_44;
            v24 = v27;
LABEL_16:
            v22 = v24;
            *v9 = v23;
            v9 = v21;
            goto LABEL_17;
          }
          if ( (v23 & 0xF0) == 0xE0 )
          {
            v27 = v22 + 3;
            v23 &= 0xFu;
            v26 = 3;
            v28 = 1;
            if ( a4 >= v22 + 3 )
              goto LABEL_25;
LABEL_49:
            for ( i = 1; a4 > v24; v24 = &v22[++i] )
            {
              if ( (*v24 & 0xC0) != 0x80 )
                break;
            }
            if ( a4 != v24 )
              goto LABEL_44;
            *a3 = v22;
            v11 = 7;
            if ( !a5 )
              goto LABEL_33;
LABEL_55:
            *a5 = v9;
            return v11;
          }
LABEL_118:
          if ( (v23 & 0xF8) == 0xF0 )
          {
            v25 = 4;
            v23 &= 7u;
            v26 = 4;
            goto LABEL_22;
          }
          if ( (v23 & 0xFC) == 0xF8 )
          {
            v25 = 5;
            v23 &= 3u;
            v26 = 5;
            goto LABEL_22;
          }
          if ( (v23 & 0xFE) == 0xFC )
          {
            v25 = 6;
            v23 &= 1u;
            v26 = 6;
            goto LABEL_22;
          }
          v34 = 1;
          while ( 1 )
          {
            i = v34;
            if ( a4 <= &v22[v34] || (v22[v34] & 0xC0) != 0x80 )
              break;
            if ( ++v34 == 6 )
            {
              i = 5;
              break;
            }
          }
LABEL_44:
          if ( !v92 || (v14 & 2) == 0 )
          {
            v11 = 6;
            break;
          }
          v22 += i;
          v11 = 6;
          ++*v92;
LABEL_17:
          if ( a4 == v22 )
            break;
          v21 = v9 + 1;
          if ( v12 < (unsigned __int64)(v9 + 1) )
            goto LABEL_31;
        }
LABEL_32:
        *a3 = v22;
        if ( a5 )
          goto LABEL_55;
LABEL_33:
        v31 = *(_DWORD *)(a2 + 16);
        ++*(_DWORD *)(a2 + 20);
        if ( (v31 & 1) != 0 )
        {
          v61 = *a6;
          *(_QWORD *)a2 = v9;
          *a6 = v61 + v93;
          goto LABEL_96;
        }
        if ( v9 <= v10 )
        {
          v32 = v11;
          goto LABEL_37;
        }
        v94 = *(unsigned int **)a2;
        v32 = v89(v90, v91, &v94, v9, 0, a6, 0, a8);
        if ( v32 == 4 )
        {
          v32 = v11;
          if ( v11 != 5 )
            goto LABEL_37;
          goto LABEL_38;
        }
        v33 = (unsigned __int64)v94;
        if ( v94 == v9 )
          goto LABEL_37;
        v50 = *(_DWORD *)(a2 + 16);
        *a3 = v8;
        if ( a4 != v8 )
        {
          v51 = v10 + 1;
          v52 = v10;
          if ( v33 >= (unsigned __int64)(v10 + 1) )
          {
            while ( 1 )
            {
              v60 = v8 + 1;
              v54 = *v8;
              if ( v54 > 0x7F )
              {
                if ( v54 - 194 > 0x1D )
                {
                  if ( (v54 & 0xF0) == 0xE0 )
                  {
                    v53 = 3;
                    v54 &= 0xFu;
                    v55 = 3;
                  }
                  else if ( (v54 & 0xF8) == 0xF0 )
                  {
                    v53 = 4;
                    v54 &= 7u;
                    v55 = 4;
                  }
                  else
                  {
LABEL_201:
                    if ( (v54 & 0xFC) == 0xF8 )
                    {
                      v53 = 5;
                      v54 &= 3u;
                      v55 = 5;
                    }
                    else
                    {
                      if ( (v54 & 0xFE) != 0xFC )
                      {
                        v87 = 1;
                        while ( 1 )
                        {
                          j = v87;
                          if ( a4 <= &v8[v87] || (v8[v87] & 0xC0) != 0x80 )
                            break;
                          if ( ++v87 == 6 )
                          {
                            j = 5;
                            break;
                          }
                        }
LABEL_114:
                        if ( !v92 || (v50 & 2) == 0 )
                          goto LABEL_116;
                        v8 += j;
                        ++*v92;
                        goto LABEL_91;
                      }
                      v53 = 6;
                      v54 &= 1u;
                      v55 = 6;
                    }
                  }
                }
                else
                {
                  v53 = 2;
                  v54 &= 0x1Fu;
                  v55 = 2;
                }
                v56 = (unsigned __int64)&v8[v53];
                v57 = 1;
                if ( (unsigned __int64)a4 < v56 )
                {
                  for ( j = 1; a4 > v60; v60 = &v8[++j] )
                  {
                    if ( (*v60 & 0xC0) != 0x80 )
                      break;
                  }
                  if ( a4 == v60 )
                  {
LABEL_116:
                    *a3 = v8;
                    if ( (unsigned int *)v33 == v52 )
                      goto LABEL_135;
                    goto LABEL_117;
                  }
                  goto LABEL_114;
                }
                while ( 1 )
                {
                  v58 = v8[v57];
                  j = v57;
                  if ( (v58 & 0xC0) != 0x80 )
                    break;
                  ++v57;
                  v54 = v58 & 0x3F | (v54 << 6);
                  if ( v55 <= (unsigned int)v57 )
                  {
                    ++j;
                    break;
                  }
                }
                if ( j < v55 || v55 != 2 && !(v54 >> (5 * v55 - 4)) || v54 - 55296 <= 0x7FF )
                  goto LABEL_114;
                v60 = (unsigned __int8 *)v56;
              }
              v8 = v60;
              *v52 = v54;
              v52 = v51;
LABEL_91:
              if ( v8 == a4 )
              {
                *a3 = v8;
                if ( v52 != (unsigned int *)v33 )
                  goto LABEL_117;
                goto LABEL_135;
              }
              v51 = v52 + 1;
              if ( v33 < (unsigned __int64)(v52 + 1) )
              {
                *a3 = v8;
                if ( v52 != (unsigned int *)v33 )
                  goto LABEL_117;
                if ( v52 != v10 )
                  goto LABEL_37;
LABEL_78:
                --*(_DWORD *)(a2 + 20);
LABEL_37:
                if ( !v32 )
                {
LABEL_38:
                  v8 = *a3;
                  v10 = *(unsigned int **)a2;
                  v14 = *(_DWORD *)(a2 + 16);
                  goto LABEL_13;
                }
                v11 = v32;
LABEL_96:
                if ( a8 )
                  v62 = v11 == 7;
                else
                  v62 = 0;
                if ( !v62 )
                  return v11;
                v63 = *a3;
                v64 = *(_DWORD **)(a2 + 32);
                v65 = a4 - *a3;
                v66 = **a3;
                *v64 = v65;
                if ( (unsigned int)(v66 - 192) > 1 )
                {
                  if ( (unsigned int)(v66 - 194) > 0x1D )
                  {
                    if ( (v66 & 0xF0) == 0xE0 )
                    {
                      v67 = v66 & 0xF;
                      v68 = 2;
                      v69 = 768;
                    }
                    else if ( (v66 & 0xF8) == 0xF0 )
                    {
                      v67 = v66 & 7;
                      v68 = 3;
                      v69 = 1024;
                    }
                    else if ( (v66 & 0xFC) == 0xF8 )
                    {
                      v67 = v66 & 3;
                      v68 = 4;
                      v69 = 1280;
                    }
                    else
                    {
                      v67 = v66 & 1;
                      v68 = 5;
                      v69 = 1536;
                    }
                  }
                  else
                  {
                    v67 = v66 & 0x1F;
                    v68 = 1;
                    v69 = 512;
                  }
                  v70 = v63 + 1;
                  *a3 = v63 + 1;
                  if ( v63 + 1 < a4 )
                  {
                    do
                    {
                      v71 = *v70++;
                      *a3 = v70;
                      v67 = v71 & 0x3F | (v67 << 6);
                    }
                    while ( v70 != a4 );
                    v68 += 1 - (_BYTE)v70 + (_BYTE)v63;
                  }
                  *v64 = v69 | v65;
                  v64[1] = v67 << (6 * v68);
                  return v11;
                }
                LOBYTE(v48) = _libc_assert_fail(
                                "ch != 0xc0 && ch != 0xc1",
                                "../iconv/skeleton.c",
                                642,
                                "__gconv_transform_utf8_internal");
LABEL_193:
                if ( (v48 & 0xF8) == 0xF0 )
                {
                  v74 = 4;
                  v75 = v48 & 7;
                  v76 = 4;
                  goto LABEL_138;
                }
                if ( (v48 & 0xFC) == 0xF8 )
                {
                  v74 = 5;
                  v75 = v48 & 3;
                  v76 = 5;
                  goto LABEL_138;
                }
                if ( (v48 & 0xFE) == 0xFC )
                {
                  v74 = 6;
                  v75 = v48 & 1;
                  v76 = 6;
                  goto LABEL_138;
                }
LABEL_204:
                v86 = v96;
                v78 = 0;
                do
                {
                  ++v78;
                  if ( v73 <= v86 )
                    break;
                  if ( (*v86 & 0xC0) != 0x80 )
                    break;
                  ++v86;
                }
                while ( v78 != 5 );
LABEL_143:
                if ( !v92 )
                  return 6;
                if ( (v14 & 2) == 0 )
                  return 6;
                ++*v92;
                if ( !v78 )
                  return 6;
                v49 = v78;
                v43 = v10;
                goto LABEL_73;
              }
            }
          }
          if ( (unsigned int *)v33 == v10 )
            goto LABEL_78;
LABEL_117:
          LOBYTE(v23) = _libc_assert_fail(
                          "outbuf == outerr",
                          "../iconv/skeleton.c",
                          594,
                          "__gconv_transform_utf8_internal");
          goto LABEL_118;
        }
        if ( (unsigned int *)v33 != v10 )
          goto LABEL_117;
LABEL_135:
        v48 = _libc_assert_fail(
                "nstatus == __GCONV_FULL_OUTPUT",
                "../iconv/skeleton.c",
                595,
                "__gconv_transform_utf8_internal");
      }
    }
LABEL_200:
    v32 = _libc_assert_fail("outbufstart == NULL", "../iconv/skeleton.c", 467, "__gconv_transform_utf8_internal");
    goto LABEL_201;
  }
  if ( a5 )
  {
    _libc_assert_fail("outbufstart == NULL", "../iconv/skeleton.c", 350, "__gconv_transform_utf8_internal");
    goto LABEL_200;
  }
  **(_QWORD **)(a2 + 32) = 0;
  if ( (*(_DWORD *)(a2 + 16) & 1) != 0 )
    return 0;
  return ((__int64 (__fastcall *)(__int64, __int64, _QWORD, _QWORD, _QWORD, __int64 *))v89)(v90, a2 + 48, 0, 0, 0, a6);
}
