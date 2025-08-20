__int64 clearenv()
{
  __int64 v0; // x1
  __int64 v1; // x2
  __int64 v2; // x3
  void *v3; // x4
  void *v4; // x5
  void *v5; // x6
  double v6; // d0
  double v7; // d1
  double v8; // d2
  double v9; // d3
  double v10; // d4
  double v11; // d5
  double v12; // d6
  double v13; // d7
  bool v14; // zf
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  void *v18; // x4
  void *v19; // x5
  void *v20; // x6

  if ( _aarch64_cas4_acq(0, 1u, (atomic_uint *)envlock) )
    _lll_lock_wait_private(envlock, v6, v7, v8, v9, v10, v11, v12, v13, v0, v1, v2, v3, v4, v5);
  if ( environ )
    v14 = last_environ == (_QWORD)environ;
  else
    v14 = 0;
  if ( v14 )
  {
    free((__int64)environ, v6, v7, v8, v9, v10, v11, v12, v13);
    environ = 0;
    last_environ = 0;
    if ( (int)_aarch64_swp4_rel(0, (atomic_uint *)envlock) <= 1 )
      return 0;
  }
  else
  {
    environ = 0;
    if ( (int)_aarch64_swp4_rel(0, (atomic_uint *)envlock) <= 1 )
      return 0;
  }
  _lll_lock_wake_private(envlock, v15, v16, v17, v18, v19, v20);
  return 0;
}
