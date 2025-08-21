const char *sub_B1C8()
{
  const char *result; // r0

  result = (const char *)nvram_get();
  if ( !result )
    return &s;
  return result;
}
