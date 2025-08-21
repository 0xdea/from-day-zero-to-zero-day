// write access to const memory has been detected, the output may be wrong!
__int64 dl_find_object_init()
{
  unsigned __int64 v0; // x19
  __int64 v1; // x1
  __int16 *v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v5; // x5
  void *v6; // x0
  __int64 v7; // x1
  __int16 *v8; // x2
  __int64 v9; // x3
  __int64 v10; // x4
  __int64 v11; // x5
  _QWORD *v12; // x20
  __int64 result; // x0
  __int64 v14; // x1
  _QWORD *v15; // x0
  __int64 v16; // x12
  __int64 v17; // x1

  if ( (*((_BYTE *)dl_ns + 870) & 8) != 0 )
    dl_find_object_from_map(dl_ns, &dlfo_main);
  else
    dlfo_main = 0u;
  v0 = dlfo_process_initial();
  v6 = (void *)malloc(32 * dlfo_nodelete_mappings_size, v1, v2, v3, v4, v5);
  dlfo_nodelete_mappings = v6;
  v12 = v6;
  if ( !v0 )
  {
    if ( v6 )
    {
      dlfo_nodelete_mappings_size = 0;
      result = dlfo_process_initial();
      if ( dlfo_nodelete_mappings_size )
      {
        if ( dlfo_nodelete_mappings_size == 1 )
        {
          result = v12[1];
        }
        else
        {
          dlfo_sort_mappings_part_0(v12);
          result = v12[4 * v14 - 3];
        }
        dlfo_nodelete_mappings_end = result;
      }
      return result;
    }
LABEL_23:
    dl_fatal_printf("Fatal glibc error: cannot allocate memory for find-object data\n");
  }
  if ( v0 < 0x3F )
    v0 = 63;
  v15 = (_QWORD *)malloc(32 * (v0 + 1), v7, v8, v9, v10, v11);
  if ( !v15 )
  {
    dlfo_loaded_mappings[0] = 0;
    goto LABEL_23;
  }
  *v15 = 0;
  v15[1] = 0;
  dlfo_loaded_mappings[0] = (__int64)v15;
  v15[2] = 0;
  v15[3] = v0;
  if ( !v12 )
    goto LABEL_23;
  dlfo_nodelete_mappings_size = 0;
  dlfo_process_initial();
  if ( dlfo_nodelete_mappings_size )
  {
    if ( dlfo_nodelete_mappings_size == 1 )
    {
      dlfo_nodelete_mappings_end = v12[1];
    }
    else
    {
      dlfo_sort_mappings_part_0(v12);
      dlfo_nodelete_mappings_end = v12[4 * v17 - 3];
    }
  }
  result = *(_QWORD *)(v16 + 3104);
  if ( *(_QWORD *)(result + 16) > 1u )
    return dlfo_sort_mappings_part_0(result + 32);
  return result;
}
