__int64 _gconv_load_conf()
{
  return pthread_once(&once, _gconv_read_conf);
}
