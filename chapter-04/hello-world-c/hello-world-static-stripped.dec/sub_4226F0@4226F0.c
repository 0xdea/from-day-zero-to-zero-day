unsigned __int64 __fastcall sub_4226F0(int a1, _QWORD *a2, __int64 a3)
{
  unsigned __int64 result; // x0
  int v5; // w5
  __int128 v6; // q1
  __int128 v7; // q4
  __int128 v8; // q5
  __int128 v9; // q2
  __int128 v10; // q3
  __int128 v11; // q0
  __int128 v12; // q1
  struct sigaction *v13; // x2
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
  __int64 v26; // x0
  _QWORD v27[3]; // [xsp+8h] [xbp-138h] BYREF
  __int128 v28; // [xsp+20h] [xbp-120h]
  __int128 v29; // [xsp+30h] [xbp-110h]
  __int128 v30; // [xsp+40h] [xbp-100h]
  __int128 v31; // [xsp+50h] [xbp-F0h]
  __int128 v32; // [xsp+60h] [xbp-E0h]
  __int128 v33; // [xsp+70h] [xbp-D0h]
  __int128 v34; // [xsp+80h] [xbp-C0h]
  __int128 v35; // [xsp+90h] [xbp-B0h]
  __int64 v36; // [xsp+A0h] [xbp-A0h] BYREF
  __int64 v37; // [xsp+A8h] [xbp-98h]
  __int64 v38; // [xsp+B0h] [xbp-90h]
  __int128 v39; // [xsp+B8h] [xbp-88h]
  __int128 v40; // [xsp+C8h] [xbp-78h]
  __int128 v41; // [xsp+D8h] [xbp-68h]
  __int128 v42; // [xsp+E8h] [xbp-58h]
  __int128 v43; // [xsp+F8h] [xbp-48h]
  __int128 v44; // [xsp+108h] [xbp-38h]
  __int128 v45; // [xsp+118h] [xbp-28h]
  __int128 v46; // [xsp+128h] [xbp-18h]
  __int64 v47; // [xsp+138h] [xbp-8h]

  if ( (unsigned int)(a1 - 1) > 0x3F || (unsigned int)(a1 - 32) <= 1 )
  {
    *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40) = 22;
    return 0xFFFFFFFFLL;
  }
  v47 = qword_48DD60;
  if ( a2 )
  {
    v5 = *((_DWORD *)a2 + 34);
    v27[0] = *a2;
    v27[1] = v5;
    v6 = *(_OWORD *)(a2 + 3);
    v7 = *(_OWORD *)(a2 + 5);
    v8 = *(_OWORD *)(a2 + 7);
    v9 = *(_OWORD *)(a2 + 9);
    v10 = *(_OWORD *)(a2 + 11);
    v28 = *(_OWORD *)(a2 + 1);
    v29 = v6;
    v11 = *(_OWORD *)(a2 + 13);
    v12 = *(_OWORD *)(a2 + 15);
    v30 = v7;
    v31 = v8;
    v32 = v9;
    v33 = v10;
    v34 = v11;
    v35 = v12;
    if ( (v5 & 0x4000000) != 0 )
      v27[2] = a2[18];
    v13 = 0;
    if ( a3 )
      v13 = (struct sigaction *)&v36;
    a2 = v27;
  }
  else
  {
    v13 = (struct sigaction *)&v36;
    if ( !a3 )
    {
      result = linux_eabi_syscall(__NR_rt_sigaction, a1, 0, 0);
      if ( result <= 0xFFFFFFFFFFFFF000LL )
        goto LABEL_11;
      goto LABEL_20;
    }
  }
  result = linux_eabi_syscall(__NR_rt_sigaction, a1, (const struct sigaction *)a2, v13);
  if ( result <= 0xFFFFFFFFFFFFF000LL )
  {
LABEL_11:
    if ( a3 )
      v14 = (result & 0x80000000) != 0LL;
    else
      v14 = 1;
    if ( !v14 )
    {
      v15 = v39;
      v16 = v40;
      *(_QWORD *)a3 = v36;
      v17 = v41;
      v18 = v42;
      v19 = v43;
      v20 = v44;
      *(_OWORD *)(a3 + 8) = v15;
      *(_OWORD *)(a3 + 24) = v16;
      v21 = v45;
      v22 = v46;
      *(_OWORD *)(a3 + 40) = v17;
      *(_OWORD *)(a3 + 56) = v18;
      v24 = v37;
      v23 = v38;
      *(_OWORD *)(a3 + 72) = v19;
      *(_OWORD *)(a3 + 88) = v20;
      *(_OWORD *)(a3 + 104) = v21;
      *(_OWORD *)(a3 + 120) = v22;
      *(_DWORD *)(a3 + 136) = v24;
      *(_QWORD *)(a3 + 144) = v23;
    }
    goto LABEL_16;
  }
LABEL_20:
  v25 = -(int)result;
  result = 0xFFFFFFFFLL;
  *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40) = v25;
LABEL_16:
  if ( v47 != qword_48DD60 )
  {
    v26 = sub_412340();
    return sub_422890(v26);
  }
  return result;
}
