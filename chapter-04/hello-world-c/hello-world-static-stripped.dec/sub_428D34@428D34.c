void __fastcall __noreturn sub_428D34(__int64 a1)
{
  _QWORD *v1; // x19
  int v3; // w0
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x3
  void *v7; // x4
  void *v8; // x5
  void *v9; // x6

  if ( (*(_DWORD *)v1 & 0x8000) == 0 )
  {
    v1 = (_QWORD *)v1[17];
    v3 = *((_DWORD *)v1 + 1);
    if ( !byte_490F08 )
      goto LABEL_6;
    if ( v3 )
      goto LABEL_9;
    *(_DWORD *)v1 = 0;
    v1[1] = 0;
  }
  while ( 1 )
  {
    v3 = sub_450A44(a1);
LABEL_6:
    if ( v3 )
    {
LABEL_9:
      *((_DWORD *)v1 + 1) = v3 - 1;
    }
    else
    {
      v1[1] = 0;
      if ( (int)_aarch64_swp4_rel(0, (atomic_uint *)v1) > 1 )
        sub_407040(v1, v4, v5, v6, v7, v8, v9);
    }
  }
}
