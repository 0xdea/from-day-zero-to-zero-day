// write access to const memory has been detected, the output may be wrong!
long double dl_find_object_init()
{
  unsigned __int64 v0; // x19
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  void *v4; // x4
  void *v5; // x5
  void *v6; // x6
  double v7; // d0
  double v8; // d1
  double v9; // d2
  double v10; // d3
  double v11; // d4
  double v12; // d5
  double v13; // d6
  double v14; // d7
  void *v15; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  void *v19; // x4
  void *v20; // x5
  void *v21; // x6
  double v22; // d0
  double v23; // d1
  double v24; // d2
  double v25; // d3
  double v26; // d4
  double v27; // d5
  double v28; // d6
  double v29; // d7
  unsigned __int64 *v30; // x20
  long double result; // q0
  __int64 v32; // x1
  _QWORD *v33; // x0
  __int64 v34; // x12
  __int64 v35; // x1
  __int64 v36; // x0
  unsigned __int64 v37; // x1

  if ( (*((_BYTE *)dl_ns + 870) & 8) != 0 )
    dl_find_object_from_map((__int64)dl_ns, &dlfo_main);
  else
    dlfo_main = 0u;
  v0 = dlfo_process_initial();
  v15 = (void *)malloc(32 * dlfo_nodelete_mappings_size, v7, v8, v9, v10, v11, v12, v13, v14, v1, v2, v3, v4, v5, v6);
  dlfo_nodelete_mappings = v15;
  v30 = (unsigned __int64 *)v15;
  if ( !v0 )
  {
    if ( v15 )
    {
      dlfo_nodelete_mappings_size = 0;
      dlfo_process_initial();
      if ( dlfo_nodelete_mappings_size )
      {
        if ( dlfo_nodelete_mappings_size == 1 )
        {
          dlfo_nodelete_mappings_end = v30[1];
        }
        else
        {
          result = dlfo_sort_mappings_part_0(v30, dlfo_nodelete_mappings_size);
          dlfo_nodelete_mappings_end = v30[4 * v32 - 3];
        }
      }
      return result;
    }
LABEL_22:
    dl_fatal_printf("Fatal glibc error: cannot allocate memory for find-object data\n");
  }
  if ( v0 < 0x3F )
    v0 = 63;
  v33 = (_QWORD *)malloc(32 * (v0 + 1), v22, v23, v24, v25, v26, v27, v28, v29, v16, v17, v18, v19, v20, v21);
  if ( !v33 )
  {
    dlfo_loaded_mappings[0] = 0;
    goto LABEL_22;
  }
  *v33 = 0;
  v33[1] = 0;
  dlfo_loaded_mappings[0] = (__int64)v33;
  v33[2] = 0;
  v33[3] = v0;
  if ( !v30 )
    goto LABEL_22;
  dlfo_nodelete_mappings_size = 0;
  dlfo_process_initial();
  if ( dlfo_nodelete_mappings_size )
  {
    if ( dlfo_nodelete_mappings_size == 1 )
    {
      dlfo_nodelete_mappings_end = v30[1];
    }
    else
    {
      result = dlfo_sort_mappings_part_0(v30, dlfo_nodelete_mappings_size);
      dlfo_nodelete_mappings_end = v30[4 * v35 - 3];
    }
  }
  v36 = *(_QWORD *)(v34 + 3104);
  v37 = *(_QWORD *)(v36 + 16);
  if ( v37 > 1 )
    return dlfo_sort_mappings_part_0((unsigned __int64 *)(v36 + 32), v37);
  return result;
}
