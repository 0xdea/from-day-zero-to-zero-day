__int64 _getclktck()
{
  if ( dl_clktck )
    return (unsigned int)dl_clktck;
  else
    return 100;
}
