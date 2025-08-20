void __fastcall __noreturn sub_42909C(__int64 a1)
{
  __int64 v1; // x19
  _DWORD *v3; // x19
  int v4; // w0
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x3
  void *v8; // x4
  void *v9; // x5
  void *v10; // x6

  if ( (*(_DWORD *)v1 & 0x8000) == 0 )
  {
    v3 = *(_DWORD **)(v1 + 136);
    v4 = v3[1];
    if ( _libc_single_threaded )
    {
      if ( !v4 )
      {
        *v3 = 0;
        *((_QWORD *)v3 + 1) = 0;
        goto LABEL_5;
      }
      goto LABEL_9;
    }
    if ( v4 )
    {
LABEL_9:
      v3[1] = v4 - 1;
      goto LABEL_5;
    }
    *((_QWORD *)v3 + 1) = 0;
    if ( (int)_aarch64_swp4_rel(0, (atomic_uint *)v3) > 1 )
      _lll_lock_wake_private(v3, v5, v6, v7, v8, v9, v10);
  }
LABEL_5:
  Unwind_Resume(a1);
}
