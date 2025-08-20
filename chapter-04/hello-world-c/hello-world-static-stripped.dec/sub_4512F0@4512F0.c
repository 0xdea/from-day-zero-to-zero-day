__int64 __fastcall sub_4512F0(unsigned __int64 *a1)
{
  unsigned __int64 v2; // x0
  __int64 result; // x0

  v2 = atomic_load(a1);
  result = _dl___aarch64_swp8_acq_rel((v2 + 4) & 0xFFFFFFFFFFFFFFFCLL, a1);
  if ( (result & 2) != 0 )
    return (__int64)&unk_496CD8;
  return result;
}
