__int64 __fastcall _gconv_find_transform(__int64 a1, __int64 a2, _QWORD *a3, unsigned __int64 *a4, unsigned int a5)
{
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  void *v13; // x4
  void *v14; // x5
  void *v15; // x6
  double v16; // d0
  double v17; // d1
  double v18; // d2
  double v19; // d3
  double v20; // d4
  double v21; // d5
  double v22; // d6
  double v23; // d7
  unsigned int derivation; // w20
  __int64 v25; // x0
  __int64 v26; // x26
  __int64 v27; // x0
  __int64 v28; // x20
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  void *v32; // x4
  void *v33; // x5
  void *v34; // x6
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x3
  void *v39; // x4
  void *v40; // x5
  void *v41; // x6
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x3
  void *v45; // x4
  void *v46; // x5
  void *v47; // x6
  _QWORD v48[2]; // [xsp+8h] [xbp-18h] BYREF

  _gconv_load_conf();
  if ( _aarch64_cas4_acq(0, 1u, (atomic_uint *)_gconv_lock) )
    _lll_lock_wait_private(_gconv_lock, v16, v17, v18, v19, v20, v21, v22, v23, v10, v11, v12, v13, v14, v15);
  derivation = _gconv_lookup_cache(a1, a2, a3, a4, a5);
  if ( derivation != 2 )
  {
    if ( (int)_aarch64_swp4_rel(0, (atomic_uint *)_gconv_lock) <= 1 )
      return derivation;
LABEL_15:
    _lll_lock_wake_private(_gconv_lock, v36, v37, v38, v39, v40, v41);
    return derivation;
  }
  if ( !_gconv_modules_db )
  {
    derivation = 1;
    if ( (int)_aarch64_swp4_rel(0, (atomic_uint *)_gconv_lock) <= 1 )
      return derivation;
    goto LABEL_15;
  }
  v48[0] = a2;
  v25 = tfind(v48, &_gconv_alias_db, _gconv_alias_compare);
  v26 = v25;
  if ( v25 )
    v26 = *(_QWORD *)(*(_QWORD *)v25 + 8LL);
  v48[0] = a1;
  v27 = tfind(v48, &_gconv_alias_db, _gconv_alias_compare);
  v28 = v27;
  if ( v27 )
    v28 = *(_QWORD *)(*(_QWORD *)v27 + 8LL);
  if ( (a5 & 1) == 0
    || (unsigned int)strcmp(a1, a2)
    && (!v28 || (unsigned int)strcmp(v28, a2))
    && (!v26 || (unsigned int)strcmp(a1, v26) && (!v28 || (unsigned int)strcmp(v28, v26))) )
  {
    derivation = find_derivation(a1, v28, a2, v26, a3, a4);
    if ( (int)_aarch64_swp4_rel(0, (atomic_uint *)_gconv_lock) > 1 )
    {
      _lll_lock_wake_private(_gconv_lock, v29, v30, v31, v32, v33, v34);
      if ( derivation )
        return derivation;
    }
    else if ( derivation )
    {
      return derivation;
    }
    return *a3 == 0;
  }
  if ( (int)_aarch64_swp4_rel(0, (atomic_uint *)_gconv_lock) > 1 )
    _lll_lock_wake_private(_gconv_lock, v42, v43, v44, v45, v46, v47);
  return (unsigned int)-1;
}
