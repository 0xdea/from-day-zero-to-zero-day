void __fastcall __noreturn sub_4017A0(__int64 a1)
{
  __int64 v1; // x19
  __int64 v2; // x20
  int v4; // w0

  if ( (*(_DWORD *)v2 & 0x8000) == 0 )
  {
    v1 = *(_QWORD *)(v2 + 136);
    v4 = *(_DWORD *)(v1 + 4);
    if ( !byte_490F08 )
      goto LABEL_6;
    if ( v4 )
      goto LABEL_9;
    *(_DWORD *)v1 = 0;
    *(_QWORD *)(v1 + 8) = 0;
  }
  while ( 1 )
  {
    v4 = sub_450A44(a1);
LABEL_6:
    if ( v4 )
    {
LABEL_9:
      *(_DWORD *)(v1 + 4) = v4 - 1;
    }
    else
    {
      *(_QWORD *)(v1 + 8) = 0;
      if ( (int)_aarch64_swp4_rel(0, (atomic_uint *)v1) > 1 )
        sub_407040(v1);
    }
  }
}
