__int64 __fastcall _nptl_free_stacks(
        unsigned __int64 a1,
        double a2,
        double a3,
        double a4,
        double a5,
        double a6,
        double a7,
        double a8,
        double a9)
{
  __int64 result; // x0
  __int64 *v11; // x19
  __int64 v12; // x20
  _QWORD *v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  unsigned __int64 v16; // x0
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3

  result = qword_4967D8;
  v11 = *(__int64 **)(qword_4967D8 + 8);
  if ( (__int64 *)qword_4967D8 != &dl_stack_cache )
  {
    while ( 1 )
    {
      v12 = result - 192;
      if ( *(int *)(result + 16) <= 0 )
      {
        dl_in_flight_stack = result;
        __dmb(0xBu);
        v14 = *(_QWORD *)result;
        v13 = *(_QWORD **)(result + 8);
        *(_QWORD *)(v14 + 8) = v13;
        *v13 = v14;
        __dmb(0xBu);
        v15 = *(_QWORD *)(result + 984);
        dl_in_flight_stack = 0;
        dl_stack_cache_actsize -= v15;
        dl_deallocate_tls((void **)(result + 1664), 0, a2, a3, a4, a5, a6, a7, a8, a9);
        v16 = munmap(*(void **)(v12 + 1168), *(_QWORD *)(v12 + 1176));
        if ( (_DWORD)v16 )
          abort(v16, v17, v18, v19);
        result = dl_stack_cache_actsize;
        if ( dl_stack_cache_actsize <= a1 )
          break;
      }
      result = (__int64)v11;
      if ( v11 == &dl_stack_cache )
        break;
      v11 = (__int64 *)v11[1];
    }
  }
  return result;
}
