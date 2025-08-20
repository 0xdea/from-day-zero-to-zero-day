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
  __int64 v10; // x19
  char *v11; // x20
  int v12; // w3
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  void *v16; // x4
  void *v17; // x5
  void *v18; // x6
  double v19; // d0
  double v20; // d1
  double v21; // d2
  double v22; // d3
  double v23; // d4
  double v24; // d5
  double v25; // d6
  double v26; // d7
  __int64 v27; // x0
  unsigned __int64 *v28; // x6
  unsigned __int64 *v29; // x13
  _QWORD *v30; // x5
  __int64 v31; // x11
  __int64 v32; // x8
  __int64 v33; // x12
  unsigned __int64 v34; // x7
  __int64 v35; // x4
  __int64 v36; // x1
  unsigned __int64 v37; // x8
  size_t *v38; // x5
  __int64 v39; // x9
  unsigned __int64 *v40; // x2
  size_t v41; // x1
  __int64 v42; // x26
  __int64 v43; // x22
  __int64 v44; // x25
  int v45; // w0
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x3
  void *v49; // x4
  void *v50; // x5
  void *v51; // x6
  unsigned __int64 v52; // x8
  __int64 v53; // x11
  __int64 v54; // x9
  __int64 v55; // x12
  __int64 v56; // x20
  __int64 v57; // x27
  __int64 *v58; // x22
  __int64 v59; // x28
  __int64 v60; // x6
  __int64 v62; // x3
  __int64 v63; // x4
  __int64 v64; // x5
  __int64 v65; // x12
  __int64 v66; // x8
  __int64 v67; // x9
  __int64 v68; // x11
  __int64 v69; // x7
  unsigned __int64 v70; // x1
  __int64 v71; // x2
  unsigned __int64 v72; // x3
  __int64 v73; // x1
  __int64 v74; // x6
  size_t v75; // x3
  unsigned __int64 v76; // x4
  size_t v77; // x7
  unsigned __int64 v78; // x1
  __int64 v79; // x10
  __int64 v80; // x1
  _QWORD *v81; // x0
  __int64 v82; // x1
  __int64 v83; // x2
  __int64 v84; // x0
  __int64 v85; // x3
  __int64 v87; // x0
  __int64 v88; // [xsp+0h] [xbp-1230h]
  __int64 v89; // [xsp+38h] [xbp-11F8h]
  __int64 v90; // [xsp+40h] [xbp-11F0h]
  __int64 v91; // [xsp+48h] [xbp-11E8h]
  __int64 v92; // [xsp+50h] [xbp-11E0h]
  __int64 v93; // [xsp+58h] [xbp-11D8h]
  __int64 v94; // [xsp+60h] [xbp-11D0h]
  __int64 v95; // [xsp+68h] [xbp-11C8h]
  __int64 v96; // [xsp+70h] [xbp-11C0h]
  int v97; // [xsp+7Ch] [xbp-11B4h]
  unsigned __int64 v98; // [xsp+80h] [xbp-11B0h]
  char *v99; // [xsp+80h] [xbp-11B0h]
  __int64 v100; // [xsp+88h] [xbp-11A8h]
  unsigned __int64 v101; // [xsp+88h] [xbp-11A8h]
  __int64 v102; // [xsp+90h] [xbp-11A0h]
  __int64 v103; // [xsp+90h] [xbp-11A0h]
  __int64 v104; // [xsp+98h] [xbp-1198h]
  __int64 v105; // [xsp+98h] [xbp-1198h]
  _BYTE v106[320]; // [xsp+A0h] [xbp-1190h] BYREF
  size_t v107[3]; // [xsp+1E0h] [xbp-1050h] BYREF
  size_t v108; // [xsp+1F8h] [xbp-1038h]
  __int64 v109; // [xsp+400h] [xbp-E30h]
  __int64 v110; // [xsp+11C0h] [xbp-70h] BYREF
  __int64 v111; // [xsp+11C8h] [xbp-68h]
  __int64 *v112; // [xsp+11D0h] [xbp-60h]
  __int64 v113; // [xsp+11D8h] [xbp-58h]
  __int64 v114; // [xsp+11E0h] [xbp-50h]
  __int64 v115; // [xsp+11E8h] [xbp-48h]
  __int64 v116; // [xsp+11F0h] [xbp-40h]
  __int64 v117; // [xsp+1200h] [xbp-30h]
  __int64 v118; // [xsp+1208h] [xbp-28h]
  __int64 v119; // [xsp+1210h] [xbp-20h]
  __int64 v120; // [xsp+1218h] [xbp-18h]
  __int64 v121; // [xsp+1220h] [xbp-10h]
  __int64 v122; // [xsp+1228h] [xbp-8h]
  __int64 vars0; // [xsp+1230h] [xbp+0h] BYREF

  v112 = &vars0;
  v113 = v9;
  v114 = v0;
  v115 = v1;
  v116 = v2;
  v117 = v3;
  v118 = v4;
  v119 = v5;
  v120 = v6;
  v121 = v7;
  v122 = v8;
  v109 = 0;
  v10 = sub_41F250("replaced_arena->attached_threads > 0", "arena.c", 621, "detach_arena");
  v111 = qword_48DD60;
  v11 = (char *)&unk_490670;
  v12 = 0;
  v89 = 0;
  v90 = 0;
  v91 = 0;
  v92 = 0;
  v93 = 0;
  v94 = 0;
  v95 = 0;
  v96 = 0;
  while ( 1 )
  {
    v97 = v12 + 1;
    sub_412240(v10, 2, "<heap nr=\"%d\">\n<sizes>\n");
    if ( _aarch64_cas4_acq(0, 1u, (atomic_uint *)v11) )
      sub_406F40(v11, v19, v20, v21, v22, v23, v24, v25, v26, v13, v14, v15, v16, v17, v18);
    v27 = *((_QWORD *)v11 + 12);
    v28 = (unsigned __int64 *)(v11 + 16);
    v29 = (unsigned __int64 *)(v11 + 96);
    v30 = v106;
    v31 = 0;
    v32 = *(_QWORD *)(v27 + 8);
    v33 = 0;
    do
    {
      v34 = *v28;
      if ( *v28 )
      {
        if ( (v34 & 0xF) != 0 )
LABEL_33:
          sub_407374(
            (__int64)"__malloc_info(): unaligned fastbin chunk detected",
            v19,
            v20,
            v21,
            v22,
            v23,
            v24,
            v25,
            v26);
        v70 = *v28;
        v35 = 0;
        while ( 1 )
        {
          v71 = *(_QWORD *)(v70 + 16);
          ++v35;
          v72 = (v70 + 16) >> 12;
          v70 = v72 ^ v71;
          if ( v72 == v71 )
            break;
          if ( (v70 & 0xF) != 0 )
            goto LABEL_33;
        }
        v73 = *(_QWORD *)(v34 + 8);
        v31 += v35;
        v30[3] = v35;
        v73 &= 0xFFFFFFFFFFFFFFF8LL;
        *v30 = v73 - 15;
        v30[1] = v73;
        v33 += v35 * v73;
      }
      else
      {
        v35 = 0;
        *v30 = 0;
        v30[1] = 0;
        v30[3] = 0;
      }
      v36 = v30[1];
      ++v28;
      v30 += 4;
      *(v30 - 2) = v36 * v35;
    }
    while ( v29 != v28 );
    v37 = v32 & 0xFFFFFFFFFFFFFFF8LL;
    v38 = v107;
    v39 = 1;
    do
    {
      v40 = (unsigned __int64 *)v29[2];
      *(_OWORD *)v38 = xmmword_45A900;
      *((_OWORD *)v38 + 1) = 0u;
      if ( !v40 || v40 == v29 )
        goto LABEL_10;
      v74 = 1;
      v75 = 0;
      v76 = -1;
      v77 = 0;
      do
      {
        v78 = v40[1];
        v40 = (unsigned __int64 *)v40[2];
        v79 = v74++;
        v77 += v78;
        if ( v76 > v78 )
          v76 = v78;
        if ( v75 < v78 )
          v75 = v78;
      }
      while ( v40 != v29 );
      *v38 = v76;
      v38[1] = v75;
      v38[2] = v77;
      v38[3] = v79;
      if ( v79 )
        v39 += v79;
      else
LABEL_10:
        *v38 = 0;
      v41 = v38[2];
      v38 += 4;
      v29 += 2;
      v37 += v41;
    }
    while ( &v110 != (__int64 *)v38 );
    if ( v11 == (char *)&unk_490670 )
    {
      v42 = 0;
      v43 = 0;
      v44 = 0;
    }
    else
    {
      v42 = 0;
      v43 = 0;
      v44 = 0;
      v80 = -4 * qword_490600;
      if ( !qword_490600 )
        v80 = -67108864;
      v81 = (_QWORD *)(v27 & v80);
      do
      {
        v83 = v81[2];
        v82 = v81[3];
        ++v42;
        v81 = (_QWORD *)v81[1];
        v44 += v83;
        v43 += v82;
      }
      while ( v81 );
    }
    v98 = v37;
    v100 = v31;
    v102 = v33;
    v104 = v39;
    v45 = _aarch64_swp4_rel(0, (atomic_uint *)v11);
    v52 = v98;
    v53 = v100;
    v55 = v102;
    v54 = v104;
    if ( v45 > 1 )
    {
      sub_407040(v11, v46, v47, v48, v49, v50, v51);
      v52 = v98;
      v53 = v100;
      v55 = v102;
      v54 = v104;
    }
    v89 += v53;
    v99 = v11;
    v101 = v52;
    v56 = 0;
    v92 += v55;
    v57 = v55;
    v103 = v43;
    v105 = v53;
    v58 = (__int64 *)v106;
    v90 += v54;
    v59 = v54;
    v91 += v52;
    do
    {
      while ( 1 )
      {
        v60 = v58[3];
        if ( v60 && v56 != 10 )
          break;
        ++v56;
        v58 += 4;
        if ( v56 == 137 )
          goto LABEL_23;
      }
      v62 = *v58;
      v63 = v58[1];
      v64 = v58[2];
      ++v56;
      v58 += 4;
      sub_412240(v10, 2, "  <size from=\"%zu\" to=\"%zu\" total=\"%zu\" count=\"%zu\"/>\n", v62, v63, v64, v60);
    }
    while ( v56 != 137 );
LABEL_23:
    v65 = v57;
    v66 = v101;
    v67 = v59;
    v68 = v105;
    if ( v108 )
    {
      sub_412240(
        v10,
        2,
        "  <unsorted from=\"%zu\" to=\"%zu\" total=\"%zu\" count=\"%zu\"/>\n",
        v107[0],
        v107[1],
        v107[2],
        v108);
      v66 = v101;
      v68 = v105;
      v65 = v57;
      v67 = v59;
    }
    v69 = *((_QWORD *)v99 + 273);
    v93 += v69;
    v88 = *((_QWORD *)v99 + 274);
    v94 += v88;
    sub_412240(
      v10,
      2,
      "</sizes>\n"
      "<total type=\"fast\" count=\"%zu\" size=\"%zu\"/>\n"
      "<total type=\"rest\" count=\"%zu\" size=\"%zu\"/>\n"
      "<system type=\"current\" size=\"%zu\"/>\n"
      "<system type=\"max\" size=\"%zu\"/>\n",
      v68,
      v65,
      v67,
      v66,
      v69,
      v88);
    if ( v99 == (char *)&unk_490670 )
    {
      sub_412240(
        v10,
        2,
        "<aspace type=\"total\" size=\"%zu\"/>\n<aspace type=\"mprotect\" size=\"%zu\"/>\n",
        *((_QWORD *)v99 + 273),
        *((_QWORD *)v99 + 273));
      v84 = *((_QWORD *)v99 + 273);
      v95 += v84;
      v96 += v84;
    }
    else
    {
      sub_412240(
        v10,
        2,
        "<aspace type=\"total\" size=\"%zu\"/>\n"
        "<aspace type=\"mprotect\" size=\"%zu\"/>\n"
        "<aspace type=\"subheaps\" size=\"%zu\"/>\n",
        v44,
        v103,
        v42);
      v95 += v44;
      v96 += v103;
    }
    sub_428F10("</heap>\n", v10);
    v11 = (char *)*((_QWORD *)v99 + 270);
    if ( v11 == (char *)&unk_490670 )
      break;
    v12 = v97;
  }
  sub_412240(
    v10,
    2,
    "<total type=\"fast\" count=\"%zu\" size=\"%zu\"/>\n"
    "<total type=\"rest\" count=\"%zu\" size=\"%zu\"/>\n"
    "<total type=\"mmap\" count=\"%d\" size=\"%zu\"/>\n"
    "<system type=\"current\" size=\"%zu\"/>\n"
    "<system type=\"max\" size=\"%zu\"/>\n"
    "<aspace type=\"total\" size=\"%zu\"/>\n"
    "<aspace type=\"mprotect\" size=\"%zu\"/>\n"
    "</malloc>\n",
    v89,
    v92,
    v90,
    v91,
    dword_49060C,
    qword_490620,
    v93,
    v94,
    v95,
    v96);
  if ( v111 == qword_48DD60 )
    return 0;
  v87 = sub_412340(&qword_48DD60, 0, v111 - qword_48DD60, v85);
  return sub_407C70(v87);
}
