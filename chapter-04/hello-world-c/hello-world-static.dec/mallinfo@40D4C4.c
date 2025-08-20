__int64 *__usercall mallinfo@<X0>(__int64 a1@<X3>, void *a2@<X4>, void *a3@<X5>, void *a4@<X6>, int32x4_t *a5@<X8>)
{
  int32x4_t v6; // q1
  unsigned __int64 v7; // d0
  __int64 *result; // x0
  int32x4_t v9[5]; // [xsp+0h] [xbp-60h] BYREF

  mallinfo2(a1, a2, a3, a4, v9);
  v6 = vuzp1q_s32(v9[2], v9[3]);
  v7 = vmovn_s64(v9[4]).n64_u64[0];
  result = &_stack_chk_guard;
  *a5 = vuzp1q_s32(v9[0], v9[1]);
  a5[1] = v6;
  a5[2].n128_u64[0] = v7;
  return result;
}
