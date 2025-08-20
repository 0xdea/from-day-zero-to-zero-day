__int64 __fastcall dl_setup_hash(__int64 result)
{
  __int64 v1; // x1
  unsigned int *v2; // x3
  unsigned int v3; // w2
  unsigned int v4; // w1
  unsigned int v5; // w5
  __int64 v6; // x1
  __int64 v7; // x1
  int *v8; // x1
  _DWORD *v9; // x1
  int v10; // t1

  v1 = *(_QWORD *)(result + 744);
  if ( v1 )
  {
    v2 = *(unsigned int **)(v1 + 8);
    if ( (*(_BYTE *)(result + 870) & 0x20) != 0 )
      v2 = (unsigned int *)((char *)v2 + *(_QWORD *)result);
    v3 = *v2;
    *(_DWORD *)(result + 828) = *v2;
    v5 = v2[1];
    v4 = v2[2];
    if ( ((v4 - 1) & v4) != 0 )
      _libc_assert_fail(
        "(bitmask_nwords & (bitmask_nwords - 1)) == 0",
        (__int64)"dl-setup_hash.c",
        0x24u,
        (__int64)"_dl_setup_hash");
    *(_DWORD *)(result + 832) = v4 - 1;
    v6 = (__int64)&v2[2 * (v4 & 0x7FFFFFFF) + 4];
    *(_DWORD *)(result + 836) = v2[3];
    *(_QWORD *)(result + 840) = v2 + 4;
    *(_QWORD *)(result + 848) = v6;
    *(_QWORD *)(result + 856) = v6 + 4 * (v3 - (unsigned __int64)v5);
  }
  else
  {
    v7 = *(_QWORD *)(result + 96);
    if ( v7 )
    {
      v8 = *(int **)(v7 + 8);
      if ( (*(_BYTE *)(result + 870) & 0x20) != 0 )
        v8 = (int *)((char *)v8 + *(_QWORD *)result);
      v10 = *v8;
      v9 = v8 + 2;
      *(_DWORD *)(result + 828) = v10;
      *(_QWORD *)(result + 856) = v9;
      *(_QWORD *)(result + 848) = &v9[v10];
    }
  }
  return result;
}
