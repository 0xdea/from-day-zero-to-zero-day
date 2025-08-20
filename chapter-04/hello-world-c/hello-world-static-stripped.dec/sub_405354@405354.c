__int64 __fastcall sub_405354(__int64 result, int a2, int a3, __int64 a4, __int64 a5)
{
  int v5; // w5
  bool v6; // zf
  _QWORD *v7; // x5
  int v8; // w1

  v5 = dword_492648;
  *(_DWORD *)result = a2 | 0xFBAD0000;
  *(_WORD *)(result + 128) = 0;
  v6 = v5 == 0;
  v7 = *(_QWORD **)(result + 136);
  *(_OWORD *)(result + 8) = 0u;
  *(_OWORD *)(result + 24) = 0u;
  *(_OWORD *)(result + 40) = 0u;
  *(_OWORD *)(result + 56) = 0u;
  v8 = !v6;
  *(_QWORD *)(result + 104) = 0;
  *(_DWORD *)(result + 116) = v8 << 7;
  *(_OWORD *)(result + 72) = 0u;
  *(_OWORD *)(result + 88) = 0u;
  if ( v7 )
  {
    *v7 = 0;
    v7[1] = 0;
  }
  *(_DWORD *)(result + 192) = a3;
  if ( a3 < 0 )
  {
    *(_QWORD *)(result + 160) = -1;
  }
  else
  {
    *(_QWORD *)(result + 160) = a4;
    *(_QWORD *)(a4 + 80) = 0;
    *(_QWORD *)(a4 + 224) = a5;
    *(_OWORD *)a4 = 0u;
    *(_OWORD *)(a4 + 16) = 0u;
    *(_OWORD *)(a4 + 32) = 0u;
    *(_OWORD *)(a4 + 48) = 0u;
    *(_OWORD *)(a4 + 64) = 0u;
  }
  *(_QWORD *)(result + 168) = 0;
  return result;
}
