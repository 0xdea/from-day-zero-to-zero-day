unsigned __int64 __fastcall _deregister_frame_info_bases_part_0(unsigned __int64 a1)
{
  unsigned __int64 v1; // x0
  __int64 v2; // x1
  __int64 v3; // x2
  __int64 v4; // x3
  unsigned __int64 v5; // x19
  double v6; // d0
  double v7; // d1
  double v8; // d2
  double v9; // d3
  double v10; // d4
  double v11; // d5
  double v12; // d6
  double v13; // d7
  unsigned __int64 v15[2]; // [xsp+20h] [xbp+20h] BYREF

  v1 = btree_remove((__int64)&registered_objects, a1);
  v5 = v1;
  if ( !v1 )
  {
    if ( (in_shutdown & 1) == 0 )
      abort((unsigned __int8)in_shutdown, v2, v3, v4);
    return v5;
  }
  get_pc_range(v1, v15);
  if ( v15[0] == v15[1] )
  {
    if ( (*(_DWORD *)(v5 + 32) & 1) == 0 )
      return v5;
  }
  else
  {
    btree_remove((__int64)&registered_frames, v15[0]);
    if ( (*(_DWORD *)(v5 + 32) & 1) == 0 )
      return v5;
  }
  free(*(_QWORD *)(v5 + 24), v6, v7, v8, v9, v10, v11, v12, v13);
  return v5;
}
