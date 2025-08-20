unsigned __int64 __fastcall _sched_cpucount(unsigned __int64 result, int8x8_t *a2)
{
  int8x8_t *v2; // x2
  int8x8_t *v3; // x3
  int8x8_t v4; // t1
  int8x8_t v5; // d0

  if ( !(result >> 3) )
    return 0;
  v2 = a2;
  v3 = &a2[result >> 3];
  LODWORD(result) = 0;
  do
  {
    v4.n64_u64[0] = v2->n64_u64[0];
    ++v2;
    v5.n64_u64[0] = vcnt_s8(v4).n64_u64[0];
    v5.n64_u8[0] = vaddv_s8(v5);
    if ( v4.n64_u64[0] )
      result = (unsigned int)(result + v5.n64_u32[0]);
    else
      result = (unsigned int)result;
  }
  while ( v3 != v2 );
  return result;
}
