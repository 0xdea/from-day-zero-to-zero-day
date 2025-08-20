__int64 __fastcall _register_frame(
        unsigned int *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        void *a5,
        void *a6,
        void *a7,
        double a8,
        double a9,
        double a10,
        double a11,
        double a12,
        double a13,
        double a14,
        double a15)
{
  __int64 result; // x0
  __int64 v17; // x20
  unsigned __int64 v18[2]; // [xsp+30h] [xbp+30h] BYREF

  result = *a1;
  if ( (_DWORD)result )
  {
    v17 = malloc(0x30u, a8, a9, a10, a11, a12, a13, a14, a15, a2, a3, a4, a5, a6, a7);
    *(_QWORD *)(v17 + 16) = 0;
    *(_QWORD *)(v17 + 24) = a1;
    *(_QWORD *)(v17 + 32) = 2040;
    *(_OWORD *)v17 = xmmword_45A900;
    btree_insert_isra_0((__int64)&registered_objects, (unsigned __int64)a1, 1, v17);
    get_pc_range(v17, v18);
    return btree_insert_isra_0((__int64)&registered_frames, v18[0], v18[1] - v18[0], v17);
  }
  return result;
}
