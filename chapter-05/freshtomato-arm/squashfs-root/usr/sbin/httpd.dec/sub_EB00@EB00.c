int __fastcall sub_EB00(int result, _DWORD *a2)
{
  int v2; // r0

  if ( result == 1 )
  {
    v2 = pidof(*a2);
    return sub_13970(0, "%d", v2 > 0);
  }
  return result;
}
