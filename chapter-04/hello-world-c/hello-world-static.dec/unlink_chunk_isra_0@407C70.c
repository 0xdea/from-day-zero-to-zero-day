_QWORD *__fastcall unlink_chunk_isra_0(
        _QWORD *result,
        double a2,
        double a3,
        double a4,
        double a5,
        double a6,
        double a7,
        double a8,
        double a9)
{
  unsigned __int64 v9; // x3
  _QWORD *v10; // x1
  __int64 v11; // x2
  __int64 v12; // x2
  __int64 v13; // x3

  v9 = result[1];
  if ( (v9 & 0xFFFFFFFFFFFFFFF8LL) != *(_QWORD *)((char *)result + (v9 & 0xFFFFFFFFFFFFFFF8LL)) )
    malloc_printerr((__int64)"corrupted size vs. prev_size", a2, a3, a4, a5, a6, a7, a8, a9);
  v10 = (_QWORD *)result[2];
  v11 = result[3];
  if ( result != (_QWORD *)v10[3] || result != *(_QWORD **)(v11 + 16) )
    malloc_printerr((__int64)"corrupted double-linked list", a2, a3, a4, a5, a6, a7, a8, a9);
  v10[3] = v11;
  *(_QWORD *)(v11 + 16) = v10;
  if ( v9 > 0x3FF )
  {
    v12 = result[4];
    if ( v12 )
    {
      if ( result != *(_QWORD **)(v12 + 40) || (v13 = result[5], result != *(_QWORD **)(v13 + 32)) )
        malloc_printerr((__int64)"corrupted double-linked list (not small)", a2, a3, a4, a5, a6, a7, a8, a9);
      if ( v10[4] )
      {
        *(_QWORD *)(v12 + 40) = v13;
        *(_QWORD *)(v13 + 32) = v12;
      }
      else if ( result == (_QWORD *)v12 )
      {
        v10[4] = v10;
        v10[5] = v10;
      }
      else
      {
        v10[4] = v12;
        v10[5] = v13;
        *(_QWORD *)(v12 + 40) = v10;
        result = (_QWORD *)result[5];
        result[4] = v10;
      }
    }
  }
  return result;
}
