void *__fastcall sub_FEC8(void *result, char **a2)
{
  int v2; // r4
  int i; // r5
  char *v5; // t1

  v2 = (int)result;
  for ( i = 0; i < v2; ++i )
  {
    v5 = *a2++;
    result = WebsGetVar(v5);
    if ( result )
      result = (void *)sub_13954(result);
  }
  return result;
}
