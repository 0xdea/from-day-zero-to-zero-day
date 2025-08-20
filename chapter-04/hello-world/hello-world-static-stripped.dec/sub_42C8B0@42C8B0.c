__int64 __fastcall sub_42C8B0(__int64 a1, void *a2, __int64 a3, __int64 a4, void *a5, void *a6, void *a7)
{
  void *v7; // x3
  __int64 v8; // x19
  void *v9; // x20
  int v10; // w0
  void *v11; // x21
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  void *v15; // x4
  void *v16; // x5
  void *v17; // x6
  double v18; // d0
  double v19; // d1
  double v20; // d2
  double v21; // d3
  double v22; // d4
  double v23; // d5
  double v24; // d6
  double v25; // d7
  unsigned int v26; // w19
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x3
  void *v30; // x4
  void *v31; // x5
  void *v32; // x6
  int v33; // w0
  void *v34; // x19
  int v35; // w0
  void *v36; // x3
  void *v37; // x4
  void *v38; // x5
  void *v39; // x6
  signed __int64 v40; // x0
  signed __int64 v41; // x0
  void *v42; // x19
  int v43; // w0
  void *v44; // x3
  void *v45; // x4
  void *v46; // x5
  void *v47; // x6
  signed __int64 v48; // x0
  _QWORD *v49; // x21
  _QWORD *v50; // x29
  __int64 v51; // x30
  __int64 v53; // [xsp+10h] [xbp-30h] BYREF
  __int64 v54; // [xsp+18h] [xbp-28h]
  _QWORD v55[2]; // [xsp+20h] [xbp-20h] BYREF
  _QWORD *vars0; // [xsp+40h] [xbp+0h]
  __int64 vars8; // [xsp+48h] [xbp+8h]

  if ( (unsigned int)((_DWORD)a2 - 32) <= 1 )
    return 22;
  v50 = vars0;
  v51 = vars8;
  while ( 1 )
  {
    v7 = (void *)(_ReadStatusReg(TPIDR_EL0) - 1856);
    v55[0] = v50;
    v55[1] = v51;
    v50 = v55;
    v8 = a1;
    v9 = (void *)(int)a2;
    v54 = qword_48DD60;
    if ( (void *)a1 == v7 )
    {
      v41 = linux_eabi_syscall(__NR_gettid, 0, a2, &qword_48DD60, v7, a5, a6, a7);
      v42 = (void *)(int)v41;
      v43 = sub_430400();
      v48 = linux_eabi_syscall(__NR_tgkill, (void *)v43, v42, v9, v44, v45, v46, v47);
      v26 = (unsigned int)v48 > 0xFFFFF000 ? -(int)v48 : 0;
    }
    else
    {
      vars0 = v49;
      v10 = linux_eabi_syscall(__NR_rt_sigprocmask, 0, (const sigset_t *)&unk_45A8D0, (sigset_t *)&v53);
      v11 = (void *)(v8 + 1796);
      if ( _aarch64_cas4_acq(0, 1u, (atomic_uint *)(v8 + 1796)) )
        sub_406F40((_DWORD *)(v8 + 1796), v18, v19, v20, v21, v22, v23, v24, v25, v12, v13, v14, v15, v16, v17);
      if ( (*(_BYTE *)(v8 + 1793) & 1) != 0
        || (v34 = (void *)*(int *)(v8 + 208),
            v35 = sub_430400(),
            v40 = linux_eabi_syscall(__NR_tgkill, (void *)v35, v34, v9, v36, v37, v38, v39),
            (unsigned int)v40 <= 0xFFFFF000) )
      {
        v26 = 0;
      }
      else
      {
        v26 = -(int)v40;
      }
      if ( (int)_aarch64_swp4_rel(0, (atomic_uint *)v11) > 1 )
        sub_407040(v11, v27, v28, v29, v30, v31, v32);
      v33 = linux_eabi_syscall(__NR_rt_sigprocmask, 2, (const sigset_t *)&v53, 0);
      v49 = vars0;
    }
    if ( v54 == qword_48DD60 )
      break;
    vars0 = v49;
    a1 = sub_412340();
  }
  return v26;
}
