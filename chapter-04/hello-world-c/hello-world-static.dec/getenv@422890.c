unsigned __int8 *__fastcall getenv(_BYTE *a1)
{
  char **v1; // x20
  int v3; // w21
  __int64 v4; // x22
  char *v5; // x19
  char *v6; // t1

  v1 = environ;
  if ( !environ )
    return 0;
  v3 = (unsigned __int8)*a1;
  if ( !*a1 )
    return 0;
  v4 = strlen(a1);
  v5 = *v1;
  if ( !*v1 )
    return (unsigned __int8 *)v5;
  while ( (unsigned __int8)*v5 != v3 || (unsigned int)strncmp(a1, v5, v4) || v5[v4] != 61 )
  {
    v6 = v1[1];
    ++v1;
    v5 = v6;
    if ( !v6 )
      return (unsigned __int8 *)v5;
  }
  return (unsigned __int8 *)&v5[v4 + 1];
}
