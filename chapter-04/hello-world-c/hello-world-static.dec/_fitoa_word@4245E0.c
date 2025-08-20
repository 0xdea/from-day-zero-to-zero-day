char *__fastcall fitoa_word(
        unsigned __int64 a1,
        __int64 a2,
        unsigned int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        char a9)
{
  unsigned __int64 v9; // x0
  __int64 v10; // x7
  char *v11; // x2

  v9 = itoa_word(a1, (__int64)&a9, a3, a4);
  if ( v9 >= (unsigned __int64)&a9 )
    return (char *)v10;
  v11 = 0;
  do
  {
    v11[v10] = v11[v9];
    ++v11;
  }
  while ( v11 != &a9 - v9 );
  return &v11[v10];
}
