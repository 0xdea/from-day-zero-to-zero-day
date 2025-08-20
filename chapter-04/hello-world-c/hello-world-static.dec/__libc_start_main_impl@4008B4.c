// write access to const memory has been detected, the output may be wrong!
void __fastcall __noreturn _libc_start_main_impl(
        __int64 (__fastcall *a1)(_QWORD, __int64, char **),
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        void (*a6)(void *),
        __int64 a7)
{
  char **v9; // x0
  _QWORD *v11; // x25
  char *v12; // x24
  char **v13; // x23
  int v14; // w21
  char *StatusReg; // x0
  char v16; // w0
  unsigned __int8 v17; // w4
  __int64 v18; // x1
  __int64 v19; // x0
  __int64 (__fastcall ***v20)(); // x28
  __int64 (__fastcall **v21)(); // x4
  __int64 *v22; // x27
  char **v23; // x22
  unsigned __int64 v24; // x21
  __int64 (__fastcall *v25)(); // x3
  __int64 v28; // [xsp+78h] [xbp+78h] BYREF
  __int64 v29; // [xsp+80h] [xbp+80h]
  __int64 v30; // [xsp+88h] [xbp+88h]

  v9 = (char **)(a3 + 8LL * (int)a2 + 8);
  _libc_stack_end = a7;
  environ = v9;
  while ( *v9++ )
    ;
  dl_aux_init(v9);
  _tunables_init(environ);
  _tunable_get_val(5, &v28, 0);
  v11 = (_QWORD *)v28;
  if ( !v28 )
    goto LABEL_7;
  v12 = *(char **)(v28 + 8);
  v13 = &cpu_list;
  v14 = 0;
  while ( v13[1] != v12 || (unsigned int)memcmp(*v11, *v13, v12) )
  {
    ++v14;
    v13 += 3;
    if ( v14 == 8 )
      goto LABEL_7;
  }
  StatusReg = (&cpu_list)[3 * v14 + 2];
  if ( StatusReg == (char *)-1LL )
  {
LABEL_7:
    StatusReg = (char *)(dl_hwcap & 0x800);
    if ( (dl_hwcap & 0x800) != 0 )
      StatusReg = (char *)_ReadStatusReg(MIDR_EL1);
  }
  dl_aarch64_cpu_features = (__int64)StatusReg;
  v16 = _ReadStatusReg(DCZID_EL0);
  if ( (v16 & 0x10) == 0 )
    dword_496820 = 4 << (v16 & 0xF);
  byte_496825 = 0;
  byte_496824 = (dl_hwcap2 & 0x20000) != 0;
  _tunable_get_val(6, &v28, 0);
  v17 = v28;
  if ( (dl_hwcap2 & 0x40000) == 0 )
    v17 = 0;
  byte_496825 = v17;
  v28 = v17;
  v29 = 0;
  _tunable_set_val(6, &v28, 0, 0);
  v18 = 65527;
  if ( (byte_496825 & 4) == 0 )
  {
    v18 = 65523;
    if ( (byte_496825 & 2) == 0 )
    {
      if ( !byte_496825 )
        goto LABEL_18;
      v18 = 65525;
    }
  }
  prctl(55, v18 & 0xFFFFFFFF0000FFFFLL | 0x70000, 0, 0, 0);
LABEL_18:
  byte_496826 = (dl_hwcap & 0x400000) != 0;
  byte_496827 = (dl_hwcap2 & 0x80000000000LL) != 0;
  dl_relocate_static_pie();
  if ( &off_4001D8 < (__int64 (__fastcall ***)())init_proc )
  {
    v20 = &off_4001D8;
    do
    {
      v22 = (__int64 *)*v20;
      if ( *((_DWORD *)v20 + 2) != 1032 )
        _libc_fatal("Unexpected reloc type in static binary.\n");
      v21 = v20[2];
      v20 += 3;
      v28 = 24;
      v29 = dl_hwcap;
      v30 = dl_hwcap2;
      v19 = ((__int64 (__fastcall *)(__int64, __int64 *))v21)(dl_hwcap | 0x4000000000000000LL, &v28);
      *v22 = v19;
    }
    while ( v20 < (__int64 (__fastcall ***)())init_proc );
  }
  _libc_setup_tls(v19);
  _stack_chk_guard = *(_QWORD *)dl_random & 0xFFFFFFFFFFFFFF00LL;
  _pointer_chk_guard_local = *((_QWORD *)dl_random + 1);
  if ( a6 )
    _cxa_atexit(a6, 0, 0);
  _libc_early_init(1);
  _libc_init_first(a2, a3, environ);
  _cxa_atexit((void (*)(void *))call_fini, 0, 0);
  if ( _libc_enable_secure )
    _libc_check_standard_fds();
  v23 = environ;
  init_proc();
  if ( _do_global_dtors_aux_fini_array_entry != _init_array_start )
  {
    v24 = 0;
    do
    {
      v25 = _init_array_start[v24++];
      ((void (__fastcall *)(_QWORD, __int64, char **))v25)(a2, a3, v23);
    }
    while ( _do_global_dtors_aux_fini_array_entry - _init_array_start > v24 );
  }
  dl_debug_initialize(0, 0);
  _libc_start_call_main(a1, a2, a3);
}
