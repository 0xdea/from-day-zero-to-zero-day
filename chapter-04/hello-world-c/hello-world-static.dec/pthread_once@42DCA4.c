__int64 __fastcall pthread_once(unsigned int *a1, void (__fastcall *a2)(__int64))
{
  char v2; // w2

  v2 = atomic_load(a1);
  if ( (v2 & 2) != 0 )
    return 0;
  else
    return _pthread_once_slow(a1, a2);
}
