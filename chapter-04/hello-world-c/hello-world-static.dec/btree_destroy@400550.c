unsigned __int64 __fastcall btree_destroy(__int64 a1)
{
  unsigned __int64 result; // x0
  __int64 i; // x19
  __int64 v4; // x0

  result = _dl___aarch64_swp8_acq_rel(0, a1);
  if ( result )
    result = btree_release_tree_recursively(a1, result);
  for ( i = *(_QWORD *)(a1 + 8); i; *(_QWORD *)(a1 + 8) = i )
  {
    v4 = i;
    i = *(_QWORD *)(i + 24);
    result = free(v4);
  }
  return result;
}
