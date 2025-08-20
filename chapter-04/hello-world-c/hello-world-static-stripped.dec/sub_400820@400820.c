void __fastcall __noreturn sub_400820(__int64 (__fastcall *a1)(_QWORD, __int64, __int64), unsigned int a2, __int64 a3)
{
  unsigned __int64 StatusReg; // x0
  __int64 v4; // x2
  int8x16_t v5; // q0
  __int64 v6; // x0
  _BYTE v10[184]; // [xsp+30h] [xbp+30h] BYREF
  int8x16_t v11; // [xsp+E8h] [xbp+E8h]

  if ( !(unsigned int)sub_401000(v10) )
  {
    StatusReg = _ReadStatusReg(TPIDR_EL0);
    v4 = qword_4966D8;
    v5 = *(int8x16_t *)(StatusReg - 1536 + 0xFFFFFFFFFFFFFFB8LL);
    *(_QWORD *)(StatusReg - 1856 + 0x100) = v10;
    v11 = vextq_s8(v5, v5, 8u);
    v6 = a1(a2, a3, v4);
    sub_4015A0(v6);
  }
  sub_407090();
  if ( (unsigned int)_dl___aarch64_ldadd4_relax(0xFFFFFFFF, (atomic_uint *)&unk_4905C8) != 1 )
  {
    while ( 1 )
      linux_eabi_syscall(__NR_exit, 0);
  }
  sub_4015A0(0);
}
