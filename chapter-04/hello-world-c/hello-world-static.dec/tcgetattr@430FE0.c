unsigned __int64 __fastcall tcgetattr(int a1, __int64 a2)
{
  unsigned __int64 result; // x0
  __int128 v3; // q0
  __int64 v4; // x6
  __int64 v5; // x7
  int v6; // w4
  int v7; // w1
  __int128 v8; // [xsp+0h] [xbp-30h] BYREF
  char v9; // [xsp+10h] [xbp-20h]
  __int64 v10; // [xsp+11h] [xbp-1Fh]
  _BYTE v11[11]; // [xsp+19h] [xbp-17h]

  result = linux_eabi_syscall(__NR_ioctl, a1, 0x5401u, &v8);
  if ( result > 0xFFFFFFFFFFFFF000LL )
  {
    v7 = -(int)result;
    result = 0xFFFFFFFFLL;
    *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40) = v7;
  }
  else if ( !(_DWORD)result )
  {
    v3 = v8;
    *(_BYTE *)(a2 + 16) = v9;
    v4 = v10;
    v5 = *(_QWORD *)v11;
    *(_OWORD *)a2 = v3;
    v6 = *(_DWORD *)&v11[7];
    *(_DWORD *)(a2 + 52) = WORD4(v3) & 0x100F;
    *(_DWORD *)(a2 + 56) = WORD4(v3) & 0x100F;
    *(_QWORD *)(a2 + 17) = v4;
    *(_QWORD *)(a2 + 25) = v5;
    *(_DWORD *)(a2 + 32) = v6;
    *(_QWORD *)(a2 + 36) = 0;
    *(_DWORD *)(a2 + 44) = 0;
    *(_BYTE *)(a2 + 48) = 0;
  }
  return result;
}
