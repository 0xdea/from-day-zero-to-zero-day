__int64 __fastcall dl_tunable_set_perturb_byte(__int64 *a1)
{
  __int64 result; // x0

  result = *a1;
  perturb_byte = result;
  return result;
}
