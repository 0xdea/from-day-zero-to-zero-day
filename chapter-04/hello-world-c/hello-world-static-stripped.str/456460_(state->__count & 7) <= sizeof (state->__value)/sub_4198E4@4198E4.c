__int64 __fastcall sub_4198E4(
        __int64 a1,
        unsigned __int8 **a2,
        unsigned __int8 *a3,
        unsigned __int8 *a4,
        unsigned __int8 **a5,
        __int64 *a6,
        unsigned int a7,
        __int64 a8,
        long double a9)
{
  unsigned __int64 v9; // x19
  unsigned __int8 *v10; // x22
  unsigned __int8 *v11; // x23
  unsigned __int8 *v12; // x24
  unsigned __int64 v13; // x28
  __int64 v14; // x30
  __int64 v15; // x15
  unsigned __int8 **v16; // x18
  __int64 *v17; // x11
  int v18; // w12
  unsigned int v19; // w8
  unsigned __int8 **v21; // x21
  unsigned __int8 **v22; // x14
  unsigned __int8 *v23; // x26
  unsigned __int8 **v24; // x25
  unsigned __int64 v25; // x27
  __int64 *v26; // x6
  unsigned __int8 **v27; // x22
  unsigned __int8 *v28; // x0
  unsigned __int8 *v29; // x0
  unsigned int v30; // w0
  int v31; // w1
  unsigned int v32; // w0
  unsigned __int8 *v33; // x12
  __int64 v36; // x2
  unsigned __int8 v37; // w3
  unsigned int *v38; // x10
  int v39; // w0
  __int64 v40; // x2
  char *v41; // x9
  _DWORD *v42; // x3
  _BYTE *v43; // x1
  char v44; // w0
  unsigned __int64 v45; // x0
  bool v46; // cc
  unsigned int v47; // w0
  unsigned __int8 *v48; // x0
  unsigned int v49; // w1
  __int64 v50; // x0
  unsigned __int8 *v51; // x1
  int v52; // w4
  unsigned int v53; // w0
  unsigned __int8 *v54; // x2
  __int64 *v55; // x11
  int v56; // w7
  int v57; // w8
  __int64 v58; // x0
  bool v59; // zf
  unsigned __int8 *v60; // x0
  unsigned __int8 *v61; // x3
  __int64 v63; // x2
  unsigned __int8 v64; // w3
  unsigned int v65; // w0
  __int64 v66; // x3
  unsigned __int8 *v67; // x1
  unsigned int *v68; // x4
  unsigned __int8 *v69; // x0
  unsigned int v70; // w0
  unsigned __int8 *v71; // x0
  _DWORD *v72; // x2
  __int64 v74; // x1
  unsigned __int8 v75; // w2
  int v76; // w0
  unsigned __int8 *v77; // x2
  __int64 v78; // x1
  unsigned int v79; // w0
  char v80; // w12
  signed int v81; // w0
  __int64 v82; // x1
  __int64 v83; // x0
  __int64 v84; // x1
  unsigned __int8 **v85; // x2
  unsigned __int8 **v86; // x4
  __int64 *v87; // x5
  int v88; // w6
  unsigned int v89; // w7
  long double v90; // q0
  __int64 v91; // x27
  int v92; // w14
  __int64 *v93; // x19
  unsigned __int8 **v94; // x21
  unsigned __int8 **v95; // x23
  unsigned __int8 *v96; // x3
  unsigned __int8 *v97; // x26
  unsigned __int8 **v98; // x0
  __int64 *v99; // x1
  unsigned __int8 *v100; // x1
  unsigned __int8 *v101; // x6
  unsigned int v102; // w0
  unsigned __int8 *v103; // x8
  __int64 v104; // x2
  unsigned int v105; // w7
  unsigned __int8 *v106; // x16
  __int64 v107; // x5
  unsigned __int8 v108; // w2
  unsigned int j; // w15
  int v110; // w1
  int v111; // w0
  unsigned __int64 v112; // x2
  __int64 v113; // x0
  int *v114; // x5
  int v115; // w6
  unsigned int v116; // w2
  unsigned __int64 v117; // x0
  unsigned __int64 v118; // x1
  unsigned __int8 *v119; // x9
  unsigned __int64 v120; // x3
  unsigned __int8 *v121; // x7
  unsigned __int8 v122; // w0
  unsigned __int8 *v123; // x2
  unsigned __int8 *v124; // x4
  char v125; // t1
  int v126; // w0
  __int64 v127; // x0
  int v128; // w14
  unsigned __int8 *v129; // x6
  unsigned __int8 *v130; // x5
  __int64 v131; // x4
  unsigned int v132; // w1
  unsigned int v133; // w12
  unsigned __int8 *v134; // x15
  __int64 v135; // x4
  unsigned __int8 v136; // w3
  unsigned int i; // w8
  unsigned __int8 *v138; // x3
  __int64 v139; // x0
  bool v140; // zf
  unsigned __int8 *v141; // x5
  _DWORD *v142; // x6
  signed __int64 v143; // x7
  int v144; // w0
  int v145; // w0
  char v146; // w2
  int v147; // w3
  unsigned __int8 *v148; // x1
  char v149; // t1
  unsigned int v150; // w17
  char *v151; // x16
  __int64 v152; // x8
  unsigned int v153; // w15
  unsigned int v154; // w2
  char *v155; // x3
  unsigned int v156; // w12
  char *v157; // x2
  int v158; // w7
  int v159; // w0
  int v160; // w4
  char v161; // w1
  char *v162; // x2
  char v163; // t1
  char *v164; // x0
  __int64 v165; // x1
  unsigned int v166; // [xsp+Ch] [xbp-124h]
  __int64 (__fastcall *v167)(__int64, __int64, unsigned __int8 **, unsigned __int8 *, _QWORD, __int64 *, _QWORD, _QWORD, long double); // [xsp+10h] [xbp-120h]
  __int64 v168; // [xsp+18h] [xbp-118h]
  __int64 v169; // [xsp+20h] [xbp-110h]
  __int64 *v170; // [xsp+28h] [xbp-108h]
  __int64 v171; // [xsp+30h] [xbp-100h] BYREF
  unsigned __int8 *v172; // [xsp+38h] [xbp-F8h] BYREF
  unsigned __int8 v173; // [xsp+40h] [xbp-F0h] BYREF
  _BYTE v174[7]; // [xsp+41h] [xbp-EFh] BYREF
  __int64 v175; // [xsp+48h] [xbp-E8h]
  __int64 *v176; // [xsp+50h] [xbp-E0h]
  __int64 v177; // [xsp+58h] [xbp-D8h]
  unsigned __int64 v178; // [xsp+60h] [xbp-D0h]
  unsigned __int8 *v179; // [xsp+68h] [xbp-C8h]
  unsigned __int8 **v180; // [xsp+70h] [xbp-C0h]
  unsigned __int8 *v181; // [xsp+78h] [xbp-B8h]
  unsigned __int8 *v182; // [xsp+80h] [xbp-B0h]
  unsigned __int8 *v183; // [xsp+88h] [xbp-A8h]
  unsigned __int8 **v184; // [xsp+90h] [xbp-A0h]
  unsigned __int8 *v185; // [xsp+98h] [xbp-98h]
  unsigned __int64 v186; // [xsp+A0h] [xbp-90h]
  unsigned __int64 v187; // [xsp+A8h] [xbp-88h]
  __int64 v188; // [xsp+B0h] [xbp-80h]
  __int64 *v189; // [xsp+B8h] [xbp-78h]
  unsigned int *v190; // [xsp+C0h] [xbp-70h]
  unsigned __int8 **v191; // [xsp+C8h] [xbp-68h]
  unsigned __int8 **v192; // [xsp+D0h] [xbp-60h]
  __int64 *v193; // [xsp+D8h] [xbp-58h]
  __int64 *v194; // [xsp+E0h] [xbp-50h]
  unsigned __int8 *v195; // [xsp+E8h] [xbp-48h]
  int v196; // [xsp+F4h] [xbp-3Ch]
  unsigned __int8 *v197; // [xsp+F8h] [xbp-38h]
  __int64 v198; // [xsp+100h] [xbp-30h] BYREF
  unsigned __int8 *v199; // [xsp+108h] [xbp-28h] BYREF
  unsigned __int8 *v200; // [xsp+110h] [xbp-20h]
  unsigned __int8 *v201; // [xsp+118h] [xbp-18h]
  _DWORD v202[2]; // [xsp+120h] [xbp-10h] BYREF
  __int64 v203; // [xsp+128h] [xbp-8h]
  __int64 vars0; // [xsp+130h] [xbp+0h] BYREF
  unsigned __int8 *vars30; // [xsp+160h] [xbp+30h]
  unsigned __int8 *vars38; // [xsp+168h] [xbp+38h]

  v15 = a1;
  v16 = a2 + 6;
  v17 = a6;
  v18 = *((_DWORD *)a2 + 4);
  v19 = a7;
  v21 = a2;
  v22 = (unsigned __int8 **)(a1 + 104);
  v23 = a3;
  v24 = a5;
  v25 = 0;
  v203 = qword_48DD60;
  if ( (v18 & 1) == 0 )
  {
    v25 = *(_QWORD *)(a1 + 144);
    if ( *(_QWORD *)(a1 + 104) )
      v25 ^= qword_48DD68;
  }
  if ( !a7 )
  {
    if ( a5 )
      a2 = a5;
    v11 = v21[1];
    if ( a6 )
      v26 = &v198;
    else
      v26 = 0;
    v12 = *a2;
    v198 = 0;
    if ( (_DWORD)a8 )
    {
      v38 = (unsigned int *)v21[4];
      v39 = *v38 & 7;
      if ( v39 )
      {
        if ( a5 )
        {
          a9 = sub_41F250(
                 "outbufstart == NULL",
                 "../iconv/skeleton.c",
                 467,
                 "__gconv_transform_internal_utf8",
                 *(double *)&a9);
        }
        else
        {
          v40 = *(_QWORD *)a3;
          v200 = *(unsigned __int8 **)v23;
          v201 = v12;
          if ( v39 <= 4 )
          {
            v41 = (char *)v202;
            v42 = v38 + 1;
            v43 = v202;
            v9 = 0;
            do
            {
              v44 = *((_BYTE *)v42 + v9++);
              *v43++ = v44;
            }
            while ( v9 < (*v38 & 7) );
            if ( (unsigned __int64)a4 >= v40 - v9 + 4 )
            {
              v45 = v40 + 1;
              if ( v12 >= v11 )
                goto LABEL_118;
              do
              {
                v10 = (unsigned __int8 *)v9++;
                v200 = (unsigned __int8 *)v45;
                v46 = v9 <= 3 && (unsigned __int64)a4 > v45;
                *((_BYTE *)v202 + v9 - 1) = *(_BYTE *)(v45++ - 1);
              }
              while ( v46 );
              v47 = v202[0];
              v200 = (unsigned __int8 *)v202;
              if ( v202[0] <= 0x7Fu )
              {
                v201 = v12 + 1;
                goto LABEL_60;
              }
              if ( (unsigned int)(v202[0] - 55296) > 0x7FF && v202[0] >= 0 )
              {
                if ( v202[0] <= 0x7FFu )
                {
                  v74 = 2;
                }
                else
                {
                  if ( v202[0] <= 0xFFFFu )
                    goto LABEL_184;
                  if ( v202[0] <= 0x1FFFFFu )
                    v74 = 4;
                  else
                    v74 = (v202[0] > 0x3FFFFFFu) + 5LL;
                }
                goto LABEL_139;
              }
              if ( !v26 )
                goto LABEL_164;
              if ( (v18 & 8) == 0 )
              {
                if ( (v18 & 2) == 0 )
                  goto LABEL_164;
                v10 = (unsigned __int8 *)v202;
                goto LABEL_162;
              }
              v188 = v15;
              v189 = v26;
              v190 = v38;
              v191 = (unsigned __int8 **)(v15 + 104);
              v192 = v16;
              LODWORD(v193) = v18;
              v194 = a6;
              LODWORD(v195) = 0;
              v196 = a8;
              v197 = (unsigned __int8 *)v202;
              v79 = sub_41D410(v15, v21);
              v15 = v188;
              v26 = v189;
              v13 = v79;
              v38 = v190;
              v22 = v191;
              v59 = v79 == 6;
              v17 = v194;
              v41 = (char *)v202;
              v48 = v200;
              v80 = (char)v193;
              v19 = 0;
              LODWORD(a8) = v196;
              if ( v59 )
              {
LABEL_180:
                v10 = v48;
                if ( (v80 & 2) == 0 )
                {
LABEL_163:
                  if ( v48 != (unsigned __int8 *)v41 )
                    goto LABEL_61;
LABEL_164:
                  v11 = vars30;
                  v12 = vars38;
                  v13 = 6;
                  goto LABEL_30;
                }
LABEL_162:
                v78 = *v26;
                v48 = v10 + 4;
                v200 = v10 + 4;
                *v26 = v78 + 1;
                goto LABEL_163;
              }
              if ( (_DWORD)v13 == 5 )
              {
                if ( v200 == v197 )
                  goto LABEL_118;
                goto LABEL_61;
              }
              if ( v200 != v197 )
                goto LABEL_61;
              if ( (_DWORD)v13 != 7 )
              {
                if ( !(_DWORD)v13 )
                  goto LABEL_126;
LABEL_79:
                v11 = vars30;
                v12 = vars38;
                goto LABEL_30;
              }
              if ( v9 == 4 )
              {
LABEL_179:
                a9 = sub_41F250(
                       "inend != &bytebuf[MAX_NEEDED_INPUT]",
                       "../iconv/loop.c",
                       403,
                       "internal_utf8_loop_single",
                       *(double *)&a9);
                goto LABEL_180;
              }
              v81 = *v190 & 0xFFFFFFF8;
              *(_QWORD *)v23 += v9 - (*v190 & 7LL);
              if ( (__int64)v9 <= v81 )
              {
LABEL_178:
                a9 = sub_41F250(
                       "inend - inptr > (state->__count & ~7)",
                       "../iconv/loop.c",
                       413,
                       "internal_utf8_loop_single",
                       *(double *)&a9);
                goto LABEL_179;
              }
              if ( v9 <= 4 )
              {
                v10 += 2;
                v82 = 1;
                *v38 = v81 | v9;
                v24 = (unsigned __int8 **)((char *)v38 + 3);
                do
                {
                  *((_BYTE *)v24 + v82) = *((_BYTE *)v202 + v82 - 1);
                  ++v82;
                }
                while ( v10 != (unsigned __int8 *)v82 );
LABEL_130:
                v11 = vars30;
                v12 = vars38;
                v13 = 7;
                goto LABEL_30;
              }
LABEL_177:
              a9 = sub_41F250(
                     "inend - inptr <= sizeof (state->__value.__wchb)",
                     "../iconv/loop.c",
                     414,
                     "internal_utf8_loop_single",
                     *(double *)&a9);
              goto LABEL_178;
            }
            *(_QWORD *)v23 = a4;
            v71 = &a4[v9 - v40];
            if ( (unsigned __int64)v71 <= 4 )
            {
              v72 = (_DWORD *)(v40 + 1);
              if ( v9 < (unsigned __int64)v71 )
              {
                do
                {
                  v200 = (unsigned __int8 *)v72;
                  v72 = (_DWORD *)((char *)v72 + 1);
                  *((_BYTE *)v42 + v9++) = *((_BYTE *)v72 - 2);
                }
                while ( v71 != (unsigned __int8 *)v9 );
              }
              goto LABEL_130;
            }
            a9 = sub_41F250(
                   "inlen_after <= sizeof (state->__value.__wchb)",
                   "../iconv/loop.c",
                   338,
                   "internal_utf8_loop_single",
                   *(double *)&a9);
LABEL_188:
            a9 = sub_41F250(
                   "cnt_after <= sizeof (data->__statep->__value.__wchb)",
                   "../iconv/skeleton.c",
                   647,
                   "__gconv_transform_internal_utf8",
                   *(double *)&a9);
LABEL_189:
            v90 = sub_41F250(
                    "inptr - bytebuf > (state->__count & 7)",
                    "../iconv/loop.c",
                    385,
                    "internal_utf8_loop_single",
                    *(double *)&a9);
            v176 = &vars0;
            v177 = v14;
            v186 = v25;
            v187 = v13;
            v91 = v84;
            v178 = v9;
            v179 = a4;
            v92 = *(_DWORD *)(v84 + 16);
            v180 = v21;
            v181 = v10;
            v93 = v87;
            v94 = v86;
            v182 = v11;
            v183 = v12;
            v95 = v85;
            v184 = v24;
            v185 = v23;
            v97 = v96;
            v175 = qword_48DD60;
            v166 = v89;
            v167 = 0;
            v168 = v83 + 104;
            v169 = v84 + 48;
            if ( (v92 & 1) == 0 )
            {
              v167 = *(__int64 (__fastcall **)(__int64, __int64, unsigned __int8 **, unsigned __int8 *, _QWORD, __int64 *, _QWORD, _QWORD, long double))(v83 + 144);
              if ( *(_QWORD *)(v83 + 104) )
                v167 = (__int64 (__fastcall *)(__int64, __int64, unsigned __int8 **, unsigned __int8 *, _QWORD, __int64 *, _QWORD, _QWORD, long double))(*(_QWORD *)(v83 + 144) ^ qword_48DD68);
            }
            if ( v88 )
            {
              if ( !v86 )
              {
                **(_QWORD **)(v84 + 32) = 0;
                if ( (*(_DWORD *)(v84 + 16) & 1) != 0 )
                {
                  LODWORD(v24) = 0;
                  goto LABEL_244;
                }
                if ( v175 == qword_48DD60 )
                  __asm { BR              X16 }
                goto LABEL_380;
              }
              v90 = sub_41F250(
                      "outbufstart == NULL",
                      "../iconv/skeleton.c",
                      350,
                      "__gconv_transform_utf8_internal",
                      *(double *)&v90);
            }
            else
            {
              a4 = (unsigned __int8 *)&v171;
              if ( v86 )
                v98 = v86;
              else
                v98 = (unsigned __int8 **)v84;
              if ( v87 )
                v99 = &v171;
              else
                v99 = 0;
              v13 = *(_QWORD *)(v91 + 8);
              v12 = *v98;
              v170 = v99;
              v171 = 0;
              if ( !v89 || (v114 = *(int **)(v91 + 32), (v115 = *v114 & 7) == 0) )
              {
                a4 = *v85;
                goto LABEL_201;
              }
              if ( !v86 )
              {
                v116 = v114[1];
                v117 = *v114 >> 8;
                v118 = (unsigned __int8)*v114;
                v119 = *v95;
                v173 = byte_4566C8[v117 - 2];
                do
                {
                  v120 = v117--;
                  if ( v118 > v117 )
                    v174[v120 - 2] = v116 & 0x3F | 0x80;
                  v116 >>= 6;
                }
                while ( v117 > 1 );
                v121 = v12 + 4;
                v122 = v116 | v173;
                if ( v13 < (unsigned __int64)(v12 + 4) )
                {
                  LODWORD(v24) = 5;
                  goto LABEL_244;
                }
                v123 = v119;
                v124 = &v173;
                v173 = v122;
                do
                {
                  ++v118;
                  v125 = *v123++;
                  v174[v118 - 2] = v125;
                }
                while ( v118 != 6 && v97 > v123 );
                v126 = v173;
                if ( v173 <= 0x7Fu )
                {
                  *(_DWORD *)v12 = v173;
                  v127 = 1;
                  v115 = *v114 & 7;
                  goto LABEL_262;
                }
                while ( 1 )
                {
                  v150 = v126 - 194;
                  v151 = (char *)&v124[v118];
                  if ( (unsigned int)(v126 - 194) > 0x1D )
                  {
                    if ( (v126 & 0xF0) != 0xE0 )
                      goto LABEL_384;
                    v152 = 3;
                    v153 = v126 & 0xF;
                    v154 = 3;
                  }
                  else
                  {
                    v152 = 2;
                    v153 = v126 & 0x1F;
                    v154 = 2;
                  }
LABEL_328:
                  v155 = v174;
                  v156 = 1;
                  if ( v151 < (char *)&v124[v152] )
                    break;
                  while ( (*v155 & 0xC0) == 0x80 )
                  {
                    ++v156;
                    v153 = *v155++ & 0x3F | (v153 << 6);
                    if ( v154 == v156 )
                      goto LABEL_338;
                  }
                  if ( v154 > v156 )
                    goto LABEL_333;
LABEL_338:
                  if ( v154 != 2 && !(v153 >> (5 * v154 - 4)) || v153 - 55296 <= 0x7FF )
                    goto LABEL_333;
                  *(_DWORD *)v12 = v153;
                  v127 = v152;
                  v115 = *v114 & 7;
LABEL_262:
                  if ( v127 <= v115 )
                  {
                    v90 = sub_41F250(
                            "inptr - bytebuf > (state->__count & 7)",
                            "../iconv/loop.c",
                            385,
                            "utf8_internal_loop_single",
                            v124,
                            *(double *)&v90);
                    goto LABEL_395;
                  }
                  v92 = *(_DWORD *)(v91 + 16);
                  a4 = &v119[v127 - v115];
                  *v95 = a4;
                  v12 = v121;
                  *v114 = 0;
LABEL_201:
                  while ( 2 )
                  {
                    if ( v97 != a4 )
                    {
                      v100 = v12 + 4;
                      v101 = a4;
                      v10 = v12;
                      if ( v13 >= (unsigned __int64)(v12 + 4) )
                      {
                        LODWORD(v24) = 4;
                        goto LABEL_207;
                      }
                      goto LABEL_219;
                    }
                    v101 = v97;
                    v10 = v12;
                    LODWORD(v24) = 4;
LABEL_220:
                    *v95 = v101;
                    if ( v94 )
                    {
LABEL_243:
                      *v94 = v10;
                      goto LABEL_244;
                    }
LABEL_221:
                    v110 = *(_DWORD *)(v91 + 16);
                    ++*(_DWORD *)(v91 + 20);
                    if ( (v110 & 1) != 0 )
                    {
                      v139 = *v93;
                      *(_QWORD *)v91 = v10;
                      *v93 = v139 + v171;
                      goto LABEL_285;
                    }
                    if ( v10 <= v12 )
                    {
                      v111 = (int)v24;
                      goto LABEL_225;
                    }
                    v172 = *(unsigned __int8 **)v91;
                    v111 = v167(v168, v169, &v172, v10, 0, v93, 0, v166, v90);
                    if ( v111 == 4 )
                    {
                      v111 = (int)v24;
                      if ( (_DWORD)v24 != 5 )
                        goto LABEL_225;
                      goto LABEL_226;
                    }
                    v112 = (unsigned __int64)v172;
                    if ( v172 == v10 )
                      goto LABEL_225;
                    v128 = *(_DWORD *)(v91 + 16);
                    *v95 = a4;
                    if ( v97 != a4 )
                    {
                      v129 = v12 + 4;
                      v130 = v12;
                      if ( v112 < (unsigned __int64)(v12 + 4) )
                      {
                        if ( (unsigned __int8 *)v112 == v12 )
                          goto LABEL_267;
LABEL_306:
                        v90 = sub_41F250(
                                "outbuf == outerr",
                                "../iconv/skeleton.c",
                                594,
                                "__gconv_transform_utf8_internal");
                        goto LABEL_307;
                      }
LABEL_282:
                      v138 = a4 + 1;
                      v132 = *a4;
                      if ( v132 > 0x7F )
                      {
                        if ( v132 - 194 <= 0x1D )
                        {
                          v131 = 2;
                          v132 &= 0x1Fu;
                          v133 = 2;
                          goto LABEL_270;
                        }
                        if ( (v132 & 0xF0) == 0xE0 )
                        {
                          v131 = 3;
                          v132 &= 0xFu;
                          v133 = 3;
                          goto LABEL_270;
                        }
                        if ( (v132 & 0xF8) == 0xF0 )
                        {
                          v131 = 4;
                          v132 &= 7u;
                          v133 = 4;
                          goto LABEL_270;
                        }
LABEL_392:
                        if ( (v132 & 0xFC) == 0xF8 )
                        {
                          v131 = 5;
                          v132 &= 3u;
                          v133 = 5;
                          goto LABEL_270;
                        }
                        if ( (v132 & 0xFE) != 0xFC )
                        {
                          v165 = 1;
                          while ( 1 )
                          {
                            i = v165;
                            if ( v97 <= &a4[v165] || (a4[v165] & 0xC0) != 0x80 )
                              goto LABEL_303;
                            if ( ++v165 == 6 )
                            {
                              i = 5;
                              goto LABEL_303;
                            }
                          }
                        }
                        v131 = 6;
                        v132 &= 1u;
                        v133 = 6;
LABEL_270:
                        v134 = &a4[v131];
                        v135 = 1;
                        if ( v97 < v134 )
                        {
                          for ( i = 1; v97 > v138; v138 = &a4[++i] )
                          {
                            if ( (*v138 & 0xC0) != 0x80 )
                              break;
                          }
                          if ( v97 == v138 )
                          {
LABEL_305:
                            *v95 = a4;
                            if ( (unsigned __int8 *)v112 == v130 )
                              goto LABEL_325;
                            goto LABEL_306;
                          }
LABEL_303:
                          if ( !v170 || (v128 & 2) == 0 )
                            goto LABEL_305;
                          a4 += i;
                          ++*v170;
LABEL_280:
                          if ( a4 == v97 )
                          {
                            *v95 = a4;
                            if ( v130 != (unsigned __int8 *)v112 )
                              goto LABEL_306;
                            goto LABEL_325;
                          }
                          v129 = v130 + 4;
                          if ( v112 < (unsigned __int64)(v130 + 4) )
                          {
                            *v95 = a4;
                            if ( v130 != (unsigned __int8 *)v112 )
                              goto LABEL_306;
                            if ( v130 != v12 )
                              goto LABEL_225;
LABEL_267:
                            --*(_DWORD *)(v91 + 20);
LABEL_225:
                            if ( !v111 )
                            {
LABEL_226:
                              a4 = *v95;
                              v12 = *(unsigned __int8 **)v91;
                              v92 = *(_DWORD *)(v91 + 16);
                              continue;
                            }
                            LODWORD(v24) = v111;
LABEL_285:
                            if ( v166 )
                              v140 = (_DWORD)v24 == 7;
                            else
                              v140 = 0;
                            if ( !v140 )
                            {
LABEL_244:
                              if ( v175 == qword_48DD60 )
                                return (unsigned int)v24;
LABEL_380:
                              LOBYTE(v102) = sub_412340();
LABEL_381:
                              if ( (v102 & 0xFE) == 0xFC )
                              {
                                v104 = 6;
                                v102 &= 1u;
                                v105 = 6;
LABEL_210:
                                v106 = &v101[v104];
                                v107 = 1;
                                if ( v97 >= &v101[v104] )
                                  goto LABEL_213;
LABEL_237:
                                for ( j = 1; v97 > v103; v103 = &v101[++j] )
                                {
                                  if ( (*v103 & 0xC0) != 0x80 )
                                    break;
                                }
                                if ( v97 == v103 )
                                {
                                  *v95 = v101;
                                  LODWORD(v24) = 7;
                                  if ( v94 )
                                    goto LABEL_243;
                                  goto LABEL_221;
                                }
                              }
                              else
                              {
                                v113 = 1;
                                while ( 1 )
                                {
                                  j = v113;
                                  if ( v97 <= &v101[v113] || (v101[v113] & 0xC0) != 0x80 )
                                    break;
                                  if ( ++v113 == 6 )
                                  {
                                    j = 5;
                                    break;
                                  }
                                }
                              }
                              while ( 2 )
                              {
                                if ( v170 && (v92 & 2) != 0 )
                                {
                                  v101 += j;
                                  LODWORD(v24) = 6;
                                  ++*v170;
LABEL_205:
                                  if ( v97 != v101 )
                                  {
                                    v100 = v10 + 4;
                                    if ( v13 >= (unsigned __int64)(v10 + 4) )
                                    {
LABEL_207:
                                      v103 = v101 + 1;
                                      v102 = *v101;
                                      if ( v102 <= 0x7F )
                                        goto LABEL_204;
                                      if ( v102 - 194 <= 0x1D )
                                      {
                                        v104 = 2;
                                        v102 &= 0x1Fu;
                                        v105 = 2;
                                        goto LABEL_210;
                                      }
                                      if ( (v102 & 0xF0) == 0xE0 )
                                      {
                                        v106 = v101 + 3;
                                        v102 &= 0xFu;
                                        v105 = 3;
                                        v107 = 1;
                                        if ( v97 < v101 + 3 )
                                          goto LABEL_237;
                                        do
                                        {
LABEL_213:
                                          v108 = v101[v107];
                                          j = v107;
                                          if ( (v108 & 0xC0) != 0x80 )
                                            goto LABEL_214;
                                          ++v107;
                                          v102 = v108 & 0x3F | (v102 << 6);
                                        }
                                        while ( v105 > (unsigned int)v107 );
                                        ++j;
LABEL_214:
                                        if ( j < v105 || v105 != 2 && !(v102 >> (5 * v105 - 4)) || v102 - 55296 <= 0x7FF )
                                          continue;
                                        v103 = v106;
LABEL_204:
                                        v101 = v103;
                                        *(_DWORD *)v10 = v102;
                                        v10 = v100;
                                        goto LABEL_205;
                                      }
LABEL_307:
                                      if ( (v102 & 0xF8) == 0xF0 )
                                      {
                                        v104 = 4;
                                        v102 &= 7u;
                                        v105 = 4;
                                      }
                                      else
                                      {
                                        if ( (v102 & 0xFC) != 0xF8 )
                                          goto LABEL_381;
                                        v104 = 5;
                                        v102 &= 3u;
                                        v105 = 5;
                                      }
                                      goto LABEL_210;
                                    }
LABEL_219:
                                    LODWORD(v24) = 5;
                                  }
                                }
                                else
                                {
                                  LODWORD(v24) = 6;
                                }
                                goto LABEL_220;
                              }
                            }
                            v141 = *v95;
                            v142 = *(_DWORD **)(v91 + 32);
                            v143 = v97 - *v95;
                            v144 = **v95;
                            *v142 = v143;
                            if ( (unsigned int)(v144 - 192) > 1 )
                            {
                              if ( (unsigned int)(v144 - 194) > 0x1D )
                              {
                                if ( (v144 & 0xF0) == 0xE0 )
                                {
                                  v145 = v144 & 0xF;
                                  v146 = 2;
                                  v147 = 768;
                                }
                                else if ( (v144 & 0xF8) == 0xF0 )
                                {
                                  v145 = v144 & 7;
                                  v146 = 3;
                                  v147 = 1024;
                                }
                                else if ( (v144 & 0xFC) == 0xF8 )
                                {
                                  v145 = v144 & 3;
                                  v146 = 4;
                                  v147 = 1280;
                                }
                                else
                                {
                                  v145 = v144 & 1;
                                  v146 = 5;
                                  v147 = 1536;
                                }
                              }
                              else
                              {
                                v145 = v144 & 0x1F;
                                v146 = 1;
                                v147 = 512;
                              }
                              v148 = v141 + 1;
                              *v95 = v141 + 1;
                              if ( v141 + 1 < v97 )
                              {
                                do
                                {
                                  v149 = *v148++;
                                  *v95 = v148;
                                  v145 = v149 & 0x3F | (v145 << 6);
                                }
                                while ( v148 != v97 );
                                v146 += 1 - (_BYTE)v148 + (_BYTE)v141;
                              }
                              *v142 = v147 | v143;
                              v142[1] = v145 << (6 * v146);
                              goto LABEL_244;
                            }
                            v90 = sub_41F250(
                                    "ch != 0xc0 && ch != 0xc1",
                                    "../iconv/skeleton.c",
                                    642,
                                    "__gconv_transform_utf8_internal",
                                    *(double *)&v90);
LABEL_384:
                            if ( (v126 & 0xF8) == 0xF0 )
                            {
                              v152 = 4;
                              v153 = v126 & 7;
                              v154 = 4;
                              goto LABEL_328;
                            }
                            if ( (v126 & 0xFC) == 0xF8 )
                            {
                              v152 = 5;
                              v153 = v126 & 3;
                              v154 = 5;
                              goto LABEL_328;
                            }
                            if ( (v126 & 0xFE) == 0xFC )
                            {
                              v152 = 6;
                              v153 = v126 & 1;
                              v154 = 6;
                              goto LABEL_328;
                            }
LABEL_395:
                            v164 = v174;
                            v156 = 0;
                            do
                            {
                              ++v156;
                              if ( v151 <= v164 )
                                break;
                              if ( (*v164 & 0xC0) != 0x80 )
                                break;
                              ++v164;
                            }
                            while ( v156 != 5 );
LABEL_333:
                            if ( !v170 || (v92 & 2) == 0 || (++*v170, !v156) )
                            {
                              LODWORD(v24) = 6;
                              goto LABEL_244;
                            }
                            v127 = v156;
                            v121 = v12;
                            goto LABEL_262;
                          }
                          goto LABEL_282;
                        }
                        while ( 1 )
                        {
                          v136 = a4[v135];
                          i = v135;
                          if ( (v136 & 0xC0) != 0x80 )
                            break;
                          ++v135;
                          v132 = v136 & 0x3F | (v132 << 6);
                          if ( v133 <= (unsigned int)v135 )
                          {
                            ++i;
                            break;
                          }
                        }
                        if ( i < v133 || v133 != 2 && !(v132 >> (5 * v133 - 4)) || v132 - 55296 <= 0x7FF )
                          goto LABEL_303;
                        v138 = v134;
                      }
                      a4 = v138;
                      *(_DWORD *)v130 = v132;
                      v130 = v129;
                      goto LABEL_280;
                    }
                    break;
                  }
                  if ( (unsigned __int8 *)v112 != v12 )
                    goto LABEL_306;
LABEL_325:
                  v90 = sub_41F250(
                          "nstatus == __GCONV_FULL_OUTPUT",
                          "../iconv/skeleton.c",
                          595,
                          "__gconv_transform_utf8_internal");
                }
                if ( v151 <= v174 )
                {
                  if ( v118 != 1 )
                    goto LABEL_333;
                }
                else
                {
                  v157 = v174;
                  do
                  {
                    if ( (*v157 & 0xC0) != 0x80 )
                      break;
                    v157 = (char *)&v124[++v156];
                  }
                  while ( v151 > v157 );
                  if ( v151 != v157 )
                    goto LABEL_333;
                  if ( v118 == 6 )
                  {
                    sub_41F250(
                      "inend != &bytebuf[MAX_NEEDED_INPUT]",
                      "../iconv/loop.c",
                      403,
                      "utf8_internal_loop_single",
                      *(double *)&v90);
                    goto LABEL_368;
                  }
                }
                v158 = v118;
                *v95 = &v119[v118 - v115];
                if ( v150 <= 0x1D )
                {
                  v159 = v126 & 0x1F;
                  v160 = 512;
                  v161 = 1;
LABEL_360:
                  if ( v151 > v155 )
                  {
                    v162 = v155;
                    do
                    {
                      v163 = *v162++;
                      v159 = v163 & 0x3F | (v159 << 6);
                    }
                    while ( v162 != v151 );
                    v161 += (_BYTE)v155 - (_BYTE)v162;
                  }
                  LODWORD(v24) = 7;
                  *v114 = v158 | v160;
                  v114[1] = v159 << (6 * v161);
                  goto LABEL_244;
                }
                if ( (v126 & 0xF0) == 0xE0 )
                {
                  v159 = v126 & 0xF;
                  v160 = 768;
                  v161 = 2;
                  goto LABEL_360;
                }
LABEL_368:
                if ( (v126 & 0xF8) == 0xF0 )
                {
                  v159 = v126 & 7;
                  v160 = 1024;
                  v161 = 3;
                }
                else if ( (v126 & 0xFC) == 0xF8 )
                {
                  v159 = v126 & 3;
                  v160 = 1280;
                  v161 = 4;
                }
                else
                {
                  v159 = v126 & 1;
                  v160 = 1536;
                  v161 = 5;
                }
                goto LABEL_360;
              }
            }
            v90 = sub_41F250(
                    "outbufstart == NULL",
                    "../iconv/skeleton.c",
                    467,
                    "__gconv_transform_utf8_internal",
                    *(double *)&v90);
            goto LABEL_392;
          }
        }
        a9 = sub_41F250(
               "(state->__count & 7) <= sizeof (state->__value)",
               "../iconv/loop.c",
               309,
               "internal_utf8_loop_single",
               *(double *)&a9);
        goto LABEL_177;
      }
    }
    v27 = *(unsigned __int8 ***)a3;
LABEL_12:
    v28 = a4;
    v9 = (unsigned __int64)v21;
    a4 = v12;
    v21 = v27;
    v12 = v28;
    v10 = v11;
    v11 = v23;
    LODWORD(v188) = a8;
    v189 = v17;
    v190 = (unsigned int *)v22;
    v191 = v16;
    LODWORD(v192) = v19;
    v193 = v26;
    v194 = (__int64 *)v15;
    while ( 1 )
    {
      v23 = a4;
      v200 = (unsigned __int8 *)v21;
      v201 = a4;
      if ( v12 == (unsigned __int8 *)v21 )
      {
        v29 = v12;
        v13 = 4;
        goto LABEL_21;
      }
      v29 = (unsigned __int8 *)v21;
      v13 = 4;
      while ( 1 )
      {
        if ( v12 < v29 + 4 )
        {
          *(_QWORD *)v11 = v200;
          v13 = 7;
          if ( v24 )
          {
LABEL_29:
            v11 = vars30;
            v12 = vars38;
            *v24 = v23;
            goto LABEL_30;
          }
          goto LABEL_22;
        }
        if ( v10 <= v23 )
          goto LABEL_32;
        v30 = *(_DWORD *)v29;
        if ( v30 <= 0x7F )
        {
          v201 = v23 + 1;
LABEL_19:
          *v23 = v30;
          v23 = v201;
          v29 = v200 + 4;
          v200 += 4;
          goto LABEL_20;
        }
        if ( v30 - 55296 > 0x7FF && (v30 & 0x80000000) == 0 )
          break;
        if ( !v193 )
        {
          v29 = v200;
          v13 = 6;
          goto LABEL_21;
        }
        if ( (*(_DWORD *)(v9 + 16) & 8) != 0 )
        {
          LODWORD(v195) = v18;
          v65 = sub_41D410(v194, v9);
          v13 = v65;
          v18 = (int)v195;
          if ( v65 != 6 )
          {
            v29 = v200;
            v23 = v201;
            if ( (_DWORD)v13 == 5 )
              goto LABEL_21;
            goto LABEL_20;
          }
          v23 = v201;
        }
        v29 = v200;
        if ( (v18 & 2) == 0 )
        {
          v13 = 6;
          goto LABEL_21;
        }
        v29 = v200 + 4;
        v13 = 6;
        v200 += 4;
        ++*v193;
LABEL_20:
        if ( v12 == v29 )
          goto LABEL_21;
      }
      if ( v30 <= 0x7FF )
      {
        v36 = 2;
      }
      else if ( v30 <= 0xFFFF )
      {
        v36 = 3;
      }
      else if ( v30 <= 0x1FFFFF )
      {
        v36 = 4;
      }
      else
      {
        v36 = (v30 > 0x3FFFFFF) + 5LL;
      }
      if ( v10 >= &v23[v36] )
      {
        *v23 = -256 >> v36;
        v201 += v36;
        do
        {
          --v36;
          v37 = v30 & 0x3F | 0x80;
          v30 >>= 6;
          v23[v36] = v37;
        }
        while ( v36 != 1 );
        LOBYTE(v30) = v30 | *v23;
        goto LABEL_19;
      }
LABEL_32:
      v29 = v200;
      v13 = 5;
LABEL_21:
      *(_QWORD *)v11 = v29;
      if ( v24 )
        goto LABEL_29;
LABEL_22:
      v31 = *(_DWORD *)(v9 + 16);
      ++*(_DWORD *)(v9 + 20);
      if ( (v31 & 1) != 0 )
        goto LABEL_74;
      if ( v23 <= a4 )
      {
        v32 = v13;
        goto LABEL_26;
      }
      v199 = *(unsigned __int8 **)v9;
      v32 = ((__int64 (__fastcall *)(unsigned int *, unsigned __int8 **, unsigned __int8 **, unsigned __int8 *, _QWORD, __int64 *, _QWORD, _QWORD))v25)(
              v190,
              v191,
              &v199,
              v23,
              0,
              v189,
              0,
              (unsigned int)v188);
      if ( v32 == 4 )
      {
        v32 = v13;
        if ( (_DWORD)v13 != 5 )
          goto LABEL_26;
        goto LABEL_27;
      }
      v33 = v199;
      if ( v199 == v23 )
        goto LABEL_26;
      v23 = (unsigned __int8 *)*(unsigned int *)(v9 + 16);
      *(_QWORD *)v11 = v21;
      v200 = (unsigned __int8 *)v21;
      v201 = a4;
      if ( v12 == (unsigned __int8 *)v21 )
      {
        if ( v33 != a4 )
          goto LABEL_91;
        goto LABEL_73;
      }
      v51 = a4;
      v13 = v32;
      v52 = 4;
      while ( 2 )
      {
        if ( v12 < (unsigned __int8 *)v21 + 4 )
        {
LABEL_89:
          v10 = v200;
          v23 = v11;
          goto LABEL_90;
        }
        if ( v33 <= v51 )
          goto LABEL_92;
        v53 = *(_DWORD *)v21;
        if ( *(_DWORD *)v21 <= 0x7Fu )
        {
          v201 = v51 + 1;
          goto LABEL_69;
        }
        if ( v53 - 55296 > 0x7FF && (v53 & 0x80000000) == 0 )
        {
          if ( v53 <= 0x7FF )
          {
            v63 = 2;
          }
          else if ( v53 <= 0xFFFF )
          {
            v63 = 3;
          }
          else if ( v53 <= 0x1FFFFF )
          {
            v63 = 4;
          }
          else
          {
            v63 = (v53 > 0x3FFFFFF) + 5LL;
          }
          if ( v33 < &v51[v63] )
            goto LABEL_92;
          *v51 = -256 >> v63;
          v201 += v63;
          do
          {
            --v63;
            v64 = v53 & 0x3F | 0x80;
            v53 >>= 6;
            v51[v63] = v64;
          }
          while ( v63 != 1 );
          LOBYTE(v53) = v53 | *v51;
LABEL_69:
          *v51 = v53;
          v51 = v201;
          v21 = (unsigned __int8 **)(v200 + 4);
          v200 += 4;
LABEL_70:
          if ( v12 == (unsigned __int8 *)v21 )
          {
            v54 = v199;
            *(_QWORD *)v11 = v12;
            v32 = v13;
            if ( v54 != v51 )
              goto LABEL_91;
            if ( v52 == 5 )
              goto LABEL_93;
            goto LABEL_73;
          }
          continue;
        }
        break;
      }
      if ( !v193 )
        goto LABEL_89;
      if ( (*(_DWORD *)(v9 + 16) & 8) == 0
        || (v195 = v33, v76 = sub_41D410(v194, v9), v52 = v76, v33 = v195, v51 = v201, v76 == 6) )
      {
        if ( ((unsigned __int8)v23 & 2) != 0 )
        {
          v21 = (unsigned __int8 **)(v200 + 4);
          v52 = 6;
          v200 += 4;
          ++*v193;
          goto LABEL_70;
        }
        v23 = v11;
        v10 = v200;
LABEL_90:
        v60 = v199;
        *(_QWORD *)v23 = v10;
        if ( v60 != v51 )
          goto LABEL_91;
LABEL_73:
        a9 = sub_41F250("nstatus == __GCONV_FULL_OUTPUT", "../iconv/skeleton.c", 595, "__gconv_transform_internal_utf8");
LABEL_74:
        v55 = v189;
        v21 = (unsigned __int8 **)v9;
        v9 = (unsigned __int64)v23;
        v23 = v11;
        v56 = v188;
        a4 = v12;
        v57 = (int)v192;
        v58 = *v189 + v198;
        *v21 = (unsigned __int8 *)v9;
        *v55 = v58;
LABEL_75:
        if ( v56 )
          v59 = (_DWORD)v13 == 7;
        else
          v59 = 0;
        if ( !v59 )
          goto LABEL_79;
        v66 = *(_QWORD *)v23;
        v67 = &a4[-*(_QWORD *)v23];
        if ( (unsigned __int64)v67 > 4 )
          goto LABEL_188;
        v68 = (unsigned int *)v21[4];
        v69 = 0;
        if ( v67 )
        {
          do
          {
            v69[(_QWORD)(v68 + 1)] = v69[v66];
            ++v69;
          }
          while ( v67 != v69 );
          v57 = (int)v67;
        }
        v11 = vars30;
        v12 = vars38;
        v70 = *v68 & 0xFFFFFFF8;
        *(_QWORD *)v23 = a4;
        *v68 = v70 | v57;
        while ( 1 )
        {
LABEL_30:
          if ( v203 == qword_48DD60 )
            return (unsigned int)v13;
LABEL_183:
          vars30 = v11;
          vars38 = v12;
          v47 = sub_412340();
LABEL_184:
          v74 = 3;
LABEL_139:
          if ( v11 >= &v12[v74] )
            break;
LABEL_118:
          v11 = vars30;
          v12 = vars38;
          v13 = 5;
        }
        *v12 = -256 >> v74;
        v201 += v74;
        do
        {
          --v74;
          v75 = v47 & 0x3F | 0x80;
          v47 >>= 6;
          v12[v74] = v75;
        }
        while ( v74 != 1 );
        LOBYTE(v47) = v47 | *v12;
LABEL_60:
        *v12 = v47;
        v48 = v200 + 4;
        v200 = v48;
        if ( v48 == (unsigned __int8 *)v41 )
        {
LABEL_126:
          v27 = *(unsigned __int8 ***)v23;
          v18 = *((_DWORD *)v21 + 4);
        }
        else
        {
LABEL_61:
          v49 = *v38;
          v50 = v48 - (unsigned __int8 *)v41;
          if ( v50 <= (*v38 & 7LL) )
            goto LABEL_189;
          v18 = *((_DWORD *)v21 + 4);
          v27 = (unsigned __int8 **)(*(_QWORD *)v23 + v50 - (v49 & 7));
          *(_QWORD *)v23 = v27;
          v12 = v201;
          *v38 = v49 & 0xFFFFFFF8;
        }
        goto LABEL_12;
      }
      v21 = (unsigned __int8 **)v200;
      v51 = v201;
      if ( v76 != 5 )
        goto LABEL_70;
      v77 = v199;
      *(_QWORD *)v11 = v200;
      v32 = v13;
      if ( v51 != v77 )
      {
        do
        {
LABEL_91:
          a9 = sub_41F250("outbuf == outerr", "../iconv/skeleton.c", 594, "__gconv_transform_internal_utf8");
LABEL_92:
          v61 = v199;
          *(_QWORD *)v11 = v200;
          v32 = v13;
        }
        while ( v51 != v61 );
      }
LABEL_93:
      if ( v51 == a4 )
        --*(_DWORD *)(v9 + 20);
LABEL_26:
      if ( v32 )
      {
        v56 = v188;
        v21 = (unsigned __int8 **)v9;
        v57 = (int)v192;
        v23 = v11;
        a4 = v12;
        v13 = v32;
        goto LABEL_75;
      }
LABEL_27:
      a4 = *(unsigned __int8 **)v9;
      v21 = *(unsigned __int8 ***)v11;
      v18 = *(_DWORD *)(v9 + 16);
    }
  }
  if ( a5 )
  {
    vars30 = v11;
    vars38 = v12;
    sub_41F250("outbufstart == NULL", "../iconv/skeleton.c", 350, "__gconv_transform_internal_utf8", *(double *)&a9);
    goto LABEL_183;
  }
  *(_QWORD *)a2[4] = 0;
  if ( ((_DWORD)a2[2] & 1) != 0 )
  {
    v13 = 0;
    goto LABEL_30;
  }
  if ( v203 != qword_48DD60 )
    goto LABEL_183;
  return ((__int64 (__fastcall *)(__int64, unsigned __int8 **, _QWORD, _QWORD, _QWORD, __int64 *, _QWORD, __int64, long double))v25)(
           a1 + 104,
           v16,
           0,
           0,
           0,
           a6,
           a7,
           a8,
           a9);
}
