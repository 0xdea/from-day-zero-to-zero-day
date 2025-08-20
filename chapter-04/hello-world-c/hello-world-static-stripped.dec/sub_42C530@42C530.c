_BYTE *__fastcall sub_42C530(_BYTE *result, int a2, int *a3)
{
  _BYTE *v3; // x21
  int v5; // w6
  int v6; // w20
  __int64 v7; // x1
  int v8; // w2

  if ( a2 <= 0 )
    return 0;
  v3 = result;
  if ( a2 == 1 )
  {
    *result = 0;
  }
  else
  {
    v5 = *a3;
    *a3 &= ~0x20u;
    v6 = v5 & 0x20;
    v7 = sub_441FF0(a3, result, a2 - 1, 10, 1);
    v8 = *a3;
    result = 0;
    if ( v7 )
    {
      if ( (v8 & 0x20) == 0 || (result = 0, *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40) == 11) )
      {
        v3[v7] = 0;
        result = v3;
        v8 = *a3;
      }
    }
    *a3 = v6 | v8;
  }
  return result;
}
