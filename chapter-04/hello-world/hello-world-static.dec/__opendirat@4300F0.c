__int64 __fastcall _opendirat(__int64 a1, _BYTE *a2)
{
  int v2; // w0
  __int64 result; // x0

  if ( *a2 )
  {
    v2 = _openat_nocancel(a1);
    return opendir_tail(v2);
  }
  else
  {
    result = 0;
    *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40) = 2;
  }
  return result;
}
