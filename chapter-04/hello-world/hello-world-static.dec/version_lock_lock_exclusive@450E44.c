unsigned __int64 __fastcall version_lock_lock_exclusive(unsigned __int64 *a1)
{
  unsigned __int64 v2; // x20
  unsigned __int64 result; // x0
  unsigned __int64 i; // x20

  v2 = atomic_load(a1);
  if ( (v2 & 1) != 0 || (result = _aarch64_cas8_acq_rel(v2, v2 | 1, (atomic_ullong *)a1), result != v2) )
  {
LABEL_3:
    for ( i = atomic_load(a1); ; i = result )
    {
      if ( (i & 1) != 0 )
      {
        if ( (i & 2) != 0 )
          goto LABEL_3;
        result = _aarch64_cas8_acq_rel(i, i | 2, (atomic_ullong *)a1);
        if ( result == i )
          goto LABEL_3;
      }
      else
      {
        result = _aarch64_cas8_acq_rel(i, i | 1, (atomic_ullong *)a1);
        if ( result == i )
          return result;
      }
    }
  }
  return result;
}
