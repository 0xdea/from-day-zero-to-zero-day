__int64 __fastcall sub_40B890(
        unsigned __int64 a1,
        long double a2,
        long double a3,
        long double a4,
        long double a5,
        long double a6,
        long double a7,
        long double a8,
        long double a9,
        __int64 a10,
        __int16 *a11,
        __int64 a12)
{
  unsigned __int64 v13; // x0
  unsigned __int64 StatusReg; // x20
  unsigned __int64 v15; // x0
  unsigned __int64 v16; // x23
  bool v17; // cc
  unsigned __int64 v18; // x19
  __int64 v19; // x0
  unsigned __int64 v20; // x19
  atomic_uint *v21; // x19
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  void *v25; // x4
  void *v26; // x5
  void *v27; // x6
  long double v28; // q0
  double v29; // d1
  double v30; // d2
  double v31; // d3
  double v32; // d4
  double v33; // d5
  double v34; // d6
  double v35; // d7
  unsigned __int64 v36; // x20
  unsigned __int64 v37; // x1
  unsigned __int64 v38; // x2
  __int64 v39; // x0
  atomic_uint *v40; // x0
  __int64 v42; // x0
  __int16 v43; // w1
  __int64 v44; // x19
  char v45; // w3
  __int64 v51; // x2
  unsigned __int64 v55; // x1
  __int64 v56; // x0
  __int64 v57; // x2
  __int64 v58; // x3
  long double v59; // q0
  double v60; // d1
  double v61; // d2
  double v62; // d3
  double v63; // d4
  double v64; // d5
  double v65; // d6
  double v66; // d7
  __int64 v68; // x2
  __int64 v69; // x3
  long double v70; // q0
  double v71; // d1
  double v72; // d2
  double v73; // d3
  double v74; // d4
  double v75; // d5
  double v76; // d6
  double v77; // d7
  __int64 v80; // x2
  __int64 v86; // x2

  if ( (byte_496690 & 1) != 0 )
  {
    if ( (a1 & 0x8000000000000000LL) == 0 )
      goto LABEL_3;
LABEL_26:
    *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40) = 12;
    return 0;
  }
  sub_407FA0(a2, a3, a4, a5, a6, a7, a8, a9);
  if ( (a1 & 0x8000000000000000LL) != 0 )
    goto LABEL_26;
