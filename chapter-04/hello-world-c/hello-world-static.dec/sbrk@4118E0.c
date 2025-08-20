__int64 __fastcall sbrk(__int64 a1)
{
  unsigned __int64 v2; // x20
  void *v3; // x0

  v2 = _curbrk;
  if ( !_curbrk )
  {
    if ( (brk(0) & 0x80000000) != 0 )
      return -1;
    v2 = _curbrk;
  }
  if ( !a1 )
    return v2;
  if ( a1 <= 0 )
  {
    if ( -a1 <= v2 )
    {
      v3 = (void *)(v2 + a1);
      goto LABEL_11;
    }
LABEL_6:
    *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40) = 12;
    return -1;
  }
  v3 = (void *)(v2 + a1);
  if ( __CFADD__(v2, a1) )
    goto LABEL_6;
LABEL_11:
  if ( (brk(v3) & 0x80000000) != 0 )
    return -1;
  return v2;
}
