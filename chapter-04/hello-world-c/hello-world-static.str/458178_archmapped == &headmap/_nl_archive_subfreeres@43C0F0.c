void nl_archive_subfreeres()
{
  _QWORD *v0; // x21
  _QWORD *v1; // x22
  _QWORD *v2; // x20
  __int64 v3; // x19
  __int64 v4; // x19
  __int64 v5; // x0
  __int64 v6; // x19
  _QWORD *v7; // x20
  __int64 v8; // x1

  v0 = (_QWORD *)archloaded;
  if ( archloaded )
  {
    do
    {
      v1 = v0;
      v2 = v0 + 2;
      v0 = (_QWORD *)*v0;
      v3 = 0;
      free(v1[1]);
      do
      {
        if ( v3 == 6 )
          v3 = 7;
        if ( v2[v3] )
          nl_unload_locale((unsigned int)v3);
        ++v3;
      }
      while ( v3 != 13 );
      free(v1);
    }
    while ( v0 );
  }
  archloaded = 0;
  v4 = archmapped;
  if ( archmapped )
  {
    if ( (__int64 *)archmapped != &headmap )
      _libc_assert_fail("archmapped == &headmap", (__int64)"loadarchive.c", 0x210u, (__int64)"_nl_archive_subfreeres");
    v5 = *(_QWORD *)archmapped;
    archmapped = 0;
    munmap(v5, *(unsigned int *)(v4 + 12));
    v6 = *(_QWORD *)(v4 + 16);
    while ( v6 )
    {
      v7 = (_QWORD *)v6;
      v8 = *(unsigned int *)(v6 + 12);
      v6 = *(_QWORD *)(v6 + 16);
      munmap(*v7, v8);
      free(v7);
    }
  }
}
