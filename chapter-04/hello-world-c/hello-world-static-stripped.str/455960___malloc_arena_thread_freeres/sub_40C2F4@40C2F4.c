__int64 __fastcall sub_40C2F4(double a1, double a2, double a3, double a4, double a5, double a6, double a7, double a8)
{
  unsigned __int64 StatusReg; // x21
  __int64 v9; // x20
  unsigned __int64 *v10; // x19
  unsigned __int64 v11; // x0
  __int64 result; // x0
  __int64 v13; // x20
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  void *v17; // x4
  void *v18; // x5
  void *v19; // x6
  __int64 v20; // x0
  __int64 v21; // x0
  __int64 v22; // x1
  __int64 v23; // x0
  unsigned __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x4
  __int64 v28; // x5
  long double v29; // q0
  long double v30; // q1
  long double v31; // q2
  long double v32; // q3
  long double v33; // q4
  long double v34; // q5
  long double v35; // q6
  long double v36; // q7

  StatusReg = _ReadStatusReg(TPIDR_EL0);
  v9 = *(_QWORD *)(StatusReg + 48 + 8);
  *(_BYTE *)(StatusReg + 48 + 0x10) = 1;
  if ( v9 )
  {
    v10 = (unsigned __int64 *)(v9 + 128);
    *(_QWORD *)(StatusReg + 48 + 8) = 0;
    do
    {
      while ( 1 )
      {
        v11 = *v10;
        if ( !*v10 )
          break;
        if ( (v11 & 0xF) != 0 )
          sub_407374(
            (__int64)"tcache_thread_shutdown(): unaligned tcache chunk detected",
            a1,
            a2,
            a3,
            a4,
            a5,
            a6,
            a7,
            a8);
        *v10 = *(_QWORD *)v11 ^ (v11 >> 12);
        sub_40C1A0(v11);
      }
      ++v10;
    }
    while ( v10 != (unsigned __int64 *)(v9 + 640) );
    sub_40C1A0(v9);
  }
  result = 48;
  v13 = *(_QWORD *)(StatusReg + 48);
  *(_QWORD *)(StatusReg + 48) = 0;
  if ( v13 )
  {
    if ( _aarch64_cas4_acq(0, 1u, (atomic_uint *)&dword_4966B8) )
      sub_406F40(&dword_4966B8, v14, v15, v16, v17, v18, v19);
    v20 = *(_QWORD *)(v13 + 2176);
    if ( v20 )
    {
      v21 = v20 - 1;
      *(_QWORD *)(v13 + 2176) = v21;
      if ( !v21 )
      {
        v22 = qword_4966B0;
        qword_4966B0 = v13;
        *(_QWORD *)(v13 + 2168) = v22;
      }
      result = _aarch64_swp4_rel(0, (atomic_uint *)&dword_4966B8);
      if ( (int)result > 1 )
        return sub_407040(&dword_4966B8);
    }
    else
    {
      v29 = sub_41F250("a->attached_threads > 0", "arena.c", 907, "__malloc_arena_thread_freeres");
      return (__int64)sub_40C434(v23, v24, v29, v30, v31, v32, v33, v34, v35, v36, v25, v26, v27, v28);
    }
  }
  return result;
}
