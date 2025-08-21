char *__fastcall sub_40C434(
        __int64 a1,
        unsigned __int64 a2,
        long double a3,
        long double a4,
        long double a5,
        long double a6,
        long double a7,
        long double a8,
        long double a9,
        long double a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14)
{
  char *v14; // x21
  __int16 *v15; // x2
  __int64 v19; // x2
  unsigned __int64 v20; // x23
  __int64 v21; // x0
  unsigned __int64 v22; // x1
  __int64 v24; // x0
  unsigned __int64 v25; // x26
  atomic_uint *v26; // x24
  unsigned __int64 v27; // x1
  int v28; // w6
  unsigned __int64 v29; // x1
  bool v30; // cc
  unsigned __int64 v31; // x1
  unsigned __int64 v32; // x22
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x3
  void *v36; // x4
  void *v37; // x5
  void *v38; // x6
  long double v39; // q0
  double v40; // d1
  double v41; // d2
  double v42; // d3
  double v43; // d4
  double v44; // d5
  double v45; // d6
  double v46; // d7
  char *v47; // x25
  __int64 v48; // x1
  __int16 *v49; // x2
  __int64 v50; // x3
  __int64 v51; // x4
  __int64 v52; // x5
  long double v53; // q0
  long double v54; // q1
  long double v55; // q2
  long double v56; // q3
  long double v57; // q4
  long double v58; // q5
  long double v59; // q6
  long double v60; // q7
  char *v61; // x1
  atomic_uint *v62; // x0
  unsigned __int64 v63; // x1
  unsigned __int64 v64; // x1
  unsigned __int64 v65; // x1
  __int64 v66; // x1
  unsigned __int64 v67; // x2
  char *v68; // x0
  char *v69; // x1
  atomic_uint *v70; // x0
  unsigned __int64 v71; // x24
  unsigned __int64 v72; // x27
  __int64 v73; // x1
  __int16 *v74; // x2
  __int64 v75; // x3
  __int64 v76; // x4
  __int64 v77; // x5
  __int64 v78; // x28
  long double v79; // q0
  long double v80; // q1
  long double v81; // q2
  long double v82; // q3
  long double v83; // q4
  long double v84; // q5
  long double v85; // q6
  long double v86; // q7
  __int64 v87; // x4
  unsigned __int64 v88; // x27
  __int64 v89; // x22
  __int64 v90; // x25
  __int64 v98; // x0
  unsigned __int64 v99; // x1
  __int64 v100; // x0
  __int64 v101; // x0
  __int64 v102; // x0
  double v103; // d0
  double v104; // d1
  double v105; // d2
  double v106; // d3
  double v107; // d4
  double v108; // d5
  double v109; // d6
  double v110; // d7
  __int64 v111; // x0
  __int64 v112; // x1
  unsigned __int64 v113; // x20
  double v114; // d0
  double v115; // d1
  double v116; // d2
  double v117; // d3
  double v118; // d4
  double v119; // d5
  double v120; // d6
  double v121; // d7
  __int64 v134; // x2
  long double v138; // q0
  long double v139; // q1
  long double v140; // q2
  long double v141; // q3
  long double v142; // q4
  long double v143; // q5
  long double v144; // q6
  long double v145; // q7
  __int64 v146; // [xsp+90h] [xbp+60h]

  v14 = (char *)&unk_496000;
  v15 = (__int16 *)&byte_496688;
  if ( (byte_496690 & 1) == 0 )
    sub_407FA0(a3, a4, a5, a6, a7, a8, a9, a10);
  if ( a2 )
    _ZF = 1;
  else
    _ZF = a1 == 0;
  if ( !_ZF )
  {
    v90 = 0;
    sub_40C1A0(a1);
    return (char *)v90;
  }
  if ( !a1 )
    return (char *)sub_40B890(a2, a3, a4, a5, a6, a7, a8, a9, a10, a2, v15, a12, a13, a14);
  v19 = a1 - 16;
  v20 = a1 - 16;
  if ( (byte_4966A1 & 1) != 0 )
  {
    _X0 = a1 - 16;
    __asm { LDG             X0, [X0] }
    v20 = _X0;
    _X0 = a1 - 16;
    __asm { LDG             X0, [X0] }
    v19 = _X0;
  }
  v21 = *(_QWORD *)(v19 + 8);
  v22 = v21 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (v21 & 2) != 0 )
    goto LABEL_39;
  if ( (*(_QWORD *)(v19 + v22 + 8) & 1) != 0 )
  {
    v67 = v22 - 16;
    v63 = v22 - 8;
    if ( (byte_4966A1 & 1) != 0 )
      v63 = v67;
    goto LABEL_40;
  }
  if ( !a2 )
    return (char *)a1;
