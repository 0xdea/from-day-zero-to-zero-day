__int64 __fastcall sub_42DD20(unsigned int *a1)
{
  unsigned int v2; // w1
  unsigned int v3; // w19
  unsigned int v4; // w19
  unsigned int v6; // w19
  unsigned int v7; // w0
  unsigned int v8; // w0
  bool v9; // zf
  unsigned int v10; // w0
  void *v11; // x5
  void *v12; // x6
  double v13; // d0
  double v14; // d1
  double v15; // d2
  double v16; // d3
  double v17; // d4
  double v18; // d5
  double v19; // d6
  double v20; // d7
  unsigned __int64 v21; // x0
  unsigned int v22; // w0
  unsigned int *v23; // x22
  _BOOL4 v24; // w21
  unsigned int v25; // w19
  unsigned int v26; // w1
  char v27; // w21
  unsigned int v28; // w24
  unsigned int v29; // w0
  unsigned int v31; // w21
  unsigned int v32; // w0

  v2 = a1[6];
  if ( v2 == *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) - 1856 + 0xD0) )
  {
    return 35;
  }
  else
  {
    if ( a1[12] == 2 )
    {
      v6 = *a1;
      while ( (v6 & 3) == 2 && v6 >> 3 )
      {
        v7 = _dl___aarch64_cas4_relax(v6, v6 | 4, (atomic_uint *)a1);
        v9 = v7 == v6;
        v6 = v7;
        if ( v9 )
        {
          while ( 1 )
          {
            v6 = *a1;
            if ( (*a1 & 4) == 0 )
              break;
            v8 = sub_442550(a1, v6, 0, 0, (unsigned __int8)(a1[7] != 0) << 7);
            v4 = v8;
            v9 = v8 == 110 || v8 == 75;
            if ( v9 )
              return v4;
          }
        }
      }
    }
    v3 = sub_44D560(8, a1) + 8;
    while ( (v3 & 0x80000000) != 0 )
    {
      v22 = _dl___aarch64_cas4_relax(v3, v3 - 8, (atomic_uint *)a1);
      v9 = v22 == v3;
      v3 = v22;
      if ( v9 )
        return 11;
    }
    if ( (v3 & 1) != 0 )
    {
      while ( (v3 & 3) == 1 )
      {
        v10 = _aarch64_cas4_acq(v3, v3 ^ 1, (atomic_uint *)a1);
        v9 = v10 == v3;
        v3 = v10;
        if ( v9 )
        {
          if ( (_dl___aarch64_swp4_relax(0, a1 + 2) & 2) != 0 )
          {
            v21 = linux_eabi_syscall(
                    __NR_futex,
                    a1 + 2,
                    (void *)(((a1[7] != 0) << 7) ^ 0x81u),
                    (void *)0x7FFFFFFF,
                    0,
                    (void *)0x81,
                    v11,
                    v12);
            if ( v21 > 0xFFFFFFFFFFFFF000LL && (((_DWORD)v21 + 22) & 0xFFFFFFF7) != 0 )
              sub_401A30(
                (__int64)"The futex facility returned an unexpected error code.\n",
                v13,
                v14,
                v15,
                v16,
                v17,
                v18,
                v19,
                v20);
          }
          return 0;
        }
      }
      v23 = a1 + 2;
      v24 = 0;
      while ( 1 )
      {
        v25 = *v23;
        v26 = *v23 | 2;
        if ( v26 != 3 )
          break;
LABEL_36:
        v28 = (a1[7] != 0) << 7;
        if ( (v25 & 2) != 0 || _dl___aarch64_cas4_relax(v25, v26, (atomic_uint *)(a1 + 2)) == v25 )
        {
          v29 = sub_442550(a1 + 2, 3, 0, 0, v28);
          v4 = v29;
          if ( v29 == 110 || v29 == 75 )
          {
            v31 = *a1;
            while ( (v31 & 1) != 0 )
            {
              v32 = _dl___aarch64_cas4_relax(v31, v31 - 8, (atomic_uint *)a1);
              v9 = v32 == v31;
              v31 = v32;
              if ( v9 )
                return v4;
            }
            __dmb(9u);
            while ( (*v23 | 2) == 3 )
              ;
            return 0;
          }
        }
      }
      while ( !v24 )
      {
        v27 = atomic_load(a1);
        v24 = (v27 & 1) == 0;
        v25 = *v23;
        v26 = *v23 | 2;
        if ( v26 == 3 )
          goto LABEL_36;
      }
    }
    return 0;
  }
}
