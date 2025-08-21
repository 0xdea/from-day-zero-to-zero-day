unsigned __int64 __fastcall _libc_sigaction(int a1, _QWORD *a2, __int64 a3)
{
  int v4; // w5
  __int128 v5; // q1
  __int128 v6; // q4
  __int128 v7; // q5
  __int128 v8; // q2
  __int128 v9; // q3
  __int128 v10; // q0
  __int128 v11; // q1
  struct sigaction *v12; // x2
  unsigned __int64 result; // x0
  bool v14; // cc
  __int128 v15; // q0
  __int128 v16; // q1
  __int128 v17; // q4
  __int128 v18; // q5
  __int128 v19; // q2
  __int128 v20; // q3
  __int128 v21; // q0
  __int128 v22; // q1
  __int64 v23; // x2
  int v24; // w3
  int v25; // w1
  _QWORD v26[3]; // [xsp+8h] [xbp-138h] BYREF
  __int128 v27; // [xsp+20h] [xbp-120h]
  __int128 v28; // [xsp+30h] [xbp-110h]
  __int128 v29; // [xsp+40h] [xbp-100h]
  __int128 v30; // [xsp+50h] [xbp-F0h]
  __int128 v31; // [xsp+60h] [xbp-E0h]
  __int128 v32; // [xsp+70h] [xbp-D0h]
  __int128 v33; // [xsp+80h] [xbp-C0h]
  __int128 v34; // [xsp+90h] [xbp-B0h]
  __int64 v35; // [xsp+A0h] [xbp-A0h] BYREF
  __int64 v36; // [xsp+A8h] [xbp-98h]
  __int64 v37; // [xsp+B0h] [xbp-90h]
  __int128 v38; // [xsp+B8h] [xbp-88h]
  __int128 v39; // [xsp+C8h] [xbp-78h]
  __int128 v40; // [xsp+D8h] [xbp-68h]
  __int128 v41; // [xsp+E8h] [xbp-58h]
  __int128 v42; // [xsp+F8h] [xbp-48h]
  __int128 v43; // [xsp+108h] [xbp-38h]
  __int128 v44; // [xsp+118h] [xbp-28h]
  __int128 v45; // [xsp+128h] [xbp-18h]

  if ( a2 )
  {
    v4 = *((_DWORD *)a2 + 34);
    v26[0] = *a2;
    v26[1] = v4;
    v5 = *(_OWORD *)(a2 + 3);
    v6 = *(_OWORD *)(a2 + 5);
    v7 = *(_OWORD *)(a2 + 7);
    v8 = *(_OWORD *)(a2 + 9);
    v9 = *(_OWORD *)(a2 + 11);
    v27 = *(_OWORD *)(a2 + 1);
    v28 = v5;
    v10 = *(_OWORD *)(a2 + 13);
    v11 = *(_OWORD *)(a2 + 15);
    v29 = v6;
    v30 = v7;
    v31 = v8;
    v32 = v9;
    v33 = v10;
    v34 = v11;
    if ( (v4 & 0x4000000) != 0 )
      v26[2] = a2[18];
    v12 = 0;
    if ( a3 )
      v12 = (struct sigaction *)&v35;
    a2 = v26;
  }
  else
  {
    v12 = (struct sigaction *)&v35;
    if ( !a3 )
    {
      result = linux_eabi_syscall(__NR_rt_sigaction, a1, 0, 0);
      if ( result <= 0xFFFFFFFFFFFFF000LL )
        goto LABEL_8;
LABEL_16:
      v25 = -(int)result;
      result = 0xFFFFFFFFLL;
      *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40) = v25;
      return result;
    }
  }
  result = linux_eabi_syscall(__NR_rt_sigaction, a1, (const struct sigaction *)a2, v12);
  if ( result > 0xFFFFFFFFFFFFF000LL )
    goto LABEL_16;
LABEL_8:
  if ( a3 )
    v14 = (result & 0x80000000) != 0LL;
  else
    v14 = 1;
  if ( !v14 )
  {
    v15 = v38;
    v16 = v39;
    *(_QWORD *)a3 = v35;
    v17 = v40;
    v18 = v41;
    v19 = v42;
    v20 = v43;
    *(_OWORD *)(a3 + 8) = v15;
    *(_OWORD *)(a3 + 24) = v16;
    v21 = v44;
    v22 = v45;
    *(_OWORD *)(a3 + 40) = v17;
    *(_OWORD *)(a3 + 56) = v18;
    v24 = v36;
    v23 = v37;
    *(_OWORD *)(a3 + 72) = v19;
    *(_OWORD *)(a3 + 88) = v20;
    *(_OWORD *)(a3 + 104) = v21;
    *(_OWORD *)(a3 + 120) = v22;
    *(_DWORD *)(a3 + 136) = v24;
    *(_QWORD *)(a3 + 144) = v23;
  }
  return result;
}
