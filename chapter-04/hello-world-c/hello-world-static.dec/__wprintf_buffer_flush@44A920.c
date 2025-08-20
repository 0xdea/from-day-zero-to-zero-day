__int64 __fastcall _wprintf_buffer_flush(
        __int64 a1,
        double a2,
        double a3,
        double a4,
        double a5,
        double a6,
        double a7,
        double a8,
        double a9)
{
  int v9; // w1
  __int64 result; // x0
  __int64 v12; // x3
  unsigned __int64 StatusReg; // x1

  v9 = *(_DWORD *)(a1 + 32);
  if ( !v9 )
    return 0;
  if ( v9 == 1 )
  {
    v12 = *(_QWORD *)(a1 + 16);
    StatusReg = _ReadStatusReg(TPIDR_EL0);
    *(_DWORD *)(v12 - 4) = 0;
    *(_DWORD *)(a1 + 32) = 0;
    *(_DWORD *)(StatusReg + 40) = 7;
    return 0;
  }
  if ( v9 != 2 )
  {
    __break(0x3E8u);
    return dladdr();
  }
  _wprintf_buffer_flush_to_file(a1, a2, a3, a4, a5, a6, a7, a8, a9);
  if ( !*(_DWORD *)(a1 + 32) )
    return 0;
  result = 1;
  if ( *(_QWORD *)(a1 + 8) == *(_QWORD *)(a1 + 16) )
    _libc_assert_fail(
      "buf->write_ptr != buf->write_end",
      (__int64)"Xprintf_buffer_flush.c",
      0x46u,
      (__int64)"__wprintf_buffer_flush");
  return result;
}
