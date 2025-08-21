unsigned __int64 __fastcall int_free_create_chunk(__int64 a1, _QWORD *a2, unsigned __int64 a3, _QWORD *a4, __int64 a5)
{
  unsigned __int64 result; // x0
  __int64 v10; // x1
  __int64 v11; // x0

  if ( *(_QWORD **)(a1 + 96) == a4 )
  {
    result = a3 + a5;
    a2[1] = (a3 + a5) | 1;
    *(_QWORD *)(a1 + 96) = a2;
  }
  else
  {
    if ( (*(_QWORD *)((char *)a4 + a5 + 8) & 1) != 0 )
    {
      result = a3;
      a4[1] &= ~1uLL;
    }
    else
    {
      unlink_chunk_isra_0(a4);
      result = a3 + a5;
    }
    v10 = *(_QWORD *)(a1 + 112);
    if ( *(_QWORD *)(v10 + 24) == a1 + 96 )
    {
      a2[2] = v10;
      a2[3] = a1 + 96;
      if ( result > 0x3FF )
      {
        a2[4] = 0;
        a2[5] = 0;
      }
      *(_QWORD *)(a1 + 112) = a2;
      *(_QWORD *)(v10 + 24) = a2;
      a2[1] = result | 1;
      *(_QWORD *)((char *)a2 + result) = result;
    }
    else
    {
      v11 = malloc_printerr("free(): corrupted unsorted chunks");
      return ptmalloc_init_part_0(v11);
    }
  }
  return result;
}
