ssize_t __fastcall sub_4442E0(__int64 a1, unsigned __int8 a2)
{
  __int64 v2; // x6
  int v3; // w2
  int v4; // w2
  __int64 v5; // x26
  unsigned int v6; // w24
  __int64 *v7; // x1
  __int64 *v8; // x0
  __int64 v9; // x1
  char v10; // w2
  int v11; // w3
  int v12; // w1
  __int64 v13; // x0
  signed int v14; // w3
  int *v15; // x1
  __int64 v16; // x5
  __int64 v17; // x2
  __int64 v18; // x0
  _QWORD *v19; // x2
  signed int v20; // w0
  signed int v21; // w0
  __int64 v22; // t1
  unsigned int v23; // w1
  ssize_t result; // x0
  int v25; // w7
  _DWORD *v26; // x1
  _DWORD *v27; // x7
  signed int v28; // w0
  __int64 v29; // x2
  unsigned int v30; // w0
  unsigned __int64 v31; // x0
  int v32; // w19
  __int64 v33; // x3
  void *v34; // x4
  void *v35; // x5
  void *v36; // x6
  __int64 v37; // x7
  double v38; // d0
  double v39; // d1
  double v40; // d2
  double v41; // d3
  double v42; // d4
  double v43; // d5
  double v44; // d6
  double v45; // d7
  __int64 v46; // x20
  unsigned int v47; // w25
  int v48; // w21
  __int64 v49; // x0
  __int64 v50; // x28
  unsigned int v51; // w22
  int v52; // w1
  __int64 *v53; // x11
  __int64 v54; // x10
  unsigned __int64 v55; // x13
  __int64 *v56; // x9
  __int64 v57; // x0
  __int64 *v58; // x1
  __int64 v59; // x2
  int v60; // w8
  __int64 v61; // x0
  __int64 v62; // t1
  __int64 v63; // t1
  __int64 v64; // x1
  bool v65; // cc
  __int64 v66; // x12
  __int64 v67; // x0
  __int64 v68; // x0
  __int64 v69; // t1
  __int64 *v70; // x13
  __int64 v71; // t1
  bool v72; // zf
  int v73; // w0
  __int64 v74; // x0
  unsigned __int64 v75; // x0
  __int64 v76; // x2
  unsigned int v77; // w0
  unsigned int v78; // w7
  __int64 v79; // x1
  __int64 v80; // x14
  __int64 v81; // x12
  int *v82; // x0
  double v83; // d0
  double v84; // d1
  double v85; // d2
  double v86; // d3
  double v87; // d4
  double v88; // d5
  double v89; // d6
  double v90; // d7
  __int64 *v91; // x19
  __int64 v92; // x0
  __int64 v93; // x0
  unsigned __int64 *v94; // x20
  unsigned __int64 *v95; // x19
  unsigned __int64 v96; // x23
  __int64 v97; // x24
  unsigned __int64 v98; // x25
  __int16 v99; // w0
  __int64 v100; // x2
  __int64 **v101; // x3
  __int64 v102; // x1
  double v103; // d0
  double v104; // d1
  double v105; // d2
  double v106; // d3
  double v107; // d4
  double v108; // d5
  double v109; // d6
  double v110; // d7
  double v111; // d0
  double v112; // d1
  double v113; // d2
  double v114; // d3
  double v115; // d4
  double v116; // d5
  double v117; // d6
  double v118; // d7
  unsigned __int64 v119; // x0
  double v120; // d0
  double v121; // d1
  double v122; // d2
  double v123; // d3
  double v124; // d4
  double v125; // d5
  double v126; // d6
  double v127; // d7
  double v128; // d0
  double v129; // d1
  double v130; // d2
  double v131; // d3
  double v132; // d4
  double v133; // d5
  double v134; // d6
  double v135; // d7
  unsigned __int64 v136; // x28
  unsigned __int64 v137; // x0
  int v138; // w2
  double v139; // d0
  double v140; // d1
  double v141; // d2
  double v142; // d3
  double v143; // d4
  double v144; // d5
  double v145; // d6
  double v146; // d7
  unsigned __int64 v147; // x0
  unsigned __int64 v148; // x0
  unsigned __int64 v149; // x0
  __int64 **v150; // x3
  __int64 *v151; // x0
  __int64 *v152; // x2
  __int64 *v153; // x2
  __int64 v154; // x0
  unsigned __int64 v155; // x1
  unsigned __int64 v156; // x0
  int v157; // w7
  __int64 v158; // x5
  __int64 *v159; // x2
  unsigned int i; // w0
  __int64 v161; // x3
  __int64 v162; // x7
  __int64 v163; // x1
  __int64 v164; // x6
  __int64 v165; // [xsp+20h] [xbp-10010h] BYREF
  _QWORD v166[126]; // [xsp+30h] [xbp-10000h] BYREF
  __int64 v167; // [xsp+420h] [xbp-FC10h]
  _BYTE v168[16]; // [xsp+10020h] [xbp-10h] BYREF
  __int64 v169; // [xsp+10090h] [xbp+60h]
  __int64 *v170; // [xsp+10098h] [xbp+68h]
  int v171; // [xsp+100A4h] [xbp+74h]
  __int64 v172; // [xsp+100A8h] [xbp+78h]
  __int64 v173; // [xsp+100B0h] [xbp+80h]
  int *v174; // [xsp+100B8h] [xbp+88h]
  __int64 v175; // [xsp+100C0h] [xbp+90h]
  __int64 v176; // [xsp+100C8h] [xbp+98h]
  __int64 v177; // [xsp+100D0h] [xbp+A0h]
  __int64 **v178; // [xsp+100D8h] [xbp+A8h]
  _BYTE *v179; // [xsp+100E0h] [xbp+B0h]
  __int64 v180; // [xsp+100E8h] [xbp+B8h]
  int *v181; // [xsp+100F0h] [xbp+C0h]
  __int64 **v182; // [xsp+100F8h] [xbp+C8h]

  v2 = a1;
  v3 = *(_DWORD *)(a1 + 864);
  LODWORD(v180) = a2;
  v4 = v3 - 1;
  *(_DWORD *)(a1 + 864) = v4;
  if ( (*(_QWORD *)(a1 + 864) & 0x3FFFFFFFFLL) != 0x200000000LL )
  {
LABEL_31:
    result = (unsigned int)dword_496770;
    if ( (dword_496770 & 0x40) != 0 )
      return sub_438334("\nclosing file=%s; direct_opencount=%u\n", *(const char **)(v2 + 8), v4);
    return result;
  }
  if ( dword_496C18 )
  {
    dword_496C18 = 2;
    goto LABEL_31;
  }
  v5 = *(_QWORD *)(a1 + 48);
  v182 = &off_4914A8;
  v177 = 4 * v5;
  v178 = &(&off_4914A8)[21 * v5];
  while ( 2 )
  {
    v6 = *((_DWORD *)v178 + 2);
    v179 = v168;
    dword_496C18 = 1;
    v7 = (__int64 *)&v168[-((8LL * v6 + 15) & 0xFFFFF0000LL)];
    if ( v168 != (_BYTE *)v7 )
    {
      do
        v167 = 0;
      while ( &v165 != v7 );
    }
    v165 = 0;
    if ( ((8 * (_WORD)v6 + 15) & 0xFFF0u) >= 0x400uLL )
      v167 = 0;
    v8 = *v178;
    if ( !*v178 )
    {
      if ( !v6 )
      {
        if ( v2 )
        {
          v157 = *(_DWORD *)(v2 + 1068);
          v158 = v166[0];
          v166[v157] = v166[0];
          *(_DWORD *)(v158 + 1068) = v157;
          v166[0] = v2;
          *(_DWORD *)(v2 + 1068) = 0;
          sub_4472F0(v166, 0, 1, 1);
        }
        else
        {
          sub_4472F0(v166, 0, 0, 1);
        }
        goto LABEL_94;
      }
LABEL_200:
      sub_41F250("idx == nloaded", (__int64)"dl-close.c", 0x9Au, (__int64)"_dl_close_worker");
    }
    v9 = 0;
    do
    {
      v10 = *((_BYTE *)v8 + 869);
      v11 = v9;
      *((_DWORD *)v8 + 267) = v9;
      *((_BYTE *)v8 + 869) = v10 & 0xF3;
      v166[v9++] = v8;
      v8 = (__int64 *)v8[3];
    }
    while ( v8 );
    if ( v11 + 1 != v6 )
      goto LABEL_200;
    if ( v2 )
    {
      v12 = *(_DWORD *)(v2 + 1068);
      v13 = v166[0];
      v166[v12] = v166[0];
      *(_DWORD *)(v13 + 1068) = v12;
      v166[0] = v2;
      *(_DWORD *)(v2 + 1068) = 0;
    }
    v14 = 0;
    do
    {
      while ( 1 )
      {
        v16 = v166[v14];
        if ( (*(_WORD *)(v16 + 868) & 0x800) == 0 )
          break;
LABEL_16:
        if ( ++v14 >= v6 )
          goto LABEL_49;
      }
      if ( (*(_QWORD *)(v16 + 864) & 0x3FFFFFFFFLL) != 0x200000000LL
        || (*(_BYTE *)(v16 + 871) & 1) != 0
        || (v31 = atomic_load((unsigned __int64 *)(v16 + 1184))) != 0
        || (*(_WORD *)(v16 + 868) & 0x400) != 0 )
      {
        v17 = *(_QWORD *)(v16 + 1032);
        *(_DWORD *)(v16 + 1068) = -1;
        *(_BYTE *)(v16 + 869) |= 0xCu;
        if ( v17 )
        {
          v18 = *(_QWORD *)(v17 + 8);
          v19 = (_QWORD *)(v17 + 8);
          if ( v18 )
          {
            do
            {
              v23 = *(_DWORD *)(v18 + 1068);
              if ( v23 != -1 )
              {
                if ( (v23 & 0x80000000) != 0 || v23 >= v6 )
                  sub_41F250(
                    "(*lp)->l_idx >= 0 && (*lp)->l_idx < nloaded",
                    (__int64)"dl-close.c",
                    0xCAu,
                    (__int64)"_dl_close_worker");
                if ( (*(_WORD *)(v18 + 868) & 0x400) == 0 )
                {
                  *(_WORD *)(v18 + 868) |= 0x400u;
                  v20 = *(_DWORD *)(*v19 + 1068LL);
                  v65 = v20 <= v14;
                  v21 = v20 - 1;
                  if ( v65 )
                    v14 = v21;
                }
              }
              v22 = v19[1];
              ++v19;
              v18 = v22;
            }
            while ( v22 );
          }
        }
        v15 = *(int **)(v16 + 1040);
        if ( v15 )
        {
          v25 = *v15;
          if ( *v15 )
          {
            v26 = v15 + 2;
            v27 = &v26[2 * v25];
            do
            {
              v29 = *(_QWORD *)v26;
              v30 = *(_DWORD *)(*(_QWORD *)v26 + 1068LL);
              if ( v30 != -1 )
              {
                if ( (v30 & 0x80000000) != 0 || v30 >= v6 )
                  sub_41F250(
                    "jmap->l_idx >= 0 && jmap->l_idx < nloaded",
                    (__int64)"dl-close.c",
                    0xE3u,
                    (__int64)"_dl_close_worker");
                if ( (*(_WORD *)(v29 + 868) & 0x400) == 0 )
                {
                  v65 = (int)v30 <= v14;
                  v28 = v30 - 1;
                  if ( v65 )
                    v14 = v28;
                  *(_WORD *)(v29 + 868) |= 0x400u;
                }
              }
              v26 += 2;
            }
            while ( v27 != v26 );
          }
        }
        goto LABEL_16;
      }
      ++v14;
    }
    while ( v14 < v6 );
LABEL_49:
    v32 = 0;
    sub_4472F0(v166, v6, v2 != 0, 1);
    v46 = 0;
    v47 = -1;
    v48 = 0;
    LODWORD(v181) = 0;
    do
    {
      while ( 1 )
      {
        v50 = v166[v46];
        v51 = v46;
        if ( *(_QWORD *)(v50 + 48) != v5 )
          sub_41F250("imap->l_ns == nsid", (__int64)"dl-close.c", 0xFEu, (__int64)"_dl_close_worker");
        v75 = *(unsigned __int16 *)(v50 + 868);
        v52 = v75 & 3;
        if ( (v75 & 0x400) == 0 )
        {
          if ( v52 != 2 || (*(_BYTE *)(v50 + 871) & 1) != 0 )
            sub_41F250(
              "imap->l_type == lt_loaded && !imap->l_nodelete_active",
              (__int64)"dl-close.c",
              0x102u,
              (__int64)"_dl_close_worker");
          if ( (v75 & 0x10) != 0 )
          {
            sub_4322A0(
              0,
              (void (__fastcall *)(__int64))&loc_44B7B0,
              v166[v46],
              v33,
              (__int64)v34,
              (__int64)v35,
              (__int64)v36,
              v37);
            v75 = *(unsigned __int16 *)(v50 + 868);
          }
          v49 = (v75 >> 5) & 1;
          if ( v47 > (unsigned int)v46 )
            v47 = v46;
          v32 += v49;
          v48 = 1;
          *(_BYTE *)(v50 + 870) |= 4u;
          goto LABEL_57;
        }
        if ( v52 == 2 )
          break;
LABEL_57:
        if ( v6 == ++v46 )
          goto LABEL_93;
      }
      if ( *(_QWORD *)(v50 + 776) || (v76 = *(_QWORD *)(v50 + 1032)) == 0 )
      {
        v53 = *(__int64 **)(v50 + 976);
        v54 = 0;
        v55 = 1;
        v37 = *v53;
        if ( !*v53 )
          goto LABEL_87;
      }
      else
      {
        if ( *(_QWORD *)(v76 + 8) )
        {
          v77 = 1;
          do
            v78 = v77++;
          while ( *(_QWORD *)(v76 + 8LL * v77) );
          v79 = 8LL * (v78 + 2);
        }
        else
        {
          v79 = 16;
          v77 = 1;
        }
        v53 = *(__int64 **)(v50 + 976);
        v54 = v50 + 776;
        v37 = *v53;
        *(_QWORD *)(v50 + 776) = v76 + v79;
        *(_DWORD *)(v50 + 784) = v77;
        if ( !v37 )
        {
LABEL_97:
          *(_QWORD *)(v50 + 776) = 0;
          *(_DWORD *)(v50 + 784) = 0;
          goto LABEL_87;
        }
        v55 = 2;
      }
      v56 = v53 + 1;
      v57 = v37;
      v58 = v53 + 1;
      v59 = v50 + 792;
      v60 = 0;
      do
      {
        while ( v59 != v57 )
        {
          v61 = v57 - 776;
          if ( *(_QWORD *)(v61 + 48) != v5 )
            sub_41F250("tmap->l_ns == nsid", (__int64)"dl-close.c", 0x143u, (__int64)"_dl_close_worker");
          if ( *(_DWORD *)(v61 + 1068) == -1 )
            break;
          v62 = *v58++;
          v57 = v62;
          v60 = 1;
          if ( !v62 )
            goto LABEL_69;
        }
        v63 = *v58++;
        v57 = v63;
        ++v55;
      }
      while ( v63 );
LABEL_69:
      if ( v60 )
      {
        v64 = v50 + 936;
        v65 = (__int64 *)(v50 + 936) == v53 || v55 > 3;
        if ( v65 )
        {
          v66 = *(_QWORD *)(v50 + 968);
          v169 = v50 + 792;
          v170 = v53;
          v171 = v60;
          v172 = v54;
          v173 = v37;
          v174 = (int *)(v50 + 936);
          v175 = (__int64)(v53 + 1);
          v176 = v66;
          v67 = sub_40B890(8 * v66, v38, v39, v40, v41, v42, v43, v44, v45, v64, v59, v33, v34, v35, v36);
          v59 = v169;
          v53 = v170;
          v80 = v67;
          v54 = v172;
          v37 = v173;
          v64 = (__int64)v174;
          v56 = (__int64 *)v175;
          v81 = v176;
          v60 = v171;
          if ( !v67 )
            sub_432250(12, "dlclose", 0, "cannot create scope list");
        }
        else
        {
          v80 = v50 + 936;
          v81 = 4;
        }
        v68 = 0;
        do
        {
          while ( 1 )
          {
            v70 = (__int64 *)(v80 + 8 * v68);
            if ( v59 != v37 && *(_DWORD *)(v37 + 292) != -1 )
              break;
            *v70 = v37;
            ++v68;
            v71 = *v56++;
            v37 = v71;
            if ( !v71 )
              goto LABEL_83;
          }
          if ( v54 )
          {
            ++v68;
            *v70 = v54;
            v54 = 0;
          }
          v69 = *v56++;
          v37 = v69;
        }
        while ( v69 );
LABEL_83:
        *(_QWORD *)(v80 + 8 * v68) = 0;
        *(_QWORD *)(v50 + 976) = v80;
        if ( (__int64 *)v64 == v53 )
        {
          LODWORD(v181) = v60;
          *(_QWORD *)(v50 + 968) = v81;
        }
        else
        {
          v176 = v81;
          v72 = (unsigned int)sub_439EF0(
                                (unsigned __int64)v53,
                                v38,
                                v39,
                                v40,
                                v41,
                                v42,
                                v43,
                                v44,
                                v45,
                                v64,
                                v59,
                                v33,
                                v34,
                                v35,
                                v36) == 0;
          v73 = (int)v181;
          if ( !v72 )
            v73 = 0;
          LODWORD(v181) = v73;
          *(_QWORD *)(v50 + 968) = v176;
        }
      }
      else if ( v54 )
      {
        goto LABEL_97;
      }
LABEL_87:
      v74 = *(_QWORD *)(v50 + 808);
      if ( v74 && *(_DWORD *)(v74 + 1068) != -1 )
        *(_QWORD *)(v50 + 808) = 0;
      ++v46;
      if ( v47 > v51 )
        v47 = v51;
    }
    while ( v6 != v46 );
LABEL_93:
    if ( !v48 )
      goto LABEL_94;
    v82 = sub_412370(v5);
    v82[6] = 2;
    v174 = v82;
    sub_412360();
    if ( v32 )
    {
      v159 = (&(&v182[4 * v177])[4 * v5])[v5 + 2];
      for ( i = *((_DWORD *)v159 + 2); i; --i )
      {
        v161 = *v159;
        if ( (*(_BYTE *)(*(_QWORD *)(*v159 + 8LL * (i - 1)) + 870LL) & 4) == 0 )
        {
          if ( *((_DWORD *)v159 + 2) != v32 + i )
          {
            v162 = i;
            v163 = 0;
            i = 0;
            do
            {
              v164 = *(_QWORD *)(v161 + 8 * v163);
              if ( (*(_BYTE *)(v164 + 870) & 4) == 0 )
              {
                if ( i != (_DWORD)v163 )
                  *(_QWORD *)(v161 + 8LL * i) = v164;
                ++i;
              }
              ++v163;
            }
            while ( v163 != v162 );
          }
          break;
        }
      }
      *((_DWORD *)v159 + 2) = i;
      if ( !byte_490F08 )
      {
LABEL_111:
        sub_43A0A0();
        v91 = (__int64 *)qword_4967B0;
        if ( qword_4967B0 )
        {
          v92 = *(_QWORD *)qword_4967B0;
          if ( *(_QWORD *)qword_4967B0 )
          {
            do
            {
              v93 = v92 - 1;
              *v91 = v93;
              sub_40C1A0(v91[v93 + 1], v83, v84, v85, v86, v87, v88, v89, v90);
              v92 = *v91;
            }
            while ( *v91 );
          }
        }
      }
    }
    else if ( !byte_490F08 && (((unsigned __int8)v181 & 1) != 0 || qword_4967B0 && *(_QWORD *)qword_4967B0) )
    {
      goto LABEL_111;
    }
    sub_42D0B0(dword_490F30);
    sub_42D0B0(dword_490F60);
    if ( v47 >= v6 )
    {
      sub_42DA40(dword_490F60);
    }
    else
    {
      v175 = v5 + 4 * (v177 + v5);
      v94 = &v166[v47];
      v95 = &v166[v6 - 1 - v47 + 1 + (unsigned __int64)v47];
      v96 = 0;
      v97 = 0;
      LODWORD(v176) = 0;
      v181 = (int *)&v182[v175 + 5];
      do
      {
        while ( 1 )
        {
          v98 = *v94;
          v99 = *(_WORD *)(*v94 + 868);
          if ( (v99 & 0x400) == 0 )
            break;
          if ( v95 == ++v94 )
            goto LABEL_144;
        }
        if ( (v99 & 3) != 2 )
          sub_41F250("imap->l_type == lt_loaded", (__int64)"dl-close.c", 0x1EFu, (__int64)"_dl_close_worker");
        if ( *(_QWORD *)(v98 + 1144) )
        {
          if ( qword_4921A8
            && (sub_4441B0(
                  *(_QWORD *)(v98 + 1176),
                  (unsigned __int64 *)qword_4921A8,
                  0,
                  (*(_QWORD *)(v98 + 864) & 0x1000000000LL) != 0)
              & 1) == 0 )
          {
            qword_4921A0 = qword_4921C8;
          }
          v154 = *(_QWORD *)(v98 + 1168);
          LODWORD(v176) = v48;
          if ( (unsigned __int64)(v154 + 1) > 1 )
          {
            if ( v97 )
            {
              v155 = *(_QWORD *)(v98 + 1160);
              v156 = v154 + *(_QWORD *)(v98 + 1144);
              if ( v96 == v155 )
              {
                v96 = v156;
              }
              else if ( v97 == v156 )
              {
                v97 = *(_QWORD *)(v98 + 1160);
              }
              else if ( qword_4921B8 == v156 )
              {
                qword_4921B8 = *(_QWORD *)(v98 + 1160);
              }
              else if ( qword_4921B8 == v96 )
              {
                v96 = v156;
                qword_4921B8 = v97;
                v97 = v155;
              }
              else
              {
                if ( v96 < v155 )
                  v97 = *(_QWORD *)(v98 + 1160);
                else
                  v156 = v96;
                v96 = v156;
              }
            }
            else
            {
              v97 = *(_QWORD *)(v98 + 1160);
              v96 = v154 + *(_QWORD *)(v98 + 1144);
            }
          }
        }
        if ( (v180 & 1) != 0 )
        {
          sub_42D0B0(v181);
          v150 = &v182[v175];
          v151 = v150[11];
          if ( v151 )
          {
            v152 = v150[12];
            if ( v152 )
            {
              v153 = &v151[4 * (_QWORD)v152];
              do
              {
                if ( v151[1] && v151[3] == v98 )
                {
                  *(_DWORD *)v151 = 0;
                  v151[1] = 0;
                  v150[13] = (__int64 *)((char *)v150[13] - 1);
                }
                v151 += 4;
              }
              while ( v153 != v151 );
            }
          }
          sub_42DA40(v181);
        }
        sub_448030(v98);
        if ( v5 )
          sub_41F250("nsid == LM_ID_BASE", (__int64)"dl-close.c", 0x27Du, (__int64)"_dl_close_worker");
        v100 = *(_QWORD *)(v98 + 32);
        if ( !v100 )
          sub_41F250("imap->l_prev != NULL", (__int64)"dl-close.c", 0x27Eu, (__int64)"_dl_close_worker");
        v101 = v182;
        v102 = *(_QWORD *)(v98 + 24);
        *(_QWORD *)(v100 + 24) = v102;
        --*((_DWORD *)v101 + 2);
        if ( v102 )
          *(_QWORD *)(v102 + 32) = v100;
        v103 = sub_445D90(v98);
        sub_40C1A0(*(_QWORD *)(v98 + 816), v103, v104, v105, v106, v107, v108, v109, v110);
        v119 = *(_QWORD *)(v98 + 912);
        if ( v119 != -1 )
          sub_40C1A0(v119, v111, v112, v113, v114, v115, v116, v117, v118);
        sub_40C1A0(*(_QWORD *)(v98 + 1040), v111, v112, v113, v114, v115, v116, v117, v118);
        if ( (dword_496770 & 0x40) != 0 )
          sub_438334("\nfile=%s [%lu];  destroying link map\n", *(const char **)(v98 + 8), *(_QWORD *)(v98 + 48));
        sub_40C1A0(*(_QWORD *)(v98 + 8), v120, v121, v122, v123, v124, v125, v126, v127);
        v136 = *(_QWORD *)(v98 + 56);
        do
        {
          v137 = v136;
          v138 = *(_DWORD *)(v136 + 16);
          v136 = *(_QWORD *)(v136 + 8);
          if ( !v138 )
            sub_40C1A0(v137, v128, v129, v130, v131, v132, v133, v134, v135);
        }
        while ( v136 );
        sub_40C1A0(*(_QWORD *)(v98 + 1032), v128, v129, v130, v131, v132, v133, v134, v135);
        v147 = *(_QWORD *)(v98 + 976);
        if ( v147 != v98 + 936 )
          sub_40C1A0(v147, v139, v140, v141, v142, v143, v144, v145, v146);
        if ( (*(_WORD *)(v98 + 868) & 0x1000) != 0 )
          sub_40C1A0(*(_QWORD *)(v98 + 752), v139, v140, v141, v142, v143, v144, v145, v146);
        v148 = *(_QWORD *)(v98 + 880);
        if ( v148 != -1 )
          sub_40C1A0(v148, v139, v140, v141, v142, v143, v144, v145, v146);
        v149 = *(_QWORD *)(v98 + 1016);
        if ( v149 != -1 )
          sub_40C1A0(v149, v139, v140, v141, v142, v143, v144, v145, v146);
        if ( qword_496808 == v98 )
          qword_496808 = 0;
        ++v94;
        sub_40C1A0(v98, v139, v140, v141, v142, v143, v144, v145, v146);
      }
      while ( v95 != v94 );
LABEL_144:
      sub_42DA40(dword_490F60);
      if ( (v176 & 1) != 0 )
      {
        if ( qword_4921D0 == -1 )
          sub_4385C0(
            "TLS generation counter wrapped!  Please report as described in <https://bugs.launchpad.net/ubuntu/+source/glibc/+bugs>.\n");
        atomic_store(qword_4921D0 + 1, (unsigned __int64 *)&qword_4921D0);
        if ( qword_4921B8 == v96 )
          qword_4921B8 = v97;
      }
    }
    sub_42DA40(dword_490F30);
    if ( !(&(&v182[4 * v177])[4 * v5])[v5] && qword_490F20 - 1 == v5 )
      qword_490F20 = v5;
    v174[6] = 0;
    sub_412360();
LABEL_94:
    if ( dword_496C18 == 2 )
    {
      v2 = 0;
      continue;
    }
    break;
  }
  dword_496C18 = 0;
  return (ssize_t)v179;
}
