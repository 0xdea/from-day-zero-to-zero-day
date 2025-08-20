__int64 __fastcall sub_401040(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9)
{
  __int64 v9; // x19
  __int64 v10; // x20
  __int64 v11; // x21
  __int64 v12; // x22
  __int64 v13; // x23
  __int64 v14; // x24
  __int64 v15; // x25
  __int64 v16; // x26
  __int64 v17; // x27
  __int64 v18; // x28
  __int64 v19; // x29
  __int64 v20; // x30
  __int64 v21; // d8
  __int64 v22; // d9
  __int64 v23; // d10
  __int64 v24; // d11
  __int64 v25; // d12
  __int64 v26; // d13
  __int64 v27; // d14
  __int64 v28; // d15
  __int64 result; // x0
  bool v31; // zf
  int v32; // w1

  *(_QWORD *)a1 = v9;
  *(_QWORD *)(a1 + 8) = v10;
  *(_QWORD *)(a1 + 16) = v11;
  *(_QWORD *)(a1 + 24) = v12;
  *(_QWORD *)(a1 + 32) = v13;
  *(_QWORD *)(a1 + 40) = v14;
  *(_QWORD *)(a1 + 48) = v15;
  *(_QWORD *)(a1 + 56) = v16;
  *(_QWORD *)(a1 + 64) = v17;
  *(_QWORD *)(a1 + 72) = v18;
  *(_QWORD *)(a1 + 80) = v19;
  *(_QWORD *)(a1 + 88) = v20 ^ qword_48DD68;
  *(_QWORD *)(a1 + 112) = v21;
  *(_QWORD *)(a1 + 120) = v22;
  *(_QWORD *)(a1 + 128) = v23;
  *(_QWORD *)(a1 + 136) = v24;
  *(_QWORD *)(a1 + 144) = v25;
  *(_QWORD *)(a1 + 152) = v26;
  *(_QWORD *)(a1 + 160) = v27;
  *(_QWORD *)(a1 + 168) = v28;
  *(_QWORD *)(a1 + 104) = (unsigned __int64)&a9 ^ qword_48DD68;
  if ( a2 )
  {
    v31 = (unsigned int)sub_401100(0, 0, a1 + 184) == 0;
    result = 0;
    v32 = v31;
    *(_DWORD *)(a1 + 176) = v32;
  }
  else
  {
    *(_DWORD *)(a1 + 176) = 0;
    return 0;
  }
  return result;
}
