__int64 __fastcall raise(unsigned int a1)
{
  __int64 v2; // x0
  __int64 result; // x0

  v2 = pthread_self();
  result = pthread_kill(v2, a1);
  if ( (_DWORD)result )
  {
    *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40) = result;
    return 0xFFFFFFFFLL;
  }
  return result;
}
