__int64 __fastcall dl_init(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  __int64 v8; // x24
  __int64 v9; // x25
  bool v10; // zf
  __int64 result; // x0
  __int64 v12; // x19
  __int64 v13; // x0
  unsigned int v14; // w26
  __int64 v15; // x19
  __int64 v16; // x24
  void (__fastcall *v17)(_QWORD, __int64, __int64); // x3
  const char *v18; // x1

  v9 = *(_QWORD *)(a1 + 320);
  v8 = *(_QWORD *)(a1 + 328);
  if ( dl_initfirst )
  {
    call_init(dl_initfirst, a2, a3, a4);
    dl_initfirst = 0;
  }
  if ( v9 )
    v10 = v8 == 0;
  else
    v10 = 1;
  if ( !v10 )
  {
    v14 = *(_QWORD *)(v8 + 8) >> 3;
    if ( v14 )
    {
      if ( (dl_debug_mask & 2) != 0 )
      {
        v18 = *(const char **)(a1 + 8);
        if ( !*v18 )
        {
          v18 = (const char *)program_invocation_short_name[0];
          if ( !program_invocation_short_name[0] )
            v18 = "<main program>";
        }
        dl_debug_printf("\ncalling preinit: %s\n\n", v18);
      }
      v15 = 0;
      v16 = *(_QWORD *)(v9 + 8) + *(_QWORD *)a1;
      do
      {
        v17 = *(void (__fastcall **)(_QWORD, __int64, __int64))(v16 + 8 * v15++);
        v17(a2, a3, a4);
      }
      while ( v14 > (unsigned int)v15 );
    }
  }
  result = *(unsigned int *)(a1 + 784);
  if ( (_DWORD)result )
  {
    v12 = 8LL * (unsigned int)(result - 1);
    do
    {
      v13 = *(_QWORD *)(*(_QWORD *)(a1 + 1032) + v12);
      v12 -= 8;
      result = call_init(v13, a2, a3, a4);
    }
    while ( v12 != -8 );
  }
  return result;
}
