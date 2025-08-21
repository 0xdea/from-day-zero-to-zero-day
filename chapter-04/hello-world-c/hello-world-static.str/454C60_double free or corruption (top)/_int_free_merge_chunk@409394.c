__int64 *__fastcall int_free_merge_chunk(__int64 a1, __int64 *a2, unsigned __int64 a3)
{
  __int64 *v3; // x19
  unsigned __int64 v4; // x21
  unsigned __int64 v5; // x23
  __int64 v7; // x0
  _QWORD *v8; // x22
  unsigned __int64 v9; // x0
  __int64 v10; // x1
  __int64 v11; // x0
  __int64 *result; // x0
  __int64 v13; // x0
  __int64 v14; // x1
  __int64 v15; // x2

  v7 = *(_QWORD *)(a1 + 96);
  v8 = (__int64 *)((char *)a2 + a3);
  if ( (__int64 *)v7 == a2 )
    goto LABEL_13;
  v3 = a2;
  v4 = a3;
  if ( (*(_DWORD *)(a1 + 4) & 2) == 0 )
    goto LABEL_14;
  while ( 1 )
  {
    v9 = v8[1];
    if ( (v9 & 1) == 0 )
      goto LABEL_16;
    v5 = v9 & 0xFFFFFFFFFFFFFFF8LL;
    if ( v9 > 0x10 && *(_QWORD *)(a1 + 2184) > v5 )
      break;
    malloc_printerr("free(): invalid next size (normal)");
LABEL_13:
    v7 = malloc_printerr("double free or corruption (top)");
LABEL_14:
    if ( (unsigned __int64)v8 >= v7 + (*(_QWORD *)(v7 + 8) & 0xFFFFFFFFFFFFFFF8LL) )
    {
      malloc_printerr("double free or corruption (out)");
LABEL_16:
      malloc_printerr("double free or corruption (!prev)");
      goto LABEL_17;
    }
  }
  v10 = (unsigned int)perturb_byte;
  if ( !perturb_byte )
    goto LABEL_7;
LABEL_17:
  memset(v3 + 2, v10, v4 - 16);
LABEL_7:
  if ( (v3[1] & 1) == 0 )
  {
    v11 = *v3;
    v3 = (__int64 *)((char *)v3 - *v3);
    v4 += v11;
    if ( (v3[1] & 0xFFFFFFFFFFFFFFF8LL) != v11 )
    {
      v13 = malloc_printerr("corrupted size vs. prev_size while consolidating");
      return (__int64 *)int_free(v13, v14, v15);
    }
    unlink_chunk_isra_0(v3);
  }
  result = (__int64 *)int_free_create_chunk(a1, v3, v4, v8, v5);
  if ( (unsigned __int64)result > 0xFFFF )
    return int_free_maybe_consolidate_part_0(a1);
  return result;
}
