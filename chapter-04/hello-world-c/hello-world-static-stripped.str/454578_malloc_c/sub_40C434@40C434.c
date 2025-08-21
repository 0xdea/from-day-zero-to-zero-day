__int64 __fastcall sub_40C434(
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
        __int64 a12)
{
  char *v12; // x21
  __int16 *v13; // x2
  __int64 v17; // x2
  unsigned __int64 v18; // x23
  __int64 v19; // x0
  unsigned __int64 v20; // x1
  __int64 v22; // x0
  unsigned __int64 v23; // x26
  atomic_uint *v24; // x24
  unsigned __int64 v25; // x1
  int v26; // w6
  unsigned __int64 v27; // x1
  bool v28; // cc
  unsigned __int64 v29; // x1
  unsigned __int64 v30; // x22
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x3
  void *v34; // x4
  void *v35; // x5
  void *v36; // x6
  long double v37; // q0
  double v38; // d1
  double v39; // d2
  double v40; // d3
  double v41; // d4
  double v42; // d5
  double v43; // d6
  double v44; // d7
  __int64 v45; // x25
  __int64 v46; // x1
  __int16 *v47; // x2
  __int64 v48; // x3
  long double v49; // q0
  long double v50; // q1
  long double v51; // q2
  long double v52; // q3
  long double v53; // q4
  long double v54; // q5
  long double v55; // q6
  long double v56; // q7
  __int64 v57; // x1
  atomic_uint *v58; // x0
  unsigned __int64 v59; // x1
  unsigned __int64 v60; // x1
  unsigned __int64 v61; // x1
  __int64 v62; // x1
  unsigned __int64 v63; // x2
  __int64 v64; // x0
  __int64 v65; // x1
  atomic_uint *v66; // x0
  unsigned __int64 v67; // x24
  unsigned __int64 v68; // x27
  __int64 v69; // x1
  __int16 *v70; // x2
  __int64 v71; // x3
  __int64 v72; // x28
  long double v73; // q0
  long double v74; // q1
  long double v75; // q2
  long double v76; // q3
  long double v77; // q4
  long double v78; // q5
  long double v79; // q6
  long double v80; // q7
  __int64 v81; // x4
  unsigned __int64 v82; // x27
  __int64 v83; // x22
  __int64 v84; // x25
  __int64 v92; // x0
  unsigned __int64 v93; // x1
  __int64 v94; // x0
  __int64 v95; // x0
  __int64 v96; // x0
  double v97; // d0
  double v98; // d1
  double v99; // d2
  double v100; // d3
  double v101; // d4
  double v102; // d5
  double v103; // d6
  double v104; // d7
  __int64 v105; // x0
  __int64 v106; // x1
  unsigned __int64 v107; // x20
  __int64 v120; // x2
  long double v124; // q0
  long double v125; // q1
  long double v126; // q2
  long double v127; // q3
  long double v128; // q4
  long double v129; // q5
  long double v130; // q6
  long double v131; // q7
  __int64 v132; // [xsp+90h] [xbp+60h]

  v12 = (char *)&unk_496000;
  v13 = (__int16 *)&byte_496688;
  if ( (byte_496690 & 1) == 0 )
    sub_407FA0(a3, a4, a5, a6, a7, a8, a9, a10);
  if ( a2 )
    _ZF = 1;
  else
    _ZF = a1 == 0;
  if ( !_ZF )
  {
    v84 = 0;
    sub_40C1A0(a1);
    return v84;
  }
  if ( !a1 )
    return sub_40B890(a2, a3, a4, a5, a6, a7, a8, a9, a10, a2, v13, a12);
  v17 = a1 - 16;
  v18 = a1 - 16;
  if ( (byte_4966A1 & 1) != 0 )
  {
    _X0 = a1 - 16;
    __asm { LDG             X0, [X0] }
    v18 = _X0;
    _X0 = a1 - 16;
    __asm { LDG             X0, [X0] }
    v17 = _X0;
  }
  v19 = *(_QWORD *)(v17 + 8);
  v20 = v19 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (v19 & 2) != 0 )
    goto LABEL_39;
  if ( (*(_QWORD *)(v17 + v20 + 8) & 1) != 0 )
  {
    v63 = v20 - 16;
    v59 = v20 - 8;
    if ( (byte_4966A1 & 1) != 0 )
      v59 = v63;
    goto LABEL_40;
  }
  if ( !a2 )
    return a1;
