__int64 __fastcall dfs_traversal_part_0(__int64 *a1, __int64 a2, _BYTE *a3)
{
  __int64 *v6; // x3
  __int64 v7; // x1
  __int64 v8; // x19
  __int64 result; // x0
  int *v10; // x0
  int v11; // w19
  int v12; // w19

  v6 = *(__int64 **)(a2 + 1032);
  *(_WORD *)(a2 + 868) |= 0x200u;
  if ( v6 )
  {
    v7 = *v6;
    if ( *v6 )
    {
      v8 = 1;
      do
      {
        if ( (*(_QWORD *)(v7 + 864) & 0x430000000000LL) == 0 )
        {
          dfs_traversal_part_0(a1);
          v6 = *(__int64 **)(a2 + 1032);
        }
        v7 = v6[v8++];
      }
      while ( v7 );
    }
  }
  if ( a3 )
  {
    v10 = *(int **)(a2 + 1040);
    if ( v10 )
    {
      v11 = *v10;
      *a3 = 1;
      v12 = v11 - 1;
      if ( v12 >= 0 )
      {
        if ( (*(_QWORD *)(*(_QWORD *)&v10[2 * v12 + 2] + 864LL) & 0x430000000000LL) == 0 )
          goto LABEL_14;
        while ( --v12 != -1 )
        {
          if ( (*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 1040) + 8LL * v12 + 8) + 864LL) & 0x430000000000LL) == 0 )
LABEL_14:
            dfs_traversal_part_0(a1);
        }
      }
    }
  }
  result = *a1;
  *a1 -= 8;
  *(_QWORD *)(result - 8) = a2;
  return result;
}
