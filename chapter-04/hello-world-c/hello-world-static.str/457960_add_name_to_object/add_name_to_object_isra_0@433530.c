__int64 __fastcall add_name_to_object_isra_0(_QWORD *a1, const char *a2)
{
  _QWORD *v3; // x19
  __int64 result; // x0
  __int64 v5; // x0
  __int64 v6; // x1
  __int16 *v7; // x2
  __int64 v8; // x3
  __int64 v9; // x4
  __int64 v10; // x5
  __int64 v11; // x0
  unsigned __int64 v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1
  __int16 *v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  __int64 v18; // x5

  v3 = a1;
  if ( !a1 )
  {
    v13 = strlen(a2);
    if ( malloc(v13 + 25, v14, v15, v16, v17, v18) )
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
    v3 = (_QWORD *)v3[1];
  }
  v5 = strlen(a2);
  v11 = malloc(v5 + 25, v6, v7, v8, v9, v10);
  v12 = v11;
  if ( !v11 )
LABEL_10:
    dl_signal_error(12, a2, 0, "cannot allocate name record");
  result = j_memcpy(v11 + 24);
  *(_QWORD *)v12 = result;
  *(_QWORD *)(v12 + 8) = 0;
  *(_DWORD *)(v12 + 16) = 0;
  atomic_store(v12, v3 + 1);
  return result;
}
