__int64 __fastcall IO_old_init(__int64 result, int a2)
{
  int v2; // w2
  bool v3; // zf
  _QWORD *v4; // x2
  int v5; // w1

  v2 = stdio_needs_locking;
  *(_DWORD *)result = a2 | 0xFBAD0000;
  *(_WORD *)(result + 128) = 0;
  v3 = v2 == 0;
  v4 = *(_QWORD **)(result + 136);
  *(_OWORD *)(result + 8) = 0u;
  *(_OWORD *)(result + 24) = 0u;
  *(_OWORD *)(result + 40) = 0u;
  *(_OWORD *)(result + 56) = 0u;
  v5 = !v3;
  *(_QWORD *)(result + 104) = 0;
  *(_DWORD *)(result + 116) = v5 << 7;
  *(_OWORD *)(result + 72) = 0u;
  *(_OWORD *)(result + 88) = 0u;
  if ( v4 )
  {
    *v4 = 0;
    v4[1] = 0;
  }
  return result;
}
