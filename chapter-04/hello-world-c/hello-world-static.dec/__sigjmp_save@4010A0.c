__int64 __fastcall _sigjmp_save(__int64 a1, int a2)
{
  __int64 result; // x0
  bool v4; // zf
  int v5; // w1

  if ( a2 )
  {
    v4 = (unsigned int)sigprocmask(0, 0, a1 + 184) == 0;
    result = 0;
    v5 = v4;
    *(_DWORD *)(a1 + 176) = v5;
  }
  else
  {
    *(_DWORD *)(a1 + 176) = 0;
    return 0;
  }
  return result;
}
