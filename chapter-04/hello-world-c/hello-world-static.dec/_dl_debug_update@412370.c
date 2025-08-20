int *__fastcall dl_debug_update(__int64 a1)
{
  int *result; // x0

  if ( a1 )
  {
    result = (int *)&(&dl_ns)[21 * a1 + 15];
    if ( *((_QWORD *)result + 1) )
      return result;
LABEL_5:
    atomic_store((unsigned __int64)(&dl_ns)[21 * a1], (unsigned __int64 *)result + 1);
    return result;
  }
  result = &r_debug_extended;
  if ( !qword_4966F0 )
    goto LABEL_5;
  return result;
}
