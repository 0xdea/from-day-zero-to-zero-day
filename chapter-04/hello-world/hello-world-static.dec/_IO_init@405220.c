long double __fastcall IO_init(__int64 a1, int a2)
{
  int v2; // w2
  bool v3; // zf
  _QWORD *v4; // x2
  int v5; // w1
  long double result; // q0

  v2 = stdio_needs_locking;
  *(_DWORD *)a1 = a2 | 0xFBAD0000;
  *(_WORD *)(a1 + 128) = 0;
  v3 = v2 == 0;
  v4 = *(_QWORD **)(a1 + 136);
  *(_OWORD *)(a1 + 8) = 0u;
  *(_OWORD *)(a1 + 24) = 0u;
  *(_OWORD *)(a1 + 40) = 0u;
  *(_OWORD *)(a1 + 56) = 0u;
  v5 = !v3;
  *(_QWORD *)(a1 + 104) = 0;
  *(_DWORD *)(a1 + 116) = v5 << 7;
  *(_OWORD *)(a1 + 72) = 0u;
  *(_OWORD *)(a1 + 88) = 0u;
  if ( v4 )
  {
    *v4 = 0;
    v4[1] = 0;
  }
  result = *(long double *)&xmmword_45A900;
  *(_DWORD *)(a1 + 192) = -1;
  *(_OWORD *)(a1 + 160) = xmmword_45A900;
  return result;
}
