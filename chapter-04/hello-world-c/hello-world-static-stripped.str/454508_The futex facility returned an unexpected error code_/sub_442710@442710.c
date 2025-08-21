__int64 __fastcall sub_442710(void *a1, int a2, void *a3, unsigned int a4, __int64 a5, __int64 a6, void *a7)
{
  unsigned __int64 v7; // x4
  unsigned __int64 v8; // x5
  signed __int64 v9; // x0
  __int64 result; // x0
  __int64 *v11; // x0
  __int64 v12; // x2

  v7 = a4;
  v8 = a4 ^ 0x86;
  if ( a2 )
  {
    v7 = a4 ^ 0x8D;
    if ( a3 )
      v8 = (unsigned int)v7;
    else
      v8 = (unsigned int)v8;
  }
  v9 = linux_eabi_syscall(__NR_futex, a1, (void *)(int)v8, 0, a3, (void *)v7, (void *)v8, a7);
  if ( (_DWORD)v9 == -38 )
    return 22;
  if ( (_DWORD)v9 == -110
    || ((_DWORD)v9 == 0 || (unsigned int)v9 >= 0xFFFFFFDD) && ((0x981002001uLL >> ((unsigned __int8)v9 + 35)) & 1) != 0 )
  {
    return (unsigned int)-(int)v9;
  }
  v11 = (__int64 *)sub_401A30("The futex facility returned an unexpected error code.\n");
  qword_4967C0 = (__int64)v11;
  __dmb(0xBu);
  v12 = *v11;
  result = v11[1];
  *(_QWORD *)(v12 + 8) = result;
  *(_QWORD *)result = v12;
  __dmb(0xBu);
  qword_4967C0 = 0;
  return result;
}
