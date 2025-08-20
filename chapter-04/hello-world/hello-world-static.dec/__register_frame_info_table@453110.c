__int64 __fastcall _register_frame_info_table(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 v4[2]; // [xsp+20h] [xbp+20h] BYREF

  *(_QWORD *)(a2 + 16) = 0;
  *(_QWORD *)(a2 + 24) = a1;
  *(_QWORD *)(a2 + 32) = 2042;
  *(_OWORD *)a2 = xmmword_45A900;
  btree_insert_isra_0((__int64)&registered_objects, a1, 1, a2);
  get_pc_range(a2, v4);
  return btree_insert_isra_0((__int64)&registered_frames, v4[0], v4[1] - v4[0], a2);
}
