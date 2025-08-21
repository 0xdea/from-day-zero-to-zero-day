__int64 __fastcall sub_4466D0(char **a1)
{
  char *v1; // x20
  int v3; // w25
  __int64 *v4; // x24
  __int64 v5; // x0
  char *v6; // x22
  __int64 v7; // x19
  __int64 **v8; // x2
  __int64 *v9; // x3
  __int64 result; // x0
  long double v11; // q0
  long double v12; // q1
  long double v13; // q2
  long double v14; // q3
  long double v15; // q4
  long double v16; // q5
  long double v17; // q6
  long double v18; // q7
  __int64 v19; // x19
  int v20; // w3
  __int64 v21; // x0
  int v22; // w3
  __int64 v23; // x4
  __int64 v24; // x5
  long double v25; // q0
  long double v26; // q1
  long double v27; // q2
  long double v28; // q3
  long double v29; // q4
  long double v30; // q5
  long double v31; // q6
  long double v32; // q7
  __int64 v33; // x3
  __int64 i; // x20
  __int64 v35; // x22
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x0
  long double v39; // q0
  long double v40; // q1
  long double v41; // q2
  long double v42; // q3
  long double v43; // q4
  long double v44; // q5
  long double v45; // q6
  long double v46; // q7
  unsigned __int64 v47; // x2
  int v48; // w24
  __int64 v49; // x5
  unsigned int v50; // w0
  __int64 v51; // x1
  unsigned int v52; // w3
  __int64 v53; // x4
  __int64 v54; // x20
  unsigned __int64 v55; // x28
  __int64 v56; // x0
  __int64 v57; // x3
  __int64 v58; // x20
  _QWORD *v59; // x28
  unsigned __int64 *v60; // x1
  unsigned __int64 *v61; // x0
  unsigned __int64 v62; // t1
  __int64 v63; // x0
  __int64 v64; // x2
  unsigned __int64 v65; // x0
  __int64 v66; // x5
  __int64 v68; // x0
  long double v69; // q0
  __int64 v70; // x0
  __int64 v71; // x3
  __int64 v72; // x0
  __int64 v73; // x2
  __int64 v74; // x4
  __int64 v75; // x5
  long double v76; // q0
  long double v77; // q1
  long double v78; // q2
  long double v79; // q3
  long double v80; // q4
  long double v81; // q5
  long double v82; // q6
  long double v83; // q7
  __int64 v84; // x20
  int v85; // w24
  __int64 v86; // x0
  __int64 *j; // x20
  unsigned int v88; // w3
  __int64 v89; // x25
  __int64 k; // x20
  __int64 v91; // x1
  _QWORD *v92; // x0
  __int64 *v93; // x4
  __int64 *v94; // x2
  __int64 v95; // t1
  __int64 v96; // x3
  unsigned __int64 v97; // x3
  __int64 v98; // x2
  __int64 v99; // x3
  unsigned int v100; // w20
  __int64 v101; // x24
  __int64 v102; // x25
  unsigned int v103; // w3
  __int64 v104; // x24
  __int64 v105; // x25
  __int64 v106; // x0
  _QWORD *v107; // x3
  unsigned __int64 *v108; // [xsp+60h] [xbp+60h]
  __int64 v109; // [xsp+60h] [xbp+60h]
  __int64 v110; // [xsp+68h] [xbp+68h]
  unsigned __int64 v111; // [xsp+78h] [xbp+78h]

  v1 = *a1;
  v3 = *((_DWORD *)a1 + 2);
  if ( sub_42F180(*a1, 36) || (v6 = a1[4], v6 == (char *)-2LL) || (v7 = 0, !sub_42F180(v1, 47)) )
  {
    v4 = off_4914A8;
    v5 = sub_4462F0(a1[2]);
    v6 = a1[4];
    v7 = v5 ? v5 : (__int64)v4;
    if ( v6 == (char *)-2LL )
    {
      v6 = *(char **)(v7 + 48);
      a1[4] = v6;
    }
  }
  v8 = &(&off_4914A8)[21 * (_QWORD)v6];
  v9 = v8[4];
  *((_DWORD *)a1 + 10) = *((_DWORD *)v8 + 7);
  *((_BYTE *)a1 + 44) = v9 != 0;
  sub_4123E4(0, v6);
  result = (__int64)sub_435460(v7, v1, 2u, 0, v3 | 0x10000000u, (unsigned __int64)a1[4]);
  a1[3] = (char *)result;
  v19 = result;
  if ( !result )
  {
    if ( (v3 & 4) == 0 )
      sub_41F250("mode & RTLD_NOLOAD", (__int64)"dl-open.c", 0x249u, (__int64)"dl_open_worker_begin");
    return result;
  }
  if ( (v3 & 0x40000000) != 0 )
    return result;
  v20 = *(_DWORD *)(result + 864);
  v21 = *(_QWORD *)(result + 776);
  v22 = v20 + 1;
  *(_DWORD *)(v19 + 864) = v22;
  if ( v21 )
  {
    if ( (dword_496770 & 0x40) != 0 )
      sub_438334(
        "opening file=%s [%lu]; direct_opencount=%u\n\n",
        *(const char **)(v19 + 8),
        *(_QWORD *)(v19 + 48),
        v22);
    if ( (v3 & 0x100) != 0 )
    {
      if ( (*(_WORD *)(v19 + 868) & 0x20) != 0 )
      {
        if ( (v3 & 0x1000) == 0 )
          goto LABEL_131;
      }
      else
      {
        sub_446174(v19);
        if ( (v3 & 0x1000) == 0 )
          goto LABEL_125;
      }
      if ( (dword_496770 & 0x40) == 0 || (*(_BYTE *)(v19 + 871) & 1) != 0 )
      {
        *(_BYTE *)(v19 + 871) = 1;
        goto LABEL_125;
      }
    }
    else
    {
      if ( (v3 & 0x1000) == 0 )
        goto LABEL_131;
      if ( (dword_496770 & 0x40) == 0 || (*(_BYTE *)(v19 + 871) & 1) != 0 )
      {
        *(_BYTE *)(v19 + 871) = 1;
        goto LABEL_131;
      }
    }
    sub_438334("marking %s [%lu] as NODELETE\n", *(const char **)(v19 + 8), *(_QWORD *)(v19 + 48));
    *(_BYTE *)(v19 + 871) = 1;
    if ( (v3 & 0x100) != 0 )
    {
LABEL_125:
      if ( (*(_WORD *)(v19 + 868) & 0x20) == 0 )
        sub_445EF0(v19);
    }
LABEL_131:
    result = *(unsigned int *)(sub_412370(a1[4]) + 24);
    if ( (_DWORD)result )
      sub_41F250("r_state == RT_CONSISTENT", (__int64)"dl-open.c", 0x273u, (__int64)"dl_open_worker_begin");
    return result;
  }
  if ( (v3 & 0x1000) != 0 )
    *(_BYTE *)(v19 + 872) = 1;
  sub_44B8C0(v19, 0, 0, 0, v3 & 0x88000008, v11, v12, v13, v14, v15, v16, v17, v18);
  v33 = *(unsigned int *)(v19 + 784);
  for ( i = 0; (unsigned int)v33 > (unsigned int)i; ++i )
  {
    while ( 1 )
    {
      v35 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v19 + 776) + 8 * i) + 40LL);
      if ( !*(_QWORD *)(v35 + 816) )
        break;
      if ( (unsigned int)v33 <= (unsigned int)++i )
        goto LABEL_22;
    }
    sub_4477A0(
      *(__int64 **)(*(_QWORD *)(*(_QWORD *)(v19 + 776) + 8 * i) + 40LL),
      0,
      0,
      v33,
      v23,
      v24,
      v25,
      v26,
      v27,
      v28,
      v29,
      v30,
      v31,
      v32);
    v36 = *(_QWORD *)(v35 + 176);
    if ( !v36 )
      goto LABEL_20;
    v37 = 0;
    if ( (*(_BYTE *)(v35 + 870) & 0x20) != 0 )
      v37 = *(_QWORD *)v35;
    if ( !(unsigned int)sub_42F240(
                          *(_QWORD *)(v36 + 8) + *(_QWORD *)(*(_QWORD *)(v35 + 104) + 8LL) + v37,
                          "ld-linux-aarch64.so.1") )
    {
      sub_4480D0((__int64 *)v35);
      v33 = *(unsigned int *)(v19 + 784);
    }
    else
    {
LABEL_20:
      v33 = *(unsigned int *)(v19 + 784);
    }
  }
