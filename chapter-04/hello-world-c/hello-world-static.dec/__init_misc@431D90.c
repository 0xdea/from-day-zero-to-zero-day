void __fastcall _init_misc(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        unsigned __int64 a7)
{
  __int64 v8; // x20
  unsigned __int64 v9; // x0

  if ( a2 )
  {
    v8 = *a2;
    if ( *a2 )
    {
      v9 = strrchr(*a2, 0x2Fu, a3, a4, a5, a6, a7);
      if ( v9 )
        v8 = v9 + 1;
      program_invocation_short_name[0] = v8;
      program_invocation_name = *a2;
    }
  }
}
