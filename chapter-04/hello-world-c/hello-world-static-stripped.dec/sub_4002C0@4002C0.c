void __fastcall __noreturn sub_4002C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // x20
  __int64 v5; // x2
  unsigned __int64 v6; // x1
  int v7; // w0
  __int64 v8; // x0
  sigset_t v9; // [xsp+0h] [xbp-A0h] BYREF
  __int64 v10; // [xsp+98h] [xbp-8h]

  v4 = _ReadStatusReg(TPIDR_EL0) - 1856;
  v10 = qword_48DD60;
  v5 = 0;
  if ( qword_4921F0 != v4 )
  {
    if ( _aarch64_cas4_acq(0, 1u, (atomic_uint *)&unk_4921E8) )
      sub_406F40(&unk_4921E8);
    qword_4921F0 = v4;
  }
  v6 = (unsigned int)dword_4921F8;
  ++dword_4921EC;
  if ( !dword_4921F8 )
  {
    v6 = (unsigned __int64)&v9;
    v5 = 0;
    a4 = 8;
    v9.__val[0] = 32;
    dword_4921F8 = 1;
    v7 = linux_eabi_syscall(__NR_rt_sigprocmask, 1, &v9, 0);
  }
  if ( dword_4921F8 == 1 )
  {
    dword_4921F8 = 0;
    if ( !--dword_4921EC )
    {
      qword_4921F0 = 0;
      if ( (int)_aarch64_swp4_rel(0, (atomic_uint *)&unk_4921E8) > 1 )
        sub_407040(&unk_4921E8);
    }
    sub_4226A0(6, v6, v5, a4);
    if ( v4 != qword_4921F0 )
    {
      if ( _aarch64_cas4_acq(0, 1u, (atomic_uint *)&unk_4921E8) )
        sub_406F40(&unk_4921E8);
      qword_4921F0 = v4;
    }
    ++dword_4921EC;
  }
  else if ( dword_4921F8 != 2 )
  {
    goto LABEL_18;
  }
  dword_4921F8 = 3;
  v8 = ifunc_40DE70(&v9, 0, 152);
  v9.__val[1] = -1;
  sub_4226F0(6, v8, 0);
LABEL_18:
  if ( dword_4921F8 == 3 )
  {
    dword_4921F8 = 4;
    sub_4226A0(6, &unk_4921E8, 4, a4);
  }
  if ( dword_4921F8 == 4 )
  {
    dword_4921F8 = 5;
    __break(0x3E8u);
  }
  if ( dword_4921F8 == 5 )
  {
    dword_4921F8 = 6;
    sub_4108D0(127);
  }
  while ( 1 )
    __break(0x3E8u);
}
