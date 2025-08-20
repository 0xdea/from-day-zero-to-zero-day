__int64 __fastcall dl_get_origin(
        double a1,
        double a2,
        double a3,
        double a4,
        double a5,
        double a6,
        double a7,
        double a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        void *a13,
        void *a14,
        void *a15)
{
  ssize_t v15; // x0
  __int64 v16; // x1
  int v17; // w20
  __int64 result; // x0
  __int64 v19; // x19
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  void *v23; // x4
  void *v24; // x5
  void *v25; // x6
  double v26; // d0
  double v27; // d1
  double v28; // d2
  double v29; // d3
  double v30; // d4
  double v31; // d5
  double v32; // d6
  double v33; // d7
  __int64 v34; // x0
  __int64 v35; // x21
  _BYTE *v36; // x1
  __int64 v37; // x0
  __int64 v38; // x21
  char v39[4096]; // [xsp+30h] [xbp-1000h] BYREF

  v15 = linux_eabi_syscall(__NR_readlinkat, -100, "/proc/self/exe", v39, 0x1000u);
  if ( (int)v15 <= 0 || (v16 = (unsigned __int8)v39[0], v39[0] == 91) )
  {
    if ( dl_origin_path
      && (v19 = strlen(dl_origin_path),
          v34 = malloc(v19 + 1, v26, v27, v28, v29, v30, v31, v32, v33, v20, v21, v22, v23, v24, v25),
          (v35 = v34) != 0) )
    {
      v36 = (_BYTE *)(j_memcpy(v34) + v19);
      if ( v35 + 1 < (unsigned __int64)v36 )
      {
        do
        {
          if ( *(v36 - 1) != 47 )
            break;
          --v36;
        }
        while ( (_BYTE *)(v35 + 1) != v36 );
      }
      *v36 = 0;
      return v35;
    }
    else
    {
      return -1;
    }
  }
  else
  {
    v15 = (int)v15;
    if ( v39[0] != 47 )
      _libc_assert_fail(
        "linkval[0] == '/'",
        (__int64)"../sysdeps/unix/sysv/linux/dl-origin.c",
        0x29u,
        (__int64)"_dl_get_origin");
    do
    {
      v17 = v15;
      if ( (_DWORD)v15 == 1 )
      {
        result = malloc(2u, a1, a2, a3, a4, a5, a6, a7, a8, v16, (__int64)v39, 4096, a13, a14, a15);
        if ( !result )
          return -1;
        *(_WORD *)result = 47;
        return result;
      }
      v16 = (unsigned __int8)v39[--v15];
    }
    while ( (_DWORD)v16 != 47 );
    v37 = malloc(v17 + 1, a1, a2, a3, a4, a5, a6, a7, a8, v16, (__int64)v39, 4096, a13, a14, a15);
    v38 = v37;
    if ( !v37 )
      return -1;
    *(_BYTE *)(j_memcpy(v37) + v17 - 1) = 0;
    return v38;
  }
}
