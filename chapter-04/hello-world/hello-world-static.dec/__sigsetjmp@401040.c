__int64 __fastcall _sigsetjmp(
        _QWORD *a1,
        __int64 a2,
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

  *a1 = v9;
  a1[1] = v10;
  a1[2] = v11;
  a1[3] = v12;
  a1[4] = v13;
  a1[5] = v14;
  a1[6] = v15;
  a1[7] = v16;
  a1[8] = v17;
  a1[9] = v18;
  a1[10] = v19;
  a1[11] = v20 ^ _pointer_chk_guard_local;
  a1[14] = v21;
  a1[15] = v22;
  a1[16] = v23;
  a1[17] = v24;
  a1[18] = v25;
  a1[19] = v26;
  a1[20] = v27;
  a1[21] = v28;
  a1[13] = (unsigned __int64)&a9 ^ _pointer_chk_guard_local;
  return _sigjmp_save();
}
