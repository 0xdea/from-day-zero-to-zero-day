__int64 __fastcall btree_release_tree_recursively(__int64 a1, unsigned __int64 a2)
{
  unsigned int v4; // w20
  unsigned __int64 v5; // x1
  unsigned __int64 *v6; // x21
  unsigned __int64 v7; // x20
  unsigned __int64 v8; // x0
  bool v9; // zf

  version_lock_lock_exclusive(a2);
  v4 = *(_DWORD *)(a2 + 12);
  if ( !v4 && *(_DWORD *)(a2 + 8) )
  {
    do
    {
      v5 = a2 + 16LL * v4++;
      btree_release_tree_recursively(a1, *(_QWORD *)(v5 + 24));
    }
    while ( *(_DWORD *)(a2 + 8) > v4 );
  }
  v6 = (unsigned __int64 *)(a1 + 8);
  *(_DWORD *)(a2 + 12) = 2;
  v7 = atomic_load(v6);
  do
  {
    *(_QWORD *)(a2 + 24) = v7;
    v8 = _aarch64_cas8_acq_rel(v7, a2, (atomic_ullong *)v6);
    v9 = v8 == v7;
    v7 = v8;
  }
  while ( !v9 );
  return version_lock_unlock_exclusive(a2);
}
