__int64 __fastcall _fopen_internal(
        __int64 a1,
        unsigned __int8 *a2,
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
  __int64 v17; // x0
  __int64 v18; // x19
  __int64 v19; // x21
  __int64 v20; // x3
  void *v21; // x1
  double v23; // d0
  double v24; // d1
  double v25; // d2
  double v26; // d3
  double v27; // d4
  double v28; // d5
  double v29; // d6
  double v30; // d7

  v17 = malloc(0x1D8u, a8, a9, a10, a11, a12, a13, a14, a15, (__int64)a2, a3, a4, a5, a6, a7);
  if ( !v17 )
    return 0;
  *(_QWORD *)(v17 + 136) = v17 + 224;
  v18 = v17;
  v19 = v17;
  IO_no_init(v17, 0, 0, v17 + 240, (__int64)&IO_wfile_jumps);
  *(_QWORD *)(v18 + 216) = &IO_file_jumps;
  IO_new_file_init_internal(v18);
  if ( !IO_new_file_fopen(v18, a1, a2) )
  {
    IO_un_link(v18);
    free(v18, v23, v24, v25, v26, v27, v28, v29, v30);
    return 0;
  }
  if ( (*(_DWORD *)(v18 + 116) & 1) != 0 && (*(_DWORD *)v18 & 8) != 0 )
  {
    v20 = *(_QWORD *)(v18 + 160);
    v21 = &unk_48E208;
    if ( *(int *)(v18 + 192) <= 0 )
      v21 = &unk_48E010;
    *(_QWORD *)(v18 + 216) = v21;
    *(_QWORD *)(v20 + 224) = &unk_48E208;
  }
  return v19;
}
