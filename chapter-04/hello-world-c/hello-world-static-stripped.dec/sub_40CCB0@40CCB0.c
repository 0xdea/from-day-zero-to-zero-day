__int64 __fastcall sub_40CCB0(
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
  __int64 v15; // x2
  unsigned __int64 v16; // x19
  _BOOL8 v17; // x0
  unsigned __int64 StatusReg; // x20
  int *v19; // x24
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  void *v23; // x4
  void *v24; // x5
  void *v25; // x6
  double v26; // d0
  double v27; // d1
  double v28; // d2
  double v29; // d3
  double v30; // d4
  double v31; // d5
  double v32; // d6
  double v33; // d7
  __int64 v34; // x26
  unsigned __int64 v35; // x25
  __int64 v36; // x1
  unsigned __int64 v37; // x1
  __int64 v38; // x0
  __int64 v39; // x20
  __int64 v40; // x23
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x3
  void *v45; // x4
  void *v46; // x5
  void *v47; // x6
  __int64 v48; // x2
  unsigned __int64 v49; // x2
  __int64 result; // x0
  __int64 v51; // x25
  int *v52; // x22
  double v53; // d0
  double v54; // d1
  double v55; // d2
  double v56; // d3
  double v57; // d4
  double v58; // d5
  double v59; // d6
  double v60; // d7
  unsigned __int64 v61; // x2
  __int64 v63; // x1
  __int64 v69; // x2
  unsigned __int64 v72; // x1
  __int64 v73; // x1
  __int64 v74; // x2
  __int64 v75; // x3
  void *v76; // x4
  void *v77; // x5
  void *v78; // x6
  int *v79; // x0
  __int64 v83; // x2
  __int64 v84; // x3
  void *v85; // x4
  void *v86; // x5
  void *v87; // x6
  int *v88; // x20
  unsigned int v89; // w21
  __int64 v90; // x1
  __int64 v91; // x2
  __int64 v92; // x3
  void *v93; // x4
  void *v94; // x5
  void *v95; // x6
  double v96; // d0
  double v97; // d1
  double v98; // d2
  double v99; // d3
  double v100; // d4
  double v101; // d5
  double v102; // d6
  double v103; // d7
  unsigned __int64 v104; // x28
  signed int v105; // w19
  unsigned __int64 v106; // x24
  unsigned __int64 v107; // x26
  int *v108; // x27
  int v109; // w5
  int i; // w22
  bool v111; // cc
  __int64 v113; // x25
  unsigned __int64 v114; // x1
  unsigned __int64 v115; // x0
  unsigned __int64 v116; // x1
  __int64 v117; // x1
  __int64 v118; // x2
  __int64 v119; // x3
  void *v120; // x4
  void *v121; // x5
  void *v122; // x6
  unsigned __int64 v123; // x19
  unsigned __int64 v124; // x2
  unsigned __int64 v125; // x1
  unsigned __int64 v126; // x1
  unsigned __int64 v127; // [xsp+68h] [xbp-18h]

  v15 = (a1 * (unsigned __int128)a2) >> 64;
  v16 = a1 * a2;
  v17 = !is_mul_ok(a1, a2);
  if ( (v16 & 0x8000000000000000LL) != 0 || v17 )
  {
    *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40) = 12;
    return 0;
  }
  if ( (byte_496690 & 1) == 0 )
    sub_407FA0((unsigned __int8)byte_496690, a2, v15, a12, a13, a14, a15);
  StatusReg = _ReadStatusReg(TPIDR_EL0);
  if ( !*(_QWORD *)(StatusReg + 48 + 8) && (*(_BYTE *)(StatusReg + 48 + 0x10) & 1) == 0 )
    sub_40AF50();
  if ( !byte_490F08 )
  {
    v19 = *(int **)(StatusReg + 48);
    if ( v19 )
    {
      if ( _aarch64_cas4_acq(0, 1u, *(atomic_uint **)(StatusReg + 48)) )
        sub_406F40(v19, v26, v27, v28, v29, v30, v31, v32, v33, v20, v21, v22, v23, v24, v25);
    }
    else
    {
      v35 = 0;
      v79 = sub_4084E0((int *)v16, 0);
      v34 = (__int64)v79;
      if ( !v79 )
        goto LABEL_15;
      v19 = v79;
    }
    v34 = *((_QWORD *)v19 + 12);
    v35 = *(_QWORD *)(v34 + 8) & 0xFFFFFFFFFFFFFFF8LL;
    if ( v19 != &dword_490670 )
    {
      v36 = -4 * qword_490600;
      if ( !qword_490600 )
        v36 = -67108864;
      v37 = (v34 & v36) + *(_QWORD *)((v34 & v36) + 0x18) - v34;
      if ( v35 < v37 )
        v35 = v37;
    }
LABEL_15:
    v38 = sub_40A0A0(v19, v16, v26, v27, v28, v29, v30, v31, v32, v33);
    v39 = v38;
    if ( v38 )
      goto LABEL_16;
    goto LABEL_28;
  }
  v19 = &dword_490670;
  v34 = qword_4906D0;
  v51 = *(_QWORD *)(qword_4906D0 + 8);
  v38 = sub_40A0A0(&dword_490670, v16, a3, a4, a5, a6, a7, a8, a9, a10);
  v39 = v38;
  v35 = v51 & 0xFFFFFFFFFFFFFFF8LL;
  if ( !v38 )
  {
LABEL_28:
    if ( !byte_490F08 && v19 )
    {
      v52 = sub_408A34(v19, (int *)v16);
      v39 = sub_40A0A0(v52, v16, v53, v54, v55, v56, v57, v58, v59, v60);
      if ( v52 && (int)_aarch64_swp4_rel(0, (atomic_uint *)v52) > 1 )
        sub_407040(v52, v73, v74, v75, v76, v77, v78);
      if ( v39 )
      {
        v40 = v39 - 16;
        if ( (byte_4966A1 & 1) == 0 )
          goto LABEL_24;
        goto LABEL_58;
      }
    }
    return 0;
  }
