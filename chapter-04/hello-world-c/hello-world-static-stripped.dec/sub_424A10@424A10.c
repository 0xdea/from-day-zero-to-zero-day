__int64 *__fastcall sub_424A10(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        _BYTE *a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        char a12)
{
  __int64 v13; // x24
  _BYTE *v14; // x24
  unsigned __int64 v15; // x21
  _BYTE *v16; // x19
  unsigned __int64 v17; // x28
  unsigned __int64 v18; // x25
  __int128 v19; // q0
  double v20; // d1
  double v21; // d2
  double v22; // d3
  double v23; // d4
  double v24; // d5
  double v25; // d6
  double v26; // d7
  __int64 *result; // x0
  _BYTE *v28; // x21
  unsigned __int64 v29; // x23
  _BYTE *v30; // x22
  _BYTE *v31; // x26
  __int64 v32; // x1
  __int64 v33; // x2
  unsigned __int64 v34; // x3
  _BYTE *v35; // x25
  __int64 v36; // x20
  _BYTE *v37; // x21
  unsigned __int64 v38; // x22
  _BYTE *v39; // x28
  __int64 v40; // x26
  unsigned __int64 v41; // x24
  unsigned __int64 v42; // x23
  int v43; // w0
  int v44; // w0
  __int64 v45; // x1
  _BYTE *v46; // x0
  __int64 v47; // x6
  __int64 v48; // x2
  __int64 v49; // x4
  unsigned __int64 v50; // x25
  int v51; // w0
  __int64 v52; // x19
  int v53; // w1
  _DWORD *v54; // x0
  int v55; // w1
  _QWORD *v56; // x0
  unsigned __int64 v57; // x24
  int *v58; // x26
  unsigned __int64 v59; // x21
  int *v60; // x28
  int v61; // w0
  __int64 v62; // x1
  __int64 v63; // x2
  int v64; // w20
  int v65; // w0
  int v66; // w22
  int v67; // w0
  int v68; // w5
  __int64 v69; // x1
  _BYTE *v70; // x0
  __int16 v71; // w0
  __int64 v72; // x1
  int v73; // w0
  _BYTE *v74; // x0
  _BYTE *v75; // x19
  _BYTE *v76; // x2
  __int64 v77; // x1
  unsigned int v78; // t1
  _QWORD *v79; // x1
  int v80; // w5
  unsigned __int64 v81; // x0
  int v82; // w1
  _QWORD *v83; // x0
  _QWORD *v84; // x6
  _QWORD *v85; // x5
  int v86; // w0
  __int128 *v87; // x0
  _QWORD *v88; // x0
  __int16 v89; // w0
  _BYTE *v90; // x0
  _BYTE *v91; // x0
  _BYTE *v92; // x0
  _BYTE *v93; // x0
  _BYTE *v94; // x1
  char v95; // w0
  _BYTE *v96; // x0
  _BYTE *v97; // x19
  _BYTE *v98; // x2
  __int64 v99; // x1
  unsigned int v100; // t1
  _BYTE *v101; // x0
  _BYTE *v102; // x0
  int *v103; // x5
  __int64 v104; // x0
  __int64 v105; // x22
  _BYTE *v106; // x19
  __int64 v107; // x0
  __int64 v108; // [xsp+0h] [xbp-920h]
  __int64 v109; // [xsp+0h] [xbp-920h]
  unsigned __int64 v110; // [xsp+0h] [xbp-920h]
  unsigned __int64 v112; // [xsp+18h] [xbp-908h]
  _BYTE *v113; // [xsp+18h] [xbp-908h]
  __int64 v114; // [xsp+18h] [xbp-908h]
  __int64 v115; // [xsp+18h] [xbp-908h]
  unsigned __int64 v117; // [xsp+38h] [xbp-8E8h]
  _BYTE *v118; // [xsp+40h] [xbp-8E0h]
  __int64 v119; // [xsp+50h] [xbp-8D0h]
  __int64 v120; // [xsp+58h] [xbp-8C8h]
  unsigned __int64 v121; // [xsp+B8h] [xbp-868h] BYREF
  __int64 v122; // [xsp+C0h] [xbp-860h] BYREF
  _BYTE *v123; // [xsp+E0h] [xbp-840h] BYREF
  unsigned __int64 v124; // [xsp+E8h] [xbp-838h]
  _BYTE v125[784]; // [xsp+F0h] [xbp-830h] BYREF
  __int64 v126; // [xsp+400h] [xbp-520h]
  _BYTE *v127; // [xsp+4F0h] [xbp-430h] BYREF
  __int64 v128; // [xsp+4F8h] [xbp-428h]
  _BYTE v129[1032]; // [xsp+500h] [xbp-420h] BYREF
  _BYTE v130[4]; // [xsp+914h] [xbp-Ch] BYREF
  __int64 v131; // [xsp+918h] [xbp-8h]

  v126 = 0;
  v131 = qword_48DD60;
  v13 = a5;
  v121 = 0;
  v123 = v125;
  v124 = 1024;
  v127 = v129;
  v128 = 1024;
  if ( a10 == -1 )
    _ReadStatusReg(TPIDR_EL0);
  if ( *a7 )
  {
    v14 = v125;
    v15 = 14;
    v16 = a7;
    v17 = 0;
    v18 = 0;
    while ( 1 )
    {
      v18 += sub_428180(v16, v18, &v14[72 * v17], &v121, &v122);
      if ( (v122 & 1) != 0 )
        goto LABEL_10;
      v16 = *(_BYTE **)&v14[72 * v17++ + 32];
      if ( !*v16 )
        break;
      if ( v15 == v17 )
      {
        if ( (sub_42EB70(&v123) & 1) == 0 )
          goto LABEL_10;
        v14 = v123;
        v15 = v124 / 0x48;
      }
    }
    v28 = v14;
    v13 = a5;
    if ( v121 < v18 )
      v29 = v18;
    else
      v29 = v121;
  }
  else
  {
    v28 = v125;
    v29 = 0;
    v17 = 0;
  }
  if ( (sub_42EC30() & 1) == 0 )
  {
LABEL_10:
    *(_DWORD *)(a1 + 32) = 0;
    goto LABEL_11;
  }
  v30 = &v127[16 * v29];
  v119 = 16 * v29;
  v31 = &v30[4 * v29];
  v108 = 4 * v29;
  v112 = (unsigned __int64)v127;
  v118 = &v31[4 * v29];
  if ( (a12 & 2) != 0 )
    v32 = 255;
  else
    v32 = 0;
  ifunc_40DE70(&v30[4 * v29], v32, 4 * v29);
  v33 = 4 * v29;
  v34 = v112;
  if ( !v17 )
  {
    if ( !v29 )
      goto LABEL_11;
LABEL_36:
    v49 = 0;
    v50 = 0;
    while ( 1 )
    {
      v51 = *(_DWORD *)&v31[4 * v50];
      v52 = 4 * v50;
      if ( v51 <= 7 )
        break;
      if ( v51 == 263 )
      {
        v84 = (_QWORD *)(v34 + v49);
        v85 = *(_QWORD **)v13;
        v86 = *(_DWORD *)(v13 + 28);
        if ( (a12 & 1) != 0 )
        {
          if ( v86 < 0 && (*(_DWORD *)(v13 + 28) = v86 + 16, v86 + 16 <= 0) )
            v85 = (_QWORD *)(*(_QWORD *)(v13 + 16) + v86);
          else
            *(_QWORD *)v13 = ((unsigned __int64)v85 + 15) & 0xFFFFFFFFFFFFFFF8LL;
          *(_QWORD *)&v19 = *v85;
          *v84 = *v85;
          *(_DWORD *)&v31[4 * v50] &= ~0x100u;
        }
        else
        {
          if ( v86 < 0 && (*(_DWORD *)(v13 + 28) = v86 + 16, v86 + 16 <= 0) )
          {
            v87 = (__int128 *)(*(_QWORD *)(v13 + 16) + v86);
          }
          else
          {
            v87 = (__int128 *)(((unsigned __int64)v85 + 15) & 0xFFFFFFFFFFFFFFF0LL);
            *(_QWORD *)v13 = v87 + 1;
          }
          v19 = *v87;
          *(_OWORD *)v84 = *v87;
        }
        goto LABEL_56;
      }
      if ( v51 > 263 )
      {
        if ( v51 == 512 )
          goto LABEL_53;
        if ( v51 == 1024 )
          goto LABEL_48;
LABEL_52:
        if ( (v51 & 0x800) != 0 )
          goto LABEL_53;
        goto LABEL_110;
      }
      if ( v51 == 256 )
      {
LABEL_53:
        v55 = *(_DWORD *)(v13 + 24);
        v56 = *(_QWORD **)v13;
        if ( v55 < 0 && (*(_DWORD *)(v13 + 24) = v55 + 8, v55 + 8 <= 0) )
          v56 = (_QWORD *)(*(_QWORD *)(v13 + 8) + v55);
        else
          *(_QWORD *)v13 = ((unsigned __int64)v56 + 15) & 0xFFFFFFFFFFFFFFF8LL;
        *(_QWORD *)(v34 + v49) = *v56;
        goto LABEL_56;
      }
LABEL_110:
      if ( qword_496C10 && *(_QWORD *)(qword_496C10 + 8LL * v51 - 64) )
      {
        v103 = (int *)&v30[v52];
        if ( &v127[v128] < &v118[*(int *)&v30[4 * v50]] )
        {
          do
          {
            v109 = v33;
            v114 = v49;
            v105 = v118 - &v31[v33];
            if ( (sub_42EB70(&v127) & 1) == 0 )
              goto LABEL_10;
            v33 = v109;
            v104 = v109 + v105;
            v34 = (unsigned __int64)v127;
            v30 = &v127[v119];
            v31 = &v127[v119 + v109];
            v103 = (int *)&v127[v119 + v52];
            v118 = &v31[v104];
            v49 = v114;
          }
          while ( &v31[v104 + *(int *)&v127[4 * v50 + v119]] > &v127[v128] );
        }
        *(_QWORD *)(v34 + v49) = v118;
        v110 = v34;
        v115 = v49;
        v120 = v33;
        v106 = &v118[*v103];
        (*(void (**)(void))(qword_496C10 + 8LL * *(int *)&v31[4 * v50] - 64))();
        v118 = v106;
        v34 = v110;
        v49 = v115;
        v33 = v120;
      }
      else
      {
        v88 = (_QWORD *)(v34 + v49);
        *v88 = 0;
        v88[1] = 0;
      }
LABEL_56:
      ++v50;
      v49 += 16;
      if ( v50 >= v29 )
        goto LABEL_57;
    }
    if ( v51 > 5 )
    {
      v82 = *(_DWORD *)(v13 + 28);
      v83 = *(_QWORD **)v13;
      if ( v82 < 0 && (*(_DWORD *)(v13 + 28) = v82 + 16, v82 + 16 <= 0) )
        v83 = (_QWORD *)(*(_QWORD *)(v13 + 16) + v82);
      else
        *(_QWORD *)v13 = ((unsigned __int64)v83 + 15) & 0xFFFFFFFFFFFFFFF8LL;
      *(_QWORD *)&v19 = *v83;
      *(_QWORD *)(v34 + v49) = *v83;
      goto LABEL_56;
    }
    if ( v51 == 2 )
      goto LABEL_48;
    if ( v51 > 2 )
    {
      v79 = *(_QWORD **)v13;
      v80 = *(_DWORD *)(v13 + 24);
      v81 = (*(_QWORD *)v13 + 15LL) & 0xFFFFFFFFFFFFFFF8LL;
      if ( v80 < 0 && (*(_DWORD *)(v13 + 24) = v80 + 8, v80 + 8 <= 0) )
        v79 = (_QWORD *)(*(_QWORD *)(v13 + 8) + v80);
      else
        *(_QWORD *)v13 = v81;
      *(_QWORD *)(v34 + v49) = *v79;
      goto LABEL_56;
    }
    if ( v51 == -1 )
    {
      if ( (a12 & 2) != 0 )
        sub_401A30((__int64)"*** invalid %N$ use detected ***\n", *(double *)&v19, v20, v21, v22, v23, v24, v25, v26);
      sub_41F250(
        "(mode_flags & PRINTF_FORTIFY) != 0",
        (__int64)"vfprintf-internal.c",
        0x4F5u,
        (__int64)"printf_positional");
    }
    if ( (unsigned int)v51 <= 1 )
    {
LABEL_48:
      v53 = *(_DWORD *)(v13 + 24);
      v54 = *(_DWORD **)v13;
      if ( v53 < 0 && (*(_DWORD *)(v13 + 24) = v53 + 8, v53 + 8 <= 0) )
        v54 = (_DWORD *)(*(_QWORD *)(v13 + 8) + v53);
      else
        *(_QWORD *)v13 = ((unsigned __int64)v54 + 11) & 0xFFFFFFFFFFFFFFF8LL;
      *(_DWORD *)(v34 + v49) = *v54;
      goto LABEL_56;
    }
    goto LABEL_52;
  }
  v35 = v28;
  v36 = 0;
  v113 = v28;
  v37 = v30;
  v38 = v17;
  v39 = v31;
  v40 = v13;
  v41 = v29;
  v42 = v34;
  do
  {
    while ( 1 )
    {
      v43 = *((_DWORD *)v35 + 11);
      if ( v43 != -1 )
        *(_DWORD *)&v39[4 * v43] = 0;
      v44 = *((_DWORD *)v35 + 10);
      if ( v44 != -1 )
        *(_DWORD *)&v39[4 * v44] = 0;
      v45 = *((_QWORD *)v35 + 7);
      if ( !v45 )
        goto LABEL_27;
      if ( v45 != 1 )
        break;
      *(_DWORD *)&v39[4 * *((int *)v35 + 12)] = *((_DWORD *)v35 + 13);
      *(_DWORD *)&v37[4 * *((int *)v35 + 12)] = *((_DWORD *)v35 + 16);
LABEL_27:
      ++v36;
      v35 += 72;
      if ( v36 == v38 )
        goto LABEL_35;
    }
    v46 = v35;
    v47 = *((unsigned int *)v35 + 2);
    ++v36;
    v48 = *((int *)v35 + 12);
    v35 += 72;
    (*(void (__fastcall **)(_BYTE *, __int64, _BYTE *, _BYTE *))(qword_496C00 + 8 * v47))(
      v46,
      v45,
      &v39[4 * v48],
      &v37[4 * v48]);
  }
  while ( v36 != v38 );
LABEL_35:
  v33 = v108;
  v34 = v42;
  v29 = v41;
  v13 = v40;
  v31 = v39;
  v17 = v38;
  v30 = v37;
  v28 = v113;
  if ( v29 )
    goto LABEL_36;
LABEL_57:
  v57 = a6;
  if ( a6 < v17 )
  {
    v58 = (int *)&v28[72 * a6];
    v59 = v34;
    v117 = v17;
    v60 = v58;
    do
    {
      if ( !*(_DWORD *)(a1 + 32) )
        break;
      v64 = v60[2];
      v65 = v60[11];
      if ( v65 != -1 )
      {
        v66 = *(_DWORD *)(v59 + 16LL * v65);
        if ( v66 < 0 )
        {
          v89 = *((_WORD *)v60 + 6) | 0x20;
          v60[1] = -v66;
          *((_WORD *)v60 + 6) = v89;
        }
        else
        {
          v60[1] = v66;
        }
      }
      v67 = v60[10];
      if ( v67 != -1 )
      {
        v68 = *(_DWORD *)(v59 + 16LL * v67);
        if ( v68 < 0 )
          v68 = -1;
        *v60 = v68;
      }
      if ( qword_496BF8 )
      {
        v69 = *(_QWORD *)(qword_496BF8 + 8LL * (unsigned __int8)v64);
        if ( v69 )
        {
          v61 = sub_441480(a1, v69, v59 + 16LL * v60[12], *((_QWORD *)v60 + 7), v60);
          if ( v61 != -2 )
          {
            if ( v61 < 0 )
              goto LABEL_10;
            goto LABEL_61;
          }
        }
      }
      if ( (unsigned __int8)(v64 - 32) <= 0x5Au )
        __asm { BR              X0 }
      v70 = *(_BYTE **)(a1 + 8);
      if ( v70 == *(_BYTE **)(a1 + 16) )
      {
        sub_43E2F0(a1, 37);
      }
      else
      {
        *(_QWORD *)(a1 + 8) = v70 + 1;
        *v70 = 37;
      }
      v71 = *((_WORD *)v60 + 6);
      if ( (v71 & 8) != 0 )
      {
        v92 = *(_BYTE **)(a1 + 8);
        if ( v92 == *(_BYTE **)(a1 + 16) )
        {
          sub_43E2F0(a1, 35);
          v71 = *((_WORD *)v60 + 6);
          if ( (v71 & 0x80) == 0 )
          {
LABEL_77:
            if ( (v71 & 0x40) == 0 )
              goto LABEL_78;
            goto LABEL_118;
          }
        }
        else
        {
          *(_QWORD *)(a1 + 8) = v92 + 1;
          *v92 = 35;
          v71 = *((_WORD *)v60 + 6);
          if ( (v71 & 0x80) == 0 )
            goto LABEL_77;
        }
      }
      else if ( (v71 & 0x80) == 0 )
      {
        goto LABEL_77;
      }
      v91 = *(_BYTE **)(a1 + 8);
      if ( v91 == *(_BYTE **)(a1 + 16) )
      {
        sub_43E2F0(a1, 39);
        v71 = *((_WORD *)v60 + 6);
        if ( (v71 & 0x40) == 0 )
        {
LABEL_78:
          if ( (v71 & 0x10) != 0 )
          {
            v93 = *(_BYTE **)(a1 + 8);
            if ( v93 == *(_BYTE **)(a1 + 16) )
            {
              sub_43E2F0(a1, 32);
            }
            else
            {
              *(_QWORD *)(a1 + 8) = v93 + 1;
              *v93 = 32;
            }
            v71 = *((_WORD *)v60 + 6);
          }
          goto LABEL_79;
        }
      }
      else
      {
        *(_QWORD *)(a1 + 8) = v91 + 1;
        *v91 = 39;
        v71 = *((_WORD *)v60 + 6);
        if ( (v71 & 0x40) == 0 )
          goto LABEL_78;
      }
LABEL_118:
      v90 = *(_BYTE **)(a1 + 8);
      if ( v90 == *(_BYTE **)(a1 + 16) )
      {
        sub_43E2F0(a1, 43);
      }
      else
      {
        *(_QWORD *)(a1 + 8) = v90 + 1;
        *v90 = 43;
      }
      v71 = *((_WORD *)v60 + 6);
LABEL_79:
      if ( (v71 & 0x20) != 0 )
      {
        v96 = *(_BYTE **)(a1 + 8);
        if ( v96 == *(_BYTE **)(a1 + 16) )
        {
          sub_43E2F0(a1, 45);
        }
        else
        {
          *(_QWORD *)(a1 + 8) = v96 + 1;
          *v96 = 45;
        }
      }
      v72 = (unsigned int)v60[4];
      if ( (_DWORD)v72 == 48 )
      {
        v102 = *(_BYTE **)(a1 + 8);
        if ( v102 == *(_BYTE **)(a1 + 16) )
        {
          sub_43E2F0(a1, v72);
        }
        else
        {
          *(_QWORD *)(a1 + 8) = v102 + 1;
          *v102 = 48;
        }
      }
      if ( (v60[3] & 0x800) != 0 )
      {
        v101 = *(_BYTE **)(a1 + 8);
        if ( v101 == *(_BYTE **)(a1 + 16) )
        {
          sub_43E2F0(a1, 73);
        }
        else
        {
          *(_QWORD *)(a1 + 8) = v101 + 1;
          *v101 = 73;
        }
      }
      v73 = v60[1];
      if ( v73 )
      {
        v97 = (_BYTE *)sub_4244D0(v73, (__int64)v130, 0xAu, 0);
        if ( v97 < v130 )
        {
          do
          {
            v98 = *(_BYTE **)(a1 + 8);
            v100 = (unsigned __int8)*v97++;
            v99 = v100;
            if ( v98 == *(_BYTE **)(a1 + 16) )
            {
              sub_43E2F0(a1, v99);
            }
            else
            {
              *(_QWORD *)(a1 + 8) = v98 + 1;
              *v98 = v99;
            }
          }
          while ( v97 != v130 );
        }
      }
      if ( *v60 != -1 )
      {
        v74 = *(_BYTE **)(a1 + 8);
        if ( v74 == *(_BYTE **)(a1 + 16) )
        {
          sub_43E2F0(a1, 46);
        }
        else
        {
          *(_QWORD *)(a1 + 8) = v74 + 1;
          *v74 = 46;
        }
        v75 = (_BYTE *)sub_4244D0(*v60, (__int64)v130, 0xAu, 0);
        if ( v75 < v130 )
        {
          do
          {
            v76 = *(_BYTE **)(a1 + 8);
            v78 = (unsigned __int8)*v75++;
            v77 = v78;
            if ( v76 == *(_BYTE **)(a1 + 16) )
            {
              sub_43E2F0(a1, v77);
            }
            else
            {
              *(_QWORD *)(a1 + 8) = v76 + 1;
              *v76 = v77;
            }
          }
          while ( v75 != v130 );
        }
      }
      if ( v60[2] )
      {
        v94 = *(_BYTE **)(a1 + 8);
        v95 = v60[2];
        if ( v94 == *(_BYTE **)(a1 + 16) )
        {
          sub_43E2F0(a1, (unsigned __int8)v60[2]);
        }
        else
        {
          *(_QWORD *)(a1 + 8) = v94 + 1;
          *v94 = v95;
        }
      }
LABEL_61:
      v62 = *((_QWORD *)v60 + 3);
      v63 = *((_QWORD *)v60 + 4);
      ++v57;
      v60 += 18;
      sub_43E650(a1, v62, v63 - v62);
    }
    while ( v117 > v57 );
  }
LABEL_11:
  if ( v127 != v129 )
    sub_40C1A0((unsigned __int64)v127, *(double *)&v19, v20, v21, v22, v23, v24, v25, v26);
  if ( v123 != v125 )
    sub_40C1A0((unsigned __int64)v123, *(double *)&v19, v20, v21, v22, v23, v24, v25, v26);
  result = &qword_48DD60;
  if ( v131 != qword_48DD60 )
  {
    v107 = sub_412340();
    return (__int64 *)sub_4262A0(v107);
  }
  return result;
}