LABEL_22:
  v38 = sub_412370(a1[4]);
  *(_DWORD *)(v38 + 24) = 0;
  sub_412360(v38);
  sub_43AAC0(v19, 0);
  if ( (dword_496770 & 0x200) != 0 )
    sub_446560((_QWORD *)v19, 0);
  v47 = *(_QWORD *)(v19 + 1032);
  v48 = v3 & 0x8000001;
  v49 = 0;
  v50 = 0;
  v51 = *(_QWORD *)v47;
  if ( !dword_496798 )
    v48 = v3 & 0x8000000;
  v52 = -1;
  do
  {
    v53 = v50++;
    if ( (*(_WORD *)(*(_QWORD *)(v51 + 40) + 868LL) & 8) == 0 )
    {
      v49 = v50;
      if ( v52 == -1 )
        v52 = v53;
    }
    v51 = *(_QWORD *)(v47 + 8LL * v50);
  }
  while ( v51 );
  if ( (unsigned int)v49 > v52 )
  {
    v54 = 8LL * (unsigned int)(v49 - 1);
    v55 = 8 * ((unsigned int)(v49 - 1) - (unsigned __int64)((_DWORD)v49 - 1 - v52));
    while ( 1 )
    {
      v56 = *(_QWORD *)(v47 + v54);
      if ( (*(_WORD *)(*(_QWORD *)(v56 + 40) + 868LL) & 8) == 0 )
        sub_438930(
          (__int64 *)v56,
          *(__int64 ***)(v56 + 976),
          v48,
          0,
          *(double *)&v39,
          v40,
          v41,
          v42,
          v43,
          v44,
          v45,
          v46);
      if ( v55 == v54 )
        break;
      v47 = *(_QWORD *)(v19 + 1032);
      v54 -= 8;
    }
  }
  v57 = *(unsigned int *)(v19 + 784);
  v58 = 0;
  if ( !(_DWORD)v57 )
    goto LABEL_128;
  do
  {
    v59 = *(_QWORD **)(*(_QWORD *)(v19 + 776) + 8 * v58);
    if ( (v59[108] & 0x1300000000LL) == 0x1200000000LL )
    {
      v60 = (unsigned __int64 *)v59[122];
      v47 = *v60;
      if ( *v60 )
      {
        v61 = v60 + 1;
        while ( v47 != v19 + 776 )
        {
          v62 = *v61++;
          v47 = v62;
          if ( !v62 )
          {
            v63 = 0;
            do
            {
              v64 = v63++;
              v49 = v60[v63];
            }
            while ( v49 );
            v47 = v64 + 2;
            goto LABEL_48;
          }
        }
      }
      else
      {
        v47 = 1;
LABEL_48:
        v65 = v59[121];
        if ( v65 <= v47 )
        {
          v66 = (__int64)(v59 + 117);
          if ( v65 > 3 || v60 == (unsigned __int64 *)v66 )
          {
            v108 = (unsigned __int64 *)v59[122];
            v110 = 2 * v65;
            v111 = v47;
            v68 = sub_40B890(16 * v65, v39, v40, v41, v42, v43, v44, v45, v46, 2 * v65, (__int16 *)v47, v57, v53, v66);
            v60 = v108;
            v107 = (_QWORD *)v68;
            v66 = (__int64)(v59 + 117);
            v47 = v111;
            if ( !v68 )
              sub_432250(12, (__int64)"dlopen", v69, 0, "cannot create scope list");
          }
          else
          {
            v107 = v59 + 117;
            v110 = 4;
          }
          v109 = v66;
          v70 = j_ifunc_40DC90(v107, v60, 8 * v47);
          v49 = v109;
          v71 = v70;
          v72 = v59[122];
          v59[122] = v71;
          if ( v109 != v72 )
            sub_439EF0(v72);
          v57 = *(unsigned int *)(v19 + 784);
          v59[121] = v110;
        }
      }
    }
    ++v58;
  }
  while ( (unsigned int)v57 > (unsigned int)v58 );
  if ( !(_DWORD)v57 )
  {
LABEL_128:
    v85 = 0;
    if ( (v3 & 0x100) == 0 )
      goto LABEL_71;
LABEL_114:
    sub_446174(v19);
    goto LABEL_71;
  }
  v84 = 0;
  v85 = 0;
  do
  {
    while ( 1 )
    {
      v86 = *(_QWORD *)(*(_QWORD *)(v19 + 776) + 8 * v84);
      if ( (*(_WORD *)(v86 + 868) & 0x10) == 0 )
      {
        if ( *(_QWORD *)(v86 + 1144) )
          break;
      }
      if ( (unsigned int)v57 <= (unsigned int)++v84 )
        goto LABEL_70;
    }
    sub_412C90(v86, 0, v39, v40, v41, v42, v43, v44, v45, v46, v47, v57, v53, v49);
    v57 = *(unsigned int *)(v19 + 784);
    ++v84;
    v85 = 1;
  }
  while ( (unsigned int)v57 > (unsigned int)v84 );