LABEL_16:
  v24 = *(_QWORD *)(v20 + 8);
  v25 = v24 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (v24 & 2) != 0 )
    goto LABEL_17;
  while ( 1 )
  {
    v65 = _ReadStatusReg(TPIDR_EL0) + 48;
    if ( *(_QWORD *)(v65 + 8) || (*(_BYTE *)(v65 + 0x10) & 1) != 0 )
    {
      if ( (v24 & 4) == 0 )
        goto LABEL_52;
    }
    else
    {
      sub_40AF50(v24);
      v24 = *(_QWORD *)(v20 + 8);
      if ( (v24 & 4) == 0 )
      {
LABEL_52:
        v26 = (atomic_uint *)&unk_490670;
        goto LABEL_18;
      }
    }
    v66 = -4 * qword_490600;
    if ( !qword_490600 )
      v66 = -67108864;
    v26 = *(atomic_uint **)(v20 & v66);
LABEL_18:
    if ( v20 > -(__int64)v25 || (v20 & 0xF) != 0 )
      sub_407374(
        (__int64)"realloc(): invalid pointer",
        *(double *)&a3,
        *(double *)&a4,
        *(double *)&a5,
        *(double *)&a6,
        *(double *)&a7,
        *(double *)&a8,
        *(double *)&a9,
        *(double *)&a10);
    if ( (a2 & 0x8000000000000000LL) != 0 )
    {
      v90 = 0;
      *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40) = 12;
      return (char *)v90;
    }
    v27 = a2;
    v28 = v14[1697] & 1;
    if ( (v14[1697] & 1) != 0 )
      v27 = (a2 + 15) & 0xFFFFFFFFFFFFFFF0LL;
    v29 = v27 + 23;
    v30 = v29 > 0x1F;
    v31 = v29 & 0xFFFFFFFFFFFFFFF0LL;
    v32 = v30 ? v31 : 32LL;
    if ( (v24 & 2) != 0 )
      break;
    if ( byte_490F08 )
    {
      v68 = sub_40B070(
              v26,
              v20,
              v25,
              v32,
              a3,
              *(double *)&a4,
              *(double *)&a5,
              *(double *)&a6,
              *(double *)&a7,
              *(double *)&a8,
              *(double *)&a9,
              *(double *)&a10);
      v47 = v68;
      if ( !v68 )
        return 0;
      v69 = v68 - 16;
      if ( (v14[1697] & 1) != 0 )
      {
        _X0 = v68 - 16;
        __asm { LDG             X0, [X0] }
        if ( (*(_QWORD *)(_X0 + 8) & 2) == 0 )
        {
          _X0 = v69;
          __asm { LDG             X0, [X0] }
          v69 = _X0;
          goto LABEL_58;
        }
      }
      else if ( (*((_QWORD *)v68 - 1) & 2) == 0 )
      {
LABEL_58:
        if ( (*((_QWORD *)v69 + 1) & 4) != 0 )
        {
          v101 = -4 * qword_490600;
          if ( !qword_490600 )
            v101 = -67108864;
          v70 = *(atomic_uint **)((unsigned __int64)v69 & v101);
        }
        else
        {
          v70 = (atomic_uint *)&unk_490670;
        }
        if ( v26 != v70 )
          sub_41F250(
            "!newp || chunk_is_mmapped (mem2chunk (newp)) || ar_ptr == arena_for_chunk (mem2chunk (newp))",
            "malloc.c",
            3509,
            "__libc_realloc");
      }
      return v47;
    }
    if ( _aarch64_cas4_acq(0, 1u, v26) )
      sub_406F40(v26, v33, v34, v35, v36, v37, v38);
    v47 = sub_40B070(v26, v20, v25, v32, v39, v40, v41, v42, v43, v44, v45, v46);
    if ( (int)_aarch64_swp4_rel(0, v26) > 1 )
      sub_407040(v26);
    if ( !v47 )
    {
      v111 = sub_40B890(a2, v53, v54, v55, v56, v57, v58, v59, v60, v48, v49, v50, v51, v52);
      v90 = v111;
      if ( v111 )
      {
        v112 = *(_QWORD *)(v20 + 8);
        v113 = (v112 & 0xFFFFFFFFFFFFFFF8LL) - 16;
        if ( (v14[1697] & 1) != 0 )
        {
          j_ifunc_40DC90(v111, a1, (v112 & 0xFFFFFFFFFFFFFFF8LL) - 16);
          sub_411CC0(v20 + 16, v113);
        }
        else
        {
          j_ifunc_40DC90(v111, a1, v113 + 8 * (((v112 ^ 2uLL) >> 1) & 1));
        }
        sub_4094D4((__int64)v26, v20, 0, v114, v115, v116, v117, v118, v119, v120, v121);
        return (char *)v90;
      }
      return 0;
    }
    v14 += 1672;
    v61 = v47 - 16;
    if ( (v14[25] & 1) != 0 )
    {
      _X0 = v47 - 16;
      __asm { LDG             X0, [X0] }
      if ( (*(_QWORD *)(_X0 + 8) & 2) != 0 )
        return v47;
      _X0 = v47 - 16;
      __asm { LDG             X0, [X0] }
      v61 = _X0;
    }
    else if ( (*((_QWORD *)v47 - 1) & 2) != 0 )
    {
      return v47;
    }
    if ( (*((_QWORD *)v61 + 1) & 4) != 0 )
    {
      v98 = -4 * qword_490600;
      if ( !qword_490600 )
        v98 = -67108864;
      v62 = *(atomic_uint **)((unsigned __int64)v61 & v98);
    }
    else
    {
      v62 = (atomic_uint *)&unk_490670;
    }
    if ( v26 == v62 )
      return v47;
    a3 = sub_41F250(
           "!newp || chunk_is_mmapped (mem2chunk (newp)) || ar_ptr == arena_for_chunk (mem2chunk (newp))",
           "malloc.c",
           3520,
           "__libc_realloc");
