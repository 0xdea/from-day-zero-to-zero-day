__int64 sub_407740()
{
  __int64 v0; // x19
  __int64 v1; // x20
  __int64 v2; // x21
  __int64 v3; // x23
  __int64 v4; // x24
  __int64 v5; // x25
  __int64 v6; // x26
  __int64 v7; // x27
  __int64 v8; // x28
  __int64 v9; // x30
  long double v10; // q0
  __int64 v11; // x0
  __int64 v12; // x19
  char *v13; // x20
  int v14; // w3
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  void *v18; // x4
  void *v19; // x5
  void *v20; // x6
  double v21; // d0
  double v22; // d1
  double v23; // d2
  double v24; // d3
  double v25; // d4
  double v26; // d5
  double v27; // d6
  double v28; // d7
  __int64 v29; // x0
  unsigned __int64 *v30; // x6
  unsigned __int64 *v31; // x13
  _QWORD *v32; // x5
  __int64 v33; // x11
  __int64 v34; // x8
  __int64 v35; // x12
  unsigned __int64 v36; // x7
  __int64 v37; // x4
  __int64 v38; // x1
  unsigned __int64 v39; // x8
  unsigned __int64 *v40; // x5
  __int64 v41; // x9
  unsigned __int64 *v42; // x2
  unsigned __int64 v43; // x1
  __int64 v44; // x22
  __int64 v45; // x25
  int v46; // w0
  long double v47; // q0
  unsigned __int64 v48; // x8
  __int64 v49; // x11
  __int64 v50; // x9
  __int64 v51; // x12
  __int64 v52; // x20
  _BYTE *v53; // x22
  long double v55; // q0
  unsigned __int64 v56; // x1
  __int64 v57; // x2
  unsigned __int64 v58; // x3
  __int64 v59; // x1
  __int64 v60; // x6
  unsigned __int64 v61; // x3
  unsigned __int64 v62; // x4
  unsigned __int64 v63; // x7
  unsigned __int64 v64; // x1
  __int64 v65; // x10
  __int64 v66; // x26
  __int64 v67; // x1
  _QWORD *v68; // x0
  __int64 v69; // x1
  __int64 v70; // x2
  __int64 v71; // x0
  __int64 v72; // x3
  __int64 v74; // x0
  __int64 v75; // [xsp+38h] [xbp-11F8h]
  __int64 v76; // [xsp+40h] [xbp-11F0h]
  __int64 v77; // [xsp+48h] [xbp-11E8h]
  __int64 v78; // [xsp+50h] [xbp-11E0h]
  __int64 v79; // [xsp+58h] [xbp-11D8h]
  __int64 v80; // [xsp+60h] [xbp-11D0h]
  __int64 v81; // [xsp+68h] [xbp-11C8h]
  __int64 v82; // [xsp+70h] [xbp-11C0h]
  int v83; // [xsp+7Ch] [xbp-11B4h]
  unsigned __int64 v84; // [xsp+80h] [xbp-11B0h]
  char *v85; // [xsp+80h] [xbp-11B0h]
  __int64 v86; // [xsp+88h] [xbp-11A8h]
  __int64 v87; // [xsp+90h] [xbp-11A0h]
  __int64 v88; // [xsp+90h] [xbp-11A0h]
  __int64 v89; // [xsp+98h] [xbp-1198h]
  _BYTE v90[320]; // [xsp+A0h] [xbp-1190h] BYREF
  _QWORD v91[508]; // [xsp+1E0h] [xbp-1050h] BYREF
  __int64 v92; // [xsp+11C0h] [xbp-70h] BYREF
  __int64 v93; // [xsp+11C8h] [xbp-68h]
  __int64 *v94; // [xsp+11D0h] [xbp-60h]
  __int64 v95; // [xsp+11D8h] [xbp-58h]
  __int64 v96; // [xsp+11E0h] [xbp-50h]
  __int64 v97; // [xsp+11E8h] [xbp-48h]
  __int64 v98; // [xsp+11F0h] [xbp-40h]
  __int64 v99; // [xsp+1200h] [xbp-30h]
  __int64 v100; // [xsp+1208h] [xbp-28h]
  __int64 v101; // [xsp+1210h] [xbp-20h]
  __int64 v102; // [xsp+1218h] [xbp-18h]
  __int64 v103; // [xsp+1220h] [xbp-10h]
  __int64 v104; // [xsp+1228h] [xbp-8h]
  __int64 vars0; // [xsp+1230h] [xbp+0h] BYREF

  v10 = sub_41F250("replaced_arena->attached_threads > 0", "arena.c", 621, "detach_arena");
  v94 = &vars0;
  v95 = v9;
  v96 = v0;
  v97 = v1;
  v98 = v2;
  v99 = v3;
  v100 = v4;
  v101 = v5;
  v102 = v6;
  v103 = v7;
  v104 = v8;
  v91[68] = 0;
  v12 = v11;
  v93 = qword_48DD60;
  v13 = (char *)&unk_490670;
  v14 = 0;
  v75 = 0;
  v76 = 0;
  v77 = 0;
  v78 = 0;
  v79 = 0;
  v80 = 0;
  v81 = 0;
  v82 = 0;
  while ( 1 )
  {
    v83 = v14 + 1;
    sub_412240(v12, 2, "<heap nr=\"%d\">\n<sizes>\n", v10);
    if ( _aarch64_cas4_acq(0, 1u, (atomic_uint *)v13) )
      sub_406F40(v13, v15, v16, v17, v18, v19, v20);
    v29 = *((_QWORD *)v13 + 12);
    v30 = (unsigned __int64 *)(v13 + 16);
    v31 = (unsigned __int64 *)(v13 + 96);
    v32 = v90;
    v33 = 0;
    v34 = *(_QWORD *)(v29 + 8);
    v35 = 0;
    do
    {
      v36 = *v30;
      if ( *v30 )
      {
        if ( (v36 & 0xF) != 0 )
LABEL_33:
          sub_407374(
            (__int64)"__malloc_info(): unaligned fastbin chunk detected",
            v21,
            v22,
            v23,
            v24,
            v25,
            v26,
            v27,
            v28);
        v56 = *v30;
        v37 = 0;
        while ( 1 )
        {
          v57 = *(_QWORD *)(v56 + 16);
          ++v37;
          v58 = (v56 + 16) >> 12;
          v56 = v58 ^ v57;
          if ( v58 == v57 )
            break;
          if ( (v56 & 0xF) != 0 )
            goto LABEL_33;
        }
        v59 = *(_QWORD *)(v36 + 8);
        v33 += v37;
        v32[3] = v37;
        v59 &= 0xFFFFFFFFFFFFFFF8LL;
        *v32 = v59 - 15;
        v32[1] = v59;
        v35 += v37 * v59;
      }
      else
      {
        v37 = 0;
        *v32 = 0;
        v32[1] = 0;
        v32[3] = 0;
      }
      v38 = v32[1];
      ++v30;
      v32 += 4;
      *(v32 - 2) = v38 * v37;
    }
    while ( v31 != v30 );
    v39 = v34 & 0xFFFFFFFFFFFFFFF8LL;
    v40 = v91;
    v41 = 1;
    do
    {
      v42 = (unsigned __int64 *)v31[2];
      *(_OWORD *)v40 = xmmword_45A900;
      *((_OWORD *)v40 + 1) = 0u;
      if ( !v42 || v42 == v31 )
        goto LABEL_10;
      v60 = 1;
      v61 = 0;
      v62 = -1;
      v63 = 0;
      do
      {
        v64 = v42[1];
        v42 = (unsigned __int64 *)v42[2];
        v65 = v60++;
        v63 += v64;
        if ( v62 > v64 )
          v62 = v64;
        if ( v61 < v64 )
          v61 = v64;
      }
      while ( v42 != v31 );
      *v40 = v62;
      v40[1] = v61;
      v40[2] = v63;
      v40[3] = v65;
      if ( v65 )
        v41 += v65;
      else
LABEL_10:
        *v40 = 0;
      v43 = v40[2];
      v40 += 4;
      v31 += 2;
      v39 += v43;
    }
    while ( &v92 != (__int64 *)v40 );
    if ( v13 == (char *)&unk_490670 )
    {
      v44 = 0;
      v45 = 0;
    }
    else
    {
      v66 = 0;
      v44 = 0;
      v45 = 0;
      v67 = -4 * qword_490600;
      if ( !qword_490600 )
        v67 = -67108864;
      v68 = (_QWORD *)(v29 & v67);
      do
      {
        v70 = v68[2];
        v69 = v68[3];
        ++v66;
        v68 = (_QWORD *)v68[1];
        v45 += v70;
        v44 += v69;
      }
      while ( v68 );
    }
    v84 = v39;
    v86 = v33;
    v87 = v35;
    v89 = v41;
    v46 = _aarch64_swp4_rel(0, (atomic_uint *)v13);
    v48 = v84;
    v49 = v86;
    v51 = v87;
    v50 = v89;
    if ( v46 > 1 )
    {
      sub_407040(v13);
      v48 = v84;
      v49 = v86;
      v51 = v87;
      v50 = v89;
    }
    v75 += v49;
    v85 = v13;
    v52 = 0;
    v78 += v51;
    v88 = v44;
    v53 = v90;
    v76 += v50;
    v77 += v48;
    do
    {
      while ( !*((_QWORD *)v53 + 3) || v52 == 10 )
      {
        ++v52;
        v53 += 32;
        if ( v52 == 137 )
          goto LABEL_23;
      }
      ++v52;
      v53 += 32;
      sub_412240(v12, 2, "  <size from=\"%zu\" to=\"%zu\" total=\"%zu\" count=\"%zu\"/>\n", v47);
    }
    while ( v52 != 137 );
LABEL_23:
    if ( v91[3] )
      sub_412240(v12, 2, "  <unsorted from=\"%zu\" to=\"%zu\" total=\"%zu\" count=\"%zu\"/>\n", v47);
    v79 += *((_QWORD *)v85 + 273);
    v80 += *((_QWORD *)v85 + 274);
    sub_412240(
      v12,
      2,
      "</sizes>\n"
      "<total type=\"fast\" count=\"%zu\" size=\"%zu\"/>\n"
      "<total type=\"rest\" count=\"%zu\" size=\"%zu\"/>\n"
      "<system type=\"current\" size=\"%zu\"/>\n"
      "<system type=\"max\" size=\"%zu\"/>\n",
      v47);
    if ( v85 == (char *)&unk_490670 )
    {
      sub_412240(v12, 2, "<aspace type=\"total\" size=\"%zu\"/>\n<aspace type=\"mprotect\" size=\"%zu\"/>\n", v55);
      v71 = *((_QWORD *)v85 + 273);
      v81 += v71;
      v82 += v71;
    }
    else
    {
      sub_412240(
        v12,
        2,
        "<aspace type=\"total\" size=\"%zu\"/>\n"
        "<aspace type=\"mprotect\" size=\"%zu\"/>\n"
        "<aspace type=\"subheaps\" size=\"%zu\"/>\n",
        v55);
      v81 += v45;
      v82 += v88;
    }
    sub_428F10("</heap>\n", v12);
    v13 = (char *)*((_QWORD *)v85 + 270);
    if ( v13 == (char *)&unk_490670 )
      break;
    v14 = v83;
  }
  sub_412240(
    v12,
    2,
    "<total type=\"fast\" count=\"%zu\" size=\"%zu\"/>\n"
    "<total type=\"rest\" count=\"%zu\" size=\"%zu\"/>\n"
    "<total type=\"mmap\" count=\"%d\" size=\"%zu\"/>\n"
    "<system type=\"current\" size=\"%zu\"/>\n"
    "<system type=\"max\" size=\"%zu\"/>\n"
    "<aspace type=\"total\" size=\"%zu\"/>\n"
    "<aspace type=\"mprotect\" size=\"%zu\"/>\n"
    "</malloc>\n",
    v10);
  if ( v93 == qword_48DD60 )
    return 0;
  v74 = sub_412340(&qword_48DD60, 0, v93 - qword_48DD60, v72);
  return sub_407C70(v74);
}
