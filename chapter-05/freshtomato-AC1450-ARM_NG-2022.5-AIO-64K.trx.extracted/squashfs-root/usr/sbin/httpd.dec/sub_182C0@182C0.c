int __fastcall sub_182C0(int a1, int a2, int (__fastcall *a3)(int, int))
{
  while ( a1 && a3(a2, a1) )
  {
    if ( a3(a2, a1) >= 0 )
      a1 = *(_DWORD *)(a1 + 28);
    else
      a1 = *(_DWORD *)(a1 + 24);
  }
  return a1;
}
