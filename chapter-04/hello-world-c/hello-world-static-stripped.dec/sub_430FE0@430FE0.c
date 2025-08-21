unsigned __int64 __fastcall sub_430FE0(int a1, __int64 a2)
{
  unsigned __int64 result; // x0
  __int128 v3; // q0
  __int64 v4; // x6
  __int64 v5; // x7
  int v6; // w4
  int v7; // w1
  __int64 v8; // x0
  __int64 v9; // x1
  __int128 v10; // [xsp+0h] [xbp-30h] BYREF
  char v11; // [xsp+10h] [xbp-20h]
  __int64 v12; // [xsp+11h] [xbp-1Fh]
  _BYTE v13[11]; // [xsp+19h] [xbp-17h]
  __int64 v14; // [xsp+28h] [xbp-8h]

  v14 = qword_48DD60;
  result = linux_eabi_syscall(__NR_ioctl, a1, 0x5401u, &v10);
  if ( result > 0xFFFFFFFFFFFFF000LL )
  {
    v7 = -(int)result;
    result = 0xFFFFFFFFLL;
    *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40) = v7;
  }
  else if ( !(_DWORD)result )
  {
    v3 = v10;
    *(_BYTE *)(a2 + 16) = v11;
    v4 = v12;
    v5 = *(_QWORD *)v13;
    *(_OWORD *)a2 = v3;
    v6 = *(_DWORD *)&v13[7];
    *(_DWORD *)(a2 + 52) = WORD4(v3) & 0x100F;
    *(_DWORD *)(a2 + 56) = WORD4(v3) & 0x100F;
    *(_QWORD *)(a2 + 17) = v4;
    *(_QWORD *)(a2 + 25) = v5;
    *(_DWORD *)(a2 + 32) = v6;
    *(_QWORD *)(a2 + 36) = 0;
    *(_DWORD *)(a2 + 44) = 0;
    *(_BYTE *)(a2 + 48) = 0;
  }
  if ( v14 != qword_48DD60 )
  {
    v8 = sub_412340();
    return sub_4310B0(v8, v9);
  }
  return result;
}
