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
        __int64 a12,
        __int64 a13,
        __int64 a14)
{
  unsigned __int64 v15; // x0
  unsigned __int64 StatusReg; // x20
  unsigned __int64 v17; // x0
  unsigned __int64 v18; // x23
  bool v19; // cc
  unsigned __int64 v20; // x19
  __int64 v21; // x0
  unsigned __int64 v22; // x19
  int *v23; // x19
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  void *v27; // x4
  void *v28; // x5
  void *v29; // x6
  long double v30; // q0
  double v31; // d1
  double v32; // d2
  double v33; // d3
  double v34; // d4
  double v35; // d5
  double v36; // d6
  double v37; // d7
  unsigned __int64 v38; // x20
  unsigned __int64 v39; // x1
  unsigned __int64 v40; // x2
  __int64 v41; // x0
  int *v42; // x0
  __int64 v44; // x0
  __int16 v45; // w1
  __int64 v46; // x19
  char v47; // w3
  __int64 v53; // x2
  unsigned __int64 v57; // x1
  __int64 v58; // x0
  __int64 v59; // x2
  __int64 v60; // x3
  __int64 v61; // x4
  __int64 v62; // x5
  long double v63; // q0
  double v64; // d1
  double v65; // d2
  double v66; // d3
  double v67; // d4
  double v68; // d5
  double v69; // d6
  double v70; // d7
  __int64 v72; // x2
  __int64 v73; // x3
  __int64 v74; // x4
  __int64 v75; // x5
  long double v76; // q0
  double v77; // d1
  double v78; // d2
  double v79; // d3
  double v80; // d4
  double v81; // d5
  double v82; // d6
  double v83; // d7
  __int64 v86; // x2
  __int64 v92; // x2

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
  v15 = a1;
  if ( (byte_4966A1 & 1) != 0 )
    v15 = (a1 + 15) & 0xFFFFFFFFFFFFFFF0LL;
  StatusReg = _ReadStatusReg(TPIDR_EL0);
  v17 = v15 + 23;
  v18 = StatusReg + 48;
  v19 = v17 > 0x1F;
  v20 = (v17 & 0xFFFFFFFFFFFFFFF0LL) - 17;
  v21 = *(_QWORD *)(StatusReg + 48 + 8);
  v22 = v20 >> 4;
  if ( !v19 )
    v22 = 0;
  if ( v21 )
  {
    if ( v22 >= qword_490638 )
    {
LABEL_9:
      if ( !byte_490F08 )
      {
        v23 = *(int **)(StatusReg + 48);
        if ( v23 )
        {
          if ( _aarch64_cas4_acq(0, 1u, *(atomic_uint **)(StatusReg + 48)) )
            sub_406F40(v23, v24, v25, v26, v27, v28, v29);
          v38 = sub_40A0A0(v23, a1, v25, v26, v30, v31, v32, v33, v34, v35, v36, v37, (__int64)v27, (__int64)v28);
          if ( v38 )
          {
LABEL_14:
            if ( (int)_aarch64_swp4_rel(0, (atomic_uint *)v23) > 1 )
              sub_407040(v23);
LABEL_16:
            if ( (byte_4966A1 & 1) != 0 )
              goto LABEL_57;
            v39 = v38 - 16;
            v40 = v38 - 16;
            if ( v38 )
            {
LABEL_18:
              if ( (*(_QWORD *)(v39 + 8) & 2) == 0 )
              {
                while ( 1 )
                {
                  if ( (*(_QWORD *)(v40 + 8) & 4) != 0 )
                  {
                    v41 = -4 * qword_490600;
                    if ( !qword_490600 )
                      v41 = -67108864;
                    v42 = *(int **)(v40 & v41);
                  }
                  else
                  {
                    v42 = (int *)&unk_490670;
                  }
                  if ( v23 == v42 )
                    break;
                  sub_41F250(
                    "!victim || chunk_is_mmapped (mem2chunk (victim)) || ar_ptr == arena_for_chunk (mem2chunk (victim))",
                    "malloc.c",
                    3351,
                    "__libc_malloc");
LABEL_57:
                  if ( !v38 )
                    return 0;
                  _X0 = v38 - 16;
                  __asm { LDG             X0, [X0] }
                  v92 = _X0;
                  _X0 = v38;
                  __asm
                  {
                    GMI             X1, X0, XZR
                    IRG             X0, X0, X1
                  }
                  v38 = sub_411CC0(_X0, (*(_QWORD *)(v92 + 8) & 0xFFFFFFFFFFFFFFF8LL) - 16);
                  if ( !v38 )
                    return 0;
                  v40 = v38 - 16;
                  v39 = v38 - 16;
                  if ( (byte_4966A1 & 1) == 0 )
                    goto LABEL_18;
                  _X0 = v38 - 16;
                  __asm { LDG             X0, [X0] }
                  if ( (*(_QWORD *)(_X0 + 8) & 2) != 0 )
                    break;
                  _X0 = v38 - 16;
                  __asm { LDG             X0, [X0] }
                  v40 = _X0;
                }
              }
              return v38;
            }
            return 0;
          }
        }
        else
        {
          v23 = sub_4084E0((int *)a1, 0);
          v38 = sub_40A0A0(v23, a1, v59, v60, v63, v64, v65, v66, v67, v68, v69, v70, v61, v62);
          if ( v38 )
            _ZF = 1;
          else
            _ZF = v23 == 0;
          if ( _ZF )
          {
LABEL_50:
            if ( !v23 )
              goto LABEL_16;
            goto LABEL_14;
          }
        }
        v23 = (int *)sub_408A34(v23, a1);
        v38 = sub_40A0A0(v23, a1, v72, v73, v76, v77, v78, v79, v80, v81, v82, v83, v74, v75);
        goto LABEL_50;
      }
      v38 = sub_40A0A0(
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
              *(double *)&a9,
              a13,
              a14);
      if ( (byte_4966A1 & 1) != 0 )
      {
        if ( !v38 )
          return 0;
        _X0 = v38 - 16;
        __asm { LDG             X0, [X0] }
        v86 = _X0;
        _X0 = v38;
        __asm
        {
          GMI             X1, X0, XZR
          IRG             X0, X0, X1
        }
        v38 = sub_411CC0(_X0, (*(_QWORD *)(v86 + 8) & 0xFFFFFFFFFFFFFFF8LL) - 16);
        if ( !v38 )
          return 0;
LABEL_37:
        v57 = v38 - 16;
        if ( (byte_4966A1 & 1) != 0 )
        {
          _X0 = v38 - 16;
          __asm { LDG             X0, [X0] }
          if ( (*(_QWORD *)(_X0 + 8) & 2) != 0 )
            return v38;
          _X0 = v38 - 16;
          __asm { LDG             X0, [X0] }
          v57 = _X0;
        }
        else if ( (*(_QWORD *)(v38 - 8) & 2) != 0 )
        {
          return v38;
        }
        if ( (*(_QWORD *)(v57 + 8) & 4) != 0 )
        {
          v58 = -4 * qword_490600;
          if ( !qword_490600 )
            v58 = -67108864;
          if ( *(_UNKNOWN **)(v57 & v58) != &unk_490670 )
          {
            sub_41F250(
              "!victim || chunk_is_mmapped (mem2chunk (victim)) || &main_arena == arena_for_chunk (mem2chunk (victim))",
              "malloc.c",
              3329,
              "__libc_malloc");
            return 0;
          }
        }
        return v38;
      }
      if ( v38 )
        goto LABEL_37;
      return 0;
    }
  }
  else
  {
    v44 = *(unsigned __int8 *)(v18 + 0x10);
    if ( (v44 & 1) != 0 )
      goto LABEL_9;
    sub_40AF50(v44);
    if ( qword_490638 <= v22 )
      goto LABEL_9;
    v21 = *(_QWORD *)(v18 + 8);
    if ( !v21 )
      goto LABEL_9;
  }
  a11 = (__int16 *)(v21 + 2 * v22);
  v45 = *a11;
  if ( !*a11 )
    goto LABEL_9;
  v46 = v21 + 8 * v22;
  v38 = *(_QWORD *)(v46 + 128);
  if ( (v38 & 0xF) != 0 )
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
  v47 = byte_4966A1;
  *(_QWORD *)(v46 + 128) = *(_QWORD *)v38 ^ (v38 >> 12);
  *a11 = v45 - 1;
  *(_QWORD *)(v38 + 8) = 0;
  if ( (v47 & 1) == 0 )
    return v38;
  _X0 = v38 - 16;
  __asm { LDG             X0, [X0] }
  v53 = _X0;
  _X0 = v38;
  __asm
  {
    GMI             X1, X0, XZR
    IRG             X0, X0, X1
  }
  return sub_411CC0(_X0, (*(_QWORD *)(v53 + 8) & 0xFFFFFFFFFFFFFFF8LL) - 16);
}
