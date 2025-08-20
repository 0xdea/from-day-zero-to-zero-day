__int64 __fastcall dl_call_fini(__int64 a1)
{
  __int64 v2; // x1
  __int64 v3; // x0
  void (**v4)(void); // x21
  void (**v5)(void); // x19
  __int64 result; // x0

  if ( (dl_debug_mask & 2) != 0 )
    dl_debug_printf("\ncalling fini: %s [%lu]\n\n", *(const char **)(a1 + 8), *(_QWORD *)(a1 + 48));
  v2 = *(_QWORD *)(a1 + 272);
  *(_WORD *)(a1 + 868) &= ~0x10u;
  if ( v2 )
  {
    v3 = *(_QWORD *)(*(_QWORD *)(a1 + 288) + 8LL) >> 3;
    v4 = (void (**)(void))(*(_QWORD *)a1 + *(_QWORD *)(v2 + 8));
    if ( v3 )
    {
      v5 = &v4[v3 - 1];
      do
        (*v5)();
      while ( v4 != v5-- );
    }
  }
  result = *(_QWORD *)(a1 + 168);
  if ( result )
    return ((__int64 (*)(void))(*(_QWORD *)(result + 8) + *(_QWORD *)a1))();
  return result;
}