LABEL_16:
  v22 = *(_QWORD *)(v18 + 8);
  v23 = v22 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (v22 & 2) != 0 )
    goto LABEL_17;
  while ( 1 )
  {
    v61 = _ReadStatusReg(TPIDR_EL0) + 48;
    if ( *(_QWORD *)(v61 + 8) || (*(_BYTE *)(v61 + 0x10) & 1) != 0 )
    {
      if ( (v22 & 4) == 0 )
        goto LABEL_52;
    }
    else
    {
      sub_40AF50(v22);
      v22 = *(_QWORD *)(v18 + 8);
      if ( (v22 & 4) == 0 )
      {
LABEL_52:
        v24 = (atomic_uint *)&unk_490670;
        goto LABEL_18;
      }
    }
    v62 = -4 * qword_490600;
    if ( !qword_490600 )
      v62 = -67108864;
    v24 = *(atomic_uint **)(v18 & v62);
LABEL_18:
    if ( v18 > -(__int64)v23 || (v18 & 0xF) != 0 )
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
      v84 = 0;
      *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40) = 12;
      return v84;
    }
    v25 = a2;
    v26 = v12[1697] & 1;
    if ( (v12[1697] & 1) != 0 )
      v25 = (a2 + 15) & 0xFFFFFFFFFFFFFFF0LL;
    v27 = v25 + 23;
    v28 = v27 > 0x1F;
    v29 = v27 & 0xFFFFFFFFFFFFFFF0LL;
    v30 = v28 ? v29 : 32LL;
    if ( (v22 & 2) != 0 )
      break;
    if ( byte_490F08 )
    {
      v64 = sub_40B070(
              v24,
              v18,
              v23,
              v30,
              a3,
              *(double *)&a4,
              *(double *)&a5,
              *(double *)&a6,
              *(double *)&a7,
              *(double *)&a8,
              *(double *)&a9,
              *(double *)&a10);
      v45 = v64;
      if ( !v64 )
        return 0;
      v65 = v64 - 16;
      if ( (v12[1697] & 1) != 0 )
      {
        _X0 = v64 - 16;
        __asm { LDG             X0, [X0] }
        if ( (*(_QWORD *)(_X0 + 8) & 2) == 0 )
        {
          _X0 = v65;
          __asm { LDG             X0, [X0] }
          v65 = _X0;
          goto LABEL_58;
        }
      }
      else if ( (*(_QWORD *)(v64 - 8) & 2) == 0 )
      {
LABEL_58:
        if ( (*(_QWORD *)(v65 + 8) & 4) != 0 )
        {
          v95 = -4 * qword_490600;
          if ( !qword_490600 )
            v95 = -67108864;
          v66 = *(atomic_uint **)(v65 & v95);
        }
        else
        {
          v66 = (atomic_uint *)&unk_490670;
        }
        if ( v24 != v66 )
          sub_41F250(
            "!newp || chunk_is_mmapped (mem2chunk (newp)) || ar_ptr == arena_for_chunk (mem2chunk (newp))",
            "malloc.c",
            3509,
            "__libc_realloc");
      }
      return v45;
    }
    if ( _aarch64_cas4_acq(0, 1u, v24) )
      sub_406F40(v24, v31, v32, v33, v34, v35, v36);
    v45 = sub_40B070(v24, v18, v23, v30, v37, v38, v39, v40, v41, v42, v43, v44);
    if ( (int)_aarch64_swp4_rel(0, v24) > 1 )
      sub_407040(v24);
    if ( !v45 )
    {
      v105 = sub_40B890(a2, v49, v50, v51, v52, v53, v54, v55, v56, v46, v47, v48);
      v84 = v105;
      if ( v105 )
      {
        v106 = *(_QWORD *)(v18 + 8);
        v107 = (v106 & 0xFFFFFFFFFFFFFFF8LL) - 16;
        if ( (v12[1697] & 1) != 0 )
        {
          j_ifunc_40DC90(v105, a1, (v106 & 0xFFFFFFFFFFFFFFF8LL) - 16);
          sub_411CC0(v18 + 16, v107);
        }
        else
        {
          j_ifunc_40DC90(v105, a1, v107 + 8 * (((v106 ^ 2uLL) >> 1) & 1));
        }
        sub_4094D4(v24, v18, 0);
        return v84;
      }
      return 0;
    }
    v12 += 1672;
    v57 = v45 - 16;
    if ( (v12[25] & 1) != 0 )
    {
      _X0 = v45 - 16;
      __asm { LDG             X0, [X0] }
      if ( (*(_QWORD *)(_X0 + 8) & 2) != 0 )
        return v45;
      _X0 = v45 - 16;
      __asm { LDG             X0, [X0] }
      v57 = _X0;
    }
    else if ( (*(_QWORD *)(v45 - 8) & 2) != 0 )
    {
      return v45;
    }
    if ( (*(_QWORD *)(v57 + 8) & 4) != 0 )
    {
      v92 = -4 * qword_490600;
      if ( !qword_490600 )
        v92 = -67108864;
      v58 = *(atomic_uint **)(v57 & v92);
    }
    else
    {
      v58 = (atomic_uint *)&unk_490670;
    }
    if ( v24 == v58 )
      return v45;
    a3 = sub_41F250(
           "!newp || chunk_is_mmapped (mem2chunk (newp)) || ar_ptr == arena_for_chunk (mem2chunk (newp))",
           "malloc.c",
           3520,
           "__libc_realloc");
