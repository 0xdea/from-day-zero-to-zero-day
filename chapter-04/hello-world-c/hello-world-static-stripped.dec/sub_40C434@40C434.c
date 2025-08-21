__int64 __fastcall sub_40C434(
        unsigned __int64 a1,
        unsigned __int64 a2,
        double a3,
        double a4,
        double a5,
        double a6,
        double a7,
        double a8,
        double a9,
        double a10,
        __int64 a11,
        __int64 a12,
        void *a13,
        void *a14,
        void *a15)
{
  char *v15; // x21
  char *v16; // x2
  unsigned __int64 v20; // x2
  unsigned __int64 v21; // x23
  __int64 v22; // x0
  unsigned __int64 v23; // x1
  __int64 v25; // x0
  unsigned __int64 v26; // x26
  int *v27; // x24
  unsigned __int64 v28; // x1
  int v29; // w6
  unsigned __int64 v30; // x1
  bool v31; // cc
  unsigned __int64 v32; // x1
  unsigned __int64 v33; // x22
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x3
  void *v37; // x4
  void *v38; // x5
  void *v39; // x6
  double v40; // d0
  double v41; // d1
  double v42; // d2
  double v43; // d3
  double v44; // d4
  double v45; // d5
  double v46; // d6
  double v47; // d7
  __int64 v48; // x25
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x3
  void *v52; // x4
  void *v53; // x5
  void *v54; // x6
  double v55; // d0
  double v56; // d1
  double v57; // d2
  double v58; // d3
  double v59; // d4
  double v60; // d5
  double v61; // d6
  double v62; // d7
  __int64 v63; // x1
  int *v64; // x0
  unsigned __int64 v65; // x1
  unsigned __int64 v66; // x1
  unsigned __int64 v67; // x1
  __int64 v68; // x1
  unsigned __int64 v69; // x2
  __int64 v70; // x0
  __int64 v71; // x1
  int *v72; // x0
  unsigned __int64 v73; // x24
  unsigned __int64 v74; // x0
  unsigned __int64 v75; // x27
  __int64 v76; // x1
  __int64 v77; // x2
  __int64 v78; // x3
  void *v79; // x4
  void *v80; // x5
  void *v81; // x6
  __int64 v82; // x28
  double v83; // d0
  double v84; // d1
  double v85; // d2
  double v86; // d3
  double v87; // d4
  double v88; // d5
  double v89; // d6
  double v90; // d7
  __int64 v91; // x4
  unsigned __int64 v92; // x27
  __int64 v93; // x22
  __int64 v94; // x25
  __int64 v102; // x0
  unsigned __int64 v103; // x1
  __int64 v104; // x0
  __int64 v105; // x0
  __int64 v106; // x0
  double v107; // d0
  double v108; // d1
  double v109; // d2
  double v110; // d3
  double v111; // d4
  double v112; // d5
  double v113; // d6
  double v114; // d7
  __int64 v115; // x0
  __int64 v116; // x1
  unsigned __int64 v117; // x20
  double v118; // d0
  double v119; // d1
  double v120; // d2
  double v121; // d3
  double v122; // d4
  double v123; // d5
  double v124; // d6
  double v125; // d7
  __int64 v138; // x2
  __int64 v142; // x1
  __int64 v143; // x3
  void *v144; // x4
  void *v145; // x5
  void *v146; // x6
  __int64 v147; // [xsp+90h] [xbp+60h]

  v15 = (char *)&unk_496000;
  v16 = &byte_496688;
  if ( (byte_496690 & 1) == 0 )
    sub_407FA0((unsigned __int8)byte_496690, a2, (__int64)&byte_496688, a12, a13, a14, a15);
  if ( a2 )
    _ZF = 1;
  else
    _ZF = a1 == 0;
  if ( !_ZF )
  {
    v94 = 0;
    sub_40C1A0(a1, a3, a4, a5, a6, a7, a8, a9, a10);
    return v94;
  }
  if ( !a1 )
    return sub_40B890(a2, a3, a4, a5, a6, a7, a8, a9, a10, a2, (__int64)v16, a12, a13, a14, a15);
  v20 = a1 - 16;
  v21 = a1 - 16;
  if ( (byte_4966A1 & 1) != 0 )
  {
    _X0 = a1 - 16;
    __asm { LDG             X0, [X0] }
    v21 = _X0;
    _X0 = a1 - 16;
    __asm { LDG             X0, [X0] }
    v20 = _X0;
  }
  v22 = *(_QWORD *)(v20 + 8);
  v23 = v22 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (v22 & 2) != 0 )
    goto LABEL_39;
  if ( (*(_QWORD *)(v20 + v23 + 8) & 1) != 0 )
  {
    v69 = v23 - 16;
    v65 = v23 - 8;
    if ( (byte_4966A1 & 1) != 0 )
      v65 = v69;
    goto LABEL_40;
  }
  if ( !a2 )
    return a1;
