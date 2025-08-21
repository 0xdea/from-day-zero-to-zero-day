__int64 *__fastcall add_to_global_update(__int64 a1)
{
  __int64 v1; // x26
  unsigned int v3; // w0
  __int64 v4; // x22
  __int64 **v5; // x1
  unsigned int v6; // w21
  __int64 v7; // x19
  __int64 v8; // x2
  __int16 v9; // w1
  __int16 v10; // w0
  __int64 **v11; // x0
  unsigned int v12; // w2
  int v13; // w1
  __int64 **v14; // x0
  __int64 *result; // x0

  v1 = *(_QWORD *)(a1 + 48);
  v3 = *(_DWORD *)(a1 + 784);
  v4 = 21 * v1;
  v5 = &(&dl_ns)[21 * v1];
  v6 = *((_DWORD *)v5[2] + 2);
  if ( v3 )
  {
    v7 = 0;
    do
    {
      v8 = *(_QWORD *)(*(_QWORD *)(a1 + 776) + 8 * v7);
      v9 = *(_WORD *)(v8 + 868);
      if ( (v9 & 0x20) == 0 )
      {
        *(_WORD *)(v8 + 868) = v9 | 0x20;
        if ( LODWORD((&dl_ns)[v4 + 3]) <= v6 )
          _libc_assert_fail(
            "new_nlist < ns->_ns_global_scope_alloc",
            (__int64)"dl-open.c",
            0xBCu,
            (__int64)"add_to_global_update");
        v10 = dl_debug_mask;
        *(_QWORD *)(*(&dl_ns)[v4 + 2] + 8LL * v6) = v8;
        if ( (v10 & 0x200) != 0 )
          dl_debug_printf("\nadd %s [%lu] to global scope\n", *(const char **)(v8 + 8), *(_QWORD *)(v8 + 48));
        v3 = *(_DWORD *)(a1 + 784);
        ++v6;
      }
      ++v7;
    }
    while ( v3 > (unsigned int)v7 );
    v11 = &(&dl_ns)[21 * v1];
    v12 = *((_DWORD *)v11 + 7);
    v13 = *((_DWORD *)v11[2] + 2);
    if ( v12 < v6 - v13 )
      _libc_assert_fail(
        "added <= ns->_ns_global_scope_pending_adds",
        (__int64)"dl-open.c",
        0xCAu,
        (__int64)"add_to_global_update");
  }
  else
  {
    v12 = *((_DWORD *)v5 + 7);
    v13 = *((_DWORD *)v5[2] + 2);
  }
  v14 = &(&dl_ns)[21 * v1];
  *((_DWORD *)v14 + 7) = v13 + v12 - v6;
  __dmb(0xBu);
  result = v14[2];
  *((_DWORD *)result + 2) = v6;
  return result;
}
