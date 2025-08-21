int __fastcall sub_183D0(int result, int (__fastcall *a2)(int, int), int a3)
{
  int i; // r4
  int v6; // r7

  for ( i = result; i; i = v6 )
  {
    sub_183D0(*(_DWORD *)(i + 24), a2, a3);
    v6 = *(_DWORD *)(i + 28);
    result = a2(i, a3);
  }
  return result;
}
