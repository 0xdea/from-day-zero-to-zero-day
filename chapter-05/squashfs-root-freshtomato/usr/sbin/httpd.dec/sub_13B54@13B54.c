size_t __fastcall sub_13B54(void *ptr, signed int a2)
{
  size_t result; // r0

  if ( a2 <= 0 )
    return 0;
  while ( 1 )
  {
    result = fread(ptr, 1u, a2, (FILE *)dword_30C84);
    if ( result )
      break;
    if ( *_errno_location() != 4 )
      return -1;
  }
  return result;
}
