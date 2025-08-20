__int64 __fastcall btree_allocate_node(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        void *a5,
        void *a6,
        void *a7,
        double a8,
        double a9,
        double a10,
        double a11,
        double a12,
        double a13,
        double a14,
        double a15)
{
  unsigned __int64 *v15; // x22
  int v16; // w23
  unsigned __int64 v17; // x20
  unsigned __int64 v18; // x19
  unsigned __int64 v19; // x21
  __int64 result; // x0

  v15 = (unsigned __int64 *)(a1 + 8);
  v16 = (unsigned __int8)a2;
  while ( 1 )
  {
    v17 = atomic_load(v15);
    v18 = v17;
    if ( !v17 )
      break;
    while ( 1 )
    {
      v19 = atomic_load((unsigned __int64 *)v17);
      if ( (v19 & 1) != 0 || _aarch64_cas8_acq_rel(v19, v19 | 1, (atomic_ullong *)v17) != v19 )
        break;
      if ( *(_DWORD *)(v17 + 12) == 2 && v17 == _aarch64_cas8_acq_rel(v17, *(_QWORD *)(v17 + 24), (atomic_ullong *)v15) )
      {
        *(_DWORD *)(v17 + 8) = 0;
        *(_DWORD *)(v17 + 12) = v16 ^ 1;
        return v18;
      }
      version_lock_unlock_exclusive((unsigned __int64 *)v17);
      v17 = atomic_load(v15);
      v18 = v17;
      if ( !v17 )
        goto LABEL_9;
    }
  }
LABEL_9:
  result = malloc(0x100u, a8, a9, a10, a11, a12, a13, a14, a15, a2, a3, a4, a5, a6, a7);
  *(_QWORD *)result = 1;
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 12) = v16 ^ 1;
  return result;
}
