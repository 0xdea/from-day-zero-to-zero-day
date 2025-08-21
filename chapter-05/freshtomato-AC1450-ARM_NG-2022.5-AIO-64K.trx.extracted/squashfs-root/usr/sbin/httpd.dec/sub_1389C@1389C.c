int __fastcall sub_1389C(char *s, int n)
{
  do
  {
    if ( fgets(s, n, (FILE *)dword_30C84) )
      return 1;
  }
  while ( *_errno_location() == 4 );
  return 0;
}