LABEL_16:
  v40 = v38 - 16;
  if ( (byte_4966A1 & 1) != 0 )
  {
    _X0 = v38 - 16;
    __asm { LDG             X0, [X0] }
    if ( (*(_QWORD *)(_X0 + 8) & 2) != 0 )
      goto LABEL_54;
    _X0 = v40;
    __asm { LDG             X0, [X0] }
LABEL_19:
    if ( (*(_QWORD *)(_X0 + 8) & 4) == 0 )
    {
      if ( v19 == &dword_490670 )
      {
        if ( byte_490F08 || (int)_aarch64_swp4_rel(0, (atomic_uint *)v19) <= 1 )
          goto LABEL_23;
LABEL_37:
        sub_407040(v19, v42, v43, v44, v45, v46, v47);
        goto LABEL_23;
      }
LABEL_69:
      sub_41F250(
        "!mem || chunk_is_mmapped (mem2chunk (mem)) || av == arena_for_chunk (mem2chunk (mem))",
        "malloc.c",
        3756,
        "__libc_calloc");
LABEL_70:
      v127 = sub_41F250("nclears >= 3", "malloc.c", 3809, "__libc_calloc");
      if ( (byte_496690 & 1) == 0 )
        sub_407FA0((unsigned __int8)byte_496690, (__int64)&unk_496000, v83, v84, v85, v86, v87);
      v88 = &dword_490670;
      v89 = 0;
      while ( 1 )
      {
        if ( _aarch64_cas4_acq(0, 1u, (atomic_uint *)v88) )
          sub_406F40(v88, v96, v97, v98, v99, v100, v101, v102, v103, v90, v91, v92, v93, v94, v95);
        sub_407D40((__int64)v88);
        v104 = qword_490F10;
        v105 = (unsigned int)qword_490F10 >> 4;
        if ( (unsigned __int64)qword_490F10 > 0x3FF )
        {
          v105 = ((unsigned __int64)qword_490F10 >> 6) + 48;
          if ( (unsigned __int64)qword_490F10 > 0xC3F )
          {
            if ( (unsigned __int64)qword_490F10 >> 9 <= 0x14 )
            {
              v105 = ((unsigned __int64)qword_490F10 >> 9) + 91;
            }
            else
            {
              if ( (unsigned __int64)qword_490F10 >> 12 > 0xA )
                goto LABEL_108;
              v105 = ((unsigned __int64)qword_490F10 >> 12) + 110;
            }
          }
        }
LABEL_80:
        v106 = v104 - 1;
        v107 = v104 + 47;
        v108 = v88 + 24;
        v104 = -(__int64)v104;
        v109 = 0;
        for ( i = 1; i != 128; ++i )
        {
          v111 = i != 1 && i < v105;
          if ( v111 )
          {
            do
            {
              ++i;
              v108 += 4;
            }
            while ( i != 1 && i < v105 );
          }
          v113 = *((_QWORD *)v108 + 3);
          if ( v108 != (int *)v113 )
          {
            while ( 1 )
            {
              v114 = *(_QWORD *)(v113 + 8) & 0xFFFFFFFFFFFFFFF8LL;
              if ( v107 >= v114 )
                goto LABEL_92;
              v115 = (v113 + v107) & v104;
              if ( v115 < v113 + 48 )
                goto LABEL_107;
              if ( v115 >= v113 + v114 )
              {
                sub_41F250("(char *) p + size > paligned_mem", "malloc.c", 5177, "mtrim");
LABEL_107:
                sub_41F250("(char *) chunk2mem (p) + 2 * CHUNK_HDR_SZ <= paligned_mem", "malloc.c", 5175, "mtrim");
LABEL_108:
                if ( v104 >> 15 > 4 )
                {
                  v123 = v104 >> 18;
                  if ( v104 >> 18 > 2 )
                    LODWORD(v123) = 2;
                  v105 = v123 + 124;
                }
                else
                {
                  v105 = (v104 >> 15) + 119;
                }
                goto LABEL_80;
              }
              v116 = v114 - (v115 - v113);
              if ( v106 >= v116 )
              {
LABEL_92:
                v113 = *(_QWORD *)(v113 + 24);
                if ( v108 == (int *)v113 )
                  break;
              }
              else
              {
                sub_4117C0(v115, v104 & v116, 4);
                v113 = *(_QWORD *)(v113 + 24);
                v109 = 1;
                if ( v108 == (int *)v113 )
                  break;
              }
            }
          }
          v108 += 4;
        }
        if ( v88 == &dword_490670 )
        {
          v89 |= v109 | sub_408DD4(v127);
          if ( (int)_aarch64_swp4_rel(0, (atomic_uint *)v88) > 1 )
LABEL_105:
            sub_407040(v88, v117, v118, v119, v120, v121, v122);
        }
        else
        {
          v89 |= v109;
          if ( (int)_aarch64_swp4_rel(0, (atomic_uint *)v88) > 1 )
            goto LABEL_105;
        }
        v88 = (int *)*((_QWORD *)v88 + 270);
        if ( v88 == &dword_490670 )
          return v89;
      }
    }
    v63 = -4 * qword_490600;
    if ( !qword_490600 )
      v63 = -67108864;
    if ( v19 != *(int **)(_X0 & v63) )
      goto LABEL_69;
LABEL_54:
    if ( !byte_490F08 && v19 )
      goto LABEL_36;
    goto LABEL_23;
  }
  if ( (*(_QWORD *)(v38 - 8) & 2) == 0 )
  {
    _X0 = v38 - 16;
    goto LABEL_19;
  }
  if ( byte_490F08 )
    goto LABEL_24;
  if ( v19 )
  {
LABEL_36:
    if ( (int)_aarch64_swp4_rel(0, (atomic_uint *)v19) <= 1 )
      goto LABEL_23;
    goto LABEL_37;
  }
