const char *sub_E064()
{
  const char *result; // r0

  result = (const char *)WebsGetVar("resmsg");
  if ( !result )
    return &s;
  return result;
}
