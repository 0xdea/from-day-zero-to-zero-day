__int64 __fastcall _printf_buffer_flush_asprintf(
        __int64 a1,
        double a2,
        double a3,
        double a4,
        double a5,
        double a6,
        double a7,
        double a8,
        double a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        void *a13,
        void *a14,
        void *a15)
{
  __int64 v15; // x23
  unsigned __int64 v17; // x21
  unsigned __int64 v18; // x3
  unsigned __int64 v19; // x19
  __int64 result; // x0
  __int64 v21; // x22
  unsigned __int64 StatusReg; // x1

  v15 = *(_QWORD *)a1;
  v17 = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1;
  if ( v17 > 0x7FFFFFFE )
  {
    result = 40;
    StatusReg = _ReadStatusReg(TPIDR_EL0);
    *(_DWORD *)(a1 + 32) = 0;
    *(_DWORD *)(StatusReg + 40) = 75;
    return result;
  }
  v18 = *(_QWORD *)(a1 + 16) - v15;
  v19 = (v18 + 15 + (v18 >> 1)) & 0xFFFFFFFFFFFFFFF0LL | 8;
  if ( v15 == a1 + 40 )
  {
    result = malloc(
               (v18 + 15 + (v18 >> 1)) & 0xFFFFFFFFFFFFFFF0LL | 8,
               a2,
               a3,
               a4,
               a5,
               a6,
               a7,
               a8,
               a9,
               v18 + 15,
               a11,
               v18,
               a13,
               a14,
               a15);
    v21 = result;
    if ( result )
    {
      result = j_memcpy(result);
      goto LABEL_4;
    }
LABEL_9:
    *(_DWORD *)(a1 + 32) = 0;
    return result;
  }
  result = realloc(
             v15,
             (v18 + 15 + (v18 >> 1)) & 0xFFFFFFFFFFFFFFF0LL | 8,
             a2,
             a3,
             a4,
             a5,
             a6,
             a7,
             a8,
             a9,
             a11,
             v18,
             a13,
             a14,
             a15);
  v21 = result;
  if ( !result )
    goto LABEL_9;
LABEL_4:
  *(_QWORD *)a1 = v21;
  *(_QWORD *)(a1 + 8) = v21 + v17;
  *(_QWORD *)(a1 + 16) = v21 + v19;
  return result;
}
