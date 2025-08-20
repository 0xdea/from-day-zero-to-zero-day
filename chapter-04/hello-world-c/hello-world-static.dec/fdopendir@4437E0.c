__int64 __fastcall fdopendir(int a1)
{
  void *v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v5; // x5
  __int64 v6; // x6
  __int64 v7; // x7
  unsigned int v8; // w0
  void *v9; // x4
  void *v10; // x5
  void *v11; // x6
  __int64 v12; // x7
  double v13; // d0
  double v14; // d1
  double v15; // d2
  double v16; // d3
  double v17; // d4
  double v18; // d5
  double v19; // d6
  double v20; // d7
  char v22; // [xsp+0h] [xbp-90h]
  struct stat var88; // [xsp+8h] [xbp-88h] BYREF

  if ( (fstat64(a1, &var88) & 0x80000000) != 0 )
    return 0;
  if ( (var88.st_nlink & 0xF000) != 0x4000 )
  {
    *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40) = 20;
    return 0;
  }
  v8 = _fcntl64_nocancel(a1, 3, v2, v3, v4, v5, v6, v7, v22);
  if ( v8 == -1 )
    return 0;
  if ( (v8 & 0x200000) != 0 )
  {
    *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40) = 9;
    return 0;
  }
  else if ( (v8 & 3) == 1 )
  {
    *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40) = 22;
    return 0;
  }
  else
  {
    return _alloc_dir(a1, 0, v8, (__int64)&var88, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20);
  }
}
