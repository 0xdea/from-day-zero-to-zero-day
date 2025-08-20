__int64 __fastcall _pthread_kill_implementation_constprop_0(
        __int64 a1,
        void *a2,
        __int64 a3,
        __int64 a4,
        void *a5,
        void *a6,
        void *a7)
{
  void *v7; // x3
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
  void *v35; // x19
  int v36; // w0
  void *v37; // x3
  void *v38; // x4
  void *v39; // x5
  void *v40; // x6
  signed __int64 v41; // x0
  signed __int64 v42; // x0
  void *v43; // x19
  int v44; // w0
  void *v45; // x3
  void *v46; // x4
  void *v47; // x5
  void *v48; // x6
  signed __int64 v49; // x0
  __int64 v50; // [xsp+0h] [xbp-10h] BYREF

  v7 = (void *)(_ReadStatusReg(TPIDR_EL0) - 1856);
  v9 = (void *)(int)a2;
  if ( (void *)a1 == v7 )
  {
    v42 = linux_eabi_syscall(__NR_gettid, 0, a2, &_stack_chk_guard, v7, a5, a6, a7);
    v43 = (void *)(int)v42;
    v44 = getpid();
    v49 = linux_eabi_syscall(__NR_tgkill, (void *)v44, v43, v9, v45, v46, v47, v48);
    if ( (unsigned int)v49 > 0xFFFFF000 )
      return (unsigned int)-(int)v49;
    else
      return 0;
  }
  else
  {
    v10 = linux_eabi_syscall(__NR_rt_sigprocmask, 0, (const sigset_t *)&sigall_set, (sigset_t *)&v50);
    v11 = (void *)(a1 + 1796);
    if ( _aarch64_cas4_acq(0, 1u, (atomic_uint *)(a1 + 1796)) )
      _lll_lock_wait_private(
        (_DWORD *)(a1 + 1796),
        v18,
        v19,
        v20,
        v21,
        v22,
        v23,
        v24,
        v25,
        v12,
        v13,
        v14,
        v15,
        v16,
        v17);
    if ( (*(_BYTE *)(a1 + 1793) & 1) != 0
      || (v35 = (void *)*(int *)(a1 + 208),
          v36 = getpid(),
          v41 = linux_eabi_syscall(__NR_tgkill, (void *)v36, v35, v9, v37, v38, v39, v40),
          (unsigned int)v41 <= 0xFFFFF000) )
    {
      v26 = 0;
    }
    else
    {
      v26 = -(int)v41;
    }
    if ( (int)_aarch64_swp4_rel(0, (atomic_uint *)v11) > 1 )
      _lll_lock_wake_private(v11, v27, v28, v29, v30, v31, v32);
    v33 = linux_eabi_syscall(__NR_rt_sigprocmask, 2, (const sigset_t *)&v50, 0);
  }
  return v26;
}
