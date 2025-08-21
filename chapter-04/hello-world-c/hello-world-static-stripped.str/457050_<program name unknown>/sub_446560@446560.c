__int64 __fastcall sub_446560(_QWORD *a1, int a2)
{
  const char *v3; // x1
  __int64 v5; // x0
  __int64 v6; // x21
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x19
  const char *v10; // x1

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
        v8 = *(_QWORD *)(a1[122] + v6);
        if ( *(_DWORD *)(v8 + 8) )
        {
          v9 = 0;
          do
          {
            v10 = *(const char **)(*(_QWORD *)(*(_QWORD *)v8 + 8 * v9) + 8LL);
            if ( !*v10 )
            {
              v10 = (const char *)off_491918;
              if ( !off_491918 )
                v10 = "<program name unknown>";
            }
            sub_4383C0(" %s", v10);
            ++v9;
            v8 = *(_QWORD *)(a1[122] + v6);
            v7 = *(unsigned int *)(v8 + 8);
          }
          while ( (unsigned int)v7 > (unsigned int)v9 );
        }
        sub_4383C0("\n", v7);
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
