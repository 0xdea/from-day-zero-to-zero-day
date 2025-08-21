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
        __int64 a12)
{
  __int64 v12; // x2
  unsigned __int64 v13; // x19
  _BOOL8 v14; // x0
  unsigned __int64 StatusReg; // x20
  atomic_uint *v16; // x24
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  void *v20; // x4
  void *v21; // x5
  void *v22; // x6
  long double v23; // q0
  double v24; // d1
  double v25; // d2
  double v26; // d3
  double v27; // d4
  double v28; // d5
  double v29; // d6
  double v30; // d7
  __int64 v31; // x26
  unsigned __int64 v32; // x25
  __int64 v33; // x1
  unsigned __int64 v34; // x1
  __int64 v35; // x0
  long double v36; // q0
  __int64 v37; // x20
  __int64 v38; // x23
  __int64 v40; // x2
  unsigned __int64 v41; // x2
  __int64 result; // x0
  __int64 v43; // x25
  atomic_uint *v44; // x22
  __int64 v45; // x2
  __int64 v46; // x3
  long double v47; // q0
  double v48; // d1
  double v49; // d2
  double v50; // d3
  double v51; // d4
  double v52; // d5
  double v53; // d6
  double v54; // d7
  unsigned __int64 v55; // x2
  __int64 v57; // x1
  __int64 v63; // x2
  unsigned __int64 v66; // x1
  __int64 v67; // x0
  __int64 v68; // x0
  long double v72; // q0
  long double v73; // q1
  long double v74; // q2
  long double v75; // q3
  long double v76; // q4
  long double v77; // q5
  long double v78; // q6
  long double v79; // q7
  __int64 v80; // x0
  atomic_uint *v81; // x20
  unsigned int v82; // w21
  __int64 v83; // x1
  __int64 v84; // x2
  __int64 v85; // x3
  void *v86; // x4
  void *v87; // x5
  void *v88; // x6
  long double v89; // q0
  unsigned __int64 v90; // x28
  signed int v91; // w19
  unsigned __int64 v92; // x24
  unsigned __int64 v93; // x26
  char *v94; // x27
  int v95; // w5
  int i; // w22
  bool v97; // cc
  __int64 v99; // x25
  unsigned __int64 v100; // x1
  unsigned __int64 v101; // x0
  unsigned __int64 v102; // x1
  unsigned __int64 v103; // x19
  unsigned __int64 v104; // x2
  unsigned __int64 v105; // x1
  unsigned __int64 v106; // x1
  __int64 v107; // [xsp+68h] [xbp-18h]

  v12 = (a1 * (unsigned __int128)a2) >> 64;
  v13 = a1 * a2;
  v14 = !is_mul_ok(a1, a2);
  if ( (v13 & 0x8000000000000000LL) != 0 || v14 )
  {
    *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40) = 12;
    return 0;
  }
  if ( (byte_496690 & 1) == 0 )
    sub_407FA0(a3, a4, a5, a6, a7, a8, a9, a10);
  StatusReg = _ReadStatusReg(TPIDR_EL0);
  if ( !*(_QWORD *)(StatusReg + 48 + 8) )
  {
    v67 = *(unsigned __int8 *)(StatusReg + 48 + 0x10);
    if ( (v67 & 1) == 0 )
      sub_40AF50(v67);
  }
  if ( !byte_490F08 )
  {
    v16 = *(atomic_uint **)(StatusReg + 48);
    if ( v16 )
    {
      if ( _aarch64_cas4_acq(0, 1u, *(atomic_uint **)(StatusReg + 48)) )
        sub_406F40(v16, v17, v18, v19, v20, v21, v22);
    }
    else
    {
      v32 = 0;
      v68 = sub_4084E0(v13, 0);
      v31 = v68;
      if ( !v68 )
        goto LABEL_15;
      v16 = (atomic_uint *)v68;
    }
    v31 = *((_QWORD *)v16 + 12);
    v32 = *(_QWORD *)(v31 + 8) & 0xFFFFFFFFFFFFFFF8LL;
    if ( v16 != (atomic_uint *)&unk_490670 )
    {
      v33 = -4 * qword_490600;
      if ( !qword_490600 )
        v33 = -67108864;
      v34 = (v31 & v33) + *(_QWORD *)((v31 & v33) + 0x18) - v31;
      if ( v32 < v34 )
        v32 = v34;
    }
LABEL_15:
    v35 = sub_40A0A0(v16, v13, v18, v19, v23, v24, v25, v26, v27, v28, v29, v30);
    v37 = v35;
    if ( v35 )
      goto LABEL_16;
    goto LABEL_28;
  }
  v16 = (atomic_uint *)&unk_490670;
  v31 = qword_4906D0;
  v43 = *(_QWORD *)(qword_4906D0 + 8);
  v35 = sub_40A0A0(
          &unk_490670,
          v13,
          v12,
          a12,
          a3,
          *(double *)&a4,
          *(double *)&a5,
          *(double *)&a6,
          *(double *)&a7,
          *(double *)&a8,
          *(double *)&a9,
          *(double *)&a10);
  v37 = v35;
  v32 = v43 & 0xFFFFFFFFFFFFFFF8LL;
  if ( !v35 )
  {
LABEL_28:
    if ( !byte_490F08 && v16 )
    {
      v44 = (atomic_uint *)sub_408A34(v16, v13);
      v37 = sub_40A0A0(v44, v13, v45, v46, v47, v48, v49, v50, v51, v52, v53, v54);
      if ( v44 && (int)_aarch64_swp4_rel(0, v44) > 1 )
        sub_407040(v44);
      if ( v37 )
      {
        v38 = v37 - 16;
        if ( (byte_4966A1 & 1) == 0 )
          goto LABEL_24;
        goto LABEL_58;
      }
    }
    return 0;
  }
