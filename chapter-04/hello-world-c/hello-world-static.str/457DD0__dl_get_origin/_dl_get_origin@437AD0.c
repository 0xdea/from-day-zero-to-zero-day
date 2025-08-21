__int64 __fastcall dl_get_origin(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  ssize_t v6; // x0
  __int64 v7; // x1
  int v8; // w20
  __int64 result; // x0
  __int64 v10; // x19
  __int64 v11; // x1
  __int16 *v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  __int64 v15; // x5
  __int64 v16; // x0
  __int64 v17; // x21
  _BYTE *v18; // x1
  __int64 v19; // x0
  __int64 v20; // x21
  __int16 v21[2048]; // [xsp+30h] [xbp-1000h] BYREF

  v6 = linux_eabi_syscall(__NR_readlinkat, -100, "/proc/self/exe", (char *)v21, 0x1000u);
  if ( (int)v6 <= 0 || (v7 = LOBYTE(v21[0]), LOBYTE(v21[0]) == 91) )
  {
    if ( dl_origin_path
      && (v10 = strlen(dl_origin_path), v16 = malloc(v10 + 1, v11, v12, v13, v14, v15), (v17 = v16) != 0) )
    {
      v18 = (_BYTE *)(j_memcpy(v16) + v10);
      if ( v17 + 1 < (unsigned __int64)v18 )
      {
        do
        {
          if ( *(v18 - 1) != 47 )
            break;
          --v18;
        }
        while ( (_BYTE *)(v17 + 1) != v18 );
      }
      *v18 = 0;
      return v17;
    }
    else
    {
      return -1;
    }
  }
  else
  {
    v6 = (int)v6;
    if ( LOBYTE(v21[0]) != 47 )
      _libc_assert_fail(
        "linkval[0] == '/'",
        (__int64)"../sysdeps/unix/sysv/linux/dl-origin.c",
        0x29u,
        (__int64)"_dl_get_origin");
    do
    {
      v8 = v6;
      if ( (_DWORD)v6 == 1 )
      {
        result = malloc(2u, v7, v21, 4096, a5, a6);
        if ( !result )
          return -1;
        *(_WORD *)result = 47;
        return result;
      }
      --v6;
      v7 = *((unsigned __int8 *)v21 + v6);
    }
    while ( (_DWORD)v7 != 47 );
    v19 = malloc(v8 + 1, v7, v21, 4096, a5, a6);
    v20 = v19;
    if ( !v19 )
      return -1;
    *(_BYTE *)(j_memcpy(v19) + v8 - 1) = 0;
    return v20;
  }
}
