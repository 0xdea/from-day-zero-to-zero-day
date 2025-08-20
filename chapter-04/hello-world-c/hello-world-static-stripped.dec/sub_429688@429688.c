void __fastcall __noreturn sub_429688(__int64 a1)
{
  _DWORD *v1; // x19
  __int64 v2; // x20
  int v4; // w0
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x3
  void *v8; // x4
  void *v9; // x5
  void *v10; // x6

  if ( (*(_DWORD *)v2 & 0x8000) == 0 )
  {
    v1 = *(_DWORD **)(v2 + 136);
    v4 = v1[1];
    if ( !byte_490F08 )
      goto LABEL_6;
    if ( v4 )
      goto LABEL_9;
    *v1 = 0;
    *((_QWORD *)v1 + 1) = 0;
  }
  while ( 1 )
  {
    v4 = sub_450A44(a1);
LABEL_6:
    if ( v4 )
    {
LABEL_9:
      v1[1] = v4 - 1;
    }
    else
    {
      *((_QWORD *)v1 + 1) = 0;
      if ( (int)_aarch64_swp4_rel(0, (atomic_uint *)v1) > 1 )
        sub_407040(v1, v5, v6, v7, v8, v9, v10);
    }
  }
}
