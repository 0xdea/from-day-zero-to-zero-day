__int64 __fastcall _libc_printf_freemem(
        double a1,
        double a2,
        double a3,
        double a4,
        double a5,
        double a6,
        double a7,
        double a8)
{
  __int64 result; // x0
  __int64 i; // x20
  _QWORD *v10; // x19
  __int64 v11; // x0

  result = _printf_modifier_table;
  if ( _printf_modifier_table )
  {
    for ( i = 0; i != 2040; i += 8 )
    {
      v10 = *(_QWORD **)(result + i);
      if ( v10 )
      {
        do
        {
          v11 = (__int64)v10;
          v10 = (_QWORD *)*v10;
          free(v11, a1, a2, a3, a4, a5, a6, a7, a8);
        }
        while ( v10 );
        result = _printf_modifier_table;
      }
    }
    return free(result, a1, a2, a3, a4, a5, a6, a7, a8);
  }
  return result;
}
