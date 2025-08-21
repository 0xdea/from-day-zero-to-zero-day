__int64 __fastcall sub_40B890(
        unsigned __int64 a1,
        double a2,
        double a3,
        double a4,
        double a5,
        double a6,
        double a7,
        double a8,
        double a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        void *a13,
        void *a14,
        void *a15)
{
  unsigned __int64 v16; // x0
  unsigned __int64 StatusReg; // x20
  unsigned __int64 v18; // x0
  unsigned __int64 v19; // x23
  bool v20; // cc
  unsigned __int64 v21; // x19
  __int64 v22; // x0
  unsigned __int64 v23; // x19
  int *v24; // x19
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  void *v28; // x4
  void *v29; // x5
  void *v30; // x6
  double v31; // d0
  double v32; // d1
  double v33; // d2
  double v34; // d3
  double v35; // d4
  double v36; // d5
  double v37; // d6
  double v38; // d7
  unsigned __int64 v39; // x20
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x3
  void *v43; // x4
  void *v44; // x5
  void *v45; // x6
  unsigned __int64 v46; // x1
  unsigned __int64 v47; // x2
  __int64 v48; // x0
  int *v49; // x0
  __int16 *v51; // x2
  __int16 v52; // w1
  __int64 v53; // x19
  char v54; // w3
  __int64 v60; // x2
  unsigned __int64 v64; // x1
  __int64 v65; // x0
  double v66; // d0
  double v67; // d1
  double v68; // d2
  double v69; // d3
  double v70; // d4
  double v71; // d5
  double v72; // d6
  double v73; // d7
  double v75; // d0
  double v76; // d1
  double v77; // d2
  double v78; // d3
  double v79; // d4
  double v80; // d5
  double v81; // d6
  double v82; // d7
  __int64 v85; // x2
  __int64 v91; // x2

  if ( (byte_496690 & 1) != 0 )
  {
    if ( (a1 & 0x8000000000000000LL) == 0 )
      goto LABEL_3;
LABEL_26:
    *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40) = 12;
    return 0;
  }
  sub_407FA0((unsigned __int8)byte_496690, (__int64)&byte_496688, a11, a12, a13, a14, a15);
  if ( (a1 & 0x8000000000000000LL) != 0 )
    goto LABEL_26;
