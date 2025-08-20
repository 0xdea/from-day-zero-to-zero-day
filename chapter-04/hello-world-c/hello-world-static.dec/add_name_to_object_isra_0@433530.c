unsigned __int64 __fastcall add_name_to_object_isra_0(unsigned __int64 *a1, unsigned __int64 *a2)
{
  unsigned __int64 *v3; // x19
  unsigned __int64 result; // x0
  __int64 v5; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x3
  void *v9; // x4
  void *v10; // x5
  void *v11; // x6
  double v12; // d0
  double v13; // d1
  double v14; // d2
  double v15; // d3
  double v16; // d4
  double v17; // d5
  double v18; // d6
  double v19; // d7
  __int64 v20; // x0
  unsigned __int64 v21; // x21
  __int64 v22; // x0
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  void *v26; // x4
  void *v27; // x5
  void *v28; // x6
  double v29; // d0
  double v30; // d1
  double v31; // d2
  double v32; // d3
  double v33; // d4
  double v34; // d5
  double v35; // d6
  double v36; // d7

  v3 = a1;
  if ( !a1 )
  {
    v22 = strlen(a2);
    if ( malloc(v22 + 25, v29, v30, v31, v32, v33, v34, v35, v36, v23, v24, v25, v26, v27, v28) )
      _libc_assert_fail("lastp != NULL", (__int64)"dl-load.c", 0x1B6u, (__int64)"add_name_to_object");
    goto LABEL_10;
  }
  while ( 1 )
  {
    result = strcmp(a2, *v3);
    if ( !(_DWORD)result )
      return result;
    if ( !v3[1] )
      break;
    v3 = (unsigned __int64 *)v3[1];
  }
  v5 = strlen(a2);
  v20 = malloc(v5 + 25, v12, v13, v14, v15, v16, v17, v18, v19, v6, v7, v8, v9, v10, v11);
  v21 = v20;
  if ( !v20 )
LABEL_10:
    dl_signal_error(12, (const char *)a2, 0, "cannot allocate name record");
  result = j_memcpy(v20 + 24);
  *(_QWORD *)v21 = result;
  *(_QWORD *)(v21 + 8) = 0;
  *(_DWORD *)(v21 + 16) = 0;
  atomic_store(v21, v3 + 1);
  return result;
}
