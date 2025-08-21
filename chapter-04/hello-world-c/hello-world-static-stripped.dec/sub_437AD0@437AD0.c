__int64 __fastcall sub_437AD0(
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
  __int64 v19; // x20
  __int64 v20; // x19
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  void *v24; // x4
  void *v25; // x5
  void *v26; // x6
  double v27; // d0
  double v28; // d1
  double v29; // d2
  double v30; // d3
  double v31; // d4
  double v32; // d5
  double v33; // d6
  double v34; // d7
  __int64 v35; // x0
  __int64 v36; // x21
  _BYTE *v37; // x1
  __int64 v38; // x0
  __int64 v39; // x21
  char v40[4096]; // [xsp+30h] [xbp-1000h] BYREF

  v15 = linux_eabi_syscall(__NR_readlinkat, -100, "/proc/self/exe", v40, 0x1000u);
  if ( (int)v15 <= 0 || (v16 = (unsigned __int8)v40[0], v40[0] == 91) )
  {
    v19 = qword_496830;
    if ( qword_496830
      && (v20 = ifunc_40DFD0(qword_496830),
          v35 = sub_40B890(v20 + 1, v27, v28, v29, v30, v31, v32, v33, v34, v21, v22, v23, v24, v25, v26),
          (v36 = v35) != 0) )
    {
      v37 = (_BYTE *)(j_ifunc_40DC90(v35, v19, v20) + v20);
      if ( v36 + 1 < (unsigned __int64)v37 )
      {
        do
        {
          if ( *(v37 - 1) != 47 )
            break;
          --v37;
        }
        while ( (_BYTE *)(v36 + 1) != v37 );
      }
      *v37 = 0;
      return v36;
    }
    else
    {
      return -1;
    }
  }
  else
  {
    v15 = (int)v15;
    if ( v40[0] != 47 )
      sub_41F250(
        "linkval[0] == '/'",
        (__int64)"../sysdeps/unix/sysv/linux/dl-origin.c",
        0x29u,
        (__int64)"_dl_get_origin");
    do
    {
      v17 = v15;
      if ( (_DWORD)v15 == 1 )
      {
        result = sub_40B890(2u, a1, a2, a3, a4, a5, a6, a7, a8, v16, (__int64)v40, 4096, a13, a14, a15);
        if ( !result )
          return -1;
        *(_WORD *)result = 47;
        return result;
      }
      v16 = (unsigned __int8)v40[--v15];
    }
    while ( (_DWORD)v16 != 47 );
    v38 = sub_40B890(v17 + 1, a1, a2, a3, a4, a5, a6, a7, a8, v16, (__int64)v40, 4096, a13, a14, a15);
    v39 = v38;
    if ( !v38 )
      return -1;
    *(_BYTE *)(j_ifunc_40DC90(v38, v40, v17 - 1) + v17 - 1) = 0;
    return v39;
  }
}
