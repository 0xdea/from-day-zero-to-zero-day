unsigned __int64 pthread_self()
{
  return _ReadStatusReg(TPIDR_EL0) - 1856;
}
