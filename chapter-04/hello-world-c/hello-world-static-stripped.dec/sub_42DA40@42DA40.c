__int64 __fastcall sub_42DA40(int *a1)
{
  int *v1; // x5
  int v2; // w2
  int v4; // w20
  __int64 v6; // x2
  __int64 v7; // x3
  void *v8; // x4
  void *v9; // x5
  void *v10; // x6
  int v11; // w20
  __int64 v12; // x2
  __int64 v13; // x3
  void *v14; // x4
  void *v15; // x5
  void *v16; // x6
  int v17; // w0

  v1 = a1 + 4;
  v2 = a1[4] & 0x17F;
  if ( (a1[4] & 0x7C) != 0 )
    JUMPOUT(0x42D3B0);
  if ( !v2 )
    goto LABEL_3;
  if ( v2 == 256 )
  {
    v11 = *v1;
    if ( (int)_aarch64_swp4_rel(0, (atomic_uint *)a1) > 1 )
      sub_407064(a1, v11 & 0x80, v12, v13, v14, v15, v16);
    return 0;
  }
  if ( (*v1 & 0x7F) == 1 )
  {
    if ( a1[2] != *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) - 1856 + 0xD0) )
      return 1;
    v17 = a1[1] - 1;
    a1[1] = v17;
    if ( v17 )
      return 0;
LABEL_3:
    a1[2] = 0;
    --a1[3];
    v4 = *v1 & 0x80;
    if ( v4 || !byte_490F08 )
    {
      if ( (int)_aarch64_swp4_rel(0, (atomic_uint *)a1) > 1 )
        sub_407064(a1, v4, v6, v7, v8, v9, v10);
    }
    else
    {
      *a1 = 0;
    }
    return 0;
  }
  if ( (*v1 & 0x7F) == 3 )
    goto LABEL_3;
  if ( v2 != 2 )
    sub_41F250(
      "type == PTHREAD_MUTEX_ERRORCHECK_NP",
      (__int64)"pthread_mutex_unlock.c",
      0x62u,
      (__int64)"__pthread_mutex_unlock_usercnt");
  if ( a1[2] != *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) - 1856 + 0xD0) )
    return 1;
  if ( *a1 )
    goto LABEL_3;
  return 1;
}
