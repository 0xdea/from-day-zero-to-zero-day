__int64 sigprocmask()
{
  __int64 result; // x0

  result = pthread_sigmask();
  if ( (_DWORD)result )
  {
    *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40) = result;
    return 0xFFFFFFFFLL;
  }
  return result;
}
