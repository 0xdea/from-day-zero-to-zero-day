_DWORD *__fastcall _register_frame_info(_DWORD *result, __int64 a2)
{
  unsigned __int64 v3[2]; // [xsp+20h] [xbp+20h] BYREF

  if ( result )
  {
    if ( *result )
    {
      *(_QWORD *)(a2 + 16) = 0;
      *(_QWORD *)(a2 + 24) = result;
      *(_QWORD *)(a2 + 32) = 2040;
      *(_OWORD *)a2 = xmmword_45A900;
      btree_insert_isra_0((__int64)&registered_objects, (unsigned __int64)result, 1, a2);
      get_pc_range(a2, v3);
      return (_DWORD *)btree_insert_isra_0((__int64)&registered_frames, v3[0], v3[1] - v3[0], a2);
    }
  }
  return result;
}
