__int64 __fastcall group_number(
        __int64 result,
        __int64 a2,
        unsigned __int8 *a3,
        unsigned __int8 *a4,
        __int64 a5,
        char a6)
{
  __int64 v6; // x20
  unsigned __int8 *v7; // x19
  unsigned __int64 StatusReg; // x25
  __int16 v12; // t1
  _BYTE *v13; // x2
  __int64 v14; // x1
  _BYTE *v15; // x3

  v6 = result;
  v7 = a3;
  if ( (a6 & 1) != 0 )
  {
    StatusReg = _ReadStatusReg(TPIDR_EL0);
    if ( a3 != a4 )
    {
      do
      {
        if ( (_grouping_iterator_next(a2) & 1) != 0 )
          _printf_buffer_puts_1(v6, a5);
        v12 = *v7++;
        result = _printf_buffer_puts_1(
                   v6,
                   *(_QWORD *)(**(_QWORD **)(StatusReg + 16) + 8LL * (unsigned __int16)(v12 - 7) + 56));
      }
      while ( a4 != v7 );
    }
  }
  else if ( a3 != a4 )
  {
    if ( (_grouping_iterator_next(a2) & 1) != 0 )
      goto LABEL_13;
LABEL_9:
    v13 = *(_BYTE **)(v6 + 8);
    result = *(_QWORD *)(v6 + 16);
    v14 = *v7;
    v15 = v13 + 1;
    if ( v13 != (_BYTE *)result )
    {
LABEL_10:
      *(_QWORD *)(v6 + 8) = v15;
      *v13 = v14;
      goto LABEL_11;
    }
    while ( 1 )
    {
      result = _printf_buffer_putc_1(v6, v14);
LABEL_11:
      if ( a4 == ++v7 )
        break;
      if ( (_grouping_iterator_next(a2) & 1) == 0 )
        goto LABEL_9;
LABEL_13:
      _printf_buffer_puts_1(v6, a5);
      v13 = *(_BYTE **)(v6 + 8);
      result = *(_QWORD *)(v6 + 16);
      v14 = *v7;
      v15 = v13 + 1;
      if ( v13 != (_BYTE *)result )
        goto LABEL_10;
    }
  }
  return result;
}
