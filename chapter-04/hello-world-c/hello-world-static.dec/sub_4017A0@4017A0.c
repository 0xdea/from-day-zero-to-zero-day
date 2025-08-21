void __fastcall __noreturn sub_4017A0(__int64 a1)
{
  __int64 v1; // x20
  __int64 v3; // x19
  int v4; // w0

  if ( (*(_DWORD *)v1 & 0x8000) == 0 )
  {
    v3 = *(_QWORD *)(v1 + 136);
    v4 = *(_DWORD *)(v3 + 4);
    if ( _libc_single_threaded )
    {
      if ( !v4 )
      {
        *(_DWORD *)v3 = 0;
        *(_QWORD *)(v3 + 8) = 0;
        goto LABEL_5;
      }
      goto LABEL_9;
    }
    if ( v4 )
    {
LABEL_9:
      *(_DWORD *)(v3 + 4) = v4 - 1;
      goto LABEL_5;
    }
    *(_QWORD *)(v3 + 8) = 0;
    if ( (int)_aarch64_swp4_rel(0, (atomic_uint *)v3) > 1 )
      _lll_lock_wake_private(v3);
  }
LABEL_5:
  Unwind_Resume(a1);
}
