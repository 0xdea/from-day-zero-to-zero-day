_QWORD *__fastcall unlink_chunk_isra_0(_QWORD *result)
{
  unsigned __int64 v1; // x3
  _QWORD *v2; // x1
  __int64 v3; // x2
  _QWORD *v4; // x2
  __int64 v5; // x3
  __int64 v6; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x3

  v1 = result[1];
  if ( (v1 & 0xFFFFFFFFFFFFFFF8LL) != *(_QWORD *)((char *)result + (v1 & 0xFFFFFFFFFFFFFFF8LL)) )
  {
    malloc_printerr("corrupted size vs. prev_size");
    goto LABEL_16;
  }
  v2 = (_QWORD *)result[2];
  v3 = result[3];
  if ( result != (_QWORD *)v2[3] || result != *(_QWORD **)(v3 + 16) )
  {
    result = (_QWORD *)malloc_printerr("corrupted double-linked list");
    goto LABEL_14;
  }
  v2[3] = v3;
  *(_QWORD *)(v3 + 16) = v2;
  if ( v1 > 0x3FF )
  {
    v4 = (_QWORD *)result[4];
    if ( v4 )
    {
      if ( result == (_QWORD *)v4[5] )
      {
        v5 = result[5];
        if ( result == *(_QWORD **)(v5 + 32) )
        {
          if ( v2[4] )
          {
            v4[5] = v5;
            *(_QWORD *)(v5 + 32) = v4;
            return result;
          }
          if ( result != v4 )
          {
            v2[4] = v4;
            v2[5] = v5;
            v4[5] = v2;
            result = (_QWORD *)result[5];
            result[4] = v2;
            return result;
          }
LABEL_14:
          v2[4] = v2;
          v2[5] = v2;
          return result;
        }
      }
LABEL_16:
      v6 = malloc_printerr("corrupted double-linked list (not small)");
      return (_QWORD *)malloc_consolidate(v6, v7, v8, v9);
    }
  }
  return result;
}
