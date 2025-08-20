__int64 __fastcall sub_4198E4(
        __int64 a1,
        unsigned __int8 **a2,
        unsigned __int8 *a3,
        unsigned __int8 *a4,
        unsigned __int8 **a5,
        __int64 *a6,
        unsigned int a7,
        int a8)
{
  unsigned __int64 v8; // x19
  unsigned int *v9; // x22
  unsigned int *v10; // x23
  unsigned int *v11; // x24
  unsigned __int64 v12; // x28
  __int64 v13; // x30
  __int64 v14; // x15
  _DWORD *v15; // x18
  __int64 *v16; // x11
  unsigned int v17; // w12
  unsigned int v18; // w8
  unsigned int *v20; // x21
  unsigned int *v21; // x14
  unsigned __int8 *v22; // x26
  unsigned __int8 **v23; // x25
  unsigned __int64 v24; // x27
  __int64 *v25; // x6
  __int64 v26; // x22
  unsigned __int8 *v27; // x0
  unsigned int *v28; // x0
  unsigned int v29; // w0
  int v30; // w1
  unsigned int v31; // w0
  unsigned __int8 *v32; // x12
  __int64 v35; // x2
  unsigned __int8 v36; // w3
  unsigned int *v37; // x10
  int v38; // w0
  __int64 v39; // x2
  _DWORD *v40; // x9
  _DWORD *v41; // x3
  _BYTE *v42; // x1
  char v43; // w0
  unsigned int *v44; // x0
  bool v45; // cc
  unsigned int v46; // w0
  __int64 v47; // x0
  unsigned int v48; // w1
  __int64 v49; // x0
  unsigned __int8 *v50; // x1
  int v51; // w4
  unsigned int v52; // w0
  unsigned __int8 *v53; // x2
  __int64 *v54; // x11
  int v55; // w7
  int v56; // w8
  __int64 v57; // x0
  bool v58; // zf
  unsigned __int8 *v59; // x0
  unsigned __int8 *v60; // x3
  __int64 v62; // x2
  unsigned __int8 v63; // w3
  unsigned int v64; // w0
  unsigned int *v65; // x3
  unsigned __int64 v66; // x1
  unsigned int *v67; // x4
  __int64 v68; // x0
  unsigned int v69; // w0
  unsigned __int64 v70; // x0
  unsigned int *v71; // x2
  __int64 v73; // x1
  char v74; // w2
  int v75; // w0
  unsigned __int8 *v76; // x2
  __int64 v77; // x1
  unsigned int v78; // w0
  char v79; // w12
  signed int v80; // w0
  __int64 v81; // x1
  __int64 v82; // x0
  __int64 v83; // x1
  unsigned __int8 **v84; // x2
  unsigned int **v85; // x4
  __int64 *v86; // x5
  int v87; // w6
  unsigned int v88; // w7
  __int64 v89; // x27
  int v90; // w14
  __int64 *v91; // x19
  unsigned int **v92; // x21
  unsigned __int8 **v93; // x23
  unsigned __int64 v94; // x3
  unsigned __int64 v95; // x26
  unsigned int **v96; // x0
  __int64 *v97; // x1
  unsigned int *v98; // x1
  unsigned __int8 *v99; // x6
  unsigned int v100; // w0
  unsigned __int8 *v101; // x8
  __int64 v102; // x2
  unsigned int v103; // w7
  unsigned __int8 *v104; // x16
  __int64 v105; // x5
  unsigned __int8 v106; // w2
  unsigned int j; // w15
  int v108; // w1
  int v109; // w0
  unsigned __int64 v110; // x2
  __int64 v111; // x0
  int *v112; // x5
  int v113; // w6
  unsigned int v114; // w2
  unsigned __int64 v115; // x0
  unsigned __int64 v116; // x1
  unsigned __int8 *v117; // x9
  unsigned __int64 v118; // x3
  unsigned int *v119; // x7
  unsigned __int8 v120; // w0
  unsigned __int8 *v121; // x2
  unsigned __int8 *v122; // x4
  char v123; // t1
  int v124; // w0
  __int64 v125; // x0
  int v126; // w14
  unsigned int *v127; // x6
  unsigned int *v128; // x5
  __int64 v129; // x4
  unsigned int v130; // w1
  unsigned int v131; // w12
  unsigned __int8 *v132; // x15
  __int64 v133; // x4
  unsigned __int8 v134; // w3
  unsigned int i; // w8
  unsigned __int8 *v136; // x3
  __int64 v137; // x0
  bool v138; // zf
  unsigned __int8 *v139; // x5
  _DWORD *v140; // x6
  unsigned __int64 v141; // x7
  int v142; // w0
  int v143; // w0
  char v144; // w2
  int v145; // w3
  unsigned __int8 *v146; // x1
  char v147; // t1
  unsigned int v148; // w17
  char *v149; // x16
  __int64 v150; // x8
  unsigned int v151; // w15
  unsigned int v152; // w2
  char *v153; // x3
  unsigned int v154; // w12
  char *v155; // x2
  int v156; // w7
  int v157; // w0
  int v158; // w4
  char v159; // w1
  char *v160; // x2
  char v161; // t1
  char *v162; // x0
  __int64 v163; // x1
  unsigned int v164; // [xsp+Ch] [xbp-124h]
  __int64 (__fastcall *v165)(__int64, __int64, unsigned int **, unsigned int *, _QWORD, __int64 *, _QWORD, _QWORD); // [xsp+10h] [xbp-120h]
  __int64 v166; // [xsp+18h] [xbp-118h]
  __int64 v167; // [xsp+20h] [xbp-110h]
  __int64 *v168; // [xsp+28h] [xbp-108h]
  __int64 v169; // [xsp+30h] [xbp-100h] BYREF
  unsigned int *v170; // [xsp+38h] [xbp-F8h] BYREF
  unsigned __int8 v171; // [xsp+40h] [xbp-F0h] BYREF
  _BYTE v172[7]; // [xsp+41h] [xbp-EFh] BYREF
  __int64 v173; // [xsp+48h] [xbp-E8h]
  __int64 *v174; // [xsp+50h] [xbp-E0h]
  __int64 v175; // [xsp+58h] [xbp-D8h]
  unsigned __int64 v176; // [xsp+60h] [xbp-D0h]
  unsigned __int8 *v177; // [xsp+68h] [xbp-C8h]
  unsigned int *v178; // [xsp+70h] [xbp-C0h]
  unsigned int *v179; // [xsp+78h] [xbp-B8h]
  unsigned int *v180; // [xsp+80h] [xbp-B0h]
  unsigned int *v181; // [xsp+88h] [xbp-A8h]
  unsigned __int8 **v182; // [xsp+90h] [xbp-A0h]
  unsigned __int8 *v183; // [xsp+98h] [xbp-98h]
  unsigned __int64 v184; // [xsp+A0h] [xbp-90h]
  unsigned __int64 v185; // [xsp+A8h] [xbp-88h]
  __int64 v186; // [xsp+B0h] [xbp-80h]
  __int64 *v187; // [xsp+B8h] [xbp-78h]
  unsigned int *v188; // [xsp+C0h] [xbp-70h]
  unsigned int *v189; // [xsp+C8h] [xbp-68h]
  _DWORD *v190; // [xsp+D0h] [xbp-60h]
  __int64 *v191; // [xsp+D8h] [xbp-58h]
  __int64 *v192; // [xsp+E0h] [xbp-50h]
  unsigned __int8 *v193; // [xsp+E8h] [xbp-48h]
  int v194; // [xsp+F4h] [xbp-3Ch]
  unsigned int *v195; // [xsp+F8h] [xbp-38h]
  __int64 v196; // [xsp+100h] [xbp-30h] BYREF
  unsigned __int8 *v197; // [xsp+108h] [xbp-28h] BYREF
  unsigned int *v198; // [xsp+110h] [xbp-20h]
  unsigned int *v199; // [xsp+118h] [xbp-18h]
  _DWORD v200[2]; // [xsp+120h] [xbp-10h] BYREF
  __int64 v201; // [xsp+128h] [xbp-8h]
  __int64 vars0; // [xsp+130h] [xbp+0h] BYREF
  unsigned int *vars30; // [xsp+160h] [xbp+30h]
  unsigned int *vars38; // [xsp+168h] [xbp+38h]

  v14 = a1;
  v15 = a2 + 6;
  v16 = a6;
  v17 = *((_DWORD *)a2 + 4);
  v18 = a7;
  v20 = (unsigned int *)a2;
  v21 = (unsigned int *)(a1 + 104);
  v22 = a3;
  v23 = a5;
  v24 = 0;
  v201 = qword_48DD60;
  if ( (v17 & 1) == 0 )
  {
    v24 = *(_QWORD *)(a1 + 144);
    if ( *(_QWORD *)(a1 + 104) )
      v24 ^= qword_48DD68;
  }
  if ( !a7 )
  {
    if ( a5 )
      a2 = a5;
    v10 = (unsigned int *)*((_QWORD *)v20 + 1);
    if ( a6 )
      v25 = &v196;
    else
      v25 = 0;
    v11 = (unsigned int *)*a2;
    v196 = 0;
    if ( a8 )
    {
      v37 = (unsigned int *)*((_QWORD *)v20 + 4);
      v38 = *v37 & 7;
      if ( v38 )
      {
        if ( a5 )
        {
          sub_41F250("outbufstart == NULL", "../iconv/skeleton.c", 467, "__gconv_transform_internal_utf8");
        }
        else
        {
          v39 = *(_QWORD *)a3;
          v198 = *(unsigned int **)v22;
          v199 = v11;
          if ( v38 <= 4 )
          {
            v40 = v200;
            v41 = v37 + 1;
            v42 = v200;
            v8 = 0;
            do
            {
              v43 = *((_BYTE *)v41 + v8++);
              *v42++ = v43;
            }
            while ( v8 < (*v37 & 7) );
            if ( (unsigned __int64)a4 >= v39 - v8 + 4 )
            {
              v44 = (unsigned int *)(v39 + 1);
              if ( v11 >= v10 )
                goto LABEL_118;
              do
              {
                v9 = (unsigned int *)v8++;
                v198 = v44;
                v45 = v8 <= 3 && a4 > (unsigned __int8 *)v44;
                *((_BYTE *)v200 + v8 - 1) = *((_BYTE *)v44 - 1);
                v44 = (unsigned int *)((char *)v44 + 1);
              }
              while ( v45 );
              v46 = v200[0];
              v198 = v200;
              if ( v200[0] <= 0x7Fu )
              {
                v199 = (unsigned int *)((char *)v11 + 1);
                goto LABEL_60;
              }
              if ( (unsigned int)(v200[0] - 55296) > 0x7FF && v200[0] >= 0 )
              {
                if ( v200[0] <= 0x7FFu )
                {
                  v73 = 2;
                }
                else
                {
                  if ( v200[0] <= 0xFFFFu )
                    goto LABEL_184;
                  if ( v200[0] <= 0x1FFFFFu )
                    v73 = 4;
                  else
                    v73 = (v200[0] > 0x3FFFFFFu) + 5LL;
                }
                goto LABEL_139;
              }
              if ( !v25 )
                goto LABEL_164;
              if ( (v17 & 8) == 0 )
              {
                if ( (v17 & 2) == 0 )
                  goto LABEL_164;
                v9 = v200;
                goto LABEL_162;
              }
              v186 = v14;
              v187 = v25;
              v188 = v37;
              v189 = (unsigned int *)(v14 + 104);
              v190 = v15;
              LODWORD(v191) = v17;
              v192 = a6;
              LODWORD(v193) = 0;
              v194 = a8;
              v195 = v200;
              v78 = sub_41D410(v14, v20);
              v14 = v186;
              v25 = v187;
              v12 = v78;
              v37 = v188;
              v21 = v189;
              v58 = v78 == 6;
              v16 = v192;
              v40 = v200;
              v47 = (__int64)v198;
              v79 = (char)v191;
              v18 = 0;
              a8 = v194;
              if ( v58 )
              {
LABEL_180:
                v9 = (unsigned int *)v47;
                if ( (v79 & 2) == 0 )
                {
LABEL_163:
                  if ( (_DWORD *)v47 != v40 )
                    goto LABEL_61;
LABEL_164:
                  v10 = vars30;
                  v11 = vars38;
                  v12 = 6;
                  goto LABEL_30;
                }
LABEL_162:
                v77 = *v25;
                v47 = (__int64)(v9 + 1);
                v198 = v9 + 1;
                *v25 = v77 + 1;
                goto LABEL_163;
              }
              if ( (_DWORD)v12 == 5 )
              {
                if ( v198 == v195 )
                  goto LABEL_118;
                goto LABEL_61;
              }
              if ( v198 != v195 )
                goto LABEL_61;
              if ( (_DWORD)v12 != 7 )
              {
                if ( !(_DWORD)v12 )
                  goto LABEL_126;
LABEL_79:
                v10 = vars30;
                v11 = vars38;
                goto LABEL_30;
              }
              if ( v8 == 4 )
              {
LABEL_179:
                v47 = sub_41F250(
                        "inend != &bytebuf[MAX_NEEDED_INPUT]",
                        "../iconv/loop.c",
                        403,
                        "internal_utf8_loop_single");
                goto LABEL_180;
              }
              v80 = *v188 & 0xFFFFFFF8;
              *(_QWORD *)v22 += v8 - (*v188 & 7LL);
              if ( (__int64)v8 <= v80 )
              {
LABEL_178:
                sub_41F250("inend - inptr > (state->__count & ~7)", "../iconv/loop.c", 413, "internal_utf8_loop_single");
                goto LABEL_179;
              }
              if ( v8 <= 4 )
              {
                v9 = (unsigned int *)((char *)v9 + 2);
                v81 = 1;
                *v37 = v80 | v8;
                v23 = (unsigned __int8 **)((char *)v37 + 3);
                do
                {
                  *((_BYTE *)v23 + v81) = *((_BYTE *)v200 + v81 - 1);
                  ++v81;
                }
                while ( v9 != (unsigned int *)v81 );
LABEL_130:
                v10 = vars30;
                v11 = vars38;
                v12 = 7;
                goto LABEL_30;
              }
LABEL_177:
              sub_41F250(
                "inend - inptr <= sizeof (state->__value.__wchb)",
                "../iconv/loop.c",
                414,
                "internal_utf8_loop_single");
              goto LABEL_178;
            }
            *(_QWORD *)v22 = a4;
            v70 = (unsigned __int64)&a4[v8 - v39];
            if ( v70 <= 4 )
            {
              v71 = (unsigned int *)(v39 + 1);
              if ( v8 < v70 )
              {
                do
                {
                  v198 = v71;
                  v71 = (unsigned int *)((char *)v71 + 1);
                  *((_BYTE *)v41 + v8++) = *((_BYTE *)v71 - 2);
                }
                while ( v70 != v8 );
              }
              goto LABEL_130;
            }
            sub_41F250(
              "inlen_after <= sizeof (state->__value.__wchb)",
              "../iconv/loop.c",
              338,
              "internal_utf8_loop_single");
LABEL_188:
            sub_41F250(
              "cnt_after <= sizeof (data->__statep->__value.__wchb)",
              "../iconv/skeleton.c",
              647,
              "__gconv_transform_internal_utf8");
LABEL_189:
            v82 = sub_41F250(
                    "inptr - bytebuf > (state->__count & 7)",
                    "../iconv/loop.c",
                    385,
                    "internal_utf8_loop_single");
            v174 = &vars0;
            v175 = v13;
            v184 = v24;
            v185 = v12;
            v89 = v83;
            v176 = v8;
            v177 = a4;
            v90 = *(_DWORD *)(v83 + 16);
            v178 = v20;
            v179 = v9;
            v91 = v86;
            v92 = v85;
            v180 = v10;
            v181 = v11;
            v93 = v84;
            v182 = v23;
            v183 = v22;
            v95 = v94;
            v173 = qword_48DD60;
            v164 = v88;
            v165 = 0;
            v166 = v82 + 104;
            v167 = v83 + 48;
            if ( (v90 & 1) == 0 )
            {
              v165 = *(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(v82 + 144);
              if ( *(_QWORD *)(v82 + 104) )
                v165 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(v82 + 144) ^ qword_48DD68);
            }
            if ( v87 )
            {
              if ( !v85 )
              {
                **(_QWORD **)(v83 + 32) = 0;
                if ( (*(_DWORD *)(v83 + 16) & 1) != 0 )
                {
                  LODWORD(v23) = 0;
                  goto LABEL_244;
                }
                if ( v173 == qword_48DD60 )
                  __asm { BR              X16 }
                goto LABEL_380;
              }
              sub_41F250("outbufstart == NULL", "../iconv/skeleton.c", 350, "__gconv_transform_utf8_internal");
            }
            else
            {
              a4 = (unsigned __int8 *)&v169;
              if ( v85 )
                v96 = v85;
              else
                v96 = (unsigned int **)v83;
              if ( v86 )
                v97 = &v169;
              else
                v97 = 0;
              v12 = *(_QWORD *)(v89 + 8);
              v11 = *v96;
              v168 = v97;
              v169 = 0;
              if ( !v88 || (v112 = *(int **)(v89 + 32), (v113 = *v112 & 7) == 0) )
              {
                a4 = *v84;
                goto LABEL_201;
              }
              if ( !v85 )
              {
                v114 = v112[1];
                v115 = *v112 >> 8;
                v116 = (unsigned __int8)*v112;
                v117 = *v93;
                v171 = byte_4566C8[v115 - 2];
                do
                {
                  v118 = v115--;
                  if ( v116 > v115 )
                    v172[v118 - 2] = v114 & 0x3F | 0x80;
                  v114 >>= 6;
                }
                while ( v115 > 1 );
                v119 = v11 + 1;
                v120 = v114 | v171;
                if ( v12 < (unsigned __int64)(v11 + 1) )
                {
                  LODWORD(v23) = 5;
                  goto LABEL_244;
                }
                v121 = v117;
                v122 = &v171;
                v171 = v120;
                do
                {
                  ++v116;
                  v123 = *v121++;
                  v172[v116 - 2] = v123;
                }
                while ( v116 != 6 && v95 > (unsigned __int64)v121 );
                v124 = v171;
                if ( v171 <= 0x7Fu )
                {
                  *v11 = v171;
                  v125 = 1;
                  v113 = *v112 & 7;
                  goto LABEL_262;
                }
                while ( 1 )
                {
                  v148 = v124 - 194;
                  v149 = (char *)&v122[v116];
                  if ( (unsigned int)(v124 - 194) > 0x1D )
                  {
                    if ( (v124 & 0xF0) != 0xE0 )
                      goto LABEL_384;
                    v150 = 3;
                    v151 = v124 & 0xF;
                    v152 = 3;
                  }
                  else
                  {
                    v150 = 2;
                    v151 = v124 & 0x1F;
                    v152 = 2;
                  }
LABEL_328:
                  v153 = v172;
                  v154 = 1;
                  if ( v149 < (char *)&v122[v150] )
                    break;
                  while ( (*v153 & 0xC0) == 0x80 )
                  {
                    ++v154;
                    v151 = *v153++ & 0x3F | (v151 << 6);
                    if ( v152 == v154 )
                      goto LABEL_338;
                  }
                  if ( v152 > v154 )
                    goto LABEL_333;
LABEL_338:
                  if ( v152 != 2 && !(v151 >> (5 * v152 - 4)) || v151 - 55296 <= 0x7FF )
                    goto LABEL_333;
                  *v11 = v151;
                  v125 = v150;
                  v113 = *v112 & 7;
LABEL_262:
                  if ( v125 <= v113 )
                  {
                    sub_41F250(
                      "inptr - bytebuf > (state->__count & 7)",
                      "../iconv/loop.c",
                      385,
                      "utf8_internal_loop_single",
                      v122);
                    goto LABEL_395;
                  }
                  v90 = *(_DWORD *)(v89 + 16);
                  a4 = &v117[v125 - v113];
                  *v93 = a4;
                  v11 = v119;
                  *v112 = 0;
LABEL_201:
                  while ( 2 )
                  {
                    if ( (unsigned __int8 *)v95 != a4 )
                    {
                      v98 = v11 + 1;
                      v99 = a4;
                      v9 = v11;
                      if ( v12 >= (unsigned __int64)(v11 + 1) )
                      {
                        LODWORD(v23) = 4;
                        goto LABEL_207;
                      }
                      goto LABEL_219;
                    }
                    v99 = (unsigned __int8 *)v95;
                    v9 = v11;
                    LODWORD(v23) = 4;
LABEL_220:
                    *v93 = v99;
                    if ( v92 )
                    {
LABEL_243:
                      *v92 = v9;
                      goto LABEL_244;
                    }
LABEL_221:
                    v108 = *(_DWORD *)(v89 + 16);
                    ++*(_DWORD *)(v89 + 20);
                    if ( (v108 & 1) != 0 )
                    {
                      v137 = *v91;
                      *(_QWORD *)v89 = v9;
                      *v91 = v137 + v169;
                      goto LABEL_285;
                    }
                    if ( v9 <= v11 )
                    {
                      v109 = (int)v23;
                      goto LABEL_225;
                    }
                    v170 = *(unsigned int **)v89;
                    v109 = v165(v166, v167, &v170, v9, 0, v91, 0, v164);
                    if ( v109 == 4 )
                    {
                      v109 = (int)v23;
                      if ( (_DWORD)v23 != 5 )
                        goto LABEL_225;
                      goto LABEL_226;
                    }
                    v110 = (unsigned __int64)v170;
                    if ( v170 == v9 )
                      goto LABEL_225;
                    v126 = *(_DWORD *)(v89 + 16);
                    *v93 = a4;
                    if ( (unsigned __int8 *)v95 != a4 )
                    {
                      v127 = v11 + 1;
                      v128 = v11;
                      if ( v110 < (unsigned __int64)(v11 + 1) )
                      {
                        if ( (unsigned int *)v110 == v11 )
                          goto LABEL_267;
LABEL_306:
                        LOBYTE(v100) = sub_41F250(
                                         "outbuf == outerr",
                                         "../iconv/skeleton.c",
                                         594,
                                         "__gconv_transform_utf8_internal");
                        goto LABEL_307;
                      }
LABEL_282:
                      v136 = a4 + 1;
                      v130 = *a4;
                      if ( v130 > 0x7F )
                      {
                        if ( v130 - 194 <= 0x1D )
                        {
                          v129 = 2;
                          v130 &= 0x1Fu;
                          v131 = 2;
                          goto LABEL_270;
                        }
                        if ( (v130 & 0xF0) == 0xE0 )
                        {
                          v129 = 3;
                          v130 &= 0xFu;
                          v131 = 3;
                          goto LABEL_270;
                        }
                        if ( (v130 & 0xF8) == 0xF0 )
                        {
                          v129 = 4;
                          v130 &= 7u;
                          v131 = 4;
                          goto LABEL_270;
                        }
LABEL_392:
                        if ( (v130 & 0xFC) == 0xF8 )
                        {
                          v129 = 5;
                          v130 &= 3u;
                          v131 = 5;
                          goto LABEL_270;
                        }
                        if ( (v130 & 0xFE) != 0xFC )
                        {
                          v163 = 1;
                          while ( 1 )
                          {
                            i = v163;
                            if ( v95 <= (unsigned __int64)&a4[v163] || (a4[v163] & 0xC0) != 0x80 )
                              goto LABEL_303;
                            if ( ++v163 == 6 )
                            {
                              i = 5;
                              goto LABEL_303;
                            }
                          }
                        }
                        v129 = 6;
                        v130 &= 1u;
                        v131 = 6;
LABEL_270:
                        v132 = &a4[v129];
                        v133 = 1;
                        if ( v95 < (unsigned __int64)v132 )
                        {
                          for ( i = 1; v95 > (unsigned __int64)v136; v136 = &a4[++i] )
                          {
                            if ( (*v136 & 0xC0) != 0x80 )
                              break;
                          }
                          if ( (unsigned __int8 *)v95 == v136 )
                          {
LABEL_305:
                            *v93 = a4;
                            if ( (unsigned int *)v110 == v128 )
                              goto LABEL_325;
                            goto LABEL_306;
                          }
LABEL_303:
                          if ( !v168 || (v126 & 2) == 0 )
                            goto LABEL_305;
                          a4 += i;
                          ++*v168;
LABEL_280:
                          if ( a4 == (unsigned __int8 *)v95 )
                          {
                            *v93 = a4;
                            if ( v128 != (unsigned int *)v110 )
                              goto LABEL_306;
                            goto LABEL_325;
                          }
                          v127 = v128 + 1;
                          if ( v110 < (unsigned __int64)(v128 + 1) )
                          {
                            *v93 = a4;
                            if ( v128 != (unsigned int *)v110 )
                              goto LABEL_306;
                            if ( v128 != v11 )
                              goto LABEL_225;
LABEL_267:
                            --*(_DWORD *)(v89 + 20);
LABEL_225:
                            if ( !v109 )
                            {
LABEL_226:
                              a4 = *v93;
                              v11 = *(unsigned int **)v89;
                              v90 = *(_DWORD *)(v89 + 16);
                              continue;
                            }
                            LODWORD(v23) = v109;
LABEL_285:
                            if ( v164 )
                              v138 = (_DWORD)v23 == 7;
                            else
                              v138 = 0;
                            if ( !v138 )
                            {
LABEL_244:
                              if ( v173 == qword_48DD60 )
                                return (unsigned int)v23;
LABEL_380:
                              LOBYTE(v100) = sub_412340();
LABEL_381:
                              if ( (v100 & 0xFE) == 0xFC )
                              {
                                v102 = 6;
                                v100 &= 1u;
                                v103 = 6;
LABEL_210:
                                v104 = &v99[v102];
                                v105 = 1;
                                if ( v95 >= (unsigned __int64)&v99[v102] )
                                  goto LABEL_213;
LABEL_237:
                                for ( j = 1; v95 > (unsigned __int64)v101; v101 = &v99[++j] )
                                {
                                  if ( (*v101 & 0xC0) != 0x80 )
                                    break;
                                }
                                if ( (unsigned __int8 *)v95 == v101 )
                                {
                                  *v93 = v99;
                                  LODWORD(v23) = 7;
                                  if ( v92 )
                                    goto LABEL_243;
                                  goto LABEL_221;
                                }
                              }
                              else
                              {
                                v111 = 1;
                                while ( 1 )
                                {
                                  j = v111;
                                  if ( v95 <= (unsigned __int64)&v99[v111] || (v99[v111] & 0xC0) != 0x80 )
                                    break;
                                  if ( ++v111 == 6 )
                                  {
                                    j = 5;
                                    break;
                                  }
                                }
                              }
                              while ( 2 )
                              {
                                if ( v168 && (v90 & 2) != 0 )
                                {
                                  v99 += j;
                                  LODWORD(v23) = 6;
                                  ++*v168;
LABEL_205:
                                  if ( (unsigned __int8 *)v95 != v99 )
                                  {
                                    v98 = v9 + 1;
                                    if ( v12 >= (unsigned __int64)(v9 + 1) )
                                    {
LABEL_207:
                                      v101 = v99 + 1;
                                      v100 = *v99;
                                      if ( v100 <= 0x7F )
                                        goto LABEL_204;
                                      if ( v100 - 194 <= 0x1D )
                                      {
                                        v102 = 2;
                                        v100 &= 0x1Fu;
                                        v103 = 2;
                                        goto LABEL_210;
                                      }
                                      if ( (v100 & 0xF0) == 0xE0 )
                                      {
                                        v104 = v99 + 3;
                                        v100 &= 0xFu;
                                        v103 = 3;
                                        v105 = 1;
                                        if ( v95 < (unsigned __int64)(v99 + 3) )
                                          goto LABEL_237;
                                        do
                                        {
LABEL_213:
                                          v106 = v99[v105];
                                          j = v105;
                                          if ( (v106 & 0xC0) != 0x80 )
                                            goto LABEL_214;
                                          ++v105;
                                          v100 = v106 & 0x3F | (v100 << 6);
                                        }
                                        while ( v103 > (unsigned int)v105 );
                                        ++j;
LABEL_214:
                                        if ( j < v103 || v103 != 2 && !(v100 >> (5 * v103 - 4)) || v100 - 55296 <= 0x7FF )
                                          continue;
                                        v101 = v104;
LABEL_204:
                                        v99 = v101;
                                        *v9 = v100;
                                        v9 = v98;
                                        goto LABEL_205;
                                      }
LABEL_307:
                                      if ( (v100 & 0xF8) == 0xF0 )
                                      {
                                        v102 = 4;
                                        v100 &= 7u;
                                        v103 = 4;
                                      }
                                      else
                                      {
                                        if ( (v100 & 0xFC) != 0xF8 )
                                          goto LABEL_381;
                                        v102 = 5;
                                        v100 &= 3u;
                                        v103 = 5;
                                      }
                                      goto LABEL_210;
                                    }
LABEL_219:
                                    LODWORD(v23) = 5;
                                  }
                                }
                                else
                                {
                                  LODWORD(v23) = 6;
                                }
                                goto LABEL_220;
                              }
                            }
                            v139 = *v93;
                            v140 = *(_DWORD **)(v89 + 32);
                            v141 = v95 - (_QWORD)*v93;
                            v142 = **v93;
                            *v140 = v141;
                            if ( (unsigned int)(v142 - 192) > 1 )
                            {
                              if ( (unsigned int)(v142 - 194) > 0x1D )
                              {
                                if ( (v142 & 0xF0) == 0xE0 )
                                {
                                  v143 = v142 & 0xF;
                                  v144 = 2;
                                  v145 = 768;
                                }
                                else if ( (v142 & 0xF8) == 0xF0 )
                                {
                                  v143 = v142 & 7;
                                  v144 = 3;
                                  v145 = 1024;
                                }
                                else if ( (v142 & 0xFC) == 0xF8 )
                                {
                                  v143 = v142 & 3;
                                  v144 = 4;
                                  v145 = 1280;
                                }
                                else
                                {
                                  v143 = v142 & 1;
                                  v144 = 5;
                                  v145 = 1536;
                                }
                              }
                              else
                              {
                                v143 = v142 & 0x1F;
                                v144 = 1;
                                v145 = 512;
                              }
                              v146 = v139 + 1;
                              *v93 = v139 + 1;
                              if ( (unsigned __int64)(v139 + 1) < v95 )
                              {
                                do
                                {
                                  v147 = *v146++;
                                  *v93 = v146;
                                  v143 = v147 & 0x3F | (v143 << 6);
                                }
                                while ( v146 != (unsigned __int8 *)v95 );
                                v144 += 1 - (_BYTE)v146 + (_BYTE)v139;
                              }
                              *v140 = v145 | v141;
                              v140[1] = v143 << (6 * v144);
                              goto LABEL_244;
                            }
                            LOBYTE(v124) = sub_41F250(
                                             "ch != 0xc0 && ch != 0xc1",
                                             "../iconv/skeleton.c",
                                             642,
                                             "__gconv_transform_utf8_internal");
LABEL_384:
                            if ( (v124 & 0xF8) == 0xF0 )
                            {
                              v150 = 4;
                              v151 = v124 & 7;
                              v152 = 4;
                              goto LABEL_328;
                            }
                            if ( (v124 & 0xFC) == 0xF8 )
                            {
                              v150 = 5;
                              v151 = v124 & 3;
                              v152 = 5;
                              goto LABEL_328;
                            }
                            if ( (v124 & 0xFE) == 0xFC )
                            {
                              v150 = 6;
                              v151 = v124 & 1;
                              v152 = 6;
                              goto LABEL_328;
                            }
LABEL_395:
                            v162 = v172;
                            v154 = 0;
                            do
                            {
                              ++v154;
                              if ( v149 <= v162 )
                                break;
                              if ( (*v162 & 0xC0) != 0x80 )
                                break;
                              ++v162;
                            }
                            while ( v154 != 5 );
LABEL_333:
                            if ( !v168 || (v90 & 2) == 0 || (++*v168, !v154) )
                            {
                              LODWORD(v23) = 6;
                              goto LABEL_244;
                            }
                            v125 = v154;
                            v119 = v11;
                            goto LABEL_262;
                          }
                          goto LABEL_282;
                        }
                        while ( 1 )
                        {
                          v134 = a4[v133];
                          i = v133;
                          if ( (v134 & 0xC0) != 0x80 )
                            break;
                          ++v133;
                          v130 = v134 & 0x3F | (v130 << 6);
                          if ( v131 <= (unsigned int)v133 )
                          {
                            ++i;
                            break;
                          }
                        }
                        if ( i < v131 || v131 != 2 && !(v130 >> (5 * v131 - 4)) || v130 - 55296 <= 0x7FF )
                          goto LABEL_303;
                        v136 = v132;
                      }
                      a4 = v136;
                      *v128 = v130;
                      v128 = v127;
                      goto LABEL_280;
                    }
                    break;
                  }
                  if ( (unsigned int *)v110 != v11 )
                    goto LABEL_306;
LABEL_325:
                  v124 = sub_41F250(
                           "nstatus == __GCONV_FULL_OUTPUT",
                           "../iconv/skeleton.c",
                           595,
                           "__gconv_transform_utf8_internal");
                }
                if ( v149 <= v172 )
                {
                  if ( v116 != 1 )
                    goto LABEL_333;
                }
                else
                {
                  v155 = v172;
                  do
                  {
                    if ( (*v155 & 0xC0) != 0x80 )
                      break;
                    v155 = (char *)&v122[++v154];
                  }
                  while ( v149 > v155 );
                  if ( v149 != v155 )
                    goto LABEL_333;
                  if ( v116 == 6 )
                  {
                    LOBYTE(v124) = sub_41F250(
                                     "inend != &bytebuf[MAX_NEEDED_INPUT]",
                                     "../iconv/loop.c",
                                     403,
                                     "utf8_internal_loop_single");
                    goto LABEL_368;
                  }
                }
                v156 = v116;
                *v93 = &v117[v116 - v113];
                if ( v148 <= 0x1D )
                {
                  v157 = v124 & 0x1F;
                  v158 = 512;
                  v159 = 1;
LABEL_360:
                  if ( v149 > v153 )
                  {
                    v160 = v153;
                    do
                    {
                      v161 = *v160++;
                      v157 = v161 & 0x3F | (v157 << 6);
                    }
                    while ( v160 != v149 );
                    v159 += (_BYTE)v153 - (_BYTE)v160;
                  }
                  LODWORD(v23) = 7;
                  *v112 = v156 | v158;
                  v112[1] = v157 << (6 * v159);
                  goto LABEL_244;
                }
                if ( (v124 & 0xF0) == 0xE0 )
                {
                  v157 = v124 & 0xF;
                  v158 = 768;
                  v159 = 2;
                  goto LABEL_360;
                }
LABEL_368:
                if ( (v124 & 0xF8) == 0xF0 )
                {
                  v157 = v124 & 7;
                  v158 = 1024;
                  v159 = 3;
                }
                else if ( (v124 & 0xFC) == 0xF8 )
                {
                  v157 = v124 & 3;
                  v158 = 1280;
                  v159 = 4;
                }
                else
                {
                  v157 = v124 & 1;
                  v158 = 1536;
                  v159 = 5;
                }
                goto LABEL_360;
              }
            }
            v109 = sub_41F250("outbufstart == NULL", "../iconv/skeleton.c", 467, "__gconv_transform_utf8_internal");
            goto LABEL_392;
          }
        }
        sub_41F250(
          "(state->__count & 7) <= sizeof (state->__value)",
          "../iconv/loop.c",
          309,
          "internal_utf8_loop_single");
        goto LABEL_177;
      }
    }
    v26 = *(_QWORD *)a3;
LABEL_12:
    v27 = a4;
    v8 = (unsigned __int64)v20;
    a4 = (unsigned __int8 *)v11;
    v20 = (unsigned int *)v26;
    v11 = (unsigned int *)v27;
    v9 = v10;
    v10 = (unsigned int *)v22;
    LODWORD(v186) = a8;
    v187 = v16;
    v188 = v21;
    v189 = v15;
    LODWORD(v190) = v18;
    v191 = v25;
    v192 = (__int64 *)v14;
    while ( 1 )
    {
      v22 = a4;
      v198 = v20;
      v199 = (unsigned int *)a4;
      if ( v11 == v20 )
      {
        v28 = v11;
        v12 = 4;
        goto LABEL_21;
      }
      v28 = v20;
      v12 = 4;
      while ( 1 )
      {
        if ( v11 < v28 + 1 )
        {
          *(_QWORD *)v10 = v198;
          v12 = 7;
          if ( v23 )
          {
LABEL_29:
            v10 = vars30;
            v11 = vars38;
            *v23 = v22;
            goto LABEL_30;
          }
          goto LABEL_22;
        }
        if ( v9 <= (unsigned int *)v22 )
          goto LABEL_32;
        v29 = *v28;
        if ( v29 <= 0x7F )
        {
          v199 = (unsigned int *)(v22 + 1);
LABEL_19:
          *v22 = v29;
          v22 = (unsigned __int8 *)v199;
          v28 = ++v198;
          goto LABEL_20;
        }
        if ( v29 - 55296 > 0x7FF && (v29 & 0x80000000) == 0 )
          break;
        if ( !v191 )
        {
          v28 = v198;
          v12 = 6;
          goto LABEL_21;
        }
        if ( (*(_DWORD *)(v8 + 16) & 8) != 0 )
        {
          LODWORD(v193) = v17;
          v64 = sub_41D410(v192, v8);
          v12 = v64;
          v17 = (unsigned int)v193;
          if ( v64 != 6 )
          {
            v28 = v198;
            v22 = (unsigned __int8 *)v199;
            if ( (_DWORD)v12 == 5 )
              goto LABEL_21;
            goto LABEL_20;
          }
          v22 = (unsigned __int8 *)v199;
        }
        v28 = v198;
        if ( (v17 & 2) == 0 )
        {
          v12 = 6;
          goto LABEL_21;
        }
        v28 = v198 + 1;
        v12 = 6;
        ++v198;
        ++*v191;
LABEL_20:
        if ( v11 == v28 )
          goto LABEL_21;
      }
      if ( v29 <= 0x7FF )
      {
        v35 = 2;
      }
      else if ( v29 <= 0xFFFF )
      {
        v35 = 3;
      }
      else if ( v29 <= 0x1FFFFF )
      {
        v35 = 4;
      }
      else
      {
        v35 = (v29 > 0x3FFFFFF) + 5LL;
      }
      if ( v9 >= (unsigned int *)&v22[v35] )
      {
        *v22 = -256 >> v35;
        v199 = (unsigned int *)((char *)v199 + v35);
        do
        {
          --v35;
          v36 = v29 & 0x3F | 0x80;
          v29 >>= 6;
          v22[v35] = v36;
        }
        while ( v35 != 1 );
        LOBYTE(v29) = v29 | *v22;
        goto LABEL_19;
      }
LABEL_32:
      v28 = v198;
      v12 = 5;
LABEL_21:
      *(_QWORD *)v10 = v28;
      if ( v23 )
        goto LABEL_29;
LABEL_22:
      v30 = *(_DWORD *)(v8 + 16);
      ++*(_DWORD *)(v8 + 20);
      if ( (v30 & 1) != 0 )
        goto LABEL_74;
      if ( v22 <= a4 )
      {
        v31 = v12;
        goto LABEL_26;
      }
      v197 = *(unsigned __int8 **)v8;
      v31 = ((__int64 (__fastcall *)(unsigned int *, unsigned int *, unsigned __int8 **, unsigned __int8 *, _QWORD, __int64 *, _QWORD, _QWORD))v24)(
              v188,
              v189,
              &v197,
              v22,
              0,
              v187,
              0,
              (unsigned int)v186);
      if ( v31 == 4 )
      {
        v31 = v12;
        if ( (_DWORD)v12 != 5 )
          goto LABEL_26;
        goto LABEL_27;
      }
      v32 = v197;
      if ( v197 == v22 )
        goto LABEL_26;
      v22 = (unsigned __int8 *)*(unsigned int *)(v8 + 16);
      *(_QWORD *)v10 = v20;
      v198 = v20;
      v199 = (unsigned int *)a4;
      if ( v11 == v20 )
      {
        if ( v32 != a4 )
          goto LABEL_91;
        goto LABEL_73;
      }
      v50 = a4;
      v12 = v31;
      v51 = 4;
      while ( 2 )
      {
        if ( v11 < v20 + 1 )
        {
LABEL_89:
          v9 = v198;
          v22 = (unsigned __int8 *)v10;
          goto LABEL_90;
        }
        if ( v32 <= v50 )
          goto LABEL_92;
        v52 = *v20;
        if ( *v20 <= 0x7F )
        {
          v199 = (unsigned int *)(v50 + 1);
          goto LABEL_69;
        }
        if ( v52 - 55296 > 0x7FF && (v52 & 0x80000000) == 0 )
        {
          if ( v52 <= 0x7FF )
          {
            v62 = 2;
          }
          else if ( v52 <= 0xFFFF )
          {
            v62 = 3;
          }
          else if ( v52 <= 0x1FFFFF )
          {
            v62 = 4;
          }
          else
          {
            v62 = (v52 > 0x3FFFFFF) + 5LL;
          }
          if ( v32 < &v50[v62] )
            goto LABEL_92;
          *v50 = -256 >> v62;
          v199 = (unsigned int *)((char *)v199 + v62);
          do
          {
            --v62;
            v63 = v52 & 0x3F | 0x80;
            v52 >>= 6;
            v50[v62] = v63;
          }
          while ( v62 != 1 );
          LOBYTE(v52) = v52 | *v50;
LABEL_69:
          *v50 = v52;
          v50 = (unsigned __int8 *)v199;
          v20 = ++v198;
LABEL_70:
          if ( v11 == v20 )
          {
            v53 = v197;
            *(_QWORD *)v10 = v11;
            v31 = v12;
            if ( v53 != v50 )
              goto LABEL_91;
            if ( v51 == 5 )
              goto LABEL_93;
            goto LABEL_73;
          }
          continue;
        }
        break;
      }
      if ( !v191 )
        goto LABEL_89;
      if ( (*(_DWORD *)(v8 + 16) & 8) == 0
        || (v193 = v32, v75 = sub_41D410(v192, v8), v51 = v75, v32 = v193, v50 = (unsigned __int8 *)v199, v75 == 6) )
      {
        if ( ((unsigned __int8)v22 & 2) != 0 )
        {
          v20 = v198 + 1;
          v51 = 6;
          ++v198;
          ++*v191;
          goto LABEL_70;
        }
        v22 = (unsigned __int8 *)v10;
        v9 = v198;
LABEL_90:
        v59 = v197;
        *(_QWORD *)v22 = v9;
        if ( v59 != v50 )
          goto LABEL_91;
LABEL_73:
        sub_41F250("nstatus == __GCONV_FULL_OUTPUT", "../iconv/skeleton.c", 595, "__gconv_transform_internal_utf8");
LABEL_74:
        v54 = v187;
        v20 = (unsigned int *)v8;
        v8 = (unsigned __int64)v22;
        v22 = (unsigned __int8 *)v10;
        v55 = v186;
        a4 = (unsigned __int8 *)v11;
        v56 = (int)v190;
        v57 = *v187 + v196;
        *(_QWORD *)v20 = v8;
        *v54 = v57;
LABEL_75:
        if ( v55 )
          v58 = (_DWORD)v12 == 7;
        else
          v58 = 0;
        if ( !v58 )
          goto LABEL_79;
        v65 = *(unsigned int **)v22;
        v66 = (unsigned __int64)&a4[-*(_QWORD *)v22];
        if ( v66 > 4 )
          goto LABEL_188;
        v67 = (unsigned int *)*((_QWORD *)v20 + 4);
        v68 = 0;
        if ( v66 )
        {
          do
          {
            *((_BYTE *)v67 + v68 + 4) = *((_BYTE *)v65 + v68);
            ++v68;
          }
          while ( v66 != v68 );
          v56 = v66;
        }
        v10 = vars30;
        v11 = vars38;
        v69 = *v67 & 0xFFFFFFF8;
        *(_QWORD *)v22 = a4;
        *v67 = v69 | v56;
        while ( 1 )
        {
LABEL_30:
          if ( v201 == qword_48DD60 )
            return (unsigned int)v12;
LABEL_183:
          vars30 = v10;
          vars38 = v11;
          v46 = sub_412340();
LABEL_184:
          v73 = 3;
LABEL_139:
          if ( v10 >= (unsigned int *)((char *)v11 + v73) )
            break;
LABEL_118:
          v10 = vars30;
          v11 = vars38;
          v12 = 5;
        }
        *(_BYTE *)v11 = -256 >> v73;
        v199 = (unsigned int *)((char *)v199 + v73);
        do
        {
          --v73;
          v74 = v46 & 0x3F | 0x80;
          v46 >>= 6;
          *((_BYTE *)v11 + v73) = v74;
        }
        while ( v73 != 1 );
        LOBYTE(v46) = v46 | *(_BYTE *)v11;
LABEL_60:
        *(_BYTE *)v11 = v46;
        v47 = (__int64)(v198 + 1);
        v198 = (unsigned int *)v47;
        if ( (_DWORD *)v47 == v40 )
        {
LABEL_126:
          v26 = *(_QWORD *)v22;
          v17 = v20[4];
        }
        else
        {
LABEL_61:
          v48 = *v37;
          v49 = v47 - (_QWORD)v40;
          if ( v49 <= (*v37 & 7LL) )
            goto LABEL_189;
          v17 = v20[4];
          v26 = *(_QWORD *)v22 + v49 - (v48 & 7);
          *(_QWORD *)v22 = v26;
          v11 = v199;
          *v37 = v48 & 0xFFFFFFF8;
        }
        goto LABEL_12;
      }
      v20 = v198;
      v50 = (unsigned __int8 *)v199;
      if ( v75 != 5 )
        goto LABEL_70;
      v76 = v197;
      *(_QWORD *)v10 = v198;
      v31 = v12;
      if ( v50 != v76 )
      {
        do
        {
LABEL_91:
          sub_41F250("outbuf == outerr", "../iconv/skeleton.c", 594, "__gconv_transform_internal_utf8");
LABEL_92:
          v60 = v197;
          *(_QWORD *)v10 = v198;
          v31 = v12;
        }
        while ( v50 != v60 );
      }
LABEL_93:
      if ( v50 == a4 )
        --*(_DWORD *)(v8 + 20);
LABEL_26:
      if ( v31 )
      {
        v55 = v186;
        v20 = (unsigned int *)v8;
        v56 = (int)v190;
        v22 = (unsigned __int8 *)v10;
        a4 = (unsigned __int8 *)v11;
        v12 = v31;
        goto LABEL_75;
      }
LABEL_27:
      a4 = *(unsigned __int8 **)v8;
      v20 = *(unsigned int **)v10;
      v17 = *(_DWORD *)(v8 + 16);
    }
  }
  if ( a5 )
  {
    vars30 = v10;
    vars38 = v11;
    sub_41F250("outbufstart == NULL", "../iconv/skeleton.c", 350, "__gconv_transform_internal_utf8");
    goto LABEL_183;
  }
  *(_QWORD *)a2[4] = 0;
  if ( ((_DWORD)a2[2] & 1) != 0 )
  {
    v12 = 0;
    goto LABEL_30;
  }
  if ( v201 != qword_48DD60 )
    goto LABEL_183;
  return ((__int64 (__fastcall *)(__int64, _DWORD *, _QWORD, _QWORD, _QWORD, __int64 *, _QWORD))v24)(
           a1 + 104,
           v15,
           0,
           0,
           0,
           a6,
           a7);
}
