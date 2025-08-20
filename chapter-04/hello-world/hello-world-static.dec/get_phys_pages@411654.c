unsigned __int64 get_phys_pages()
{
  int v0; // w0
  unsigned int v1; // w19
  unsigned __int64 i; // x1
  unsigned __int64 result; // x0
  _BYTE v6[32]; // [xsp+8h] [xbp-78h] BYREF
  __int64 v7; // [xsp+28h] [xbp-58h]
  unsigned int v8; // [xsp+70h] [xbp-10h]

  sysinfo(v6, &_stack_chk_guard, 0);
  v0 = getpagesize();
  v1 = v8;
  for ( i = v0; v1 > 1 && i > 1; i >>= 1 )
    v1 >>= 1;
  result = v1 * v7;
  if ( i > 1 )
  {
    do
    {
      i >>= 1;
      result >>= 1;
    }
    while ( i != 1 );
  }
  return result;
}
