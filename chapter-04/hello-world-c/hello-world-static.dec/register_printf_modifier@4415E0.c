__int64 __fastcall register_printf_modifier(unsigned __int8 *a1)
{
  unsigned int v1; // w1
  unsigned __int8 *v3; // x19
  unsigned int v4; // t1
  int v5; // w0
  unsigned int v6; // w20
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x3
  void *v10; // x4
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
  __int64 v21; // x0
  __int64 v22; // x21
  unsigned __int8 v23; // w4
  int v24; // w3
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  void *v29; // x4
  void *v30; // x5
  void *v31; // x6

  v1 = *(_DWORD *)a1;
  if ( *(_DWORD *)a1 )
  {
    v3 = a1;
    while ( v1 <= 0xFF )
    {
      v4 = *((_DWORD *)v3 + 1);
      v3 += 4;
      v1 = v4;
      if ( !v4 )
      {
        if ( (unsigned int)(next_bit - 16) <= 7 )
        {
          v5 = 28;
          goto LABEL_6;
        }
        if ( _aarch64_cas4_acq(0, 1u, (atomic_uint *)&lock_1) )
          _lll_lock_wait_private(&lock_1, v13, v14, v15, v16, v17, v18, v19, v20, v7, v8, v9, v10, v11, v12);
        if ( (_printf_modifier_table
           || (_printf_modifier_table = calloc(0xFFu, 8u, v13, v14, v15, v16, v17, v18, v19, v20, v8, v9, v10, v11, v12)) != 0)
          && (v21 = malloc(v3 - a1 + 16, v13, v14, v15, v16, v17, v18, v19, v20, v7, v8, v9, v10, v11, v12),
              (v22 = v21) != 0) )
        {
          v23 = *(_DWORD *)a1;
          v24 = 1 << next_bit++;
          *(_QWORD *)v21 = *(_QWORD *)(_printf_modifier_table + 8LL * v23);
          *(_DWORD *)(v21 + 8) = v24;
          wmemcpy(v21 + 12);
          v25 = *a1;
          v6 = *(_DWORD *)(v22 + 8);
          *(_QWORD *)(_printf_modifier_table + 8 * v25) = v22;
        }
        else
        {
          v6 = -1;
        }
        if ( (int)_aarch64_swp4_rel(0, (atomic_uint *)&lock_1) > 1 )
          _lll_lock_wake_private(&lock_1, v26, v27, v28, v29, v30, v31);
        return v6;
      }
    }
  }
  v5 = 22;
LABEL_6:
  v6 = -1;
  *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40) = v5;
  return v6;
}
