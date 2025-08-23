int sub_13CC8()
{
  if ( dword_30C84 )
  {
    fflush((FILE *)dword_30C84);
    fclose((FILE *)dword_30C84);
    dword_30C84 = 0;
  }
  if ( dword_30724 != -1 )
  {
    close(dword_30724);
    dword_30724 = -1;
  }
  return 1;
}
