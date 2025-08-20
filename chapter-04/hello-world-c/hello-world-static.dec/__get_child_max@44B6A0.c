rlim64_t _get_child_max()
{
  struct rlimit64 v1; // [xsp+8h] [xbp-18h] BYREF

  if ( (unsigned int)getrlimit64(__RLIMIT_NPROC, &v1) )
    return -1;
  else
    return v1.rlim_cur;
}
