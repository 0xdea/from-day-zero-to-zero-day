__int64 __fastcall pthread_kill(__int64 a1, void *a2, __int64 a3, __int64 a4, void *a5, void *a6, void *a7)
{
  __int64 v7; // x2

  v7 = (unsigned int)((_DWORD)a2 - 32);
  if ( (unsigned int)v7 <= 1 )
    return 22;
  else
    return _pthread_kill_implementation_constprop_0(a1, a2, v7, a4, a5, a6, a7);
}
