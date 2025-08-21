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
  __int64 v10; // x0
  unsigned __int64 *v11; // x6
  unsigned __int64 *v12; // x13
  _QWORD *v13; // x5
  __int64 v14; // x11
  __int64 v15; // x8
  __int64 v16; // x12
  unsigned __int64 v17; // x7
  __int64 v18; // x4
  __int64 v19; // x1
  unsigned __int64 v20; // x8
  size_t *v21; // x5
  __int64 v22; // x9
  unsigned __int64 *v23; // x2
  size_t v24; // x1
  __int64 v25; // x26
  __int64 v26; // x22
  __int64 v27; // x25
  int v28; // w0
  unsigned __int64 v29; // x8
  __int64 v30; // x11
  __int64 v31; // x9
  __int64 v32; // x12
  __int64 v33; // x20
  __int64 v34; // x27
  __int64 *v35; // x22
  __int64 v36; // x28
  __int64 v37; // x6
  __int64 v39; // x3
  __int64 v40; // x4
  __int64 v41; // x5
  __int64 v42; // x12
  __int64 v43; // x8
  __int64 v44; // x9
  __int64 v45; // x11
  __int64 v46; // x7
  unsigned __int64 v47; // x1
  __int64 v48; // x2
  unsigned __int64 v49; // x3
  __int64 v50; // x1
  __int64 v51; // x6
  size_t v52; // x3
  unsigned __int64 v53; // x4
  size_t v54; // x7
  unsigned __int64 v55; // x1
  __int64 v56; // x10
  __int64 v57; // x1
  _QWORD *v58; // x0
  __int64 v59; // x1
  __int64 v60; // x2
  __int64 v61; // x0
  __int64 v63; // [xsp+0h] [xbp-11D0h]
  __int64 v64; // [xsp+38h] [xbp-1198h]
  __int64 v65; // [xsp+40h] [xbp-1190h]
  __int64 v66; // [xsp+48h] [xbp-1188h]
  __int64 v67; // [xsp+50h] [xbp-1180h]
  __int64 v68; // [xsp+58h] [xbp-1178h]
  __int64 v69; // [xsp+60h] [xbp-1170h]
  __int64 v70; // [xsp+68h] [xbp-1168h]
  __int64 v71; // [xsp+70h] [xbp-1160h]
  int v72; // [xsp+7Ch] [xbp-1154h]
  unsigned __int64 v73; // [xsp+80h] [xbp-1150h]
  char *v74; // [xsp+80h] [xbp-1150h]
  __int64 v75; // [xsp+88h] [xbp-1148h]
  unsigned __int64 v76; // [xsp+88h] [xbp-1148h]
  __int64 v77; // [xsp+90h] [xbp-1140h]
  __int64 v78; // [xsp+90h] [xbp-1140h]
  __int64 v79; // [xsp+98h] [xbp-1138h]
  __int64 v80; // [xsp+98h] [xbp-1138h]
  _BYTE v81[320]; // [xsp+A0h] [xbp-1130h] BYREF
  size_t v82[3]; // [xsp+1E0h] [xbp-FF0h] BYREF
  size_t v83; // [xsp+1F8h] [xbp-FD8h]
  __int64 v84; // [xsp+400h] [xbp-DD0h]
  __int64 v85; // [xsp+11C0h] [xbp-10h] BYREF

  v84 = 0;
  v2 = (char *)&main_arena;
  v3 = 0;
  v64 = 0;
  v65 = 0;
  v66 = 0;
  v67 = 0;
  v68 = 0;
  v69 = 0;
  v70 = 0;
  v71 = 0;
  while ( 1 )
  {
    v72 = v3 + 1;
    _fprintf_chk(a1, 2, "<heap nr=\"%d\">\n<sizes>\n");
    if ( _aarch64_cas4_acq(0, 1u, (atomic_uint *)v2) )
      _lll_lock_wait_private(v2, v4, v5, v6, v7, v8, v9);
    v10 = *((_QWORD *)v2 + 12);
    v11 = (unsigned __int64 *)(v2 + 16);
    v12 = (unsigned __int64 *)(v2 + 96);
    v13 = v81;
    v14 = 0;
    v15 = *(_QWORD *)(v10 + 8);
    v16 = 0;
    do
    {
      v17 = *v11;
      if ( *v11 )
      {
        if ( (v17 & 0xF) != 0 )
        {
LABEL_33:
          v10 = malloc_printerr("__malloc_info(): unaligned fastbin chunk detected");
        }
        else
        {
          v47 = *v11;
          v18 = 0;
          while ( 1 )
          {
            v48 = *(_QWORD *)(v47 + 16);
            ++v18;
            v49 = (v47 + 16) >> 12;
            v47 = v49 ^ v48;
            if ( v49 == v48 )
              break;
            if ( (v47 & 0xF) != 0 )
              goto LABEL_33;
          }
        }
        v50 = *(_QWORD *)(v17 + 8);
        v14 += v18;
        v13[3] = v18;
        v50 &= 0xFFFFFFFFFFFFFFF8LL;
        *v13 = v50 - 15;
        v13[1] = v50;
        v16 += v18 * v50;
      }
      else
      {
        v18 = 0;
        *v13 = 0;
        v13[1] = 0;
        v13[3] = 0;
      }
      v19 = v13[1];
      ++v11;
      v13 += 4;
      *(v13 - 2) = v19 * v18;
    }
    while ( v12 != v11 );
    v20 = v15 & 0xFFFFFFFFFFFFFFF8LL;
    v21 = v82;
    v22 = 1;
    do
    {
      v23 = (unsigned __int64 *)v12[2];
      *(_OWORD *)v21 = xmmword_45A900;
      *((_OWORD *)v21 + 1) = 0u;
      if ( !v23 || v23 == v12 )
        goto LABEL_10;
      v51 = 1;
      v52 = 0;
      v53 = -1;
      v54 = 0;
      do
      {
        v55 = v23[1];
        v23 = (unsigned __int64 *)v23[2];
        v56 = v51++;
        v54 += v55;
        if ( v53 > v55 )
          v53 = v55;
        if ( v52 < v55 )
          v52 = v55;
      }
      while ( v23 != v12 );
      *v21 = v53;
      v21[1] = v52;
      v21[2] = v54;
      v21[3] = v56;
      if ( v56 )
        v22 += v56;
      else
LABEL_10:
        *v21 = 0;
      v24 = v21[2];
      v21 += 4;
      v12 += 2;
      v20 += v24;
    }
    while ( &v85 != (__int64 *)v21 );
    if ( v2 == (char *)&main_arena )
    {
      v25 = 0;
      v26 = 0;
      v27 = 0;
    }
    else
    {
      v25 = 0;
      v26 = 0;
      v27 = 0;
      v57 = -4 * qword_490600;
      if ( !qword_490600 )
        v57 = -67108864;
      v58 = (_QWORD *)(v10 & v57);
      do
      {
        v60 = v58[2];
        v59 = v58[3];
        ++v25;
        v58 = (_QWORD *)v58[1];
        v27 += v60;
        v26 += v59;
      }
      while ( v58 );
    }
    v73 = v20;
    v75 = v14;
    v77 = v16;
    v79 = v22;
    v28 = _aarch64_swp4_rel(0, (atomic_uint *)v2);
    v29 = v73;
    v30 = v75;
    v32 = v77;
    v31 = v79;
    if ( v28 > 1 )
    {
      _lll_lock_wake_private(v2);
      v29 = v73;
      v30 = v75;
      v32 = v77;
      v31 = v79;
    }
    v64 += v30;
    v74 = v2;
    v76 = v29;
    v33 = 0;
    v67 += v32;
    v34 = v32;
    v78 = v26;
    v80 = v30;
    v35 = (__int64 *)v81;
    v65 += v31;
    v36 = v31;
    v66 += v29;
    do
    {
      while ( 1 )
      {
        v37 = v35[3];
        if ( v37 && v33 != 10 )
          break;
        ++v33;
        v35 += 4;
        if ( v33 == 137 )
          goto LABEL_23;
      }
      v39 = *v35;
      v40 = v35[1];
      v41 = v35[2];
      ++v33;
      v35 += 4;
      _fprintf_chk(a1, 2, "  <size from=\"%zu\" to=\"%zu\" total=\"%zu\" count=\"%zu\"/>\n", v39, v40, v41, v37);
    }
    while ( v33 != 137 );
LABEL_23:
    v42 = v34;
    v43 = v76;
    v44 = v36;
    v45 = v80;
    if ( v83 )
    {
      _fprintf_chk(
        a1,
        2,
        "  <unsorted from=\"%zu\" to=\"%zu\" total=\"%zu\" count=\"%zu\"/>\n",
        v82[0],
        v82[1],
        v82[2],
        v83);
      v43 = v76;
      v45 = v80;
      v42 = v34;
      v44 = v36;
    }
    v46 = *((_QWORD *)v74 + 273);
    v68 += v46;
    v63 = *((_QWORD *)v74 + 274);
    v69 += v63;
    _fprintf_chk(
      a1,
      2,
      "</sizes>\n"
      "<total type=\"fast\" count=\"%zu\" size=\"%zu\"/>\n"
      "<total type=\"rest\" count=\"%zu\" size=\"%zu\"/>\n"
      "<system type=\"current\" size=\"%zu\"/>\n"
      "<system type=\"max\" size=\"%zu\"/>\n",
      v45,
      v42,
      v44,
      v43,
      v46,
      v63);
    if ( v74 == (char *)&main_arena )
    {
      _fprintf_chk(
        a1,
        2,
        "<aspace type=\"total\" size=\"%zu\"/>\n<aspace type=\"mprotect\" size=\"%zu\"/>\n",
        *((_QWORD *)v74 + 273),
        *((_QWORD *)v74 + 273));
      v61 = *((_QWORD *)v74 + 273);
      v70 += v61;
      v71 += v61;
    }
    else
    {
      _fprintf_chk(
        a1,
        2,
        "<aspace type=\"total\" size=\"%zu\"/>\n"
        "<aspace type=\"mprotect\" size=\"%zu\"/>\n"
        "<aspace type=\"subheaps\" size=\"%zu\"/>\n",
        v27,
        v78,
        v25);
      v70 += v27;
      v71 += v78;
    }
    fputs("</heap>\n", a1);
    v2 = (char *)*((_QWORD *)v74 + 270);
    if ( v2 == (char *)&main_arena )
      break;
    v3 = v72;
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
    v64,
    v67,
    v65,
    v66,
    dword_49060C,
    qword_490620,
    v68,
    v69,
    v70,
    v71);
  return 0;
}
