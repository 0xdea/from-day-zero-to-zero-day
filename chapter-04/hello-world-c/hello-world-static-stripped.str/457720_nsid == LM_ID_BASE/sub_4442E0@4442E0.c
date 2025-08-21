__int64 __fastcall sub_4442E0(__int64 a1, unsigned __int8 a2)
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
  __int64 result; // x0
  int v25; // w7
  _DWORD *v26; // x1
  _DWORD *v27; // x7
  signed int v28; // w0
  __int64 v29; // x2
  unsigned int v30; // w0
  unsigned __int64 v31; // x0
  int v32; // w19
  __int64 v33; // x3
  __int64 v34; // x4
  __int64 v35; // x5
  long double v36; // q0
  long double v37; // q1
  long double v38; // q2
  long double v39; // q3
  long double v40; // q4
  long double v41; // q5
  long double v42; // q6
  long double v43; // q7
  __int64 v44; // x20
  unsigned int v45; // w25
  int v46; // w21
  __int64 v47; // x0
  __int64 v48; // x28
  unsigned int v49; // w22
  int v50; // w1
  _QWORD *v51; // x11
  __int64 v52; // x10
  unsigned __int64 v53; // x13
  __int64 v54; // x7
  __int64 *v55; // x9
  __int16 *v56; // x0
  __int16 **v57; // x1
  __int16 *v58; // x2
  int v59; // w8
  __int16 *v60; // x0
  __int16 *v61; // t1
  __int16 *v62; // t1
  __int64 v63; // x1
  bool v64; // cc
  __int64 v65; // x12
  __int64 v66; // x0
  __int64 v67; // x0
  __int64 v68; // t1
  _QWORD *v69; // x13
  __int64 v70; // t1
  bool v71; // zf
  int v72; // w0
  __int64 v73; // x0
  unsigned __int64 v74; // x0
  __int64 v75; // x2
  unsigned int v76; // w0
  unsigned int v77; // w7
  __int64 v78; // x1
  __int64 v79; // x14
  __int64 v80; // x12
  __int64 v81; // x0
  __int64 *v82; // x19
  __int64 v83; // x0
  __int64 v84; // x0
  _QWORD *v85; // x20
  _QWORD *v86; // x19
  unsigned __int64 v87; // x23
  __int64 v88; // x24
  __int64 v89; // x25
  __int16 v90; // w0
  __int64 v91; // x2
  __int64 **v92; // x3
  __int64 v93; // x1
  __int64 v94; // x0
  __int64 v95; // x28
  __int64 v96; // x0
  int v97; // w2
  __int64 v98; // x0
  __int64 v99; // x0
  __int64 v100; // x0
  long double v101; // q0
  __int64 v102; // x0
  __int64 **v103; // x3
  __int64 *v104; // x0
  __int64 *v105; // x2
  __int64 *v106; // x2
  __int64 v107; // x0
  unsigned __int64 v108; // x1
  unsigned __int64 v109; // x0
  int v110; // w7
  __int64 v111; // x5
  __int64 *v112; // x2
  unsigned int i; // w0
  __int64 v114; // x3
  __int64 v115; // x7
  __int64 v116; // x1
  __int64 v117; // x6
  __int64 v118; // [xsp+20h] [xbp-10010h] BYREF
  _QWORD v119[126]; // [xsp+30h] [xbp-10000h] BYREF
  __int64 v120; // [xsp+420h] [xbp-FC10h]
  _BYTE v121[16]; // [xsp+10020h] [xbp-10h] BYREF
  __int16 *v122; // [xsp+10090h] [xbp+60h]
  _QWORD *v123; // [xsp+10098h] [xbp+68h]
  int v124; // [xsp+100A4h] [xbp+74h]
  __int64 v125; // [xsp+100A8h] [xbp+78h]
  __int64 v126; // [xsp+100B0h] [xbp+80h]
  __int64 v127; // [xsp+100B8h] [xbp+88h]
  __int64 v128; // [xsp+100C0h] [xbp+90h]
  __int64 v129; // [xsp+100C8h] [xbp+98h]
  __int64 v130; // [xsp+100D0h] [xbp+A0h]
  __int64 **v131; // [xsp+100D8h] [xbp+A8h]
  _BYTE *v132; // [xsp+100E0h] [xbp+B0h]
  __int64 v133; // [xsp+100E8h] [xbp+B8h]
  atomic_uint *v134; // [xsp+100F0h] [xbp+C0h]
  __int64 **v135; // [xsp+100F8h] [xbp+C8h]

  v2 = a1;
  v3 = *(_DWORD *)(a1 + 864);
  LODWORD(v133) = a2;
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
  v135 = &off_4914A8;
  v130 = 4 * v5;
  v131 = &(&off_4914A8)[21 * v5];
  while ( 2 )
  {
    v6 = *((_DWORD *)v131 + 2);
    v132 = v121;
    dword_496C18 = 1;
    v7 = (__int64 *)&v121[-((8LL * v6 + 15) & 0xFFFFF0000LL)];
    if ( v121 != (_BYTE *)v7 )
    {
      do
        v120 = 0;
      while ( &v118 != v7 );
    }
    v118 = 0;
    if ( ((8 * (_WORD)v6 + 15) & 0xFFF0u) >= 0x400uLL )
      v120 = 0;
    v8 = *v131;
    if ( !*v131 )
    {
      if ( !v6 )
      {
        if ( v2 )
        {
          v110 = *(_DWORD *)(v2 + 1068);
          v111 = v119[0];
          v119[v110] = v119[0];
          *(_DWORD *)(v111 + 1068) = v110;
          v119[0] = v2;
          *(_DWORD *)(v2 + 1068) = 0;
          sub_4472F0(v119, 0, 1, 1);
        }
        else
        {
          sub_4472F0(v119, 0, 0, 1);
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
      v119[v9++] = v8;
      v8 = (__int64 *)v8[3];
    }
    while ( v8 );
    if ( v11 + 1 != v6 )
      goto LABEL_200;
    if ( v2 )
    {
      v12 = *(_DWORD *)(v2 + 1068);
      v13 = v119[0];
      v119[v12] = v119[0];
      *(_DWORD *)(v13 + 1068) = v12;
      v119[0] = v2;
      *(_DWORD *)(v2 + 1068) = 0;
    }
    v14 = 0;
    do
    {
      while ( 1 )
      {
        v16 = v119[v14];
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
                  v64 = v20 <= v14;
                  v21 = v20 - 1;
                  if ( v64 )
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
                  v64 = (int)v30 <= v14;
                  v28 = v30 - 1;
                  if ( v64 )
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
    sub_4472F0(v119, v6, v2 != 0, 1);
    v44 = 0;
    v45 = -1;
    v46 = 0;
    LODWORD(v134) = 0;
    do
    {
      while ( 1 )
      {
        v48 = v119[v44];
        v49 = v44;
        if ( *(_QWORD *)(v48 + 48) != v5 )
          sub_41F250("imap->l_ns == nsid", (__int64)"dl-close.c", 0xFEu, (__int64)"_dl_close_worker");
        v74 = *(unsigned __int16 *)(v48 + 868);
        v50 = v74 & 3;
        if ( (v74 & 0x400) == 0 )
        {
          if ( v50 != 2 || (*(_BYTE *)(v48 + 871) & 1) != 0 )
            sub_41F250(
              "imap->l_type == lt_loaded && !imap->l_nodelete_active",
              (__int64)"dl-close.c",
              0x102u,
              (__int64)"_dl_close_worker");
          if ( (v74 & 0x10) != 0 )
          {
            sub_4322A0(0, &loc_44B7B0, v119[v44]);
            v74 = *(unsigned __int16 *)(v48 + 868);
          }
          v47 = (v74 >> 5) & 1;
          if ( v45 > (unsigned int)v44 )
            v45 = v44;
          v32 += v47;
          v46 = 1;
          *(_BYTE *)(v48 + 870) |= 4u;
          goto LABEL_57;
        }
        if ( v50 == 2 )
          break;
LABEL_57:
        if ( v6 == ++v44 )
          goto LABEL_93;
      }
      if ( *(_QWORD *)(v48 + 776) || (v75 = *(_QWORD *)(v48 + 1032)) == 0 )
      {
        v51 = *(_QWORD **)(v48 + 976);
        v52 = 0;
        v53 = 1;
        v54 = *v51;
        if ( !*v51 )
          goto LABEL_87;
      }
      else
      {
        if ( *(_QWORD *)(v75 + 8) )
        {
          v76 = 1;
          do
            v77 = v76++;
          while ( *(_QWORD *)(v75 + 8LL * v76) );
          v78 = 8LL * (v77 + 2);
        }
        else
        {
          v78 = 16;
          v76 = 1;
        }
        v51 = *(_QWORD **)(v48 + 976);
        v52 = v48 + 776;
        v54 = *v51;
        *(_QWORD *)(v48 + 776) = v75 + v78;
        *(_DWORD *)(v48 + 784) = v76;
        if ( !v54 )
        {
LABEL_97:
          *(_QWORD *)(v48 + 776) = 0;
          *(_DWORD *)(v48 + 784) = 0;
          goto LABEL_87;
        }
        v53 = 2;
      }
      v55 = v51 + 1;
      v56 = (__int16 *)v54;
      v57 = (__int16 **)(v51 + 1);
      v58 = (__int16 *)(v48 + 792);
      v59 = 0;
      do
      {
        while ( v58 != v56 )
        {
          v60 = v56 - 388;
          if ( *((_QWORD *)v60 + 6) != v5 )
            sub_41F250("tmap->l_ns == nsid", (__int64)"dl-close.c", 0x143u, (__int64)"_dl_close_worker");
          if ( *((_DWORD *)v60 + 267) == -1 )
            break;
          v61 = *v57++;
          v56 = v61;
          v59 = 1;
          if ( !v61 )
            goto LABEL_69;
        }
        v62 = *v57++;
        v56 = v62;
        ++v53;
      }
      while ( v62 );
LABEL_69:
      if ( v59 )
      {
        v63 = v48 + 936;
        v64 = (_QWORD *)(v48 + 936) == v51 || v53 > 3;
        if ( v64 )
        {
          v65 = *(_QWORD *)(v48 + 968);
          v122 = (__int16 *)(v48 + 792);
          v123 = v51;
          v124 = v59;
          v125 = v52;
          v126 = v54;
          v127 = v48 + 936;
          v128 = (__int64)(v51 + 1);
          v129 = v65;
          v66 = sub_40B890(8 * v65, v36, v37, v38, v39, v40, v41, v42, v43, v63, v58, v33, v34, v35);
          v58 = v122;
          v51 = v123;
          v79 = v66;
          v52 = v125;
          v54 = v126;
          v63 = v127;
          v55 = (__int64 *)v128;
          v80 = v129;
          v59 = v124;
          if ( !v66 )
            sub_432250(12, (__int64)"dlclose", v36, 0, "cannot create scope list");
        }
        else
        {
          v79 = v48 + 936;
          v80 = 4;
        }
        v67 = 0;
        do
        {
          while ( 1 )
          {
            v69 = (_QWORD *)(v79 + 8 * v67);
            if ( v58 != (__int16 *)v54 && *(_DWORD *)(v54 + 292) != -1 )
              break;
            *v69 = v54;
            ++v67;
            v70 = *v55++;
            v54 = v70;
            if ( !v70 )
              goto LABEL_83;
          }
          if ( v52 )
          {
            ++v67;
            *v69 = v52;
            v52 = 0;
          }
          v68 = *v55++;
          v54 = v68;
        }
        while ( v68 );
LABEL_83:
        *(_QWORD *)(v79 + 8 * v67) = 0;
        *(_QWORD *)(v48 + 976) = v79;
        if ( (_QWORD *)v63 == v51 )
        {
          LODWORD(v134) = v59;
          *(_QWORD *)(v48 + 968) = v80;
        }
        else
        {
          v129 = v80;
          v71 = (unsigned int)sub_439EF0(v51) == 0;
          v72 = (int)v134;
          if ( !v71 )
            v72 = 0;
          LODWORD(v134) = v72;
          *(_QWORD *)(v48 + 968) = v129;
        }
      }
      else if ( v52 )
      {
        goto LABEL_97;
      }
LABEL_87:
      v73 = *(_QWORD *)(v48 + 808);
      if ( v73 && *(_DWORD *)(v73 + 1068) != -1 )
        *(_QWORD *)(v48 + 808) = 0;
      ++v44;
      if ( v45 > v49 )
        v45 = v49;
    }
    while ( v6 != v44 );
LABEL_93:
    if ( !v46 )
      goto LABEL_94;
    v81 = sub_412370(v5);
    *(_DWORD *)(v81 + 24) = 2;
    v127 = v81;
    sub_412360(v81);
    if ( v32 )
    {
      v112 = (&(&v135[4 * v130])[4 * v5])[v5 + 2];
      for ( i = *((_DWORD *)v112 + 2); i; --i )
      {
        v114 = *v112;
        if ( (*(_BYTE *)(*(_QWORD *)(*v112 + 8LL * (i - 1)) + 870LL) & 4) == 0 )
        {
          if ( *((_DWORD *)v112 + 2) != v32 + i )
          {
            v115 = i;
            v116 = 0;
            i = 0;
            do
            {
              v117 = *(_QWORD *)(v114 + 8 * v116);
              if ( (*(_BYTE *)(v117 + 870) & 4) == 0 )
              {
                if ( i != (_DWORD)v116 )
                  *(_QWORD *)(v114 + 8LL * i) = v117;
                ++i;
              }
              ++v116;
            }
            while ( v116 != v115 );
          }
          break;
        }
      }
      *((_DWORD *)v112 + 2) = i;
      if ( !byte_490F08 )
      {
LABEL_111:
        sub_43A0A0();
        v82 = (__int64 *)qword_4967B0;
        if ( qword_4967B0 )
        {
          v83 = *(_QWORD *)qword_4967B0;
          if ( *(_QWORD *)qword_4967B0 )
          {
            do
            {
              v84 = v83 - 1;
              *v82 = v84;
              sub_40C1A0(v82[v84 + 1]);
              v83 = *v82;
            }
            while ( *v82 );
          }
        }
      }
    }
    else if ( !byte_490F08 && (((unsigned __int8)v134 & 1) != 0 || qword_4967B0 && *(_QWORD *)qword_4967B0) )
    {
      goto LABEL_111;
    }
    sub_42D0B0((atomic_uint *)&unk_490F30);
    sub_42D0B0((atomic_uint *)&unk_490F60);
    if ( v45 >= v6 )
    {
      sub_42DA40((__int64)&unk_490F60);
    }
    else
    {
      v128 = v5 + 4 * (v130 + v5);
      v85 = &v119[v45];
      v86 = &v119[v6 - 1 - v45 + 1 + (unsigned __int64)v45];
      v87 = 0;
      v88 = 0;
      LODWORD(v129) = 0;
      v134 = (atomic_uint *)&v135[v128 + 5];
      do
      {
        while ( 1 )
        {
          v89 = *v85;
          v90 = *(_WORD *)(*v85 + 868LL);
          if ( (v90 & 0x400) == 0 )
            break;
          if ( v86 == ++v85 )
            goto LABEL_144;
        }
        if ( (v90 & 3) != 2 )
          sub_41F250("imap->l_type == lt_loaded", (__int64)"dl-close.c", 0x1EFu, (__int64)"_dl_close_worker");
        if ( *(_QWORD *)(v89 + 1144) )
        {
          if ( qword_4921A8
            && (sub_4441B0(*(_QWORD *)(v89 + 1176), qword_4921A8, 0, (*(_QWORD *)(v89 + 864) >> 36) & 1LL) & 1) == 0 )
          {
            qword_4921A0 = qword_4921C8;
          }
          v107 = *(_QWORD *)(v89 + 1168);
          LODWORD(v129) = v46;
          if ( (unsigned __int64)(v107 + 1) > 1 )
          {
            if ( v88 )
            {
              v108 = *(_QWORD *)(v89 + 1160);
              v109 = v107 + *(_QWORD *)(v89 + 1144);
              if ( v87 == v108 )
              {
                v87 = v109;
              }
              else if ( v88 == v109 )
              {
                v88 = *(_QWORD *)(v89 + 1160);
              }
              else if ( qword_4921B8 == v109 )
              {
                qword_4921B8 = *(_QWORD *)(v89 + 1160);
              }
              else if ( qword_4921B8 == v87 )
              {
                v87 = v109;
                qword_4921B8 = v88;
                v88 = v108;
              }
              else
              {
                if ( v87 < v108 )
                  v88 = *(_QWORD *)(v89 + 1160);
                else
                  v109 = v87;
                v87 = v109;
              }
            }
            else
            {
              v88 = *(_QWORD *)(v89 + 1160);
              v87 = v107 + *(_QWORD *)(v89 + 1144);
            }
          }
        }
        if ( (v133 & 1) != 0 )
        {
          sub_42D0B0(v134);
          v103 = &v135[v128];
          v104 = v103[11];
          if ( v104 )
          {
            v105 = v103[12];
            if ( v105 )
            {
              v106 = &v104[4 * (_QWORD)v105];
              do
              {
                if ( v104[1] && v104[3] == v89 )
                {
                  *(_DWORD *)v104 = 0;
                  v104[1] = 0;
                  v103[13] = (__int64 *)((char *)v103[13] - 1);
                }
                v104 += 4;
              }
              while ( v106 != v104 );
            }
          }
          sub_42DA40((__int64)v134);
        }
        sub_448030(v89);
        if ( v5 )
          sub_41F250("nsid == LM_ID_BASE", (__int64)"dl-close.c", 0x27Du, (__int64)"_dl_close_worker");
        v91 = *(_QWORD *)(v89 + 32);
        if ( !v91 )
          sub_41F250("imap->l_prev != NULL", (__int64)"dl-close.c", 0x27Eu, (__int64)"_dl_close_worker");
        v92 = v135;
        v93 = *(_QWORD *)(v89 + 24);
        *(_QWORD *)(v91 + 24) = v93;
        --*((_DWORD *)v92 + 2);
        if ( v93 )
          *(_QWORD *)(v93 + 32) = v91;
        sub_445D90(v89);
        sub_40C1A0(*(_QWORD *)(v89 + 816));
        v94 = *(_QWORD *)(v89 + 912);
        if ( v94 != -1 )
          sub_40C1A0(v94);
        sub_40C1A0(*(_QWORD *)(v89 + 1040));
        if ( (dword_496770 & 0x40) != 0 )
          sub_438334("\nfile=%s [%lu];  destroying link map\n", *(const char **)(v89 + 8), *(_QWORD *)(v89 + 48));
        sub_40C1A0(*(_QWORD *)(v89 + 8));
        v95 = *(_QWORD *)(v89 + 56);
        do
        {
          v96 = v95;
          v97 = *(_DWORD *)(v95 + 16);
          v95 = *(_QWORD *)(v95 + 8);
          if ( !v97 )
            sub_40C1A0(v96);
        }
        while ( v95 );
        sub_40C1A0(*(_QWORD *)(v89 + 1032));
        v98 = *(_QWORD *)(v89 + 976);
        if ( v98 != v89 + 936 )
          sub_40C1A0(v98);
        if ( (*(_WORD *)(v89 + 868) & 0x1000) != 0 )
          sub_40C1A0(*(_QWORD *)(v89 + 752));
        v99 = *(_QWORD *)(v89 + 880);
        if ( v99 != -1 )
          sub_40C1A0(v99);
        v100 = *(_QWORD *)(v89 + 1016);
        if ( v100 != -1 )
          sub_40C1A0(v100);
        if ( qword_496808 == v89 )
          qword_496808 = 0;
        ++v85;
        sub_40C1A0(v89);
      }
      while ( v86 != v85 );
LABEL_144:
      sub_42DA40((__int64)&unk_490F60);
      if ( (v129 & 1) != 0 )
      {
        if ( qword_4921D0 == -1 )
          sub_4385C0(
            "TLS generation counter wrapped!  Please report as described in <https://bugs.launchpad.net/ubuntu/+source/glibc/+bugs>.\n",
            v101);
        atomic_store(qword_4921D0 + 1, (unsigned __int64 *)&qword_4921D0);
        if ( qword_4921B8 == v87 )
          qword_4921B8 = v88;
      }
    }
    sub_42DA40((__int64)&unk_490F30);
    v102 = (__int64)(&(&v135[4 * v130])[4 * v5])[v5];
    if ( !v102 )
    {
      v102 = qword_490F20 - 1;
      if ( qword_490F20 - 1 == v5 )
        qword_490F20 = v5;
    }
    *(_DWORD *)(v127 + 24) = 0;
    sub_412360(v102);
LABEL_94:
    if ( dword_496C18 == 2 )
    {
      v2 = 0;
      continue;
    }
    break;
  }
  dword_496C18 = 0;
  return (__int64)v132;
}
