__int64 __fastcall alloc_perturb(__int64 result, __int64 a2)
{
  if ( perturb_byte )
    return memset(result, perturb_byte ^ 0xFFu, a2);
  return result;
}