LABEL_3:
  v13 = a1;
  if ( (byte_4966A1 & 1) != 0 )
    v13 = (a1 + 15) & 0xFFFFFFFFFFFFFFF0LL;
  StatusReg = _ReadStatusReg(TPIDR_EL0);
  v15 = v13 + 23;
  v16 = StatusReg + 48;
  v17 = v15 > 0x1F;
  v18 = (v15 & 0xFFFFFFFFFFFFFFF0LL) - 17;
  v19 = *(_QWORD *)(StatusReg + 48 + 8);
  v20 = v18 >> 4;
  if ( !v17 )
    v20 = 0;
  if ( v19 )
  {
    if ( v20 >= qword_490638 )
    {
LABEL_9:
      if ( !byte_490F08 )
      {
        v21 = *(atomic_uint **)(StatusReg + 48);
        if ( v21 )
        {
          if ( _aarch64_cas4_acq(0, 1u, *(atomic_uint **)(StatusReg + 48)) )
            sub_406F40(v21, v22, v23, v24, v25, v26, v27);
          v36 = sub_40A0A0(v21, a1, v23, v24, v28, v29, v30, v31, v32, v33, v34, v35);
          if ( v36 )
          {
LABEL_14:
            if ( (int)_aarch64_swp4_rel(0, v21) > 1 )
              sub_407040(v21);
LABEL_16:
            if ( (byte_4966A1 & 1) != 0 )
              goto LABEL_57;
            v37 = v36 - 16;
            v38 = v36 - 16;
            if ( v36 )
            {
LABEL_18:
              if ( (*(_QWORD *)(v37 + 8) & 2) == 0 )
              {
                while ( 1 )
                {
                  if ( (*(_QWORD *)(v38 + 8) & 4) != 0 )
                  {
                    v39 = -4 * qword_490600;
                    if ( !qword_490600 )
                      v39 = -67108864;
                    v40 = *(atomic_uint **)(v38 & v39);
                  }
                  else
                  {
                    v40 = (atomic_uint *)&unk_490670;
                  }
                  if ( v21 == v40 )
                    break;
                  sub_41F250(
                    "!victim || chunk_is_mmapped (mem2chunk (victim)) || ar_ptr == arena_for_chunk (mem2chunk (victim))",
                    "malloc.c",
                    3351,
                    "__libc_malloc");
LABEL_57:
                  if ( !v36 )
                    return 0;
                  _X0 = v36 - 16;
                  __asm { LDG             X0, [X0] }
                  v86 = _X0;
                  _X0 = v36;
                  __asm
                  {
                    GMI             X1, X0, XZR
                    IRG             X0, X0, X1
                  }
                  v36 = sub_411CC0(_X0, (*(_QWORD *)(v86 + 8) & 0xFFFFFFFFFFFFFFF8LL) - 16);
                  if ( !v36 )
                    return 0;
                  v38 = v36 - 16;
                  v37 = v36 - 16;
                  if ( (byte_4966A1 & 1) == 0 )
                    goto LABEL_18;
                  _X0 = v36 - 16;
                  __asm { LDG             X0, [X0] }
                  if ( (*(_QWORD *)(_X0 + 8) & 2) != 0 )
                    break;
                  _X0 = v36 - 16;
                  __asm { LDG             X0, [X0] }
                  v38 = _X0;
                }
              }
              return v36;
            }
            return 0;
          }
        }
        else
        {
          v21 = (atomic_uint *)sub_4084E0(a1, 0);
          v36 = sub_40A0A0(v21, a1, v57, v58, v59, v60, v61, v62, v63, v64, v65, v66);
          if ( v36 )
            _ZF = 1;
          else
            _ZF = v21 == 0;
          if ( _ZF )
          {
LABEL_50:
            if ( !v21 )
              goto LABEL_16;
            goto LABEL_14;
          }
        }
        v21 = (atomic_uint *)sub_408A34(v21, a1);
        v36 = sub_40A0A0(v21, a1, v68, v69, v70, v71, v72, v73, v74, v75, v76, v77);
        goto LABEL_50;
      }
      v36 = sub_40A0A0(
              &unk_490670,
              a1,
              (__int64)a11,
              a12,
              a2,
              *(double *)&a3,
              *(double *)&a4,
              *(double *)&a5,
              *(double *)&a6,
              *(double *)&a7,
              *(double *)&a8,
              *(double *)&a9);
      if ( (byte_4966A1 & 1) != 0 )
      {
        if ( !v36 )
          return 0;
        _X0 = v36 - 16;
        __asm { LDG             X0, [X0] }
        v80 = _X0;
        _X0 = v36;
        __asm
        {
          GMI             X1, X0, XZR
          IRG             X0, X0, X1
        }
        v36 = sub_411CC0(_X0, (*(_QWORD *)(v80 + 8) & 0xFFFFFFFFFFFFFFF8LL) - 16);
        if ( !v36 )
          return 0;
LABEL_37:
        v55 = v36 - 16;
        if ( (byte_4966A1 & 1) != 0 )
        {
          _X0 = v36 - 16;
          __asm { LDG             X0, [X0] }
          if ( (*(_QWORD *)(_X0 + 8) & 2) != 0 )
            return v36;
          _X0 = v36 - 16;
          __asm { LDG             X0, [X0] }
          v55 = _X0;
        }
        else if ( (*(_QWORD *)(v36 - 8) & 2) != 0 )
        {
          return v36;
        }
        if ( (*(_QWORD *)(v55 + 8) & 4) != 0 )
        {
          v56 = -4 * qword_490600;
          if ( !qword_490600 )
            v56 = -67108864;
          if ( *(_UNKNOWN **)(v55 & v56) != &unk_490670 )
          {
            sub_41F250(
              "!victim || chunk_is_mmapped (mem2chunk (victim)) || &main_arena == arena_for_chunk (mem2chunk (victim))",
              "malloc.c",
              3329,
              "__libc_malloc");
            return 0;
          }
        }
        return v36;
      }
      if ( v36 )
        goto LABEL_37;
      return 0;
    }
  }
  else
  {
    v42 = *(unsigned __int8 *)(v16 + 0x10);
    if ( (v42 & 1) != 0 )
      goto LABEL_9;
    sub_40AF50(v42);
    if ( qword_490638 <= v20 )
      goto LABEL_9;
    v19 = *(_QWORD *)(v16 + 8);
    if ( !v19 )
      goto LABEL_9;
  }
  a11 = (__int16 *)(v19 + 2 * v20);
  v43 = *a11;
  if ( !*a11 )
    goto LABEL_9;
  v44 = v19 + 8 * v20;
  v36 = *(_QWORD *)(v44 + 128);
  if ( (v36 & 0xF) != 0 )
    sub_407374(
      (__int64)"malloc(): unaligned tcache chunk detected",
      *(double *)&a2,
      *(double *)&a3,
      *(double *)&a4,
      *(double *)&a5,
      *(double *)&a6,
      *(double *)&a7,
      *(double *)&a8,
      *(double *)&a9);
  v45 = byte_4966A1;
  *(_QWORD *)(v44 + 128) = *(_QWORD *)v36 ^ (v36 >> 12);
  *a11 = v43 - 1;
  *(_QWORD *)(v36 + 8) = 0;
  if ( (v45 & 1) == 0 )
    return v36;
  _X0 = v36 - 16;
  __asm { LDG             X0, [X0] }
  v51 = _X0;
  _X0 = v36;
  __asm
  {
    GMI             X1, X0, XZR
    IRG             X0, X0, X1
  }
  return sub_411CC0(_X0, (*(_QWORD *)(v51 + 8) & 0xFFFFFFFFFFFFFFF8LL) - 16);
}
