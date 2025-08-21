__int64 __fastcall _printf_fp(__int64 a1, __int64 a2, double **a3)
{
  double v6; // d0
  double v7; // d1
  double v8; // d2
  double v9; // d3
  double v10; // d4
  double v11; // d5
  double v12; // d6
  double v13; // d7
  _BYTE v14[560]; // [xsp+8h] [xbp-238h] BYREF

  if ( (*(_WORD *)(a2 + 12) & 0x400) != 0 )
  {
    _wprintf_buffer_to_file_init(v14, a1, 0);
    _wprintf_fp_l_buffer((__int64)v14, *(__int64 **)(_ReadStatusReg(TPIDR_EL0) + 24), a2, a3);
    return _wprintf_buffer_to_file_done(v14);
  }
  else
  {
    _printf_buffer_to_file_init((__int64)v14, a1);
    _printf_fp_l_buffer((unsigned __int64)v14, *(__int64 **)(_ReadStatusReg(TPIDR_EL0) + 24), a2, a3);
    return _printf_buffer_to_file_done((__int64)v14, v6, v7, v8, v9, v10, v11, v12, v13);
  }
}
