ssize_t __fastcall dl_show_scope(_QWORD *a1, int a2)
{
  const char *v3; // x1
  __int64 v5; // x0
  __int64 v6; // x21
  __int64 v7; // x2
  __int64 v8; // x19
  const char *v9; // x1

  v3 = (const char *)a1[1];
  if ( !*v3 )
  {
    v3 = (const char *)program_invocation_short_name[0];
    if ( !program_invocation_short_name[0] )
      v3 = "<main program>";
  }
  dl_debug_printf("object=%s [%lu]\n", v3, a1[6]);
  v5 = a1[122];
  if ( v5 )
  {
    v6 = 8LL * a2;
    if ( *(_QWORD *)(v5 + v6) )
    {
      do
      {
        dl_debug_printf(" scope %u:", a2);
        v7 = *(_QWORD *)(a1[122] + v6);
        if ( *(_DWORD *)(v7 + 8) )
        {
          v8 = 0;
          do
          {
            v9 = *(const char **)(*(_QWORD *)(*(_QWORD *)v7 + 8 * v8) + 8LL);
            if ( !*v9 )
            {
              v9 = (const char *)program_invocation_short_name[0];
              if ( !program_invocation_short_name[0] )
                v9 = "<program name unknown>";
            }
            dl_debug_printf_c(" %s", v9);
            ++v8;
            v7 = *(_QWORD *)(a1[122] + v6);
          }
          while ( *(_DWORD *)(v7 + 8) > (unsigned int)v8 );
        }
        dl_debug_printf_c("\n");
        v6 += 8;
        ++a2;
      }
      while ( *(_QWORD *)(a1[122] + v6) );
    }
    return dl_debug_printf("\n");
  }
  else
  {
    dl_debug_printf(" no scope\n");
    return dl_debug_printf("\n");
  }
}
