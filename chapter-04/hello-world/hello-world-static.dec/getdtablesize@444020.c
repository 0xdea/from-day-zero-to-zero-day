__int64 getdtablesize()
{
  struct rlimit64 v1; // [xsp+8h] [xbp-18h] BYREF

  if ( (getrlimit64(RLIMIT_NOFILE, &v1) & 0x80000000) != 0LL )
    return 256;
  else
    return LODWORD(v1.rlim_cur);
}
