unsigned __int64 __fastcall sub_451AF0(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 *v3; // x19
  unsigned __int64 *v5; // x24
  unsigned __int64 *v6; // x20
  unsigned int v7; // w19
  unsigned __int64 *v8; // x0
  unsigned int v9; // w2
  unsigned __int64 v10; // x3
  unsigned __int64 *v11; // x28
  unsigned __int64 v12; // x26
  unsigned int v13; // w0
  unsigned __int64 v14; // x27
  unsigned __int64 v15; // x26
  unsigned int v16; // w2
  unsigned int v17; // w3
  unsigned int v18; // w7
  unsigned int v19; // w6
  unsigned int v20; // w4
  unsigned int v21; // w5
  unsigned int v22; // w3
  __int64 v23; // x4
  _QWORD *v24; // x4
  _QWORD *v25; // x3
  __int64 v26; // x0
  __int64 v27; // x1
  int v28; // w6
  __int64 v29; // x0
  __int64 v30; // x2
  unsigned int v31; // w5
  unsigned int v32; // w19
  unsigned __int64 *v33; // x1
  unsigned int v34; // w3
  unsigned __int64 *v35; // x2
  unsigned __int64 v36; // x4
  unsigned __int64 v37; // x5
  unsigned __int64 v38; // x19
  unsigned __int64 v39; // x0
  bool v40; // zf
  unsigned int v41; // w4
  __int64 *v42; // x1
  unsigned int v43; // w0
  __int64 v44; // x2
  __int64 v45; // x3
  __int64 v46; // x1
  unsigned __int64 *v47; // x2
  unsigned int v48; // w3
  unsigned __int64 v49; // x19
  unsigned int v50; // w4
  __int64 v51; // x2
  unsigned __int64 v52; // x7
  unsigned __int64 *v53; // x5
  unsigned __int64 *v55; // x0
  unsigned __int64 v56; // x0
  unsigned int v57; // w4
  unsigned __int64 v58; // x4
  __int64 v59; // x0
  __int64 v60; // x1
  unsigned __int64 v61; // t2
  int v62; // w5
  unsigned int v63; // w6
  unsigned int v64; // w8
  __int64 v65; // x4
  __int64 v66; // x5
  _QWORD *v67; // x5
  _QWORD *v68; // x4
  __int64 v69; // x1
  unsigned int v70; // w7
  unsigned __int64 v71; // x6
  unsigned int v72; // w5
  __int64 v73; // x4
  _QWORD *v74; // x4
  __int64 v75; // x1
  unsigned int v76; // w8
  unsigned __int64 v77; // x28
  __int64 *v78; // x1
  unsigned int v79; // w0
  unsigned int v80; // w8
  unsigned __int64 v81; // x9
  __int64 v82; // x4
  __int64 v83; // x5
  __int64 v84; // x0
  unsigned __int64 v85; // x4
  __int64 v86; // x1
  unsigned __int64 v87; // x28
  unsigned int v88; // w3
  unsigned int v89; // w6
  __int64 v90; // x4
  unsigned __int64 v91; // x0
  unsigned __int64 v92; // x4
  __int64 v93; // x1
  _QWORD *v94; // x1
  unsigned int v95; // w0
  unsigned __int64 v96; // x3
  __int64 v97; // x5
  unsigned __int64 v98; // x5
  unsigned int v99; // w4
  unsigned int v100; // w6
  unsigned int v101; // w8
  __int64 v102; // x2
  __int64 v103; // x1
  _QWORD *v104; // x2
  unsigned int v105; // w5
  __int64 v106; // x2
  __int64 v107; // x4
  _QWORD *v108; // x4
  _QWORD *v109; // x2
  __int64 v110; // x1
  __int64 *v111; // x0
  _QWORD *v112; // x1
  __int64 v113; // x4
  __int64 v114; // x5
  unsigned __int64 *v115; // x0
  unsigned __int64 *v116; // x1
  unsigned __int64 v117; // x4
  unsigned __int64 v118; // x5
  unsigned __int64 v119; // x19
  unsigned __int64 v120; // x0
  unsigned __int64 v121; // x19
  unsigned __int64 v122; // x0
  __int64 v123; // x3
  unsigned __int64 *v124; // x5
  unsigned __int64 *v125; // x4
  unsigned __int64 v126; // x1
  unsigned __int64 v127; // x4
  __int64 v128; // x3
  unsigned __int64 v129; // x1
  unsigned __int64 *v130; // x3

  v3 = (unsigned __int64 *)(a1 + 16);
  sub_450E44((unsigned __int64 *)(a1 + 16));
  v5 = *(unsigned __int64 **)a1;
  if ( !*(_QWORD *)a1 )
  {
    sub_4512F0(v3);
    return 0;
  }
  sub_450E44(*(unsigned __int64 **)a1);
  sub_4512F0(v3);
  if ( !*((_DWORD *)v5 + 3) )
  {
    v6 = (unsigned __int64 *)(a1 + 8);
    do
    {
      v7 = *((_DWORD *)v5 + 2);
      if ( v7 )
      {
        v8 = v5 + 2;
        v9 = 0;
        while ( 1 )
        {
          v10 = *v8;
          v8 += 2;
          if ( a2 <= v10 )
            break;
          if ( v7 == ++v9 )
            goto LABEL_9;
        }
        v7 = v9;
      }
LABEL_9:
      v11 = &v5[2 * v7];
      v12 = v11[3];
      sub_450E44((unsigned __int64 *)v12);
      if ( *(_DWORD *)(v12 + 12) )
        v13 = 5;
      else
        v13 = 7;
      if ( *(_DWORD *)(v12 + 8) >= v13 )
      {
        v55 = v5;
        v5 = (unsigned __int64 *)v12;
        sub_4512F0(v55);
        continue;
      }
      if ( v7 )
      {
        v14 = v5[2 * v7 + 1];
        if ( *((_DWORD *)v5 + 2) <= v7 + 1 || (v15 = v5[2 * v7 + 5], *(_DWORD *)(v15 + 8) >= *(_DWORD *)(v14 + 8)) )
        {
          v15 = v11[3];
          sub_450E44((unsigned __int64 *)v5[2 * --v7 + 3]);
          v16 = *(_DWORD *)(v14 + 8);
          v17 = *(_DWORD *)(v14 + 12);
          v18 = *(_DWORD *)(v15 + 8);
          v19 = v16 + v18;
          if ( !v17 )
            goto LABEL_44;
          goto LABEL_17;
        }
      }
      else
      {
        v15 = v5[5];
      }
      v14 = v11[3];
      sub_450E44((unsigned __int64 *)v15);
      v18 = *(_DWORD *)(v15 + 8);
      v16 = *(_DWORD *)(v14 + 8);
      v17 = *(_DWORD *)(v14 + 12);
      v19 = v16 + v18;
      if ( !v17 )
      {
LABEL_44:
        if ( v19 <= 0xF )
        {
          v20 = *((_DWORD *)v5 + 2);
          if ( v20 == 2 )
          {
            if ( v16 )
            {
              v111 = (__int64 *)(v14 + 16);
              v112 = v5 + 2;
              do
              {
                v113 = *v111;
                v114 = v111[1];
                v111 += 2;
                *v112 = v113;
                v112[1] = v114;
                v112 += 2;
              }
              while ( v111 != (__int64 *)(v14 + 16 + 16LL * v16) );
            }
            v115 = (unsigned __int64 *)(v15 + 16);
            if ( v18 )
            {
              do
              {
                v116 = &v5[2 * v16++];
                v117 = *v115;
                v118 = v115[1];
                v115 += 2;
                v116[2] = v117;
                v116[3] = v118;
              }
              while ( v19 != v16 );
            }
            goto LABEL_85;
          }
          if ( v18 )
          {
            do
            {
              v56 = v15 + 16LL * v17;
              v57 = v16++;
              ++v17;
              v58 = v14 + 16LL * v57;
              v61 = v56 + 16;
              v59 = *(_QWORD *)(v56 + 16);
              v60 = *(_QWORD *)(v61 + 8);
              *(_DWORD *)(v14 + 8) = v16;
              v62 = *(_DWORD *)(v15 + 8);
              *(_QWORD *)(v58 + 16) = v59;
              *(_QWORD *)(v58 + 24) = v60;
            }
            while ( v17 != v62 );
LABEL_21:
            v20 = *((_DWORD *)v5 + 2);
          }
LABEL_22:
          v30 = 16LL * v7 + 16;
          v31 = v7 + 2;
          v32 = v7 + 1;
          v29 = v32;
          v33 = &v5[2 * v31];
          v34 = v20 - 1;
          *(unsigned __int64 *)((char *)v5 + v30) = v5[2 * v32 + 2];
          if ( v20 > v31 )
          {
            do
            {
              v35 = &v5[2 * v29];
              v29 = v32 + 1;
              v36 = v33[2];
              v37 = v33[3];
              v33 += 2;
              v32 = v29;
              v35[2] = v36;
              v35[3] = v37;
            }
            while ( v34 != (_DWORD)v29 );
          }
          *((_DWORD *)v5 + 2) = v34;
          *(_DWORD *)(v15 + 12) = 2;
          v38 = atomic_load(v6);
          do
          {
            *(_QWORD *)(v15 + 24) = v38;
            v39 = _aarch64_cas8_acq_rel(v38, v15, (atomic_ullong *)v6);
            v40 = v39 == v38;
            v38 = v39;
          }
          while ( !v40 );
          sub_4512F0((unsigned __int64 *)v15);
          sub_4512F0(v5);
          goto LABEL_28;
        }
        if ( v16 <= v18 )
        {
          v78 = (__int64 *)(v15 + 16);
          v79 = v16;
          v80 = (v18 - v16) >> 1;
          if ( v80 )
          {
            do
            {
              v81 = v14 + 16LL * v79++;
              v82 = *v78;
              v83 = v78[1];
              v78 += 2;
              *(_QWORD *)(v81 + 16) = v82;
              *(_QWORD *)(v81 + 24) = v83;
            }
            while ( v79 != v80 + v16 );
          }
          if ( v80 == v18 )
          {
            *(_DWORD *)(v14 + 8) = v19;
            *(_DWORD *)(v15 + 8) -= v80;
          }
          else
          {
            do
            {
              v84 = v80 + v17;
              v85 = v15 + 16LL * v17++;
              v86 = *(_QWORD *)(v15 + 16 * v84 + 24);
              *(_QWORD *)(v85 + 16) = *(_QWORD *)(v15 + 16 * v84 + 16);
              *(_QWORD *)(v85 + 24) = v86;
            }
            while ( v17 != v18 - v80 );
            *(_DWORD *)(v14 + 8) = v80 + v16;
            *(_DWORD *)(v15 + 8) -= v80;
          }
        }
        else
        {
          v88 = v18 - 1;
          v89 = (v16 - v18) >> 1;
          if ( v18 )
          {
            do
            {
              v90 = v89 + v88;
              v91 = v15 + 16LL * v88--;
              v92 = v15 + 16 * v90;
              v93 = *(_QWORD *)(v91 + 24);
              *(_QWORD *)(v92 + 16) = *(_QWORD *)(v91 + 16);
              *(_QWORD *)(v92 + 24) = v93;
            }
            while ( v88 != -1 );
          }
          v94 = (_QWORD *)(v15 + 16);
          v95 = v16 - v89;
          if ( v89 )
          {
            do
            {
              v96 = v14 + 16LL * v95++;
              v97 = *(_QWORD *)(v96 + 24);
              *v94 = *(_QWORD *)(v96 + 16);
              v94[1] = v97;
              v94 += 2;
            }
            while ( v16 != v95 );
            *(_DWORD *)(v14 + 8) = v16 - v89;
            *(_DWORD *)(v15 + 8) += v89;
            v87 = *(_QWORD *)(v14 + 16LL * (unsigned int)(*(_DWORD *)(v14 + 8) - 1) + 16);
LABEL_64:
            v5[2 * v7 + 2] = v87;
            sub_4512F0(v5);
            if ( a2 > v87 )
            {
LABEL_65:
              v5 = (unsigned __int64 *)v15;
              sub_4512F0((unsigned __int64 *)v14);
              continue;
            }
            goto LABEL_57;
          }
          *(_DWORD *)(v14 + 8) = v16;
        }
LABEL_63:
        v87 = *(_QWORD *)(v14 + 16LL * (unsigned int)(*(_DWORD *)(v14 + 8) - 1) + 16);
        goto LABEL_64;
      }
LABEL_17:
      if ( v19 <= 0xA )
      {
        v20 = *((_DWORD *)v5 + 2);
        if ( v20 == 2 )
        {
          *((_DWORD *)v5 + 3) = 1;
          if ( v16 )
          {
            v123 = 16;
            do
            {
              v124 = (unsigned __int64 *)(v14 + v123);
              v125 = &v5[(unsigned __int64)v123 / 8];
              v123 += 24;
              v126 = v124[1];
              *v125 = *v124;
              v125[1] = v126;
              v125[2] = v124[2];
            }
            while ( v123 != 24LL * v16 + 16 );
          }
          v127 = v15 + 16;
          if ( v18 )
          {
            do
            {
              v127 += 24LL;
              v128 = 3LL * v16++;
              v129 = *(_QWORD *)(v127 - 16);
              v130 = &v5[v128];
              v130[2] = *(_QWORD *)(v127 - 24);
              v130[3] = v129;
              v130[4] = *(_QWORD *)(v127 - 8);
            }
            while ( v19 != v16 );
          }
LABEL_85:
          *((_DWORD *)v5 + 2) = v19;
          *(_DWORD *)(v14 + 12) = 2;
          v119 = atomic_load(v6);
          do
          {
            *(_QWORD *)(v14 + 24) = v119;
            v120 = _aarch64_cas8_acq_rel(v119, v14, (atomic_ullong *)v6);
            v40 = v120 == v119;
            v119 = v120;
          }
          while ( !v40 );
          sub_4512F0((unsigned __int64 *)v14);
          *(_DWORD *)(v15 + 12) = 2;
          v121 = atomic_load(v6);
          do
          {
            *(_QWORD *)(v15 + 24) = v121;
            v122 = _aarch64_cas8_acq_rel(v121, v15, (atomic_ullong *)v6);
            v40 = v122 == v121;
            v121 = v122;
          }
          while ( !v40 );
          sub_4512F0((unsigned __int64 *)v15);
          continue;
        }
        v21 = 0;
        if ( v18 )
        {
          do
          {
            v22 = v16;
            v23 = 3LL * v21;
            ++v16;
            ++v21;
            v24 = (_QWORD *)(v15 + 8 * v23);
            v25 = (_QWORD *)(v14 + 24LL * v22);
            v26 = v24[2];
            v27 = v24[3];
            *(_DWORD *)(v14 + 8) = v16;
            v28 = *(_DWORD *)(v15 + 8);
            v25[2] = v26;
            v25[3] = v27;
            v25[4] = v24[4];
          }
          while ( v21 != v28 );
          goto LABEL_21;
        }
        goto LABEL_22;
      }
      if ( v16 <= v18 )
      {
        v98 = v15 + 16;
        v99 = v16;
        v100 = (v18 - v16) >> 1;
        v101 = v16 + v100;
        if ( v100 )
        {
          do
          {
            v98 += 24LL;
            v102 = 3LL * v99++;
            v103 = *(_QWORD *)(v98 - 16);
            v104 = (_QWORD *)(v14 + 8 * v102);
            v104[2] = *(_QWORD *)(v98 - 24);
            v104[3] = v103;
            v104[4] = *(_QWORD *)(v98 - 8);
          }
          while ( v99 != v101 );
        }
        else
        {
          v101 = v16;
        }
        v105 = 0;
        if ( v18 != v100 )
        {
          do
          {
            v106 = v100 + v105;
            v107 = 3LL * v105++;
            v108 = (_QWORD *)(v15 + 8 * v107);
            v109 = (_QWORD *)(v15 + 24 * v106);
            v110 = v109[3];
            v108[2] = v109[2];
            v108[3] = v110;
            v108[4] = v109[4];
          }
          while ( v105 != v18 - v100 );
        }
        *(_DWORD *)(v14 + 8) = v101;
        v76 = *(_DWORD *)(v15 + 8) - v100;
      }
      else
      {
        v63 = v18 - 1;
        v64 = (v16 - v18) >> 1;
        if ( v18 )
        {
          do
          {
            v65 = v64 + v63;
            v66 = 3LL * v63--;
            v67 = (_QWORD *)(v15 + 8 * v66);
            v68 = (_QWORD *)(v15 + 24 * v65);
            v69 = v67[3];
            v68[2] = v67[2];
            v68[3] = v69;
            v68[4] = v67[4];
          }
          while ( v63 != -1 );
        }
        v70 = v16 - v64;
        v71 = v15 + 16;
        v72 = v16 - v64;
        if ( v64 )
        {
          do
          {
            v71 += 24LL;
            v73 = 3LL * v72++;
            v74 = (_QWORD *)(v14 + 8 * v73);
            v75 = v74[3];
            *(_QWORD *)(v71 - 24) = v74[2];
            *(_QWORD *)(v71 - 16) = v75;
            *(_QWORD *)(v71 - 8) = v74[4];
          }
          while ( v16 != v72 );
        }
        else
        {
          v70 = v16;
        }
        *(_DWORD *)(v14 + 8) = v70;
        v76 = v64 + *(_DWORD *)(v15 + 8);
      }
      *(_DWORD *)(v15 + 8) = v76;
      if ( v17 != 1 )
        goto LABEL_63;
      v77 = *(_QWORD *)(v15 + 16) - 1LL;
      v5[2 * v7 + 2] = v77;
      sub_4512F0(v5);
      if ( a2 > v77 )
        goto LABEL_65;
LABEL_57:
      sub_4512F0((unsigned __int64 *)v15);
LABEL_28:
      v5 = (unsigned __int64 *)v14;
    }
    while ( !*((_DWORD *)v5 + 3) );
  }
  v41 = *((_DWORD *)v5 + 2);
  if ( !v41 )
    goto LABEL_79;
  v42 = (__int64 *)(v5 + 2);
  v43 = 0;
  while ( 1 )
  {
    v44 = *v42;
    v45 = v42[1];
    v42 += 3;
    if ( a2 < v44 + v45 )
      break;
    if ( v41 == ++v43 )
      goto LABEL_79;
  }
  if ( v41 <= v43 || (v46 = v43, v47 = &v5[3 * v43], v47[2] != a2) )
  {
LABEL_79:
    sub_4512F0(v5);
    return 0;
  }
  v48 = v43 + 1;
  v49 = v47[4];
  if ( v41 <= v43 + 1 )
  {
    v50 = v41 - 1;
  }
  else
  {
    v50 = v41 - 1;
    v51 = (__int64)&v5[3 * v48 + 2];
    while ( 1 )
    {
      v51 += 24;
      v52 = *(_QWORD *)(v51 - 16);
      v53 = &v5[3 * v46];
      v46 = v48;
      v53[2] = *(_QWORD *)(v51 - 24);
      v53[3] = v52;
      v53[4] = *(_QWORD *)(v51 - 8);
      if ( v50 == v48 )
        break;
      ++v48;
    }
  }
  *((_DWORD *)v5 + 2) = v50;
  sub_4512F0(v5);
  return v49;
}
