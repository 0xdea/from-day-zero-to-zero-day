__int64 *__fastcall IO_default_finish(unsigned int *a1)
{
  __int64 v2; // x0
  _QWORD *i; // x1
  __int64 v4; // x0
  __int64 *result; // x0

  v2 = *((_QWORD *)a1 + 7);
  if ( v2 && (*a1 & 1) == 0 )
  {
    free(v2);
    *((_QWORD *)a1 + 7) = 0;
    *((_QWORD *)a1 + 8) = 0;
  }
  for ( i = (_QWORD *)*((_QWORD *)a1 + 12); i; i = (_QWORD *)*i )
    i[1] = 0;
  v4 = *((_QWORD *)a1 + 9);
  if ( v4 )
  {
    free(v4);
    *((_QWORD *)a1 + 9) = 0;
  }
  result = (__int64 *)*a1;
  if ( ((unsigned __int8)result & 0x80) != 0 )
    return IO_un_link_part_0((__int64)a1);
  return result;
}