LABEL_16:
  v25 = *(_QWORD *)(v21 + 8);
  v26 = v25 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (v25 & 2) != 0 )
    goto LABEL_17;
  while ( 1 )
  {
    v67 = _ReadStatusReg(TPIDR_EL0) + 48;
    if ( *(_QWORD *)(v67 + 8) || (*(_BYTE *)(v67 + 0x10) & 1) != 0 )
    {
      if ( (v25 & 4) == 0 )
        goto LABEL_52;
    }
    else
    {
      sub_40AF50();
      v25 = *(_QWORD *)(v21 + 8);
      if ( (v25 & 4) == 0 )
      {
LABEL_52:
        v27 = &dword_490670;
        goto LABEL_18;
      }
    }
    v68 = -4 * qword_490600;
    if ( !qword_490600 )
      v68 = -67108864;
    v27 = *(int **)(v21 & v68);
LABEL_18:
    if ( v21 > -(__int64)v26 || (v21 & 0xF) != 0 )
      sub_407374((__int64)"realloc(): invalid pointer", a3, a4, a5, a6, a7, a8, a9, a10);
    if ( (a2 & 0x8000000000000000LL) != 0 )
    {
      v94 = 0;
      *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40) = 12;
      return v94;
    }
    v28 = a2;
    v29 = v15[1697] & 1;
    if ( (v15[1697] & 1) != 0 )
      v28 = (a2 + 15) & 0xFFFFFFFFFFFFFFF0LL;
    v30 = v28 + 23;
    v31 = v30 > 0x1F;
    v32 = v30 & 0xFFFFFFFFFFFFFFF0LL;
    v33 = v31 ? v32 : 32LL;
    if ( (v25 & 2) != 0 )
      break;
    if ( byte_490F08 )
    {
      v70 = sub_40B070(v27, v21, v26, v33, a3, a4, a5, a6, a7, a8, a9, a10);
      v48 = v70;
      if ( !v70 )
        return 0;
      v71 = v70 - 16;
      if ( (v15[1697] & 1) != 0 )
      {
        _X0 = v70 - 16;
        __asm { LDG             X0, [X0] }
        if ( (*(_QWORD *)(_X0 + 8) & 2) == 0 )
        {
          _X0 = v71;
          __asm { LDG             X0, [X0] }
          v71 = _X0;
          goto LABEL_58;
        }
      }
      else if ( (*(_QWORD *)(v70 - 8) & 2) == 0 )
      {
LABEL_58:
        if ( (*(_QWORD *)(v71 + 8) & 4) != 0 )
        {
          v105 = -4 * qword_490600;
          if ( !qword_490600 )
            v105 = -67108864;
          v72 = *(int **)(v71 & v105);
        }
        else
        {
          v72 = &dword_490670;
        }
        if ( v27 != v72 )
          sub_41F250(
            "!newp || chunk_is_mmapped (mem2chunk (newp)) || ar_ptr == arena_for_chunk (mem2chunk (newp))",
            "malloc.c",
            3509,
            "__libc_realloc");
      }
      return v48;
    }
    if ( _aarch64_cas4_acq(0, 1u, (atomic_uint *)v27) )
      sub_406F40(v27, v40, v41, v42, v43, v44, v45, v46, v47, v34, v35, v36, v37, v38, v39);
    v48 = sub_40B070(v27, v21, v26, v33, v40, v41, v42, v43, v44, v45, v46, v47);
    if ( (int)_aarch64_swp4_rel(0, (atomic_uint *)v27) > 1 )
      sub_407040(v27, v49, v50, v51, v52, v53, v54);
    if ( !v48 )
    {
      v115 = sub_40B890(a2, v55, v56, v57, v58, v59, v60, v61, v62, v49, v50, v51, v52, v53, v54);
      v94 = v115;
      if ( v115 )
      {
        v116 = *(_QWORD *)(v21 + 8);
        v117 = (v116 & 0xFFFFFFFFFFFFFFF8LL) - 16;
        if ( (v15[1697] & 1) != 0 )
        {
          j_ifunc_40DC90(v115, a1, (v116 & 0xFFFFFFFFFFFFFFF8LL) - 16);
          sub_411CC0(v21 + 16, v117);
        }
        else
        {
          j_ifunc_40DC90(v115, a1, v117 + 8 * (((v116 ^ 2uLL) >> 1) & 1));
        }
        sub_4094D4((__int64)v27, v21, 0, v118, v119, v120, v121, v122, v123, v124, v125);
        return v94;
      }
      return 0;
    }
    v15 += 1672;
    v63 = v48 - 16;
    if ( (v15[25] & 1) != 0 )
    {
      _X0 = v48 - 16;
      __asm { LDG             X0, [X0] }
      if ( (*(_QWORD *)(_X0 + 8) & 2) != 0 )
        return v48;
      _X0 = v48 - 16;
      __asm { LDG             X0, [X0] }
      v63 = _X0;
    }
    else if ( (*(_QWORD *)(v48 - 8) & 2) != 0 )
    {
      return v48;
    }
    if ( (*(_QWORD *)(v63 + 8) & 4) != 0 )
    {
      v102 = -4 * qword_490600;
      if ( !qword_490600 )
        v102 = -67108864;
      v64 = *(int **)(v63 & v102);
    }
    else
    {
      v64 = &dword_490670;
    }
    if ( v27 == v64 )
      return v48;
    sub_41F250(
      "!newp || chunk_is_mmapped (mem2chunk (newp)) || ar_ptr == arena_for_chunk (mem2chunk (newp))",
      "malloc.c",
      3520,
      "__libc_realloc");
