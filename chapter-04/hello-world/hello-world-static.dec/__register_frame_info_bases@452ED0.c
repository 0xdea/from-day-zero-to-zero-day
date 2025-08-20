_DWORD *__fastcall _register_frame_info_bases(_DWORD *result, _QWORD *a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v5[2]; // [xsp+20h] [xbp+20h] BYREF

  if ( result )
  {
    if ( *result )
    {
      *a2 = -1;
      a2[1] = a3;
      a2[2] = a4;
      a2[3] = result;
      a2[4] = 2040;
      btree_insert_isra_0((__int64)&registered_objects, (unsigned __int64)result, 1, (__int64)a2);
      get_pc_range((__int64)a2, v5);
      return (_DWORD *)btree_insert_isra_0((__int64)&registered_frames, v5[0], v5[1] - v5[0], (__int64)a2);
    }
  }
  return result;
}
