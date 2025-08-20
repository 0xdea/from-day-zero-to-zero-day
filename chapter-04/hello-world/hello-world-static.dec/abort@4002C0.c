void __fastcall __noreturn abort(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // x20
  __int64 v5; // x2
  unsigned __int64 v6; // x1
  int v7; // w0
  __int64 v8; // x0
  sigset_t v9; // [xsp+0h] [xbp-A0h] BYREF

  v4 = _ReadStatusReg(TPIDR_EL0) - 1856;
  v5 = 0;
  if ( qword_4921F0 != v4 )
  {
    if ( _aarch64_cas4_acq(0, 1u, (atomic_uint *)&lock) )
      _lll_lock_wait_private(&lock);
    qword_4921F0 = v4;
  }
  v6 = (unsigned int)stage;
  ++dword_4921EC;
  if ( !stage )
  {
    v6 = (unsigned __int64)&v9;
    v5 = 0;
    a4 = 8;
    v9.__val[0] = 32;
    stage = 1;
    v7 = linux_eabi_syscall(__NR_rt_sigprocmask, 1, &v9, 0);
  }
  if ( stage == 1 )
  {
    stage = 0;
    if ( !--dword_4921EC )
    {
      qword_4921F0 = 0;
      if ( (int)_aarch64_swp4_rel(0, (atomic_uint *)&lock) > 1 )
        _lll_lock_wake_private(&lock);
    }
    raise(6, v6, v5, a4);
    if ( v4 != qword_4921F0 )
    {
      if ( _aarch64_cas4_acq(0, 1u, (atomic_uint *)&lock) )
        _lll_lock_wait_private(&lock);
      qword_4921F0 = v4;
    }
    ++dword_4921EC;
  }
  else if ( stage != 2 )
  {
    goto LABEL_18;
  }
  stage = 3;
  v8 = memset(&v9, 0, 152);
  v9.__val[1] = -1;
  sigaction(6, v8, 0);
LABEL_18:
  if ( stage == 3 )
  {
    stage = 4;
    raise(6, &lock, 4, a4);
  }
  if ( stage == 4 )
  {
    stage = 5;
    __break(0x3E8u);
  }
  if ( stage == 5 )
  {
    stage = 6;
    exit(127);
  }
  while ( 1 )
    __break(0x3E8u);
}
