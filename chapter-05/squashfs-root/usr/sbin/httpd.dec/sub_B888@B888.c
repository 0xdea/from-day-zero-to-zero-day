void sub_B888()
{
  int v0; // r4
  int v1; // r5

  if ( !dword_30CE8 )
  {
    if ( dword_30CB0 )
    {
      v0 = fcntl(dword_30724, 3);
      if ( v0 != -1 && fcntl(dword_30724, 4, v0 | 0x800) != -1 )
      {
        v1 = 1024;
        do
        {
          if ( fgetc((FILE *)dword_30C84) == -1 )
            break;
          --v1;
        }
        while ( v1 );
        fcntl(dword_30724, 4, v0);
      }
    }
  }
}