LABEL_39:
    v65 = v23 - 16;
LABEL_40:
    if ( a2 > v65 )
      goto LABEL_16;
    v66 = v65 - a2;
    if ( v66 <= 0xF )
      return a1;
    v25 = *(_QWORD *)(v21 + 8);
    if ( (v25 & 2) != 0 )
    {
      v26 = v25 & 0xFFFFFFFFFFFFFFF8LL;
      if ( qword_490F10 >= v66 )
        return a1;
LABEL_17:
      v27 = 0;
      goto LABEL_18;
    }
    v26 = v25 & 0xFFFFFFFFFFFFFFF8LL;
  }
  v94 = v21 + 16;
  v73 = (v25 & 0xFFFFFFFFFFFFFFF8LL) + *(_QWORD *)v21;
  v74 = v21 - *(_QWORD *)v21;
  if ( (v74 | v73) & (qword_490F10 - 1) | (((v21 + 16) & (qword_490F10 - 1)) - 1) & (v21 + 16) & (qword_490F10 - 1) )
    sub_407374((__int64)"mremap_chunk(): invalid pointer", a3, a4, a5, a6, a7, a8, a9, a10);
  v75 = (qword_490F10 + 7 + v33 + *(_QWORD *)v21) & -qword_490F10;
  v147 = *(_QWORD *)v21;
  if ( v73 != v75 )
  {
    v82 = sub_411980(v74);
    if ( v82 != -1 )
    {
      v91 = v147;
      if ( qword_4905F8 - 1 < v75 )
      {
        v103 = v75;
        v104 = v82;
        if ( ((qword_490F10 - 1) & v82) != 0 )
        {
          v103 = v75 + ((qword_490F10 - 1) & v82);
          v104 = -qword_490F10 & v82;
        }
        sub_4117C0(v104, v103, 14);
        v91 = v147;
      }
      v94 = v82 + v91 + 16;
      if ( ((v82 + v91) & 0xF) != 0 )
      {
        sub_41F250("aligned_OK (chunk2mem (p))", "malloc.c", 3087, "mremap_chunk");
      }
      else if ( v91 == *(_QWORD *)(v82 + v91) )
      {
        *(_QWORD *)(v82 + v91 + 8) = (v75 - v91) | 2;
        v92 = _dl___aarch64_ldadd8_relax(v75 - v73, (atomic_ullong *)&qword_490620) + v75 - v73;
        do
          v93 = qword_490628;
        while ( v92 > qword_490628 && _aarch64_cas8_acq(qword_490628, v92, (atomic_ullong *)&qword_490628) != v93 );
        v29 = v15[1697] & 1;
        goto LABEL_73;
      }
      sub_41F250("prev_size (p) == offset", "malloc.c", 3089, "mremap_chunk");
      if ( (byte_496690 & 1) == 0 )
        sub_407FA0((unsigned __int8)byte_496690, v142, (__int64)&unk_496000, v143, v144, v145, v146);
      JUMPOUT(0x40BCB0);
    }
    if ( v26 - 8 >= v33 )
      return a1;
    v106 = sub_40B890(a2, v83, v84, v85, v86, v87, v88, v89, v90, v76, v77, v78, v79, v80, v81);
    v94 = v106;
    if ( v106 )
    {
      j_ifunc_40DC90(v106, a1, v26 - 16);
      sub_407620((_QWORD *)v21, v107, v108, v109, v110, v111, v112, v113, v114);
    }
    return v94;
  }
LABEL_73:
  if ( !v29 )
    return v94;
  _X0 = v94;
  __asm { LDG             X0, [X0] }
  v94 = _X0;
  if ( (v15[1697] & 1) == 0 )
    return v94;
  if ( !_X0 )
    return 0;
  _X0 = _X0 - 16;
  __asm { LDG             X0, [X0] }
  v138 = _X0;
  _X0 = v94;
  __asm
  {
    GMI             X1, X0, XZR
    IRG             X0, X0, X1
  }
  return sub_411CC0(_X0, (*(_QWORD *)(v138 + 8) & 0xFFFFFFFFFFFFFFF8LL) - 16);
}
