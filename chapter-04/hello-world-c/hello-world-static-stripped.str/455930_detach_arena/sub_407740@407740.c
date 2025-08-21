_QWORD *sub_407740()
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
  _DWORD *v13; // x20
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
  size_t *v40; // x5
  __int64 v41; // x9
  unsigned __int64 *v42; // x2
  size_t v43; // x1
  __int64 v44; // x26
  __int64 v45; // x22
  __int64 v46; // x25
  int v47; // w0
  unsigned __int64 v48; // x8
  __int64 v49; // x11
  __int64 v50; // x9
  __int64 v51; // x12
  __int64 v52; // x20
  __int64 v53; // x27
  __int64 *v54; // x22
  __int64 v55; // x28
  __int64 v56; // x6
  __int64 v58; // x3
  __int64 v59; // x4
  __int64 v60; // x5
  __int64 v61; // x12
  __int64 v62; // x8
  __int64 v63; // x9
  __int64 v64; // x11
  __int64 v65; // x7
  unsigned __int64 v66; // x1
  __int64 v67; // x2
  unsigned __int64 v68; // x3
  __int64 v69; // x1
  __int64 v70; // x6
  size_t v71; // x3
  unsigned __int64 v72; // x4
  size_t v73; // x7
  unsigned __int64 v74; // x1
  __int64 v75; // x10
  __int64 v76; // x1
  _QWORD *v77; // x0
  __int64 v78; // x1
  __int64 v79; // x2
  __int64 v80; // x0
  __int64 v81; // x3
  _QWORD *v83; // x0
  double v84; // d0
  double v85; // d1
  double v86; // d2
  double v87; // d3
  double v88; // d4
  double v89; // d5
  double v90; // d6
  double v91; // d7
  __int64 v92; // [xsp+0h] [xbp-1230h]
  __int64 v93; // [xsp+38h] [xbp-11F8h]
  __int64 v94; // [xsp+40h] [xbp-11F0h]
  __int64 v95; // [xsp+48h] [xbp-11E8h]
  __int64 v96; // [xsp+50h] [xbp-11E0h]
  __int64 v97; // [xsp+58h] [xbp-11D8h]
  __int64 v98; // [xsp+60h] [xbp-11D0h]
  __int64 v99; // [xsp+68h] [xbp-11C8h]
  __int64 v100; // [xsp+70h] [xbp-11C0h]
  int v101; // [xsp+7Ch] [xbp-11B4h]
  unsigned __int64 v102; // [xsp+80h] [xbp-11B0h]
  _DWORD *v103; // [xsp+80h] [xbp-11B0h]
  __int64 v104; // [xsp+88h] [xbp-11A8h]
  unsigned __int64 v105; // [xsp+88h] [xbp-11A8h]
  __int64 v106; // [xsp+90h] [xbp-11A0h]
  __int64 v107; // [xsp+90h] [xbp-11A0h]
  __int64 v108; // [xsp+98h] [xbp-1198h]
  __int64 v109; // [xsp+98h] [xbp-1198h]
  _BYTE v110[320]; // [xsp+A0h] [xbp-1190h] BYREF
  size_t v111[3]; // [xsp+1E0h] [xbp-1050h] BYREF
  size_t v112; // [xsp+1F8h] [xbp-1038h]
  __int64 v113; // [xsp+400h] [xbp-E30h]
  __int64 v114; // [xsp+11C0h] [xbp-70h] BYREF
  __int64 v115; // [xsp+11C8h] [xbp-68h]
  __int64 *v116; // [xsp+11D0h] [xbp-60h]
  __int64 v117; // [xsp+11D8h] [xbp-58h]
  __int64 v118; // [xsp+11E0h] [xbp-50h]
  __int64 v119; // [xsp+11E8h] [xbp-48h]
  __int64 v120; // [xsp+11F0h] [xbp-40h]
  __int64 v121; // [xsp+1200h] [xbp-30h]
  __int64 v122; // [xsp+1208h] [xbp-28h]
  __int64 v123; // [xsp+1210h] [xbp-20h]
  __int64 v124; // [xsp+1218h] [xbp-18h]
  __int64 v125; // [xsp+1220h] [xbp-10h]
  __int64 v126; // [xsp+1228h] [xbp-8h]
  __int64 vars0; // [xsp+1230h] [xbp+0h] BYREF

  v10 = sub_41F250("replaced_arena->attached_threads > 0", "arena.c", 621, "detach_arena");
  v116 = &vars0;
  v117 = v9;
  v118 = v0;
  v119 = v1;
  v120 = v2;
  v121 = v3;
  v122 = v4;
  v123 = v5;
  v124 = v6;
  v125 = v7;
  v126 = v8;
  v113 = 0;
  v12 = v11;
  v115 = qword_48DD60;
  v13 = &dword_490670;
  v14 = 0;
  v93 = 0;
  v94 = 0;
  v95 = 0;
  v96 = 0;
  v97 = 0;
  v98 = 0;
  v99 = 0;
  v100 = 0;
  while ( 1 )
  {
    v101 = v14 + 1;
    sub_412240(v12, 2, "<heap nr=\"%d\">\n<sizes>\n", *(double *)&v10);
    if ( _aarch64_cas4_acq(0, 1u, (atomic_uint *)v13) )
      sub_406F40(v13, v15, v16, v17, v18, v19, v20);
    v29 = *((_QWORD *)v13 + 12);
    v30 = (unsigned __int64 *)(v13 + 4);
    v31 = (unsigned __int64 *)(v13 + 24);
    v32 = v110;
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
        v66 = *v30;
        v37 = 0;
        while ( 1 )
        {
          v67 = *(_QWORD *)(v66 + 16);
          ++v37;
          v68 = (v66 + 16) >> 12;
          v66 = v68 ^ v67;
          if ( v68 == v67 )
            break;
          if ( (v66 & 0xF) != 0 )
            goto LABEL_33;
        }
        v69 = *(_QWORD *)(v36 + 8);
        v33 += v37;
        v32[3] = v37;
        v69 &= 0xFFFFFFFFFFFFFFF8LL;
        *v32 = v69 - 15;
        v32[1] = v69;
        v35 += v37 * v69;
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
    v40 = v111;
    v41 = 1;
    do
    {
      v42 = (unsigned __int64 *)v31[2];
      *(_OWORD *)v40 = xmmword_45A900;
      *((_OWORD *)v40 + 1) = 0u;
      if ( !v42 || v42 == v31 )
        goto LABEL_10;
      v70 = 1;
      v71 = 0;
      v72 = -1;
      v73 = 0;
      do
      {
        v74 = v42[1];
        v42 = (unsigned __int64 *)v42[2];
        v75 = v70++;
        v73 += v74;
        if ( v72 > v74 )
          v72 = v74;
        if ( v71 < v74 )
          v71 = v74;
      }
      while ( v42 != v31 );
      *v40 = v72;
      v40[1] = v71;
      v40[2] = v73;
      v40[3] = v75;
      if ( v75 )
        v41 += v75;
      else
LABEL_10:
        *v40 = 0;
      v43 = v40[2];
      v40 += 4;
      v31 += 2;
      v39 += v43;
    }
    while ( &v114 != (__int64 *)v40 );
    if ( v13 == &dword_490670 )
    {
      v44 = 0;
      v45 = 0;
      v46 = 0;
    }
    else
    {
      v44 = 0;
      v45 = 0;
      v46 = 0;
      v76 = -4 * qword_490600;
      if ( !qword_490600 )
        v76 = -67108864;
      v77 = (_QWORD *)(v29 & v76);
      do
      {
        v79 = v77[2];
        v78 = v77[3];
        ++v44;
        v77 = (_QWORD *)v77[1];
        v46 += v79;
        v45 += v78;
      }
      while ( v77 );
    }
    v102 = v39;
    v104 = v33;
    v106 = v35;
    v108 = v41;
    v47 = _aarch64_swp4_rel(0, (atomic_uint *)v13);
    v48 = v102;
    v49 = v104;
    v51 = v106;
    v50 = v108;
    if ( v47 > 1 )
    {
      sub_407040(v13);
      v48 = v102;
      v49 = v104;
      v51 = v106;
      v50 = v108;
    }
    v93 += v49;
    v103 = v13;
    v105 = v48;
    v52 = 0;
    v96 += v51;
    v53 = v51;
    v107 = v45;
    v109 = v49;
    v54 = (__int64 *)v110;
    v94 += v50;
    v55 = v50;
    v95 += v48;
    do
    {
      while ( 1 )
      {
        v56 = v54[3];
        if ( v56 && v52 != 10 )
          break;
        ++v52;
        v54 += 4;
        if ( v52 == 137 )
          goto LABEL_23;
      }
      v58 = *v54;
      v59 = v54[1];
      v60 = v54[2];
      ++v52;
      v54 += 4;
      sub_412240(v12, 2, "  <size from=\"%zu\" to=\"%zu\" total=\"%zu\" count=\"%zu\"/>\n", v58, v59, v60, v56);
    }
    while ( v52 != 137 );
LABEL_23:
    v61 = v53;
    v62 = v105;
    v63 = v55;
    v64 = v109;
    if ( v112 )
    {
      sub_412240(
        v12,
        2,
        "  <unsorted from=\"%zu\" to=\"%zu\" total=\"%zu\" count=\"%zu\"/>\n",
        v111[0],
        v111[1],
        v111[2],
        v112);
      v62 = v105;
      v64 = v109;
      v61 = v53;
      v63 = v55;
    }
    v65 = *((_QWORD *)v103 + 273);
    v97 += v65;
    v92 = *((_QWORD *)v103 + 274);
    v98 += v92;
    sub_412240(
      v12,
      2,
      "</sizes>\n"
      "<total type=\"fast\" count=\"%zu\" size=\"%zu\"/>\n"
      "<total type=\"rest\" count=\"%zu\" size=\"%zu\"/>\n"
      "<system type=\"current\" size=\"%zu\"/>\n"
      "<system type=\"max\" size=\"%zu\"/>\n",
      v64,
      v61,
      v63,
      v62,
      v65,
      v92);
    if ( v103 == &dword_490670 )
    {
      sub_412240(
        v12,
        2,
        "<aspace type=\"total\" size=\"%zu\"/>\n<aspace type=\"mprotect\" size=\"%zu\"/>\n",
        *((_QWORD *)v103 + 273),
        *((_QWORD *)v103 + 273));
      v80 = *((_QWORD *)v103 + 273);
      v99 += v80;
      v100 += v80;
    }
    else
    {
      sub_412240(
        v12,
        2,
        "<aspace type=\"total\" size=\"%zu\"/>\n"
        "<aspace type=\"mprotect\" size=\"%zu\"/>\n"
        "<aspace type=\"subheaps\" size=\"%zu\"/>\n",
        v46,
        v107,
        v44);
      v99 += v46;
      v100 += v107;
    }
    sub_428F10("</heap>\n", v12);
    v13 = (_DWORD *)*((_QWORD *)v103 + 270);
    if ( v13 == &dword_490670 )
      break;
    v14 = v101;
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
    v93,
    v96,
    v94,
    v95,
    dword_49060C,
    qword_490620,
    v97,
    v98,
    v99,
    v100);
  if ( v115 == qword_48DD60 )
    return 0;
  v83 = (_QWORD *)sub_412340(&qword_48DD60, 0, v115 - qword_48DD60, v81);
  return sub_407C70(v83, v84, v85, v86, v87, v88, v89, v90, v91);
}