LABEL_39:
    v63 = v22 - 16;
LABEL_40:
    if ( a2 > v63 )
      goto LABEL_16;
    v64 = v63 - a2;
    if ( v64 <= 0xF )
      return (char *)a1;
    v24 = *(_QWORD *)(v20 + 8);
    if ( (v24 & 2) != 0 )
    {
      v25 = v24 & 0xFFFFFFFFFFFFFFF8LL;
      if ( qword_490F10 >= v64 )
        return (char *)a1;
LABEL_17:
      v26 = 0;
      goto LABEL_18;
    }
    v25 = v24 & 0xFFFFFFFFFFFFFFF8LL;
  }
  v90 = v20 + 16;
  v71 = (v24 & 0xFFFFFFFFFFFFFFF8LL) + *(_QWORD *)v20;
  if ( ((v20 - *(_QWORD *)v20) | v71) & (qword_490F10 - 1)
     | (((v20 + 16) & (qword_490F10 - 1)) - 1) & (v20 + 16) & (qword_490F10 - 1) )
  {
    sub_407374(
      (__int64)"mremap_chunk(): invalid pointer",
      *(double *)&a3,
      *(double *)&a4,
      *(double *)&a5,
      *(double *)&a6,
      *(double *)&a7,
      *(double *)&a8,
      *(double *)&a9,
      *(double *)&a10);
  }
  v72 = (qword_490F10 + 7 + v32 + *(_QWORD *)v20) & -qword_490F10;
  v146 = *(_QWORD *)v20;
  if ( v71 != v72 )
  {
    v78 = sub_411980(a3, a4, a5, a6, a7, a8, a9, a10);
    if ( v78 != -1 )
    {
      v87 = v146;
      if ( qword_4905F8 - 1 < v72 )
      {
        v99 = v72;
        v100 = v78;
        if ( ((qword_490F10 - 1) & v78) != 0 )
        {
          v99 = v72 + ((qword_490F10 - 1) & v78);
          v100 = -qword_490F10 & v78;
        }
        sub_4117C0(v100, v99, 14);
        v87 = v146;
      }
      v90 = v78 + v87 + 16;
      if ( ((v78 + v87) & 0xF) != 0 )
      {
        v79 = sub_41F250("aligned_OK (chunk2mem (p))", "malloc.c", 3087, "mremap_chunk");
      }
      else if ( v87 == *(_QWORD *)(v78 + v87) )
      {
        *(_QWORD *)(v78 + v87 + 8) = (v72 - v87) | 2;
        v88 = _dl___aarch64_ldadd8_relax(v72 - v71, (atomic_ullong *)&qword_490620) + v72 - v71;
        do
          v89 = qword_490628;
        while ( v88 > qword_490628 && _aarch64_cas8_acq(qword_490628, v88, (atomic_ullong *)&qword_490628) != v89 );
        v28 = v14[1697] & 1;
        goto LABEL_73;
      }
      v138 = sub_41F250("prev_size (p) == offset", "malloc.c", 3089, "mremap_chunk", *(double *)&v79);
      if ( (byte_496690 & 1) == 0 )
        sub_407FA0(v138, v139, v140, v141, v142, v143, v144, v145);
      JUMPOUT(0x40BCB0);
    }
    if ( v25 - 8 >= v32 )
      return (char *)a1;
    v102 = sub_40B890(a2, v79, v80, v81, v82, v83, v84, v85, v86, v73, v74, v75, v76, v77);
    v90 = v102;
    if ( v102 )
    {
      j_ifunc_40DC90(v102, a1, v25 - 16);
      sub_407620((_QWORD *)v20, v103, v104, v105, v106, v107, v108, v109, v110);
    }
    return (char *)v90;
  }
LABEL_73:
  if ( !v28 )
    return (char *)v90;
  _X0 = v90;
  __asm { LDG             X0, [X0] }
  v90 = _X0;
  if ( (v14[1697] & 1) == 0 )
    return (char *)v90;
  if ( !_X0 )
    return 0;
  _X0 = _X0 - 16;
  __asm { LDG             X0, [X0] }
  v134 = _X0;
  _X0 = v90;
  __asm
  {
    GMI             X1, X0, XZR
    IRG             X0, X0, X1
  }
  return (char *)sub_411CC0(_X0, (*(_QWORD *)(v134 + 8) & 0xFFFFFFFFFFFFFFF8LL) - 16);
}
