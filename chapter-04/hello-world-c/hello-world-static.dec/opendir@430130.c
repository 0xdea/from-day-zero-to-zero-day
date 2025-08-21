__int64 __fastcall opendir(const char *a1)
{
  int v1; // w0
  __int64 result; // x0

  if ( *a1 )
  {
    v1 = _open_nocancel(a1, 542720);
    return opendir_tail(v1);
  }
  else
  {
    result = 0;
    *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40) = 2;
  }
  return result;
}
