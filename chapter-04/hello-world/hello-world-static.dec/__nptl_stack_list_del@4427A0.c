_QWORD *__fastcall _nptl_stack_list_del(__int64 *a1)
{
  _QWORD *result; // x0
  __int64 v2; // x2

  dl_in_flight_stack = (__int64)a1;
  __dmb(0xBu);
  v2 = *a1;
  result = (_QWORD *)a1[1];
  *(_QWORD *)(v2 + 8) = result;
  *result = v2;
  __dmb(0xBu);
  dl_in_flight_stack = 0;
  return result;
}
