_BYTE *__fastcall sub_19BB0(int a1, _BYTE *a2, int a3)
{
  int v4; // r0
  bool v5; // nf
  _BYTE *result; // r0

  v4 = f_read(a1, a2, a3 - 1);
  v5 = v4 < 0;
  if ( v4 >= 0 )
    a2[v4] = 0;
  result = a2;
  if ( v5 )
    *a2 = 0;
  return result;
}
