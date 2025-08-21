__int64 __fastcall sub_40CCB0(
        unsigned __int64 a1,
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
  __int64 v14; // x2
  unsigned __int64 v15; // x19
  _BOOL8 v16; // x0
  unsigned __int64 StatusReg; // x20
  int *v18; // x24
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  void *v22; // x4
  void *v23; // x5
  void *v24; // x6
  long double v25; // q0
  double v26; // d1
  double v27; // d2
  double v28; // d3
  double v29; // d4
  double v30; // d5
  double v31; // d6
  double v32; // d7
  __int64 v33; // x26
  unsigned __int64 v34; // x25
  __int64 v35; // x1
  unsigned __int64 v36; // x1
  __int64 v37; // x0
  long double v38; // q0
  __int64 v39; // x20
  __int64 v40; // x23
  __int64 v42; // x2
  unsigned __int64 v43; // x2
  __int64 result; // x0
  __int64 v45; // x25
  atomic_uint *v46; // x22
  __int64 v47; // x2
  __int64 v48; // x3
  __int64 v49; // x4
  __int64 v50; // x5
  long double v51; // q0
  double v52; // d1
  double v53; // d2
  double v54; // d3
  double v55; // d4
  double v56; // d5
  double v57; // d6
  double v58; // d7
  unsigned __int64 v59; // x2
  __int64 v61; // x1
  __int64 v67; // x2
  unsigned __int64 v70; // x1
  __int64 v71; // x0
  int *v72; // x0
  long double v76; // q0
  long double v77; // q1
  long double v78; // q2
  long double v79; // q3
  long double v80; // q4
  long double v81; // q5
  long double v82; // q6
  long double v83; // q7
  __int64 v84; // x0
  atomic_uint *v85; // x20
  unsigned int v86; // w21
  __int64 v87; // x1
  __int64 v88; // x2
  __int64 v89; // x3
  void *v90; // x4
  void *v91; // x5
  void *v92; // x6
  long double v93; // q0
  unsigned __int64 v94; // x28
  signed int v95; // w19
  unsigned __int64 v96; // x24
  unsigned __int64 v97; // x26
  char *v98; // x27
  int v99; // w5
  int i; // w22
  bool v101; // cc
  __int64 v103; // x25
  unsigned __int64 v104; // x1
  unsigned __int64 v105; // x0
  unsigned __int64 v106; // x1
  unsigned __int64 v107; // x19
  unsigned __int64 v108; // x2
  unsigned __int64 v109; // x1
  unsigned __int64 v110; // x1
  __int64 v111; // [xsp+68h] [xbp-18h]

  v14 = (a1 * (unsigned __int128)a2) >> 64;
  v15 = a1 * a2;
  v16 = !is_mul_ok(a1, a2);
  if ( (v15 & 0x8000000000000000LL) != 0 || v16 )
  {
    *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40) = 12;
    return 0;
  }
  if ( (byte_496690 & 1) == 0 )
    sub_407FA0(a3, a4, a5, a6, a7, a8, a9, a10);
  StatusReg = _ReadStatusReg(TPIDR_EL0);
  if ( !*(_QWORD *)(StatusReg + 48 + 8) )
  {
    v71 = *(unsigned __int8 *)(StatusReg + 48 + 0x10);
    if ( (v71 & 1) == 0 )
      sub_40AF50(v71);
  }
  if ( !byte_490F08 )
  {
    v18 = *(int **)(StatusReg + 48);
    if ( v18 )
    {
      if ( _aarch64_cas4_acq(0, 1u, *(atomic_uint **)(StatusReg + 48)) )
        sub_406F40(v18, v19, v20, v21, v22, v23, v24);
    }
    else
    {
      v34 = 0;
      v72 = sub_4084E0((int *)v15, 0);
      v33 = (__int64)v72;
      if ( !v72 )
        goto LABEL_15;
      v18 = v72;
    }
    v33 = *((_QWORD *)v18 + 12);
    v34 = *(_QWORD *)(v33 + 8) & 0xFFFFFFFFFFFFFFF8LL;
    if ( v18 != (int *)&unk_490670 )
    {
      v35 = -4 * qword_490600;
      if ( !qword_490600 )
        v35 = -67108864;
      v36 = (v33 & v35) + *(_QWORD *)((v33 & v35) + 0x18) - v33;
      if ( v34 < v36 )
        v34 = v36;
    }
LABEL_15:
    v37 = sub_40A0A0(v18, v15, v20, v21, v25, v26, v27, v28, v29, v30, v31, v32, (__int64)v22, (__int64)v23);
    v39 = v37;
    if ( v37 )
      goto LABEL_16;
    goto LABEL_28;
  }
  v18 = (int *)&unk_490670;
  v33 = qword_4906D0;
  v45 = *(_QWORD *)(qword_4906D0 + 8);
  v37 = sub_40A0A0(
          &unk_490670,
          v15,
          v14,
          a12,
          a3,
          *(double *)&a4,
          *(double *)&a5,
          *(double *)&a6,
          *(double *)&a7,
          *(double *)&a8,
          *(double *)&a9,
          *(double *)&a10,
          a13,
          a14);
  v39 = v37;
  v34 = v45 & 0xFFFFFFFFFFFFFFF8LL;
  if ( !v37 )
  {
LABEL_28:
    if ( !byte_490F08 && v18 )
    {
      v46 = (atomic_uint *)sub_408A34(v18, v15);
      v39 = sub_40A0A0(v46, v15, v47, v48, v51, v52, v53, v54, v55, v56, v57, v58, v49, v50);
      if ( v46 && (int)_aarch64_swp4_rel(0, v46) > 1 )
        sub_407040(v46);
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
  v40 = v37 - 16;
  if ( (byte_4966A1 & 1) != 0 )
  {
    _X0 = v37 - 16;
    __asm { LDG             X0, [X0] }
    if ( (*(_QWORD *)(_X0 + 8) & 2) != 0 )
      goto LABEL_54;
    _X0 = v40;
    __asm { LDG             X0, [X0] }
LABEL_19:
    if ( (*(_QWORD *)(_X0 + 8) & 4) == 0 )
    {
      if ( v18 == (int *)&unk_490670 )
      {
        if ( byte_490F08 || (int)_aarch64_swp4_rel(0, (atomic_uint *)v18) <= 1 )
          goto LABEL_23;
LABEL_37:
        sub_407040(v18);
        goto LABEL_23;
      }
LABEL_69:
      v38 = sub_41F250(
              "!mem || chunk_is_mmapped (mem2chunk (mem)) || av == arena_for_chunk (mem2chunk (mem))",
              "malloc.c",
              3756,
              "__libc_calloc");
LABEL_70:
      v76 = sub_41F250("nclears >= 3", "malloc.c", 3809, "__libc_calloc", *(double *)&v38);
      v111 = v84;
      if ( (byte_496690 & 1) == 0 )
        sub_407FA0(v76, v77, v78, v79, v80, v81, v82, v83);
      v85 = (atomic_uint *)&unk_490670;
      v86 = 0;
      while ( 1 )
      {
        if ( _aarch64_cas4_acq(0, 1u, v85) )
          sub_406F40(v85, v87, v88, v89, v90, v91, v92);
        sub_407D40((__int64)v85);
        v94 = qword_490F10;
        v95 = (unsigned int)qword_490F10 >> 4;
        if ( (unsigned __int64)qword_490F10 > 0x3FF )
        {
          v95 = ((unsigned __int64)qword_490F10 >> 6) + 48;
          if ( (unsigned __int64)qword_490F10 > 0xC3F )
          {
            if ( (unsigned __int64)qword_490F10 >> 9 <= 0x14 )
            {
              v95 = ((unsigned __int64)qword_490F10 >> 9) + 91;
            }
            else
            {
              if ( (unsigned __int64)qword_490F10 >> 12 > 0xA )
                goto LABEL_108;
              v95 = ((unsigned __int64)qword_490F10 >> 12) + 110;
            }
          }
        }
LABEL_80:
        v96 = v94 - 1;
        v97 = v94 + 47;
        v98 = (char *)v85 + 96;
        v94 = -(__int64)v94;
        v99 = 0;
        for ( i = 1; i != 128; ++i )
        {
          v101 = i != 1 && i < v95;
          if ( v101 )
          {
            do
            {
              ++i;
              v98 += 16;
            }
            while ( i != 1 && i < v95 );
          }
          v103 = *((_QWORD *)v98 + 3);
          if ( v98 != (char *)v103 )
          {
            while ( 1 )
            {
              v104 = *(_QWORD *)(v103 + 8) & 0xFFFFFFFFFFFFFFF8LL;
              if ( v97 >= v104 )
                goto LABEL_92;
              v105 = (v103 + v97) & v94;
              if ( v105 < v103 + 48 )
                goto LABEL_107;
              if ( v105 >= v103 + v104 )
              {
                v93 = sub_41F250("(char *) p + size > paligned_mem", "malloc.c", 5177, "mtrim");
LABEL_107:
                v93 = sub_41F250(
                        "(char *) chunk2mem (p) + 2 * CHUNK_HDR_SZ <= paligned_mem",
                        "malloc.c",
                        5175,
                        "mtrim",
                        *(double *)&v93);
LABEL_108:
                if ( v94 >> 15 > 4 )
                {
                  v107 = v94 >> 18;
                  if ( v94 >> 18 > 2 )
                    LODWORD(v107) = 2;
                  v95 = v107 + 124;
                }
                else
                {
                  v95 = (v94 >> 15) + 119;
                }
                goto LABEL_80;
              }
              v106 = v104 - (v105 - v103);
              if ( v96 >= v106 )
              {
LABEL_92:
                v103 = *(_QWORD *)(v103 + 24);
                if ( v98 == (char *)v103 )
                  break;
              }
              else
              {
                sub_4117C0(v105, v94 & v106, 4);
                v103 = *(_QWORD *)(v103 + 24);
                v99 = 1;
                if ( v98 == (char *)v103 )
                  break;
              }
            }
          }
          v98 += 16;
        }
        if ( v85 == (atomic_uint *)&unk_490670 )
        {
          v86 |= v99 | sub_408DD4(v111);
          if ( (int)_aarch64_swp4_rel(0, v85) > 1 )
LABEL_105:
            sub_407040(v85);
        }
        else
        {
          v86 |= v99;
          if ( (int)_aarch64_swp4_rel(0, v85) > 1 )
            goto LABEL_105;
        }
        v85 = (atomic_uint *)*((_QWORD *)v85 + 270);
        if ( v85 == (atomic_uint *)&unk_490670 )
          return v86;
      }
    }
    v61 = -4 * qword_490600;
    if ( !qword_490600 )
      v61 = -67108864;
    if ( v18 != *(int **)(_X0 & v61) )
      goto LABEL_69;
LABEL_54:
    if ( !byte_490F08 && v18 )
      goto LABEL_36;
    goto LABEL_23;
  }
  if ( (*(_QWORD *)(v37 - 8) & 2) == 0 )
  {
    _X0 = v37 - 16;
    goto LABEL_19;
  }
  if ( byte_490F08 )
    goto LABEL_24;
  if ( v18 )
  {
LABEL_36:
    if ( (int)_aarch64_swp4_rel(0, (atomic_uint *)v18) <= 1 )
      goto LABEL_23;
    goto LABEL_37;
  }
LABEL_23:
  if ( (byte_4966A1 & 1) == 0 )
  {
LABEL_24:
    v42 = *(_QWORD *)(v40 + 8);
    if ( (v42 & 2) != 0 )
    {
      v43 = v15;
      if ( !dword_49668C )
        return v39;
      return ifunc_40DE70(v39, 0, v43);
    }
    v59 = v42 & 0xFFFFFFFFFFFFFFF8LL;
    if ( !dword_49668C && v33 == v40 && v34 < v59 )
      v59 = v34;
    v43 = v59 - 8;
    if ( v43 > 0x17 )
    {
      if ( v43 <= 0x4F )
      {
        *(_QWORD *)(v39 + 16) = 0;
        *(_OWORD *)v39 = 0u;
        if ( v43 > 0x27 )
        {
          *(_OWORD *)(v39 + 24) = 0u;
          if ( v43 > 0x37 )
          {
            *(_OWORD *)(v39 + 40) = 0u;
            if ( v43 > 0x47 )
              *(_OWORD *)(v39 + 56) = 0u;
          }
        }
        return v39;
      }
      return ifunc_40DE70(v39, 0, v43);
    }
    goto LABEL_70;
  }
LABEL_58:
  _X0 = v40;
  __asm { LDG             X0, [X0] }
  v67 = _X0;
  _X0 = v39;
  __asm
  {
    GMI             X1, X0, XZR
    IRG             X0, X0, X1
  }
  v70 = (*(_QWORD *)(v67 + 8) & 0xFFFFFFFFFFFFFFF8LL) - 16;
  if ( v70 > 0x60 )
  {
    if ( v70 >= 0xA0 && (_ReadStatusReg(DCZID_EL0) & 0x1F) == 4 )
    {
      __asm
      {
        STZ2G           X0, [X0]
        STZ2G           X0, [X0,#0x20]
      }
      v108 = result & 0xFFFFFFFFFFFFFFC0LL;
      v109 = result + v70 - (result & 0xFFFFFFFFFFFFFFC0LL) - 128;
      do
      {
        v108 += 64LL;
        __asm { DC              GZVA, X2 }
        v101 = v109 > 0x40;
        v109 -= 64LL;
      }
      while ( v101 );
      __asm
      {
        STZ2G           X0, [X3,#-0x40]
        STZ2G           X0, [X3,#-0x20]
      }
    }
    else
    {
      v110 = v70 - 64;
      do
      {
        __asm
        {
          STZ2G           X0, [X2,#0x20]
          STZ2G           X0, [X2,#0x40]!
        }
        v101 = v110 > 0x40;
        v110 -= 64LL;
      }
      while ( v101 );
      __asm
      {
        STZ2G           X0, [X3,#-0x40]
        STZ2G           X0, [X3,#-0x20]
      }
    }
  }
  else if ( (v70 & 0x40) != 0 )
  {
    __asm
    {
      STZ2G           X0, [X0]
      STZ2G           X0, [X0,#0x20]
      STZ2G           X0, [X3,#-0x20]
    }
  }
  else if ( (*(_QWORD *)(v67 + 8) & 0xFFFFFFFFFFFFFFF8LL) != 0x10 )
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
