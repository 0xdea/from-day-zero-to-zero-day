__int64 __fastcall sub_44A920(__int64 a1)
{
  int v1; // w1
  __int64 result; // x0
  __int64 v4; // x3
  unsigned __int64 StatusReg; // x1

  v1 = *(_DWORD *)(a1 + 32);
  if ( !v1 )
    return 0;
  if ( v1 == 1 )
  {
    v4 = *(_QWORD *)(a1 + 16);
    StatusReg = _ReadStatusReg(TPIDR_EL0);
    *(_DWORD *)(v4 - 4) = 0;
    *(_DWORD *)(a1 + 32) = 0;
    *(_DWORD *)(StatusReg + 40) = 7;
    return 0;
  }
  if ( v1 != 2 )
  {
    __break(0x3E8u);
    return sub_44CA90();
  }
  sub_441D00();
  if ( !*(_DWORD *)(a1 + 32) )
    return 0;
  result = 1;
  if ( *(_QWORD *)(a1 + 8) == *(_QWORD *)(a1 + 16) )
    sub_41F250(
      "buf->write_ptr != buf->write_end",
      (__int64)"Xprintf_buffer_flush.c",
      0x46u,
      (__int64)"__wprintf_buffer_flush");
  return result;
}
