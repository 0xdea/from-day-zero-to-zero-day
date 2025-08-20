__int64 __fastcall dlclose(__int64 a1)
{
  if ( (unsigned int)dlerror_run(dl_close, a1) )
    return 0xFFFFFFFFLL;
  else
    return 0;
}
