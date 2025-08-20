void __fastcall __noreturn _libc_start_call_main(
        __int64 (__fastcall *a1)(_QWORD, __int64, char **),
        unsigned int a2,
        __int64 a3)
{
  unsigned __int64 StatusReg; // x0
  char **v4; // x2
  int8x16_t v5; // q0
  __int64 v6; // x0
  jmp_buf env; // [xsp+30h] [xbp+30h] BYREF

  if ( !setjmp(env) )
  {
    StatusReg = _ReadStatusReg(TPIDR_EL0);
    v4 = environ;
    v5 = *(int8x16_t *)(StatusReg - 1536 + 0xFFFFFFFFFFFFFFB8LL);
    *(_QWORD *)(StatusReg - 1856 + 0x100) = env;
    *(int8x16_t *)&env[0].__saved_mask.__val[14] = vextq_s8(v5, v5, 8u);
    v6 = a1(a2, a3, v4);
    exit(v6);
  }
  _nptl_deallocate_tsd();
  if ( (unsigned int)_dl___aarch64_ldadd4_relax(0xFFFFFFFF, (atomic_uint *)&_nptl_nthreads) != 1 )
  {
    while ( 1 )
      linux_eabi_syscall(__NR_exit, 0);
  }
  exit(0);
}
