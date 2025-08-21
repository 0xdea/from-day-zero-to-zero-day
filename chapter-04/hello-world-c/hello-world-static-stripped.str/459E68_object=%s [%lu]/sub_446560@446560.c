__int64 __fastcall sub_446560(_QWORD *a1, int a2)
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
    v3 = (const char *)off_491918;
    if ( !off_491918 )
      v3 = "<main program>";
  }
  sub_438334("object=%s [%lu]\n", v3, a1[6]);
  v5 = a1[122];
  if ( v5 )
  {
    v6 = 8LL * a2;
    if ( *(_QWORD *)(v5 + v6) )
    {
      do
      {
        sub_438334(" scope %u:", a2);
        v7 = *(_QWORD *)(a1[122] + v6);
        if ( *(_DWORD *)(v7 + 8) )
        {
          v8 = 0;
          do
          {
            v9 = *(const char **)(*(_QWORD *)(*(_QWORD *)v7 + 8 * v8) + 8LL);
            if ( !*v9 )
            {
              v9 = (const char *)off_491918;
              if ( !off_491918 )
                v9 = "<program name unknown>";
            }
            sub_4383C0(" %s", v9);
            ++v8;
            v7 = *(_QWORD *)(a1[122] + v6);
          }
          while ( *(_DWORD *)(v7 + 8) > (unsigned int)v8 );
        }
        sub_4383C0("\n");
        v6 += 8;
        ++a2;
      }
      while ( *(_QWORD *)(a1[122] + v6) );
    }
    return sub_438334("\n");
  }
  else
  {
    sub_438334(" no scope\n");
    return sub_438334("\n");
  }
}