LABEL_16:
  v38 = v35 - 16;
  if ( (byte_4966A1 & 1) != 0 )
  {
    _X0 = v35 - 16;
    __asm { LDG             X0, [X0] }
    if ( (*(_QWORD *)(_X0 + 8) & 2) != 0 )
      goto LABEL_54;
    _X0 = v38;
    __asm { LDG             X0, [X0] }
LABEL_19:
    if ( (*(_QWORD *)(_X0 + 8) & 4) == 0 )
    {
      if ( v16 == (atomic_uint *)&unk_490670 )
      {
        if ( byte_490F08 || (int)_aarch64_swp4_rel(0, v16) <= 1 )
          goto LABEL_23;
LABEL_37:
        sub_407040(v16);
        goto LABEL_23;
      }
LABEL_69:
      v36 = sub_41F250(
              "!mem || chunk_is_mmapped (mem2chunk (mem)) || av == arena_for_chunk (mem2chunk (mem))",
              "malloc.c",
              3756,
              "__libc_calloc");
LABEL_70:
      v72 = sub_41F250("nclears >= 3", "malloc.c", 3809, "__libc_calloc", *(double *)&v36);
      v107 = v80;
      if ( (byte_496690 & 1) == 0 )
        sub_407FA0(v72, v73, v74, v75, v76, v77, v78, v79);
      v81 = (atomic_uint *)&unk_490670;
      v82 = 0;
      while ( 1 )
      {
        if ( _aarch64_cas4_acq(0, 1u, v81) )
          sub_406F40(v81, v83, v84, v85, v86, v87, v88);
        sub_407D40(v81, v83, v84, v85);
        v90 = qword_490F10;
        v91 = (unsigned int)qword_490F10 >> 4;
        if ( (unsigned __int64)qword_490F10 > 0x3FF )
        {
          v91 = ((unsigned __int64)qword_490F10 >> 6) + 48;
          if ( (unsigned __int64)qword_490F10 > 0xC3F )
          {
            if ( (unsigned __int64)qword_490F10 >> 9 <= 0x14 )
            {
              v91 = ((unsigned __int64)qword_490F10 >> 9) + 91;
            }
            else
            {
              if ( (unsigned __int64)qword_490F10 >> 12 > 0xA )
                goto LABEL_108;
              v91 = ((unsigned __int64)qword_490F10 >> 12) + 110;
            }
          }
        }
LABEL_80:
        v92 = v90 - 1;
        v93 = v90 + 47;
        v94 = (char *)v81 + 96;
        v90 = -(__int64)v90;
        v95 = 0;
        for ( i = 1; i != 128; ++i )
        {
          v97 = i != 1 && i < v91;
          if ( v97 )
          {
            do
            {
              ++i;
              v94 += 16;
            }
            while ( i != 1 && i < v91 );
          }
          v99 = *((_QWORD *)v94 + 3);
          if ( v94 != (char *)v99 )
          {
            while ( 1 )
            {
              v100 = *(_QWORD *)(v99 + 8) & 0xFFFFFFFFFFFFFFF8LL;
              if ( v93 >= v100 )
                goto LABEL_92;
              v101 = (v99 + v93) & v90;
              if ( v101 < v99 + 48 )
                goto LABEL_107;
              if ( v101 >= v99 + v100 )
              {
                v89 = sub_41F250("(char *) p + size > paligned_mem", "malloc.c", 5177, "mtrim");
LABEL_107:
                v89 = sub_41F250(
                        "(char *) chunk2mem (p) + 2 * CHUNK_HDR_SZ <= paligned_mem",
                        "malloc.c",
                        5175,
                        "mtrim",
                        *(double *)&v89);
LABEL_108:
                if ( v90 >> 15 > 4 )
                {
                  v103 = v90 >> 18;
                  if ( v90 >> 18 > 2 )
                    LODWORD(v103) = 2;
                  v91 = v103 + 124;
                }
                else
                {
                  v91 = (v90 >> 15) + 119;
                }
                goto LABEL_80;
              }
              v102 = v100 - (v101 - v99);
              if ( v92 >= v102 )
              {
LABEL_92:
                v99 = *(_QWORD *)(v99 + 24);
                if ( v94 == (char *)v99 )
                  break;
              }
              else
              {
                sub_4117C0(v101, v90 & v102, 4);
                v99 = *(_QWORD *)(v99 + 24);
                v95 = 1;
                if ( v94 == (char *)v99 )
                  break;
              }
            }
          }
          v94 += 16;
        }
        if ( v81 == (atomic_uint *)&unk_490670 )
        {
          v82 |= v95 | sub_408DD4(v107);
          if ( (int)_aarch64_swp4_rel(0, v81) > 1 )
LABEL_105:
            sub_407040(v81);
        }
        else
        {
          v82 |= v95;
          if ( (int)_aarch64_swp4_rel(0, v81) > 1 )
            goto LABEL_105;
        }
        v81 = (atomic_uint *)*((_QWORD *)v81 + 270);
        if ( v81 == (atomic_uint *)&unk_490670 )
          return v82;
      }
    }
    v57 = -4 * qword_490600;
    if ( !qword_490600 )
      v57 = -67108864;
    if ( v16 != *(atomic_uint **)(_X0 & v57) )
      goto LABEL_69;
LABEL_54:
    if ( !byte_490F08 && v16 )
      goto LABEL_36;
    goto LABEL_23;
  }
  if ( (*(_QWORD *)(v35 - 8) & 2) == 0 )
  {
    _X0 = v35 - 16;
    goto LABEL_19;
  }
  if ( byte_490F08 )
    goto LABEL_24;
  if ( v16 )
  {
LABEL_36:
    if ( (int)_aarch64_swp4_rel(0, v16) <= 1 )
      goto LABEL_23;
    goto LABEL_37;
  }
