__int64 __fastcall _register_frame_info_table_bases(unsigned __int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v6[2]; // [xsp+20h] [xbp+20h] BYREF

  *a2 = -1;
  a2[1] = a3;
  a2[2] = a4;
  a2[3] = a1;
  a2[4] = 2042;
  btree_insert_isra_0((__int64)&registered_objects, a1, 1, (__int64)a2);
  get_pc_range((__int64)a2, v6);
  return btree_insert_isra_0((__int64)&registered_frames, v6[0], v6[1] - v6[0], (__int64)a2);
}
