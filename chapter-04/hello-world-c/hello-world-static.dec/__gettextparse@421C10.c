__int64 __fastcall _gettextparse(
        __int64 a1,
        __int64 a2,
        double a3,
        double a4,
        double a5,
        double a6,
        double a7,
        double a8,
        double a9,
        double a10,
        __int64 a11,
        __int64 a12,
        unsigned __int64 a13,
        void *a14,
        unsigned __int64 i)
{
  __int64 v15; // x2
  unsigned __int64 *v16; // x20
  _BYTE *v17; // x19
  _BYTE *v18; // x23
  __int64 v19; // x26
  int v20; // w27
  int v21; // w28
  __int64 v22; // x8
  __int64 v23; // x19
  __int64 v24; // x0
  _BYTE *v25; // x22
  __int64 v26; // x20
  __int64 v27; // x2
  _BYTE *v28; // x24
  signed int v29; // w0
  signed int v30; // w11
  __int64 v31; // x27
  __int64 v32; // x2
  _QWORD *v33; // x12
  unsigned int v34; // w19
  int v35; // t1
  signed int v36; // w0
  _DWORD *v37; // x4
  _DWORD *v38; // x9
  bool v39; // zf
  __int64 v40; // x0
  char *v41; // x19
  int v42; // w0
  int v43; // w0
  int v44; // w9
  _BYTE *v45; // x10
  _BYTE *v46; // x12
  bool v47; // zf
  int v48; // w2
  int v49; // w4
  bool v50; // zf
  double v51; // d0
  double v52; // d1
  double v53; // d2
  double v54; // d3
  double v55; // d4
  double v56; // d5
  double v57; // d6
  double v58; // d7
  _DWORD *v59; // x4
  _DWORD *v60; // x1
  _DWORD *v61; // x9
  bool v62; // zf
  _QWORD *v64; // x0
  _DWORD *v65; // x4
  _DWORD *v66; // x1
  bool v67; // zf
  _QWORD *v68; // x0
  bool v69; // zf
  _QWORD *v70; // x0
  _DWORD *v71; // x1
  _QWORD *v72; // x0
  double v73; // d0
  double v74; // d1
  double v75; // d2
  double v76; // d3
  double v77; // d4
  double v78; // d5
  double v79; // d6
  double v80; // d7
  _QWORD *v82; // x0
  _QWORD *v83; // x0
  int v84; // w4
  unsigned __int64 v85; // x2
  int v86; // t1
  __int64 v87; // x7
  unsigned int v88; // w2
  unsigned int v89; // w2
  _BYTE *v90; // x12
  unsigned int v91; // w2
  unsigned int v92; // w2
  double v93; // d0
  double v94; // d1
  double v95; // d2
  double v96; // d3
  double v97; // d4
  double v98; // d5
  double v99; // d6
  double v100; // d7
  double v101; // d0
  double v102; // d1
  double v103; // d2
  double v104; // d3
  double v105; // d4
  double v106; // d5
  double v107; // d6
  double v108; // d7
  unsigned __int64 v110; // [xsp+10h] [xbp-740h]
  unsigned int v111; // [xsp+18h] [xbp-738h]
  int v112; // [xsp+1Ch] [xbp-734h]
  int v113; // [xsp+1Ch] [xbp-734h]
  int v114; // [xsp+1Ch] [xbp-734h]
  int v115; // [xsp+1Ch] [xbp-734h]
  int v116; // [xsp+1Ch] [xbp-734h]
  int v117; // [xsp+1Ch] [xbp-734h]
  int v118; // [xsp+1Ch] [xbp-734h]
  int v119; // [xsp+1Ch] [xbp-734h]
  int v120; // [xsp+1Ch] [xbp-734h]
  int v121; // [xsp+1Ch] [xbp-734h]
  int v122; // [xsp+1Ch] [xbp-734h]
  _DWORD *v123; // [xsp+20h] [xbp-730h]
  _DWORD *v124; // [xsp+28h] [xbp-728h]
  _DWORD *v125; // [xsp+30h] [xbp-720h]
  __int64 v126; // [xsp+38h] [xbp-718h]
  char v127; // [xsp+40h] [xbp-710h] BYREF
  __int64 v128; // [xsp+400h] [xbp-350h]
  _BYTE v129[200]; // [xsp+680h] [xbp-D0h] BYREF

  v128 = 0;
  v15 = (__int64)&_stack_chk_guard;
  v16 = (unsigned __int64 *)&v127;
  v17 = v129;
  v18 = v129;
  v19 = 200;
  v20 = 0;
  v21 = -2;
  v22 = 199;
  v111 = 0;
  while ( 1 )
  {
    *v17 = v20;
    if ( v17 >= &v18[v22] )
      break;
LABEL_12:
    if ( v20 == 9 )
    {
      v34 = 0;
      goto LABEL_96;
    }
    v29 = yypact[v20];
    v30 = v29;
    if ( v29 == -4 )
    {
      a13 = (unsigned int)yydefact[v20];
      if ( yydefact[v20] )
        goto LABEL_22;
      if ( v111 == 3 )
      {
        if ( v21 > 0 )
          goto LABEL_27;
        if ( !v21 )
        {
          v34 = 1;
          goto LABEL_96;
        }
      }
LABEL_28:
      a2 = (__int64)"dl_open_worker_begin";
      v15 = (__int64)yypact;
      while ( 1 )
      {
        if ( v29 != -4 )
        {
          v36 = v29 + 1;
          if ( (unsigned int)v36 <= 0x38 )
          {
            a13 = (unsigned int)yycheck[v36];
            if ( (_DWORD)a13 == 1 )
            {
              v20 = yytable[v36];
              if ( v20 > 0 )
                break;
            }
          }
        }
        if ( v18 == v17 )
          goto LABEL_26;
        v35 = (char)*--v17;
        --v16;
        v29 = yypact[v35];
      }
      v111 = 3;
      ++v16;
      ++v17;
      *v16 = v110;
    }
    else
    {
      if ( v21 == -2 )
      {
        v45 = *(_BYTE **)a1;
        do
        {
          v48 = (unsigned __int8)*v45;
          if ( !*v45 )
          {
            a2 = a1;
            *(_QWORD *)a1 = v45;
            goto LABEL_53;
          }
          v46 = v45;
          v47 = v48 == 32 || v48 == 9;
          ++v45;
        }
        while ( v47 );
        v21 = v48;
        switch ( v48 )
        {
          case 10:
          case 59:
            a2 = a1;
            *(_QWORD *)a1 = v46;
            goto LABEL_53;
          case 33:
            if ( v46[1] == 61 )
            {
              v90 = v46 + 2;
              v91 = 13;
LABEL_119:
              v49 = 7;
              v21 = 258;
              v30 = v29 + 7;
              v110 = v110 & 0xFFFFFFFF00000000LL | v91;
              a2 = a1;
              *(_QWORD *)a1 = v90;
            }
            else
            {
              a2 = a1;
              v49 = 6;
              v21 = 33;
              v30 = v29 + 6;
              *(_QWORD *)a1 = v45;
            }
            break;
          case 37:
            v88 = 5;
            goto LABEL_111;
          case 38:
          case 124:
            if ( (unsigned __int8)v46[1] != v48 )
              goto LABEL_92;
            a2 = a1;
            v49 = yytranslate[v48];
            v30 = v29 + v49;
            *(_QWORD *)a1 = v46 + 2;
            break;
          case 40:
          case 41:
          case 58:
          case 63:
          case 110:
            a2 = a1;
            v49 = yytranslate[v48];
            v30 = v29 + v49;
            *(_QWORD *)a1 = v45;
            break;
          case 42:
            v88 = 3;
            goto LABEL_111;
          case 43:
            v92 = 6;
            goto LABEL_124;
          case 45:
            v92 = 7;
LABEL_124:
            v49 = 9;
            v21 = 260;
            v30 = v29 + 9;
            v110 = v110 & 0xFFFFFFFF00000000LL | v92;
            a2 = a1;
            *(_QWORD *)a1 = v45;
            break;
          case 47:
            v88 = 4;
LABEL_111:
            v49 = 10;
            v21 = 261;
            v30 = v29 + 10;
            v110 = v110 & 0xFFFFFFFF00000000LL | v88;
            a2 = a1;
            *(_QWORD *)a1 = v45;
            break;
          case 48:
          case 49:
          case 50:
          case 51:
          case 52:
          case 53:
          case 54:
          case 55:
          case 56:
          case 57:
            v84 = (unsigned __int8)v46[1] - 48;
            v85 = v48 - 48;
            for ( i = (unsigned __int8)(v46[1] - 48); (unsigned int)i <= 9; v85 = v87 + 10 * v85 )
            {
              v86 = (unsigned __int8)*++v45;
              v87 = v84;
              v84 = v86 - 48;
              i = (unsigned __int8)(v86 - 48);
            }
            a2 = a1;
            v49 = 11;
            v21 = 262;
            v30 = v29 + 11;
            v110 = v85;
            *(_QWORD *)a1 = v45;
            break;
          case 60:
            v89 = 8;
            if ( v46[1] == 61 )
            {
              v45 = v46 + 2;
              v89 = 10;
            }
            goto LABEL_116;
          case 61:
            if ( v46[1] != 61 )
              goto LABEL_92;
            v90 = v46 + 2;
            v91 = 12;
            goto LABEL_119;
          case 62:
            v89 = 9;
            if ( v46[1] == 61 )
            {
              v45 = v46 + 2;
              v89 = 11;
            }
LABEL_116:
            v49 = 8;
            v21 = 259;
            v30 = v29 + 8;
            v110 = v110 & 0xFFFFFFFF00000000LL | v89;
            a2 = a1;
            *(_QWORD *)a1 = v45;
            break;
          default:
LABEL_92:
            a2 = a1;
            v49 = 2;
            v21 = 257;
            v30 = v29 + 2;
            *(_QWORD *)a1 = v45;
            break;
        }
      }
      else if ( v21 <= 0 )
      {
LABEL_53:
        v49 = 0;
        v21 = 0;
      }
      else
      {
        v49 = yytranslate[v21];
        v30 = v29 + v49;
      }
      if ( (unsigned int)v30 > 0x38 || yycheck[v30] != v49 )
      {
        a13 = (unsigned int)yydefact[v20];
        if ( yydefact[v20] )
          goto LABEL_22;
        if ( v111 == 3 )
        {
          if ( !v21 )
          {
LABEL_26:
            v34 = 1;
            goto LABEL_96;
          }
LABEL_27:
          v21 = -2;
          goto LABEL_28;
        }
        goto LABEL_28;
      }
      v20 = yytable[v30];
      a13 = (unsigned int)-v20;
      if ( v20 <= 0 )
      {
LABEL_22:
        v31 = (int)a13;
        v32 = (unsigned int)yyr2[(int)a13];
        v33 = (_QWORD *)v16[1 - (int)v32];
        switch ( (int)a13 )
        {
          case 2:
            if ( !*v16 )
              goto LABEL_26;
            *(_QWORD *)(a1 + 8) = *v16;
            goto LABEL_42;
          case 3:
            v59 = (_DWORD *)*(v16 - 2);
            v60 = (_DWORD *)*v16;
            v61 = (_DWORD *)*(v16 - 4);
            if ( v59 )
              v62 = v60 == 0;
            else
              v62 = 1;
            if ( v62 || v61 == 0 )
              goto LABEL_128;
            v114 = v32;
            v123 = (_DWORD *)*(v16 - 4);
            v124 = v59;
            v125 = v60;
            v126 = v22;
            v64 = (_QWORD *)malloc(0x20u, a3, a4, a5, a6, a7, a8, a9, a10, (__int64)v60, v32, a12, v59, a14, (void *)i);
            LODWORD(v32) = v114;
            v61 = v123;
            v59 = v124;
            v33 = v64;
            v60 = v125;
            v22 = v126;
            if ( !v64 )
            {
LABEL_128:
              v122 = v32;
              v123 = v61;
              v124 = v59;
              v125 = (_DWORD *)v22;
              _gettext_free_exp(v60, a3, a4, a5, a6, a7, a8, a9, a10);
              _gettext_free_exp(v124, v93, v94, v95, v96, v97, v98, v99, v100);
              _gettext_free_exp(v123, v101, v102, v103, v104, v105, v106, v107, v108);
              v22 = (__int64)v125;
              v33 = 0;
              LODWORD(v32) = v122;
            }
            else
            {
              v64[2] = v124;
              v64[3] = v60;
              *v64 = 0x1000000003LL;
              v64[1] = v61;
            }
            goto LABEL_42;
          case 4:
            v65 = (_DWORD *)*(v16 - 2);
            v66 = (_DWORD *)*v16;
            if ( v65 )
              v67 = v66 == 0;
            else
              v67 = 1;
            if ( v67 )
              goto LABEL_94;
            v115 = v32;
            v123 = (_DWORD *)*(v16 - 2);
            v124 = v66;
            v125 = (_DWORD *)v22;
            v68 = (_QWORD *)malloc(0x20u, a3, a4, a5, a6, a7, a8, a9, a10, (__int64)v66, v32, a12, v65, a14, (void *)i);
            v65 = v123;
            v66 = v124;
            v33 = v68;
            v22 = (__int64)v125;
            LODWORD(v32) = v115;
            if ( !v68 )
              goto LABEL_94;
            v68[2] = v124;
            *v68 = 0xF00000002LL;
            v68[1] = v65;
            goto LABEL_42;
          case 5:
            v65 = (_DWORD *)*(v16 - 2);
            v66 = (_DWORD *)*v16;
            if ( v65 )
              v69 = v66 == 0;
            else
              v69 = 1;
            if ( v69 )
              goto LABEL_94;
            v116 = v32;
            v123 = (_DWORD *)*(v16 - 2);
            v124 = v66;
            v125 = (_DWORD *)v22;
            v70 = (_QWORD *)malloc(0x20u, a3, a4, a5, a6, a7, a8, a9, a10, (__int64)v66, v32, a12, v65, a14, (void *)i);
            v65 = v123;
            v66 = v124;
            v33 = v70;
            v22 = (__int64)v125;
            LODWORD(v32) = v116;
            if ( !v70 )
            {
LABEL_94:
              v118 = v32;
              v123 = v65;
              v124 = (_DWORD *)v22;
              _gettext_free_exp(v66, a3, a4, a5, a6, a7, a8, a9, a10);
              _gettext_free_exp(v123, v73, v74, v75, v76, v77, v78, v79, v80);
              v22 = (__int64)v124;
              v33 = 0;
              LODWORD(v32) = v118;
            }
            else
            {
              v70[2] = v124;
              *v70 = 0xE00000002LL;
              v70[1] = v65;
            }
            goto LABEL_42;
          case 6:
            v38 = (_DWORD *)*(v16 - 2);
            v37 = (_DWORD *)*v16;
            LODWORD(v126) = *((_DWORD *)v16 - 2);
            if ( v38 )
              v50 = v37 == 0;
            else
              v50 = 1;
            if ( v50 )
              goto LABEL_64;
            goto LABEL_40;
          case 7:
          case 8:
          case 9:
            v37 = (_DWORD *)*v16;
            v38 = (_DWORD *)*(v16 - 2);
            v39 = *v16 == 0;
            LODWORD(v126) = *((_DWORD *)v16 - 2);
            v39 = v39 || v38 == 0;
            if ( v39 )
              goto LABEL_64;
LABEL_40:
            v112 = v32;
            v123 = v38;
            v124 = v37;
            v125 = (_DWORD *)v22;
            v40 = malloc(0x20u, a3, a4, a5, a6, a7, a8, a9, a10, a2, v32, a12, v37, a14, (void *)i);
            v38 = v123;
            v37 = v124;
            v33 = (_QWORD *)v40;
            v22 = (__int64)v125;
            LODWORD(v32) = v112;
            if ( v40 )
            {
              *(_DWORD *)(v40 + 4) = v126;
              *(_DWORD *)v40 = 2;
              *(_QWORD *)(v40 + 8) = v38;
              *(_QWORD *)(v40 + 16) = v37;
            }
            else
            {
LABEL_64:
              v113 = v32;
              v123 = v38;
              v124 = (_DWORD *)v22;
              _gettext_free_exp(v37, a3, a4, a5, a6, a7, a8, a9, a10);
              _gettext_free_exp(v123, v51, v52, v53, v54, v55, v56, v57, v58);
              v22 = (__int64)v124;
              v33 = 0;
              LODWORD(v32) = v113;
            }
LABEL_42:
            a13 = (unsigned __int64)yytranslate;
            a2 = (__int64)yypgoto;
            v41 = &v17[-(int)v32];
            v42 = yyr1[v31];
            v16 = &v16[-(int)v32 + 1];
            *v16 = (unsigned __int64)v33;
            v43 = v42 - 16;
            v44 = *v41;
            v15 = (unsigned int)(yypgoto[v43] + v44);
            if ( (unsigned int)v15 <= 0x38 && yycheck[(int)v15] == v44 )
            {
              a13 = (unsigned __int64)yytable;
              v17 = v41 + 1;
              v20 = yytable[(int)v15];
            }
            else
            {
              v17 = v41 + 1;
              v20 = yydefgoto[v43];
            }
            break;
          case 10:
            v71 = (_DWORD *)*v16;
            if ( !*v16 )
              goto LABEL_127;
            v117 = yyr2[(int)a13];
            v123 = (_DWORD *)*v16;
            v124 = (_DWORD *)v22;
            v72 = (_QWORD *)malloc(
                              0x20u,
                              a3,
                              a4,
                              a5,
                              a6,
                              a7,
                              a8,
                              a9,
                              a10,
                              (__int64)v71,
                              v32,
                              a12,
                              (void *)a13,
                              a14,
                              (void *)i);
            LODWORD(v32) = v117;
            v71 = v123;
            v22 = (__int64)v124;
            v33 = v72;
            if ( v72 )
            {
              *v72 = 0x200000001LL;
              v72[1] = v71;
            }
            else
            {
LABEL_127:
              v121 = v32;
              v123 = (_DWORD *)v22;
              _gettext_free_exp(v71, a3, a4, a5, a6, a7, a8, a9, a10);
              v22 = (__int64)v123;
              v33 = 0;
              LODWORD(v32) = v121;
            }
            goto LABEL_42;
          case 11:
            v119 = yyr2[(int)a13];
            v123 = (_DWORD *)v22;
            v82 = (_QWORD *)malloc(0x20u, a3, a4, a5, a6, a7, a8, a9, a10, a2, v32, a12, (void *)a13, a14, (void *)i);
            v22 = (__int64)v123;
            v33 = v82;
            LODWORD(v32) = v119;
            if ( v82 )
              *v82 = 0;
            goto LABEL_42;
          case 12:
            v120 = yyr2[(int)a13];
            v123 = (_DWORD *)v22;
            v83 = (_QWORD *)malloc(0x20u, a3, a4, a5, a6, a7, a8, a9, a10, a2, v32, a12, (void *)a13, a14, (void *)i);
            v22 = (__int64)v123;
            v33 = v83;
            LODWORD(v32) = v120;
            if ( v83 )
            {
              v83[1] = *v16;
              *v83 = 0x100000000LL;
            }
            goto LABEL_42;
          case 13:
            v33 = (_QWORD *)*(v16 - 1);
            goto LABEL_42;
          default:
            goto LABEL_42;
        }
      }
      else
      {
        a2 = v111;
        ++v16;
        v15 = v110;
        ++v17;
        v21 = -2;
        *v16 = v110;
        v111 -= v111 != 0;
      }
    }
  }
  v23 = v17 - v18;
  if ( v19 <= 9999 )
  {
    v19 *= 2;
    if ( v19 > 10000 )
      v19 = 10000;
    v24 = malloc(9 * v19 + 7, a3, a4, a5, a6, a7, a8, a9, a10, a2, v15, a12, (void *)a13, a14, (void *)i);
    v25 = (_BYTE *)v24;
    if ( v24 )
    {
      j_memcpy(v24);
      v26 = 8 * (v23 + 1);
      v27 = v19 + 14;
      if ( v19 + 7 >= 0 )
        v27 = v19 + 7;
      v28 = &v25[v27 & 0xFFFFFFFFFFFFFFF8LL];
      j_memcpy(v28);
      if ( v18 != v129 )
        free((__int64)v18, a3, a4, a5, a6, a7, a8, a9, a10);
      v22 = v19 - 1;
      v17 = &v25[v23];
      v16 = (unsigned __int64 *)&v28[v26 - 8];
      v18 = v25;
      if ( v17 >= &v25[v19 - 1] )
      {
        v34 = 1;
        goto LABEL_97;
      }
      goto LABEL_12;
    }
  }
  v34 = 2;
LABEL_96:
  if ( v18 == v129 )
    return v34;
LABEL_97:
  free((__int64)v18, a3, a4, a5, a6, a7, a8, a9, a10);
  return v34;
}
