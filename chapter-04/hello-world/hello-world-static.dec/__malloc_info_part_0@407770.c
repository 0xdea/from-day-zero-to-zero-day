__int64 __fastcall _malloc_info_part_0(__int64 a1)
{
  char *v2; // x20
  int v3; // w3
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x3
  void *v7; // x4
  void *v8; // x5
  void *v9; // x6
  double v10; // d0
  double v11; // d1
  double v12; // d2
  double v13; // d3
  double v14; // d4
  double v15; // d5
  double v16; // d6
  double v17; // d7
  __int64 v18; // x0
  unsigned __int64 *v19; // x6
  unsigned __int64 *v20; // x13
  _QWORD *v21; // x5
  __int64 v22; // x11
  __int64 v23; // x8
  __int64 v24; // x12
  unsigned __int64 v25; // x7
  __int64 v26; // x4
  __int64 v27; // x1
  unsigned __int64 v28; // x8
  size_t *v29; // x5
  __int64 v30; // x9
  unsigned __int64 *v31; // x2
  size_t v32; // x1
  __int64 v33; // x26
  __int64 v34; // x22
  __int64 v35; // x25
  int v36; // w0
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x3
  void *v40; // x4
  void *v41; // x5
  void *v42; // x6
  unsigned __int64 v43; // x8
  __int64 v44; // x11
  __int64 v45; // x9
  __int64 v46; // x12
  __int64 v47; // x20
  __int64 v48; // x27
  __int64 *v49; // x22
  __int64 v50; // x28
  __int64 v51; // x6
  __int64 v53; // x3
  __int64 v54; // x4
  __int64 v55; // x5
  __int64 v56; // x12
  __int64 v57; // x8
  __int64 v58; // x9
  __int64 v59; // x11
  __int64 v60; // x7
  unsigned __int64 v61; // x1
  __int64 v62; // x2
  unsigned __int64 v63; // x3
  __int64 v64; // x1
  __int64 v65; // x6
  size_t v66; // x3
  unsigned __int64 v67; // x4
  size_t v68; // x7
  unsigned __int64 v69; // x1
  __int64 v70; // x10
  __int64 v71; // x1
  _QWORD *v72; // x0
  __int64 v73; // x1
  __int64 v74; // x2
  __int64 v75; // x0
  __int64 v77; // [xsp+0h] [xbp-11D0h]
  __int64 v78; // [xsp+38h] [xbp-1198h]
  __int64 v79; // [xsp+40h] [xbp-1190h]
  __int64 v80; // [xsp+48h] [xbp-1188h]
  __int64 v81; // [xsp+50h] [xbp-1180h]
  __int64 v82; // [xsp+58h] [xbp-1178h]
  __int64 v83; // [xsp+60h] [xbp-1170h]
  __int64 v84; // [xsp+68h] [xbp-1168h]
  __int64 v85; // [xsp+70h] [xbp-1160h]
  int v86; // [xsp+7Ch] [xbp-1154h]
  unsigned __int64 v87; // [xsp+80h] [xbp-1150h]
  char *v88; // [xsp+80h] [xbp-1150h]
  __int64 v89; // [xsp+88h] [xbp-1148h]
  unsigned __int64 v90; // [xsp+88h] [xbp-1148h]
  __int64 v91; // [xsp+90h] [xbp-1140h]
  __int64 v92; // [xsp+90h] [xbp-1140h]
  __int64 v93; // [xsp+98h] [xbp-1138h]
  __int64 v94; // [xsp+98h] [xbp-1138h]
  _BYTE v95[320]; // [xsp+A0h] [xbp-1130h] BYREF
  size_t v96[3]; // [xsp+1E0h] [xbp-FF0h] BYREF
  size_t v97; // [xsp+1F8h] [xbp-FD8h]
  __int64 v98; // [xsp+400h] [xbp-DD0h]
  __int64 v99; // [xsp+11C0h] [xbp-10h] BYREF

  v98 = 0;
  v2 = (char *)&main_arena;
  v3 = 0;
  v78 = 0;
  v79 = 0;
  v80 = 0;
  v81 = 0;
  v82 = 0;
  v83 = 0;
  v84 = 0;
  v85 = 0;
  while ( 1 )
  {
    v86 = v3 + 1;
    _fprintf_chk(a1, 2, "<heap nr=\"%d\">\n<sizes>\n");
    if ( _aarch64_cas4_acq(0, 1u, (atomic_uint *)v2) )
      _lll_lock_wait_private(v2, v10, v11, v12, v13, v14, v15, v16, v17, v4, v5, v6, v7, v8, v9);
    v18 = *((_QWORD *)v2 + 12);
    v19 = (unsigned __int64 *)(v2 + 16);
    v20 = (unsigned __int64 *)(v2 + 96);
    v21 = v95;
    v22 = 0;
    v23 = *(_QWORD *)(v18 + 8);
    v24 = 0;
    do
    {
      v25 = *v19;
      if ( *v19 )
      {
        if ( (v25 & 0xF) != 0 )
LABEL_33:
          malloc_printerr(
            (__int64)"__malloc_info(): unaligned fastbin chunk detected",
            v10,
            v11,
            v12,
            v13,
            v14,
            v15,
            v16,
            v17);
        v61 = *v19;
        v26 = 0;
        while ( 1 )
        {
          v62 = *(_QWORD *)(v61 + 16);
          ++v26;
          v63 = (v61 + 16) >> 12;
          v61 = v63 ^ v62;
          if ( v63 == v62 )
            break;
          if ( (v61 & 0xF) != 0 )
            goto LABEL_33;
        }
        v64 = *(_QWORD *)(v25 + 8);
        v22 += v26;
        v21[3] = v26;
        v64 &= 0xFFFFFFFFFFFFFFF8LL;
        *v21 = v64 - 15;
        v21[1] = v64;
        v24 += v26 * v64;
      }
      else
      {
        v26 = 0;
        *v21 = 0;
        v21[1] = 0;
        v21[3] = 0;
      }
      v27 = v21[1];
      ++v19;
      v21 += 4;
      *(v21 - 2) = v27 * v26;
    }
    while ( v20 != v19 );
    v28 = v23 & 0xFFFFFFFFFFFFFFF8LL;
    v29 = v96;
    v30 = 1;
    do
    {
      v31 = (unsigned __int64 *)v20[2];
      *(_OWORD *)v29 = xmmword_45A900;
      *((_OWORD *)v29 + 1) = 0u;
      if ( !v31 || v31 == v20 )
        goto LABEL_10;
      v65 = 1;
      v66 = 0;
      v67 = -1;
      v68 = 0;
      do
      {
        v69 = v31[1];
        v31 = (unsigned __int64 *)v31[2];
        v70 = v65++;
        v68 += v69;
        if ( v67 > v69 )
          v67 = v69;
        if ( v66 < v69 )
          v66 = v69;
      }
      while ( v31 != v20 );
      *v29 = v67;
      v29[1] = v66;
      v29[2] = v68;
      v29[3] = v70;
      if ( v70 )
        v30 += v70;
      else
LABEL_10:
        *v29 = 0;
      v32 = v29[2];
      v29 += 4;
      v20 += 2;
      v28 += v32;
    }
    while ( &v99 != (__int64 *)v29 );
    if ( v2 == (char *)&main_arena )
    {
      v33 = 0;
      v34 = 0;
      v35 = 0;
    }
    else
    {
      v33 = 0;
      v34 = 0;
      v35 = 0;
      v71 = -4 * qword_490600;
      if ( !qword_490600 )
        v71 = -67108864;
      v72 = (_QWORD *)(v18 & v71);
      do
      {
        v74 = v72[2];
        v73 = v72[3];
        ++v33;
        v72 = (_QWORD *)v72[1];
        v35 += v74;
        v34 += v73;
      }
      while ( v72 );
    }
    v87 = v28;
    v89 = v22;
    v91 = v24;
    v93 = v30;
    v36 = _aarch64_swp4_rel(0, (atomic_uint *)v2);
    v43 = v87;
    v44 = v89;
    v46 = v91;
    v45 = v93;
    if ( v36 > 1 )
    {
      _lll_lock_wake_private(v2, v37, v38, v39, v40, v41, v42);
      v43 = v87;
      v44 = v89;
      v46 = v91;
      v45 = v93;
    }
    v78 += v44;
    v88 = v2;
    v90 = v43;
    v47 = 0;
    v81 += v46;
    v48 = v46;
    v92 = v34;
    v94 = v44;
    v49 = (__int64 *)v95;
    v79 += v45;
    v50 = v45;
    v80 += v43;
    do
    {
      while ( 1 )
      {
        v51 = v49[3];
        if ( v51 && v47 != 10 )
          break;
        ++v47;
        v49 += 4;
        if ( v47 == 137 )
          goto LABEL_23;
      }
      v53 = *v49;
      v54 = v49[1];
      v55 = v49[2];
      ++v47;
      v49 += 4;
      _fprintf_chk(a1, 2, "  <size from=\"%zu\" to=\"%zu\" total=\"%zu\" count=\"%zu\"/>\n", v53, v54, v55, v51);
    }
    while ( v47 != 137 );
LABEL_23:
    v56 = v48;
    v57 = v90;
    v58 = v50;
    v59 = v94;
    if ( v97 )
    {
      _fprintf_chk(
        a1,
        2,
        "  <unsorted from=\"%zu\" to=\"%zu\" total=\"%zu\" count=\"%zu\"/>\n",
        v96[0],
        v96[1],
        v96[2],
        v97);
      v57 = v90;
      v59 = v94;
      v56 = v48;
      v58 = v50;
    }
    v60 = *((_QWORD *)v88 + 273);
    v82 += v60;
    v77 = *((_QWORD *)v88 + 274);
    v83 += v77;
    _fprintf_chk(
      a1,
      2,
      "</sizes>\n"
      "<total type=\"fast\" count=\"%zu\" size=\"%zu\"/>\n"
      "<total type=\"rest\" count=\"%zu\" size=\"%zu\"/>\n"
      "<system type=\"current\" size=\"%zu\"/>\n"
      "<system type=\"max\" size=\"%zu\"/>\n",
      v59,
      v56,
      v58,
      v57,
      v60,
      v77);
    if ( v88 == (char *)&main_arena )
    {
      _fprintf_chk(
        a1,
        2,
        "<aspace type=\"total\" size=\"%zu\"/>\n<aspace type=\"mprotect\" size=\"%zu\"/>\n",
        *((_QWORD *)v88 + 273),
        *((_QWORD *)v88 + 273));
      v75 = *((_QWORD *)v88 + 273);
      v84 += v75;
      v85 += v75;
    }
    else
    {
      _fprintf_chk(
        a1,
        2,
        "<aspace type=\"total\" size=\"%zu\"/>\n"
        "<aspace type=\"mprotect\" size=\"%zu\"/>\n"
        "<aspace type=\"subheaps\" size=\"%zu\"/>\n",
        v35,
        v92,
        v33);
      v84 += v35;
      v85 += v92;
    }
    fputs("</heap>\n", a1);
    v2 = (char *)*((_QWORD *)v88 + 270);
    if ( v2 == (char *)&main_arena )
      break;
    v3 = v86;
  }
  _fprintf_chk(
    a1,
    2,
    "<total type=\"fast\" count=\"%zu\" size=\"%zu\"/>\n"
    "<total type=\"rest\" count=\"%zu\" size=\"%zu\"/>\n"
    "<total type=\"mmap\" count=\"%d\" size=\"%zu\"/>\n"
    "<system type=\"current\" size=\"%zu\"/>\n"
    "<system type=\"max\" size=\"%zu\"/>\n"
    "<aspace type=\"total\" size=\"%zu\"/>\n"
    "<aspace type=\"mprotect\" size=\"%zu\"/>\n"
    "</malloc>\n",
    v78,
    v81,
    v79,
    v80,
    dword_49060C,
    qword_490620,
    v82,
    v83,
    v84,
    v85);
  return 0;
}
