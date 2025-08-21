// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall _tls_init_tp(__int64 a1, __int64 a2, __int64 a3, __int64 a4, void *a5, void *a6, void *a7)
{
  unsigned __int64 StatusReg; // x20
  unsigned __int64 v8; // x3
  __int64 v9; // x0
  unsigned __int64 v10; // x19
  signed __int64 v11; // x0
  unsigned __int64 v12; // x4
  signed __int64 v13; // x0
  void *v14; // x4
  void *v15; // x5
  void *v16; // x6
  signed __int64 v17; // x0
  __int64 result; // x0
  int v19; // [xsp+2Ch] [xbp+2Ch] BYREF

  StatusReg = _ReadStatusReg(TPIDR_EL0);
  v8 = StatusReg - 1536;
  v9 = dl_stack_user;
  *(_QWORD *)(v8 + 0xFFFFFFFFFFFFFF80LL) = dl_stack_user;
  *(_QWORD *)(v8 + 0xFFFFFFFFFFFFFF80LL + 8) = &dl_stack_user;
  v10 = StatusReg - 1856;
  *(_QWORD *)(v9 + 8) = StatusReg - 1664;
  __dmb(0xBu);
  dl_stack_user = StatusReg - 1664;
  v11 = linux_eabi_syscall(
          __NR_set_tid_address,
          (void *)(StatusReg - 1648),
          &dl_stack_user,
          (void *)(StatusReg - 1664),
          (void *)(StatusReg - 1536),
          a5,
          a6,
          a7);
  v12 = (unsigned __int8)_nptl_initial_report_events;
  *(_DWORD *)(v10 + 0xD0) = v11;
  *(_QWORD *)(v10 + 0xD8) = StatusReg - 1632;
  *(_QWORD *)(v10 + 0xD8 + 8) = StatusReg - 1632;
  *(_QWORD *)(v10 + 0xE8) = -32;
  *(_QWORD *)(v10 + 0x310) = StatusReg - 1584;
  *(_BYTE *)(v10 + 0x411) = v12;
  *(_BYTE *)(v10 + 0x412) = 1;
  v13 = linux_eabi_syscall(
          __NR_set_robust_list,
          (void *)(StatusReg - 1632),
          (void *)0x18,
          (void *)(StatusReg - 1632),
          (void *)1,
          (void *)v12,
          (void *)(StatusReg - 1584),
          (void *)0xFFFFFFFFFFFFFFE0LL);
  _tunable_get_val(4u, (char **)&v19, 0);
  if ( v19
    && (v17 = linux_eabi_syscall(293, (void *)(StatusReg - 32), (void *)0x20, 0, (void *)0xD428BC00LL, v14, v15, v16),
        (unsigned int)v17 <= 0xFFFFF000) )
  {
    _rseq_size = 32;
  }
  else
  {
    *(_DWORD *)(v10 + 0x724) = -2;
  }
  _rseq_offset = -32;
  result = _libc_stack_end;
  *(_QWORD *)(v10 + 0x498) = _libc_stack_end;
  return result;
}