LABEL_23:
  if ( (byte_4966A1 & 1) == 0 )
  {
LABEL_24:
    v48 = *(_QWORD *)(v40 + 8);
    if ( (v48 & 2) != 0 )
    {
      v49 = v16;
      if ( !dword_49668C )
        return v39;
      return ifunc_40DE70(v39, 0, v49);
    }
    v61 = v48 & 0xFFFFFFFFFFFFFFF8LL;
    if ( !dword_49668C && v34 == v40 && v35 < v61 )
      v61 = v35;
    v49 = v61 - 8;
    if ( v49 > 0x17 )
    {
      if ( v49 <= 0x4F )
      {
        *(_QWORD *)(v39 + 16) = 0;
        *(_OWORD *)v39 = 0u;
        if ( v49 > 0x27 )
        {
          *(_OWORD *)(v39 + 24) = 0u;
          if ( v49 > 0x37 )
          {
            *(_OWORD *)(v39 + 40) = 0u;
            if ( v49 > 0x47 )
              *(_OWORD *)(v39 + 56) = 0u;
          }
        }
        return v39;
      }
      return ifunc_40DE70(v39, 0, v49);
    }
    goto LABEL_70;
  }
LABEL_58:
  _X0 = v40;
  __asm { LDG             X0, [X0] }
  v69 = _X0;
  _X0 = v39;
  __asm
  {
    GMI             X1, X0, XZR
    IRG             X0, X0, X1
  }
  v72 = (*(_QWORD *)(v69 + 8) & 0xFFFFFFFFFFFFFFF8LL) - 16;
  if ( v72 > 0x60 )
  {
    if ( v72 >= 0xA0 && (_ReadStatusReg(DCZID_EL0) & 0x1F) == 4 )
    {
      __asm
      {
        STZ2G           X0, [X0]
        STZ2G           X0, [X0,#0x20]
      }
      v124 = result & 0xFFFFFFFFFFFFFFC0LL;
      v125 = result + v72 - (result & 0xFFFFFFFFFFFFFFC0LL) - 128;
      do
      {
        v124 += 64LL;
        __asm { DC              GZVA, X2 }
        v111 = v125 > 0x40;
        v125 -= 64LL;
      }
      while ( v111 );
      __asm
      {
        STZ2G           X0, [X3,#-0x40]
        STZ2G           X0, [X3,#-0x20]
      }
    }
    else
    {
      v126 = v72 - 64;
      do
      {
        __asm
        {
          STZ2G           X0, [X2,#0x20]
          STZ2G           X0, [X2,#0x40]!
        }
        v111 = v126 > 0x40;
        v126 -= 64LL;
      }
      while ( v111 );
      __asm
      {
        STZ2G           X0, [X3,#-0x40]
        STZ2G           X0, [X3,#-0x20]
      }
    }
  }
  else if ( (v72 & 0x40) != 0 )
  {
    __asm
    {
      STZ2G           X0, [X0]
      STZ2G           X0, [X0,#0x20]
      STZ2G           X0, [X3,#-0x20]
    }
  }
  else if ( (*(_QWORD *)(v69 + 8) & 0xFFFFFFFFFFFFFFF8LL) != 0x10 )
  {
    __asm
    {
      STZG            X0, [X0]
      STZG            X0, [X4]
      STZG            X0, [X3,#-0x10]
    }
  }
  return result;
}