LABEL_23:
  if ( (byte_4966A1 & 1) == 0 )
  {
LABEL_24:
    v40 = *(_QWORD *)(v38 + 8);
    if ( (v40 & 2) != 0 )
    {
      v41 = v13;
      if ( !dword_49668C )
        return v37;
      return ifunc_40DE70(v37, 0, v41);
    }
    v55 = v40 & 0xFFFFFFFFFFFFFFF8LL;
    if ( !dword_49668C && v31 == v38 && v32 < v55 )
      v55 = v32;
    v41 = v55 - 8;
    if ( v41 > 0x17 )
    {
      if ( v41 <= 0x4F )
      {
        *(_QWORD *)(v37 + 16) = 0;
        *(_OWORD *)v37 = 0u;
        if ( v41 > 0x27 )
        {
          *(_OWORD *)(v37 + 24) = 0u;
          if ( v41 > 0x37 )
          {
            *(_OWORD *)(v37 + 40) = 0u;
            if ( v41 > 0x47 )
              *(_OWORD *)(v37 + 56) = 0u;
          }
        }
        return v37;
      }
      return ifunc_40DE70(v37, 0, v41);
    }
    goto LABEL_70;
  }
LABEL_58:
  _X0 = v38;
  __asm { LDG             X0, [X0] }
  v63 = _X0;
  _X0 = v37;
  __asm
  {
    GMI             X1, X0, XZR
    IRG             X0, X0, X1
  }
  v66 = (*(_QWORD *)(v63 + 8) & 0xFFFFFFFFFFFFFFF8LL) - 16;
  if ( v66 > 0x60 )
  {
    if ( v66 >= 0xA0 && (_ReadStatusReg(DCZID_EL0) & 0x1F) == 4 )
    {
      __asm
      {
        STZ2G           X0, [X0]
        STZ2G           X0, [X0,#0x20]
      }
      v104 = result & 0xFFFFFFFFFFFFFFC0LL;
      v105 = result + v66 - (result & 0xFFFFFFFFFFFFFFC0LL) - 128;
      do
      {
        v104 += 64LL;
        __asm { DC              GZVA, X2 }
        v97 = v105 > 0x40;
        v105 -= 64LL;
      }
      while ( v97 );
      __asm
      {
        STZ2G           X0, [X3,#-0x40]
        STZ2G           X0, [X3,#-0x20]
      }
    }
    else
    {
      v106 = v66 - 64;
      do
      {
        __asm
        {
          STZ2G           X0, [X2,#0x20]
          STZ2G           X0, [X2,#0x40]!
        }
        v97 = v106 > 0x40;
        v106 -= 64LL;
      }
      while ( v97 );
      __asm
      {
        STZ2G           X0, [X3,#-0x40]
        STZ2G           X0, [X3,#-0x20]
      }
    }
  }
  else if ( (v66 & 0x40) != 0 )
  {
    __asm
    {
      STZ2G           X0, [X0]
      STZ2G           X0, [X0,#0x20]
      STZ2G           X0, [X3,#-0x20]
    }
  }
  else if ( (*(_QWORD *)(v63 + 8) & 0xFFFFFFFFFFFFFFF8LL) != 0x10 )
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
