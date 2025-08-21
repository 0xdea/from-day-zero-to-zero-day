char *__fastcall dl_error_free(char *result)
{
  if ( "out of memory" != result )
    return (char *)free(result);
  return result;
}
