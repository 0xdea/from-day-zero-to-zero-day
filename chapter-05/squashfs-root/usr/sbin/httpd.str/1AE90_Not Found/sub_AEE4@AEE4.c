char *__fastcall sub_AEE4(int a1)
{
  if ( a1 == 400 )
    return "Invalid Request";
  if ( a1 > 400 )
  {
    switch ( a1 )
    {
      case 404:
        return "Not Found";
      case 501:
        return "Not Implemented";
      case 401:
        return "Unauthorized";
    }
  }
  else
  {
    if ( a1 == 200 )
      return "OK";
    if ( a1 == 302 )
      return "Found";
  }
  return "Unknown";
}
