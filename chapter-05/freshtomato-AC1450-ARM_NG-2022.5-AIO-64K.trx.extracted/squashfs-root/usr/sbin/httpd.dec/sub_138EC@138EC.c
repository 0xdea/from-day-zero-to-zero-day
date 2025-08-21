size_t __fastcall sub_138EC(char *ptr, signed int n)
{
  size_t v4; // r7

  v4 = 0;
  while ( n > 0 )
  {
    v4 = fwrite(ptr, 1u, n, (FILE *)dword_30C84);
    if ( !v4 && *_errno_location() != 4 )
      return -1;
    ptr += v4;
    n -= v4;
  }
  return v4;
}
