__int64 __fastcall sub_42DA40(__int64 a1)
{
  int *v1; // x5
  int v2; // w2
  unsigned int v4; // w20
  int v6; // w20
  int v7; // w0

  v1 = (int *)(a1 + 16);
  v2 = *(_DWORD *)(a1 + 16) & 0x17F;
  if ( (*(_DWORD *)(a1 + 16) & 0x7C) != 0 )
    JUMPOUT(0x42D3B0);
  if ( !v2 )
    goto LABEL_3;
  if ( v2 == 256 )
  {
    v6 = *v1;
    if ( (int)_aarch64_swp4_rel(0, (atomic_uint *)a1) > 1 )
      sub_407064(a1, v6 & 0x80);
    return 0;
  }
  if ( (*v1 & 0x7F) == 1 )
  {
    if ( *(_DWORD *)(a1 + 8) != *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) - 1856 + 0xD0) )
      return 1;
    v7 = *(_DWORD *)(a1 + 4) - 1;
    *(_DWORD *)(a1 + 4) = v7;
    if ( v7 )
      return 0;
LABEL_3:
    *(_DWORD *)(a1 + 8) = 0;
    --*(_DWORD *)(a1 + 12);
    v4 = *v1 & 0x80;
    if ( v4 || !byte_490F08 )
    {
      if ( (int)_aarch64_swp4_rel(0, (atomic_uint *)a1) > 1 )
        sub_407064(a1, v4);
    }
    else
    {
      *(_DWORD *)a1 = 0;
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
  if ( *(_DWORD *)(a1 + 8) != *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) - 1856 + 0xD0) )
    return 1;
  if ( *(_DWORD *)a1 )
    goto LABEL_3;
  return 1;
}
