__int64 __fastcall _alloc_dir(
        int a1,
        char a2,
        __int64 a3,
        __int64 a4,
        void *a5,
        void *a6,
        void *a7,
        __int64 a8,
        double a9,
        double a10,
        double a11,
        double a12,
        double a13,
        double a14,
        double a15,
        double a16)
{
  int v18; // w21
  __int64 v19; // x1
  __int64 v20; // x19
  unsigned __int64 v21; // x0
  __int64 result; // x0
  char v23; // [xsp+0h] [xbp+0h]

  v18 = a2 & 1;
  if ( (a2 & 1) == 0
    && (_fcntl64_nocancel(a1, 2, (void *)1, a4, (__int64)a5, (__int64)a6, (__int64)a7, a8, v23) & 0x80000000) != 0 )
  {
    return 0;
  }
  v19 = *(unsigned int *)(a4 + 56);
  if ( (unsigned int)v19 <= 0xFFFFF )
  {
    if ( (unsigned int)v19 <= 0x8000 )
    {
      v21 = 32816;
      v20 = 0x8000;
    }
    else
    {
      v20 = (int)v19;
      v21 = (int)v19 + 48LL;
    }
  }
  else
  {
    v20 = 0x100000;
    v21 = 1048624;
  }
  result = malloc(v21, a9, a10, a11, a12, a13, a14, a15, a16, v19, a3, a4, a5, a6, a7);
  if ( result )
  {
    *(_DWORD *)result = a1;
    *(_DWORD *)(result + 4) = 0;
    *(_QWORD *)(result + 8) = v20;
    *(_QWORD *)(result + 16) = 0;
    *(_QWORD *)(result + 24) = 0;
    *(_QWORD *)(result + 32) = 0;
    *(_DWORD *)(result + 40) = 0;
  }
  else
  {
    if ( !v18 )
      return 0;
    _close_nocancel(a1);
    return 0;
  }
  return result;
}
