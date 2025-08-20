__int64 __fastcall unsetenv(_BYTE *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // x22
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x3
  void *v8; // x4
  void *v9; // x5
  void *v10; // x6
  double v11; // d0
  double v12; // d1
  double v13; // d2
  double v14; // d3
  double v15; // d4
  double v16; // d5
  double v17; // d6
  double v18; // d7
  char **v19; // x20
  char *v20; // x19
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  void *v24; // x4
  void *v25; // x5
  void *v26; // x6
  __int64 result; // x0
  char **v28; // x3
  char *v29; // x4

  if ( a1 && *a1 && !strchr(a1, 61, a3) )
  {
    v4 = strlen(a1);
    if ( _aarch64_cas4_acq(0, 1u, (atomic_uint *)envlock) )
      _lll_lock_wait_private(envlock, v11, v12, v13, v14, v15, v16, v17, v18, v5, v6, v7, v8, v9, v10);
    v19 = environ;
    if ( environ )
    {
      while ( 1 )
      {
        v20 = *v19;
        if ( !*v19 )
          break;
        while ( (unsigned int)strncmp(v20, a1, v4) || v20[v4] != 61 )
        {
          v20 = v19[1];
          ++v19;
          if ( !v20 )
            goto LABEL_11;
        }
        v28 = v19;
        do
        {
          v29 = v28[1];
          *v28++ = v29;
        }
        while ( v29 );
      }
    }
LABEL_11:
    if ( (int)_aarch64_swp4_rel(0, (atomic_uint *)envlock) > 1 )
      _lll_lock_wake_private(envlock, v21, v22, v23, v24, v25, v26);
    return 0;
  }
  else
  {
    result = 0xFFFFFFFFLL;
    *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40) = 22;
  }
  return result;
}
