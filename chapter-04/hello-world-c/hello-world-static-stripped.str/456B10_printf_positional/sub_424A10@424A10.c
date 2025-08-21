__int64 *__fastcall sub_424A10(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        char *a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        char a12)
{
  _BYTE *v15; // x24
  unsigned __int64 v16; // x21
  char *v17; // x19
  unsigned __int64 v18; // x28
  unsigned __int64 v19; // x25
  __int64 *result; // x0
  _BYTE *v21; // x21
  unsigned __int64 v22; // x23
  _BYTE *v23; // x22
  _BYTE *v24; // x26
  __int64 v25; // x1
  __int64 v26; // x2
  _BYTE *v27; // x3
  _BYTE *v28; // x25
  _BYTE *v29; // x21
  char *v30; // x22
  _BYTE *v31; // x28
  __int64 v32; // x26
  unsigned __int64 v33; // x24
  _BYTE *v34; // x23
  int v35; // w0
  int v36; // w0
  __int64 v37; // x1
  _BYTE *v38; // x0
  __int64 v39; // x6
  __int64 v40; // x2
  __int64 v41; // x4
  unsigned __int64 v42; // x25
  int v43; // w0
  __int64 v44; // x19
  _DWORD *v45; // x1
  int v46; // w1
  _DWORD *v47; // x0
  int v48; // w1
  _QWORD *v49; // x0
  unsigned __int64 v50; // x24
  int *v51; // x26
  _BYTE *v52; // x21
  int *v53; // x28
  int v54; // w0
  __int64 v55; // x1
  __int64 v56; // x2
  int v57; // w20
  int v58; // w0
  int v59; // w22
  int v60; // w0
  int v61; // w5
  __int64 v62; // x1
  _BYTE *v63; // x0
  __int16 v64; // w0
  __int64 v65; // x1
  int v66; // w0
  _BYTE *v67; // x0
  _BYTE *v68; // x19
  _BYTE *v69; // x2
  __int64 v70; // x1
  unsigned int v71; // t1
  _QWORD *v72; // x1
  int v73; // w5
  unsigned __int64 v74; // x0
  int v75; // w1
  _QWORD *v76; // x0
  _QWORD *v77; // x6
  _QWORD *v78; // x5
  int v79; // w0
  _OWORD *v80; // x0
  _QWORD *v81; // x0
  __int16 v82; // w0
  _BYTE *v83; // x0
  _BYTE *v84; // x0
  _BYTE *v85; // x0
  _BYTE *v86; // x0
  _BYTE *v87; // x1
  char v88; // w0
  _BYTE *v89; // x0
  _BYTE *v90; // x19
  _BYTE *v91; // x2
  __int64 v92; // x1
  unsigned int v93; // t1
  _BYTE *v94; // x0
  _BYTE *v95; // x0
  int *v96; // x5
  __int64 v97; // x0
  __int64 v98; // x22
  _BYTE *v99; // x19
  __int64 v100; // x0
  __int64 v101; // x1
  __int64 *v102; // x2
  char v103; // w3
  __int64 v104; // [xsp+0h] [xbp-920h]
  __int64 v105; // [xsp+0h] [xbp-920h]
  _BYTE *v106; // [xsp+0h] [xbp-920h]
  __int64 v107; // [xsp+18h] [xbp-908h]
  _BYTE *v108; // [xsp+18h] [xbp-908h]
  _BYTE *v109; // [xsp+18h] [xbp-908h]
  __int64 v110; // [xsp+18h] [xbp-908h]
  __int64 v111; // [xsp+18h] [xbp-908h]
  unsigned __int64 v113; // [xsp+38h] [xbp-8E8h]
  _BYTE *v114; // [xsp+40h] [xbp-8E0h]
  __int64 v115; // [xsp+50h] [xbp-8D0h]
  __int64 v116; // [xsp+58h] [xbp-8C8h]
  unsigned __int64 v117; // [xsp+B8h] [xbp-868h] BYREF
  __int64 v118; // [xsp+C0h] [xbp-860h] BYREF
  _BYTE *v119; // [xsp+E0h] [xbp-840h] BYREF
  unsigned __int64 v120; // [xsp+E8h] [xbp-838h]
  _BYTE v121[784]; // [xsp+F0h] [xbp-830h] BYREF
  __int64 v122; // [xsp+400h] [xbp-520h]
  _BYTE *v123; // [xsp+4F0h] [xbp-430h] BYREF
  __int64 v124; // [xsp+4F8h] [xbp-428h]
  _BYTE v125[1032]; // [xsp+500h] [xbp-420h] BYREF
  _BYTE v126[4]; // [xsp+914h] [xbp-Ch] BYREF
  __int64 v127; // [xsp+918h] [xbp-8h]

  v122 = 0;
  v127 = qword_48DD60;
  v117 = 0;
  v119 = v121;
  v120 = 1024;
  v123 = v125;
  v124 = 1024;
  if ( a10 == -1 )
    goto LABEL_43;
  while ( 1 )
  {
    if ( *a7 )
    {
      v107 = a5;
      v15 = v121;
      v16 = 14;
      v17 = a7;
      v18 = 0;
      v19 = 0;
      while ( 1 )
      {
        a7 = &v15[72 * v18];
        v19 += sub_428180(v17, v19, a7, &v117, &v118);
        if ( (v118 & 1) != 0 )
          goto LABEL_9;
        v17 = (char *)*((_QWORD *)a7 + 4);
        ++v18;
        if ( !*v17 )
          break;
        if ( v16 == v18 )
        {
          if ( (sub_42EB70(&v119) & 1) == 0 )
            goto LABEL_9;
          v15 = v119;
          v16 = v120 / 0x48;
        }
      }
      v21 = v15;
      a5 = v107;
      if ( v117 < v19 )
        v22 = v19;
      else
        v22 = v117;
    }
    else
    {
      v21 = v121;
      v22 = 0;
      v18 = 0;
    }
    if ( (sub_42EC30() & 1) == 0 )
    {
LABEL_9:
      *(_DWORD *)(a1 + 32) = 0;
      goto LABEL_10;
    }
    v23 = &v123[16 * v22];
    v115 = 16 * v22;
    v24 = &v23[4 * v22];
    v104 = 4 * v22;
    v108 = v123;
    v114 = &v24[4 * v22];
    v25 = (a12 & 2) != 0 ? 255LL : 0LL;
    ifunc_40DE70(&v23[4 * v22], v25, 4 * v22);
    v26 = 4 * v22;
    v27 = v108;
    if ( v18 )
      break;
    if ( !v22 )
      goto LABEL_10;
LABEL_35:
    v41 = 0;
    v42 = 0;
    while ( 1 )
    {
      v43 = *(_DWORD *)&v24[4 * v42];
      v44 = 4 * v42;
      v45 = &v24[4 * v42];
      if ( v43 <= 7 )
        break;
      if ( v43 == 263 )
      {
        v77 = &v27[v41];
        v78 = *(_QWORD **)a5;
        v79 = *(_DWORD *)(a5 + 28);
        if ( (a12 & 1) != 0 )
        {
          if ( v79 < 0 && (*(_DWORD *)(a5 + 28) = v79 + 16, v79 + 16 <= 0) )
            v78 = (_QWORD *)(*(_QWORD *)(a5 + 16) + v79);
          else
            *(_QWORD *)a5 = ((unsigned __int64)v78 + 15) & 0xFFFFFFFFFFFFFFF8LL;
          *v77 = *v78;
          *v45 &= ~0x100u;
        }
        else
        {
          if ( v79 < 0 && (*(_DWORD *)(a5 + 28) = v79 + 16, v79 + 16 <= 0) )
          {
            v80 = (_OWORD *)(*(_QWORD *)(a5 + 16) + v79);
          }
          else
          {
            v80 = (_OWORD *)(((unsigned __int64)v78 + 15) & 0xFFFFFFFFFFFFFFF0LL);
            *(_QWORD *)a5 = v80 + 1;
          }
          *(_OWORD *)v77 = *v80;
        }
        goto LABEL_56;
      }
      if ( v43 > 263 )
      {
        if ( v43 == 512 )
          goto LABEL_53;
        if ( v43 == 1024 )
          goto LABEL_48;
LABEL_52:
        if ( (v43 & 0x800) != 0 )
          goto LABEL_53;
        goto LABEL_110;
      }
      if ( v43 == 256 )
      {
LABEL_53:
        v48 = *(_DWORD *)(a5 + 24);
        v49 = *(_QWORD **)a5;
        if ( v48 < 0 && (*(_DWORD *)(a5 + 24) = v48 + 8, v48 + 8 <= 0) )
          v49 = (_QWORD *)(*(_QWORD *)(a5 + 8) + v48);
        else
          *(_QWORD *)a5 = ((unsigned __int64)v49 + 15) & 0xFFFFFFFFFFFFFFF8LL;
        *(_QWORD *)&v27[v41] = *v49;
        goto LABEL_56;
      }
LABEL_110:
      a7 = (char *)&unk_496000;
      if ( qword_496C10 && *(_QWORD *)(qword_496C10 + 8LL * v43 - 64) )
      {
        v96 = (int *)&v23[v44];
        if ( &v123[v124] < &v114[*(int *)&v23[4 * v42]] )
        {
          do
          {
            v105 = v26;
            v110 = v41;
            v98 = v114 - &v24[v26];
            if ( (sub_42EB70(&v123) & 1) == 0 )
              goto LABEL_9;
            v26 = v105;
            v97 = v105 + v98;
            v27 = v123;
            v23 = &v123[v115];
            v24 = &v123[v115 + v105];
            v96 = (int *)&v123[v115 + v44];
            v114 = &v24[v97];
            v41 = v110;
          }
          while ( &v24[v97 + *(int *)&v123[4 * v42 + v115]] > &v123[v124] );
        }
        *(_QWORD *)&v27[v41] = v114;
        v106 = v27;
        v111 = v41;
        v116 = v26;
        v99 = &v114[*v96];
        (*(void (**)(void))(qword_496C10 + 8LL * *(int *)&v24[4 * v42] - 64))();
        v114 = v99;
        v27 = v106;
        v41 = v111;
        v26 = v116;
      }
      else
      {
        v81 = &v27[v41];
        *v81 = 0;
        v81[1] = 0;
      }
LABEL_56:
      ++v42;
      v41 += 16;
      if ( v42 >= v22 )
        goto LABEL_57;
    }
    if ( v43 > 5 )
    {
      v75 = *(_DWORD *)(a5 + 28);
      v76 = *(_QWORD **)a5;
      if ( v75 < 0 && (*(_DWORD *)(a5 + 28) = v75 + 16, v75 + 16 <= 0) )
        v76 = (_QWORD *)(*(_QWORD *)(a5 + 16) + v75);
      else
        *(_QWORD *)a5 = ((unsigned __int64)v76 + 15) & 0xFFFFFFFFFFFFFFF8LL;
      *(_QWORD *)&v27[v41] = *v76;
      goto LABEL_56;
    }
    if ( v43 == 2 )
    {
LABEL_48:
      v46 = *(_DWORD *)(a5 + 24);
      v47 = *(_DWORD **)a5;
      if ( v46 < 0 && (*(_DWORD *)(a5 + 24) = v46 + 8, v46 + 8 <= 0) )
        v47 = (_DWORD *)(*(_QWORD *)(a5 + 8) + v46);
      else
        *(_QWORD *)a5 = ((unsigned __int64)v47 + 11) & 0xFFFFFFFFFFFFFFF8LL;
      *(_DWORD *)&v27[v41] = *v47;
      goto LABEL_56;
    }
    if ( v43 > 2 )
    {
      v72 = *(_QWORD **)a5;
      v73 = *(_DWORD *)(a5 + 24);
      v74 = (*(_QWORD *)a5 + 15LL) & 0xFFFFFFFFFFFFFFF8LL;
      if ( v73 < 0 && (*(_DWORD *)(a5 + 24) = v73 + 8, v73 + 8 <= 0) )
        v72 = (_QWORD *)(*(_QWORD *)(a5 + 8) + v73);
      else
        *(_QWORD *)a5 = v74;
      *(_QWORD *)&v27[v41] = *v72;
      goto LABEL_56;
    }
    if ( v43 != -1 )
    {
      if ( (unsigned int)v43 <= 1 )
        goto LABEL_48;
      goto LABEL_52;
    }
    if ( (a12 & 2) == 0 )
      sub_41F250(
        "(mode_flags & PRINTF_FORTIFY) != 0",
        (__int64)"vfprintf-internal.c",
        0x4F5u,
        (__int64)"printf_positional");
    sub_401A30("*** invalid %N$ use detected ***\n", v45, v26, v27, v41);
LABEL_43:
    _ReadStatusReg(TPIDR_EL0);
  }
  v28 = v21;
  a7 = 0;
  v109 = v21;
  v29 = v23;
  v30 = (char *)v18;
  v31 = v24;
  v32 = a5;
  v33 = v22;
  v34 = v27;
  do
  {
    while ( 1 )
    {
      v35 = *((_DWORD *)v28 + 11);
      if ( v35 != -1 )
        *(_DWORD *)&v31[4 * v35] = 0;
      v36 = *((_DWORD *)v28 + 10);
      if ( v36 != -1 )
        *(_DWORD *)&v31[4 * v36] = 0;
      v37 = *((_QWORD *)v28 + 7);
      if ( !v37 )
        goto LABEL_26;
      if ( v37 != 1 )
        break;
      *(_DWORD *)&v31[4 * *((int *)v28 + 12)] = *((_DWORD *)v28 + 13);
      *(_DWORD *)&v29[4 * *((int *)v28 + 12)] = *((_DWORD *)v28 + 16);
LABEL_26:
      ++a7;
      v28 += 72;
      if ( a7 == v30 )
        goto LABEL_34;
    }
    v38 = v28;
    v39 = *((unsigned int *)v28 + 2);
    ++a7;
    v40 = *((int *)v28 + 12);
    v28 += 72;
    (*(void (__fastcall **)(_BYTE *, __int64, _BYTE *, _BYTE *))(qword_496C00 + 8 * v39))(
      v38,
      v37,
      &v31[4 * v40],
      &v29[4 * v40]);
  }
  while ( a7 != v30 );
LABEL_34:
  v26 = v104;
  v27 = v34;
  v22 = v33;
  a5 = v32;
  v24 = v31;
  v18 = (unsigned __int64)v30;
  v23 = v29;
  v21 = v109;
  if ( v22 )
    goto LABEL_35;
LABEL_57:
  v50 = a6;
  if ( a6 < v18 )
  {
    v51 = (int *)&v21[72 * a6];
    v52 = v27;
    v113 = v18;
    v53 = v51;
    do
    {
      if ( !*(_DWORD *)(a1 + 32) )
        break;
      v57 = v53[2];
      v58 = v53[11];
      if ( v58 != -1 )
      {
        v59 = *(_DWORD *)&v52[16 * v58];
        if ( v59 < 0 )
        {
          v82 = *((_WORD *)v53 + 6) | 0x20;
          v53[1] = -v59;
          *((_WORD *)v53 + 6) = v82;
        }
        else
        {
          v53[1] = v59;
        }
      }
      v60 = v53[10];
      if ( v60 != -1 )
      {
        v61 = *(_DWORD *)&v52[16 * v60];
        if ( v61 < 0 )
          v61 = -1;
        *v53 = v61;
      }
      if ( qword_496BF8 )
      {
        v62 = *(_QWORD *)(qword_496BF8 + 8LL * (unsigned __int8)v57);
        if ( v62 )
        {
          v54 = sub_441480(a1, v62, &v52[16 * v53[12]], *((_QWORD *)v53 + 7), v53);
          if ( v54 != -2 )
          {
            if ( v54 < 0 )
              goto LABEL_9;
            goto LABEL_61;
          }
        }
      }
      if ( (unsigned __int8)(v57 - 32) <= 0x5Au )
        __asm { BR              X0 }
      v63 = *(_BYTE **)(a1 + 8);
      if ( v63 == *(_BYTE **)(a1 + 16) )
      {
        sub_43E2F0(a1, 37);
      }
      else
      {
        *(_QWORD *)(a1 + 8) = v63 + 1;
        *v63 = 37;
      }
      v64 = *((_WORD *)v53 + 6);
      if ( (v64 & 8) != 0 )
      {
        v85 = *(_BYTE **)(a1 + 8);
        if ( v85 == *(_BYTE **)(a1 + 16) )
        {
          sub_43E2F0(a1, 35);
          v64 = *((_WORD *)v53 + 6);
          if ( (v64 & 0x80) == 0 )
          {
LABEL_77:
            if ( (v64 & 0x40) == 0 )
              goto LABEL_78;
            goto LABEL_118;
          }
        }
        else
        {
          *(_QWORD *)(a1 + 8) = v85 + 1;
          *v85 = 35;
          v64 = *((_WORD *)v53 + 6);
          if ( (v64 & 0x80) == 0 )
            goto LABEL_77;
        }
      }
      else if ( (v64 & 0x80) == 0 )
      {
        goto LABEL_77;
      }
      v84 = *(_BYTE **)(a1 + 8);
      if ( v84 == *(_BYTE **)(a1 + 16) )
      {
        sub_43E2F0(a1, 39);
        v64 = *((_WORD *)v53 + 6);
        if ( (v64 & 0x40) == 0 )
        {
LABEL_78:
          if ( (v64 & 0x10) != 0 )
          {
            v86 = *(_BYTE **)(a1 + 8);
            if ( v86 == *(_BYTE **)(a1 + 16) )
            {
              sub_43E2F0(a1, 32);
            }
            else
            {
              *(_QWORD *)(a1 + 8) = v86 + 1;
              *v86 = 32;
            }
            v64 = *((_WORD *)v53 + 6);
          }
          goto LABEL_79;
        }
      }
      else
      {
        *(_QWORD *)(a1 + 8) = v84 + 1;
        *v84 = 39;
        v64 = *((_WORD *)v53 + 6);
        if ( (v64 & 0x40) == 0 )
          goto LABEL_78;
      }
LABEL_118:
      v83 = *(_BYTE **)(a1 + 8);
      if ( v83 == *(_BYTE **)(a1 + 16) )
      {
        sub_43E2F0(a1, 43);
      }
      else
      {
        *(_QWORD *)(a1 + 8) = v83 + 1;
        *v83 = 43;
      }
      v64 = *((_WORD *)v53 + 6);
LABEL_79:
      if ( (v64 & 0x20) != 0 )
      {
        v89 = *(_BYTE **)(a1 + 8);
        if ( v89 == *(_BYTE **)(a1 + 16) )
        {
          sub_43E2F0(a1, 45);
        }
        else
        {
          *(_QWORD *)(a1 + 8) = v89 + 1;
          *v89 = 45;
        }
      }
      v65 = (unsigned int)v53[4];
      if ( (_DWORD)v65 == 48 )
      {
        v95 = *(_BYTE **)(a1 + 8);
        if ( v95 == *(_BYTE **)(a1 + 16) )
        {
          sub_43E2F0(a1, v65);
        }
        else
        {
          *(_QWORD *)(a1 + 8) = v95 + 1;
          *v95 = 48;
        }
      }
      if ( (v53[3] & 0x800) != 0 )
      {
        v94 = *(_BYTE **)(a1 + 8);
        if ( v94 == *(_BYTE **)(a1 + 16) )
        {
          sub_43E2F0(a1, 73);
        }
        else
        {
          *(_QWORD *)(a1 + 8) = v94 + 1;
          *v94 = 73;
        }
      }
      v66 = v53[1];
      if ( v66 )
      {
        v90 = (_BYTE *)sub_4244D0(v66, v126, 10, 0);
        if ( v90 < v126 )
        {
          do
          {
            v91 = *(_BYTE **)(a1 + 8);
            v93 = (unsigned __int8)*v90++;
            v92 = v93;
            if ( v91 == *(_BYTE **)(a1 + 16) )
            {
              sub_43E2F0(a1, v92);
            }
            else
            {
              *(_QWORD *)(a1 + 8) = v91 + 1;
              *v91 = v92;
            }
          }
          while ( v90 != v126 );
        }
      }
      if ( *v53 != -1 )
      {
        v67 = *(_BYTE **)(a1 + 8);
        if ( v67 == *(_BYTE **)(a1 + 16) )
        {
          sub_43E2F0(a1, 46);
        }
        else
        {
          *(_QWORD *)(a1 + 8) = v67 + 1;
          *v67 = 46;
        }
        v68 = (_BYTE *)sub_4244D0(*v53, v126, 10, 0);
        if ( v68 < v126 )
        {
          do
          {
            v69 = *(_BYTE **)(a1 + 8);
            v71 = (unsigned __int8)*v68++;
            v70 = v71;
            if ( v69 == *(_BYTE **)(a1 + 16) )
            {
              sub_43E2F0(a1, v70);
            }
            else
            {
              *(_QWORD *)(a1 + 8) = v69 + 1;
              *v69 = v70;
            }
          }
          while ( v68 != v126 );
        }
      }
      if ( v53[2] )
      {
        v87 = *(_BYTE **)(a1 + 8);
        v88 = v53[2];
        if ( v87 == *(_BYTE **)(a1 + 16) )
        {
          sub_43E2F0(a1, (unsigned __int8)v53[2]);
        }
        else
        {
          *(_QWORD *)(a1 + 8) = v87 + 1;
          *v87 = v88;
        }
      }
LABEL_61:
      v55 = *((_QWORD *)v53 + 3);
      v56 = *((_QWORD *)v53 + 4);
      ++v50;
      v53 += 18;
      sub_43E650(a1, v55, v56 - v55);
    }
    while ( v113 > v50 );
  }
LABEL_10:
  if ( v123 != v125 )
    sub_40C1A0(v123);
  if ( v119 != v121 )
    sub_40C1A0(v119);
  result = &qword_48DD60;
  if ( v127 != qword_48DD60 )
  {
    v100 = sub_412340();
    return sub_4262A0(v100, v101, v102, v103);
  }
  return result;
}
