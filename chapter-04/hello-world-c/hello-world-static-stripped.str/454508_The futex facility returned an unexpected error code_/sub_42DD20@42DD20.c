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
  unsigned __int64 v13; // x0
  unsigned int v14; // w0
  unsigned int *v15; // x22
  _BOOL4 v16; // w21
  unsigned int v17; // w19
  unsigned int v18; // w1
  char v19; // w21
  unsigned int v20; // w24
  unsigned int v21; // w0
  unsigned int v23; // w21
  unsigned int v24; // w0

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
      v14 = _dl___aarch64_cas4_relax(v3, v3 - 8, (atomic_uint *)a1);
      v9 = v14 == v3;
      v3 = v14;
      if ( v9 )
        return 11;
    }
    if ( (v3 & 1) != 0 )
    {
      do
      {
        if ( (v3 & 3) != 1 )
        {
          v15 = a1 + 2;
          v16 = 0;
          while ( 1 )
          {
            v17 = *v15;
            v18 = *v15 | 2;
            if ( v18 != 3 )
              break;
LABEL_36:
            v20 = (a1[7] != 0) << 7;
            if ( (v17 & 2) != 0 || _dl___aarch64_cas4_relax(v17, v18, (atomic_uint *)(a1 + 2)) == v17 )
            {
              v21 = sub_442550(a1 + 2, 3, 0, 0, v20);
              v4 = v21;
              if ( v21 == 110 || v21 == 75 )
              {
                v23 = *a1;
                while ( (v23 & 1) != 0 )
                {
                  v24 = _dl___aarch64_cas4_relax(v23, v23 - 8, (atomic_uint *)a1);
                  v9 = v24 == v23;
                  v23 = v24;
                  if ( v9 )
                    return v4;
                }
                __dmb(9u);
                while ( (*v15 | 2) == 3 )
                  ;
                return 0;
              }
            }
          }
          while ( !v16 )
          {
            v19 = atomic_load(a1);
            v16 = (v19 & 1) == 0;
            v17 = *v15;
            v18 = *v15 | 2;
            if ( v18 == 3 )
              goto LABEL_36;
          }
          return 0;
        }
        v10 = _aarch64_cas4_acq(v3, v3 ^ 1, (atomic_uint *)a1);
        v9 = v10 == v3;
        v3 = v10;
      }
      while ( !v9 );
      if ( (_dl___aarch64_swp4_relax(0, a1 + 2) & 2) != 0 )
      {
        v13 = linux_eabi_syscall(
                __NR_futex,
                a1 + 2,
                (void *)(((a1[7] != 0) << 7) ^ 0x81u),
                (void *)0x7FFFFFFF,
                0,
                (void *)0x81,
                v11,
                v12);
        if ( v13 > 0xFFFFFFFFFFFFF000LL && (((_DWORD)v13 + 22) & 0xFFFFFFF7) != 0 )
        {
          sub_401A30("The futex facility returned an unexpected error code.\n");
          return 35;
        }
      }
    }
    return 0;
  }
}
