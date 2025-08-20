__int64 __fastcall opendir_tail(int a1)
{
  __int64 v2; // x2
  __int64 v3; // x3
  void *v4; // x4
  void *v5; // x5
  void *v6; // x6
  double v7; // d0
  double v8; // d1
  double v9; // d2
  double v10; // d3
  double v11; // d4
  double v12; // d5
  double v13; // d6
  double v14; // d7
  __int64 st_blksize_low; // x20
  unsigned __int64 v16; // x0
  __int64 result; // x0
  struct stat var88; // [xsp+8h] [xbp-88h] BYREF

  if ( a1 < 0 )
    return 0;
  if ( (fstat64(a1, &var88) & 0x80000000) != 0 )
  {
LABEL_13:
    _close_nocancel(a1);
    return 0;
  }
  if ( (var88.st_nlink & 0xF000) != 0x4000 )
  {
    *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40) = 20;
    goto LABEL_13;
  }
  if ( LODWORD(var88.st_blksize) <= 0xFFFFF )
  {
    if ( LODWORD(var88.st_blksize) <= 0x8000 )
    {
      v16 = 32816;
      st_blksize_low = 0x8000;
    }
    else
    {
      st_blksize_low = SLODWORD(var88.st_blksize);
      v16 = SLODWORD(var88.st_blksize) + 48LL;
    }
  }
  else
  {
    st_blksize_low = 0x100000;
    v16 = 1048624;
  }
  result = malloc(v16, v7, v8, v9, v10, v11, v12, v13, v14, 0xFFFFF, v2, v3, v4, v5, v6);
  if ( !result )
    goto LABEL_13;
  *(_DWORD *)result = a1;
  *(_DWORD *)(result + 4) = 0;
  *(_QWORD *)(result + 8) = st_blksize_low;
  *(_QWORD *)(result + 16) = 0;
  *(_QWORD *)(result + 24) = 0;
  *(_QWORD *)(result + 32) = 0;
  *(_DWORD *)(result + 40) = 0;
  return result;
}