LABEL_3:
  v16 = a1;
  if ( (byte_4966A1 & 1) != 0 )
    v16 = (a1 + 15) & 0xFFFFFFFFFFFFFFF0LL;
  StatusReg = _ReadStatusReg(TPIDR_EL0);
  v18 = v16 + 23;
  v19 = StatusReg + 48;
  v20 = v18 > 0x1F;
  v21 = (v18 & 0xFFFFFFFFFFFFFFF0LL) - 17;
  v22 = *(_QWORD *)(StatusReg + 48 + 8);
  v23 = v21 >> 4;
  if ( !v20 )
    v23 = 0;
  if ( v22 )
  {
    if ( v23 >= qword_490638 )
    {
LABEL_9:
      if ( !byte_490F08 )
      {
        v24 = *(int **)(StatusReg + 48);
        if ( v24 )
        {
          if ( _aarch64_cas4_acq(0, 1u, *(atomic_uint **)(StatusReg + 48)) )
            sub_406F40(v24, v31, v32, v33, v34, v35, v36, v37, v38, v25, v26, v27, v28, v29, v30);
          v39 = sub_40A0A0(v24, a1, v31, v32, v33, v34, v35, v36, v37, v38);
          if ( v39 )
          {
LABEL_14:
            if ( (int)_aarch64_swp4_rel(0, (atomic_uint *)v24) > 1 )
              sub_407040(v24, v40, v41, v42, v43, v44, v45);
LABEL_16:
            if ( (byte_4966A1 & 1) != 0 )
              goto LABEL_57;
            v46 = v39 - 16;
            v47 = v39 - 16;
            if ( v39 )
            {
LABEL_18:
              if ( (*(_QWORD *)(v46 + 8) & 2) == 0 )
              {
                while ( 1 )
                {
                  if ( (*(_QWORD *)(v47 + 8) & 4) != 0 )
                  {
                    v48 = -4 * qword_490600;
                    if ( !qword_490600 )
                      v48 = -67108864;
                    v49 = *(int **)(v47 & v48);
                  }
                  else
                  {
                    v49 = &dword_490670;
                  }
                  if ( v24 == v49 )
                    break;
                  sub_41F250(
                    "!victim || chunk_is_mmapped (mem2chunk (victim)) || ar_ptr == arena_for_chunk (mem2chunk (victim))",
                    "malloc.c",
                    3351,
                    "__libc_malloc");
LABEL_57:
                  if ( !v39 )
                    return 0;
                  _X0 = v39 - 16;
                  __asm { LDG             X0, [X0] }
                  v91 = _X0;
                  _X0 = v39;
                  __asm
                  {
                    GMI             X1, X0, XZR
                    IRG             X0, X0, X1
                  }
                  v39 = sub_411CC0(_X0, (*(_QWORD *)(v91 + 8) & 0xFFFFFFFFFFFFFFF8LL) - 16);
                  if ( !v39 )
                    return 0;
                  v47 = v39 - 16;
                  v46 = v39 - 16;
                  if ( (byte_4966A1 & 1) == 0 )
                    goto LABEL_18;
                  _X0 = v39 - 16;
                  __asm { LDG             X0, [X0] }
                  if ( (*(_QWORD *)(_X0 + 8) & 2) != 0 )
                    break;
                  _X0 = v39 - 16;
                  __asm { LDG             X0, [X0] }
                  v47 = _X0;
                }
              }
              return v39;
            }
            return 0;
          }
        }
        else
        {
          v24 = sub_4084E0((int *)a1, 0);
          v39 = sub_40A0A0(v24, a1, v66, v67, v68, v69, v70, v71, v72, v73);
          if ( v39 )
            _ZF = 1;
          else
            _ZF = v24 == 0;
          if ( _ZF )
          {
LABEL_50:
            if ( !v24 )
              goto LABEL_16;
            goto LABEL_14;
          }
        }
        v24 = sub_408A34(v24, (int *)a1);
        v39 = sub_40A0A0(v24, a1, v75, v76, v77, v78, v79, v80, v81, v82);
        goto LABEL_50;
      }
      v39 = sub_40A0A0(&dword_490670, a1, a2, a3, a4, a5, a6, a7, a8, a9);
      if ( (byte_4966A1 & 1) != 0 )
      {
        if ( !v39 )
          return 0;
        _X0 = v39 - 16;
        __asm { LDG             X0, [X0] }
        v85 = _X0;
        _X0 = v39;
        __asm
        {
          GMI             X1, X0, XZR
          IRG             X0, X0, X1
        }
        v39 = sub_411CC0(_X0, (*(_QWORD *)(v85 + 8) & 0xFFFFFFFFFFFFFFF8LL) - 16);
        if ( !v39 )
          return 0;
LABEL_37:
        v64 = v39 - 16;
        if ( (byte_4966A1 & 1) != 0 )
        {
          _X0 = v39 - 16;
          __asm { LDG             X0, [X0] }
          if ( (*(_QWORD *)(_X0 + 8) & 2) != 0 )
            return v39;
          _X0 = v39 - 16;
          __asm { LDG             X0, [X0] }
          v64 = _X0;
        }
        else if ( (*(_QWORD *)(v39 - 8) & 2) != 0 )
        {
          return v39;
        }
        if ( (*(_QWORD *)(v64 + 8) & 4) != 0 )
        {
          v65 = -4 * qword_490600;
          if ( !qword_490600 )
            v65 = -67108864;
          if ( *(int **)(v64 & v65) != &dword_490670 )
          {
            sub_41F250(
              "!victim || chunk_is_mmapped (mem2chunk (victim)) || &main_arena == arena_for_chunk (mem2chunk (victim))",
              "malloc.c",
              3329,
              "__libc_malloc");
            return 0;
          }
        }
        return v39;
      }
      if ( v39 )
        goto LABEL_37;
      return 0;
    }
  }
  else
  {
    if ( (*(_BYTE *)(v19 + 0x10) & 1) != 0 )
      goto LABEL_9;
    sub_40AF50();
    if ( qword_490638 <= v23 )
      goto LABEL_9;
    v22 = *(_QWORD *)(v19 + 8);
    if ( !v22 )
      goto LABEL_9;
  }
  v51 = (__int16 *)(v22 + 2 * v23);
  v52 = *v51;
  if ( !*v51 )
    goto LABEL_9;
  v53 = v22 + 8 * v23;
  v39 = *(_QWORD *)(v53 + 128);
  if ( (v39 & 0xF) != 0 )
    sub_407374((__int64)"malloc(): unaligned tcache chunk detected", a2, a3, a4, a5, a6, a7, a8, a9);
  v54 = byte_4966A1;
  *(_QWORD *)(v53 + 128) = *(_QWORD *)v39 ^ (v39 >> 12);
  *v51 = v52 - 1;
  *(_QWORD *)(v39 + 8) = 0;
  if ( (v54 & 1) == 0 )
    return v39;
  _X0 = v39 - 16;
  __asm { LDG             X0, [X0] }
  v60 = _X0;
  _X0 = v39;
  __asm
  {
    GMI             X1, X0, XZR
    IRG             X0, X0, X1
  }
  return sub_411CC0(_X0, (*(_QWORD *)(v60 + 8) & 0xFFFFFFFFFFFFFFF8LL) - 16);
}
