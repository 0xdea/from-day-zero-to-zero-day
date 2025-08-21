const char *__fastcall sub_180E0(int a1)
{
  const char *result; // r0

  result = (const char *)nvram_get(a1);
  if ( !result )
    return &s;
  return result;
}
