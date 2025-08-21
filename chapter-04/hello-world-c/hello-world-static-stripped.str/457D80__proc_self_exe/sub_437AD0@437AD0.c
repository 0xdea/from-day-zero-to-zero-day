__int64 __fastcall sub_437AD0(
        long double a1,
        long double a2,
        long double a3,
        long double a4,
        long double a5,
        long double a6,
        long double a7,
        long double a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14)
{
  ssize_t v14; // x0
  __int64 v15; // x1
  int v16; // w20
  __int64 result; // x0
  __int64 v18; // x20
  __int64 v19; // x19
  __int64 v20; // x1
  __int16 *v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  __int64 v24; // x5
  long double v25; // q0
  long double v26; // q1
  long double v27; // q2
  long double v28; // q3
  long double v29; // q4
  long double v30; // q5
  long double v31; // q6
  long double v32; // q7
  __int64 v33; // x0
  __int64 v34; // x21
  _BYTE *v35; // x1
  __int64 v36; // x0
  __int64 v37; // x21
  __int16 v38[2048]; // [xsp+30h] [xbp-1000h] BYREF

  v14 = linux_eabi_syscall(__NR_readlinkat, -100, "/proc/self/exe", (char *)v38, 0x1000u);
  if ( (int)v14 <= 0 || (v15 = LOBYTE(v38[0]), LOBYTE(v38[0]) == 91) )
  {
    v18 = qword_496830;
    if ( qword_496830
      && (v19 = ifunc_40DFD0(qword_496830),
          v33 = sub_40B890(v19 + 1, v25, v26, v27, v28, v29, v30, v31, v32, v20, v21, v22, v23, v24),
          (v34 = v33) != 0) )
    {
      v35 = (_BYTE *)(j_ifunc_40DC90(v33, v18, v19) + v19);
      if ( v34 + 1 < (unsigned __int64)v35 )
      {
        do
        {
          if ( *(v35 - 1) != 47 )
            break;
          --v35;
        }
        while ( (_BYTE *)(v34 + 1) != v35 );
      }
      *v35 = 0;
      return v34;
    }
    else
    {
      return -1;
    }
  }
  else
  {
    v14 = (int)v14;
    if ( LOBYTE(v38[0]) != 47 )
      sub_41F250(
        "linkval[0] == '/'",
        (__int64)"../sysdeps/unix/sysv/linux/dl-origin.c",
        0x29u,
        (__int64)"_dl_get_origin");
    do
    {
      v16 = v14;
      if ( (_DWORD)v14 == 1 )
      {
        result = sub_40B890(2u, a1, a2, a3, a4, a5, a6, a7, a8, v15, v38, 4096, a13, a14);
        if ( !result )
          return -1;
        *(_WORD *)result = 47;
        return result;
      }
      --v14;
      v15 = *((unsigned __int8 *)v38 + v14);
    }
    while ( (_DWORD)v15 != 47 );
    v36 = sub_40B890(v16 + 1, a1, a2, a3, a4, a5, a6, a7, a8, v15, v38, 4096, a13, a14);
    v37 = v36;
    if ( !v36 )
      return -1;
    *(_BYTE *)(j_ifunc_40DC90(v36, v38, v16 - 1) + v16 - 1) = 0;
    return v37;
  }
}