LABEL_70:
  if ( (v3 & 0x100) != 0 )
    goto LABEL_114;
LABEL_71:
  for ( j = (&off_4914A8)[21 * *(_QWORD *)(v19 + 48)]; j; j = (__int64 *)j[3] )
  {
    if ( (j[109] & 1) != 0 )
    {
      if ( (dword_496770 & 0x40) != 0 )
        sub_438334("activating NODELETE for %s [%lu]\n", (const char *)j[1], j[6]);
      *(_WORD *)((char *)j + 871) = 1;
    }
  }
  v88 = *(_DWORD *)(v19 + 784);
  v89 = v19 + 776;
  for ( k = 0; v88 > (unsigned int)k; ++k )
  {
    LODWORD(v91) = 0;
    v92 = *(_QWORD **)(*(_QWORD *)(v19 + 776) + 8 * k);
    if ( (v92[108] & 0x1300000000LL) == 0x1200000000LL )
    {
      v93 = (__int64 *)v92[122];
      v91 = *v93;
      if ( *v93 )
      {
        v94 = v93 + 1;
        while ( v91 != v89 )
        {
          v95 = *v94++;
          v91 = v95;
          if ( !v95 )
          {
            do
              v96 = v91++;
            while ( v93[v91] );
            v97 = v96 + 2;
            v98 = 8 * v91;
            goto LABEL_89;
          }
        }
        continue;
      }
      v97 = 1;
      v98 = 0;
      LODWORD(v91) = 0;
LABEL_89:
      if ( v92[121] <= v97 )
        sub_41F250("cnt + 1 < imap->l_scope_max", (__int64)"dl-open.c", 0x153u, (__int64)"update_scopes");
      v93[v97] = 0;
      __dmb(0xBu);
      *(_QWORD *)(v92[122] + v98) = v89;
      if ( (dword_496770 & 0x200) != 0 )
      {
LABEL_91:
        sub_446560(v92, v91);
        v88 = *(_DWORD *)(v19 + 784);
        continue;
      }
    }
    else if ( (dword_496770 & 0x200) != 0 )
    {
      goto LABEL_91;
    }
    v88 = *(_DWORD *)(v19 + 784);
  }
  if ( (sub_4458A0(v19) & 1) == 0 )
    sub_432250(12, **(_QWORD **)(v19 + 56), v76, 0, "cannot allocate address lookup data");
  if ( v85 )
  {
    v99 = *(unsigned int *)(v19 + 784);
    v100 = v99;
    if ( (_DWORD)v99 )
    {
      v101 = 0;
      do
      {
        while ( 1 )
        {
          v102 = *(_QWORD *)(*(_QWORD *)(v19 + 776) + 8 * v101);
          if ( (*(_WORD *)(v102 + 868) & 0x10) == 0 )
          {
            if ( *(_QWORD *)(v102 + 1144) )
            {
              sub_412C90(
                *(_QWORD *)(*(_QWORD *)(v19 + 776) + 8 * v101),
                1,
                v76,
                v77,
                v78,
                v79,
                v80,
                v81,
                v82,
                v83,
                v73,
                v99,
                v74,
                v75);
              v99 = *(unsigned int *)(v19 + 784);
              if ( *(__int16 *)(v102 + 868) < 0 )
                break;
            }
          }
          if ( (unsigned int)v99 <= (unsigned int)++v101 )
            goto LABEL_106;
        }
        if ( (_DWORD)v99 == v100 )
          v100 = v101;
        ++v101;
      }
      while ( (unsigned int)v99 > (unsigned int)v101 );
    }
LABEL_106:
    if ( qword_4921D0 == -1 )
      sub_4385C0("TLS generation counter wrapped!  Please report this.", v76);
    atomic_store(qword_4921D0 + 1, (unsigned __int64 *)&qword_4921D0);
    v103 = *(_DWORD *)(v19 + 784);
    if ( v103 > v100 )
    {
      v104 = 8LL * v100;
      do
      {
        v105 = *(_QWORD *)(*(_QWORD *)(v19 + 776) + v104);
        if ( (*(_QWORD *)(v105 + 864) & 0x801000000000LL) == 0x800000000000LL && *(_QWORD *)(v105 + 1144) )
        {
          v106 = *(_QWORD *)(*(_QWORD *)(v19 + 776) + v104);
          *(_WORD *)(v105 + 868) &= ~0x8000u;
          sub_412DA4(v106);
          if ( *(__int16 *)(v105 + 868) < 0 )
            sub_41F250("imap->l_need_tls_init == 0", (__int64)"dl-open.c", 0x1B6u, (__int64)"update_tls_slotinfo");
          v103 = *(_DWORD *)(v19 + 784);
        }
        ++v100;
        v104 += 8;
      }
      while ( v100 < v103 );
    }
  }
  if ( (*((_BYTE *)a1 + 44) & 1) == 0 )
    sub_44B710((&off_4914A8)[21 * (_QWORD)a1[4] + 4], 0);
  result = 1;
  *((_BYTE *)a1 + 45) = 1;
  return result;
}
