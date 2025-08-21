__int64 __fastcall _printf_function_invoke(
        __int64 a1,
        __int64 (__fastcall *a2)(_BYTE *, void *, _BYTE *),
        __int64 a3,
        unsigned __int64 a4,
        void *a5,
        double a6,
        double a7,
        double a8,
        double a9,
        double a10,
        double a11,
        double a12,
        double a13,
        __int64 a14,
        void *a15)
{
  __int64 v20; // x3
  _BYTE *v21; // x20
  unsigned int v22; // w6
  __int64 v23; // x5
  unsigned int v24; // w19
  double v25; // d0
  double v26; // d1
  double v27; // d2
  double v28; // d3
  double v29; // d4
  double v30; // d5
  double v31; // d6
  double v32; // d7
  _BYTE v34[32]; // [xsp+0h] [xbp-110h] BYREF
  _BYTE v35[232]; // [xsp+20h] [xbp-F0h] BYREF

  v20 = 0;
  if ( a4 > 4 )
  {
    v21 = (_BYTE *)calloc(a4, 8u, a6, a7, a8, a9, a10, a11, a12, a13, a3, 0, a5, &_stack_chk_guard, a15);
    if ( !v21 )
      return (unsigned int)-1;
    goto LABEL_4;
  }
  if ( a4 )
  {
    v21 = v34;
LABEL_4:
    v22 = 0;
    v23 = 0;
    do
    {
      ++v22;
      *(_QWORD *)&v21[8 * v23] = a3 + 16 * v23;
      v23 = v22;
    }
    while ( v22 < a4 );
    _printf_buffer_as_file_init(v35, a1, a3, v20);
    v24 = a2(v35, a5, v21);
    if ( (_printf_buffer_as_file_terminate(v35) & 1) == 0 )
      v24 = -1;
    if ( v21 != v34 )
      free((__int64)v21, v25, v26, v27, v28, v29, v30, v31, v32);
    return v24;
  }
  _printf_buffer_as_file_init(v35, a1, a3, 0);
  v24 = a2(v35, a5, v34);
  if ( (_printf_buffer_as_file_terminate(v35) & 1) == 0 )
    return (unsigned int)-1;
  return v24;
}