LABEL_39:
    v59 = v20 - 16;
LABEL_40:
    if ( a2 > v59 )
      goto LABEL_16;
    v60 = v59 - a2;
    if ( v60 <= 0xF )
      return a1;
    v22 = *(_QWORD *)(v18 + 8);
    if ( (v22 & 2) != 0 )
    {
      v23 = v22 & 0xFFFFFFFFFFFFFFF8LL;
      if ( qword_490F10 >= v60 )
        return a1;
LABEL_17:
      v24 = 0;
      goto LABEL_18;
    }
    v23 = v22 & 0xFFFFFFFFFFFFFFF8LL;
  }
  v84 = v18 + 16;
  v67 = (v22 & 0xFFFFFFFFFFFFFFF8LL) + *(_QWORD *)v18;
  if ( ((v18 - *(_QWORD *)v18) | v67) & (qword_490F10 - 1)
     | (((v18 + 16) & (qword_490F10 - 1)) - 1) & (v18 + 16) & (qword_490F10 - 1) )
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
  v68 = (qword_490F10 + 7 + v30 + *(_QWORD *)v18) & -qword_490F10;
  v132 = *(_QWORD *)v18;
  if ( v67 != v68 )
  {
    v72 = sub_411980(a3, a4, a5, a6, a7, a8, a9, a10);
    if ( v72 != -1 )
    {
      v81 = v132;
      if ( qword_4905F8 - 1 < v68 )
      {
        v93 = v68;
        v94 = v72;
        if ( ((qword_490F10 - 1) & v72) != 0 )
        {
          v93 = v68 + ((qword_490F10 - 1) & v72);
          v94 = -qword_490F10 & v72;
        }
        sub_4117C0(v94, v93, 14);
        v81 = v132;
      }
      v84 = v72 + v81 + 16;
      if ( ((v72 + v81) & 0xF) != 0 )
      {
        v73 = sub_41F250("aligned_OK (chunk2mem (p))", "malloc.c", 3087, "mremap_chunk");
      }
      else if ( v81 == *(_QWORD *)(v72 + v81) )
      {
        *(_QWORD *)(v72 + v81 + 8) = (v68 - v81) | 2;
        v82 = _dl___aarch64_ldadd8_relax(v68 - v67, (atomic_ullong *)&qword_490620) + v68 - v67;
        do
          v83 = qword_490628;
        while ( v82 > qword_490628 && _aarch64_cas8_acq(qword_490628, v82, (atomic_ullong *)&qword_490628) != v83 );
        v26 = v12[1697] & 1;
        goto LABEL_73;
      }
      v124 = sub_41F250("prev_size (p) == offset", "malloc.c", 3089, "mremap_chunk", *(double *)&v73);
      if ( (byte_496690 & 1) == 0 )
        sub_407FA0(v124, v125, v126, v127, v128, v129, v130, v131);
      JUMPOUT(0x40BCB0);
    }
    if ( v23 - 8 >= v30 )
      return a1;
    v96 = sub_40B890(a2, v73, v74, v75, v76, v77, v78, v79, v80, v69, v70, v71);
    v84 = v96;
    if ( v96 )
    {
      j_ifunc_40DC90(v96, a1, v23 - 16);
      sub_407620((_QWORD *)v18, v97, v98, v99, v100, v101, v102, v103, v104);
    }
    return v84;
  }
LABEL_73:
  if ( !v26 )
    return v84;
  _X0 = v84;
  __asm { LDG             X0, [X0] }
  v84 = _X0;
  if ( (v12[1697] & 1) == 0 )
    return v84;
  if ( !_X0 )
    return 0;
  _X0 = _X0 - 16;
  __asm { LDG             X0, [X0] }
  v120 = _X0;
  _X0 = v84;
  __asm
  {
    GMI             X1, X0, XZR
    IRG             X0, X0, X1
  }
  return sub_411CC0(_X0, (*(_QWORD *)(v120 + 8) & 0xFFFFFFFFFFFFFFF8LL) - 16);
}
