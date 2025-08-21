unsigned __int64 __fastcall _nptl_stack_list_add(unsigned __int64 result, unsigned __int64 *a2)
{
  unsigned __int64 v2; // x3

  dl_in_flight_stack = result | 1;
  __dmb(0xBu);
  v2 = *a2;
  *(_QWORD *)result = *a2;
  *(_QWORD *)(result + 8) = a2;
  *(_QWORD *)(v2 + 8) = result;
  __dmb(0xBu);
  *a2 = result;
  __dmb(0xBu);
  dl_in_flight_stack = 0;
  return result;
}
