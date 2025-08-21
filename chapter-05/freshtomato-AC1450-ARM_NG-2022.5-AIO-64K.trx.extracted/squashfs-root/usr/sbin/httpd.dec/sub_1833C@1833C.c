int __fastcall sub_1833C(_DWORD *a1, int a2, int (__fastcall *a3)(int, _DWORD *))
{
  int result; // r0

  if ( !a1 )
    return 0;
  if ( a3(a2, a1) )
  {
    if ( a3(a2, a1) >= 0 )
      a1[7] = sub_1833C(a1[7], a2, a3);
    else
      a1[6] = sub_1833C(a1[6], a2, a3);
    return sub_18108(a1);
  }
  else
  {
    result = sub_18310((_DWORD *)a1[6], a1[7]);
    a1[6] = 0;
    a1[7] = 0;
  }
  return result;
}
