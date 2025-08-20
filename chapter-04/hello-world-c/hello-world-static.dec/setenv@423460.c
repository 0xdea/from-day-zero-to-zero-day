__int64 __fastcall setenv(_BYTE *a1, __int64 a2, __int64 a3)
{
  int v5; // w21

  if ( a1 )
  {
    if ( *a1 )
    {
      v5 = a3;
      if ( !strchr(a1, 61, a3) )
        return _add_to_environ((__int64)a1, a2, 0, v5);
    }
  }
  *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40) = 22;
  return 0xFFFFFFFFLL;
}
