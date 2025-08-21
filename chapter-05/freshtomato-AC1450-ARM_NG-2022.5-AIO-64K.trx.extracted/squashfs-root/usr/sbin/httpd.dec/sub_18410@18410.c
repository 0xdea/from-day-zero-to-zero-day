int __fastcall sub_18410(int result, int (__fastcall *a2)(int, int), int a3)
{
  int i; // r4

  for ( i = result; i; i = *(_DWORD *)(i + 24) )
  {
    sub_18410(*(_DWORD *)(i + 28), a2, a3);
    result = a2(i, a3);
  }
  return result;
}
