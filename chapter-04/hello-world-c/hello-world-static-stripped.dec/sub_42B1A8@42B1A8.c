void __fastcall sub_42B1A8(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12)
{
  _DWORD *v12; // x19
  __int64 v13; // x21
  int v15; // w0
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  void *v19; // x4
  void *v20; // x5
  void *v21; // x6

  if ( (*(_DWORD *)v13 & 0x8000) == 0 )
  {
    v12 = *(_DWORD **)(v13 + 136);
    v15 = v12[1];
    if ( !byte_490F08 )
      goto LABEL_7;
    if ( v15 )
      goto LABEL_10;
    *v12 = 0;
    *((_QWORD *)v12 + 1) = 0;
  }
  while ( 1 )
  {
    if ( a12 != qword_48DD60 )
      JUMPOUT(0x42B18C);
    v15 = sub_450A44(a1);
LABEL_7:
    if ( v15 )
    {
LABEL_10:
      v12[1] = v15 - 1;
    }
    else
    {
      *((_QWORD *)v12 + 1) = 0;
      if ( (int)_aarch64_swp4_rel(0, (atomic_uint *)v12) > 1 )
        sub_407040(v12, v16, v17, v18, v19, v20, v21);
    }
  }
}
