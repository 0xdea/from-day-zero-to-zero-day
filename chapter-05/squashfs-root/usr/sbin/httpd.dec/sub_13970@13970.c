int sub_13970(int a1, const char *a2, ...)
{
  signed int v3; // r5
  char *v5; // r0
  char *v6; // r4
  int v7; // r0
  char *v8; // r5
  char *v9; // r0
  va_list varg_r2; // [sp+28h] [bp+0h] BYREF

  va_start(varg_r2, a2);
  v3 = 1024;
  while ( 1 )
  {
    v5 = (char *)malloc(v3);
    v6 = v5;
    if ( !v5 )
      return 0;
    v7 = vsnprintf(v5, v3, a2, varg_r2); // KKK? fmt str, see callers but ugly
    if ( v7 < 0 )
    {
      v3 *= 2;
      goto LABEL_16;
    }
    if ( v7 < v3 )
      break;
    v3 = v7 + 1;
LABEL_16:
    free(v6);
    if ( v3 > 10240 )
      return 0;
  }
  if ( a1 == 1 )
  {
    v9 = sub_E6BC(v6);
  }
  else
  {
    if ( a1 != 2 )
    {
      v8 = v6;
      goto LABEL_11;
    }
    v9 = sub_E744(v6);
  }
  v8 = v9;
  free(v6);
LABEL_11:
  if ( !v8 )
    return 0;
  sub_13954(v8);
  free(v8);
  return 1;
}
