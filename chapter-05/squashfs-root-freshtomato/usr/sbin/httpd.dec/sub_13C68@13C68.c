bool sub_13C68()
{
  if ( dword_30CE8 )
    dword_30C84 = ssl_server_fopen(dword_30724);
  else
    dword_30C84 = (int)fdopen(dword_30724, "r+");
  return dword_30C84 != 0;
}
