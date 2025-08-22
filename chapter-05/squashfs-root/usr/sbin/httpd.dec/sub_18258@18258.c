_DWORD *__fastcall sub_18258(_DWORD *a1, int a2, int (__fastcall *a3)(int, _DWORD *))
{
  if ( !a1 )
    return (_DWORD *)a2;
  if ( a3(a2, a1) >= 0 )
    a1[7] = sub_18258((_DWORD *)a1[7], a2, a3);
  else
    a1[6] = sub_18258((_DWORD *)a1[6], a2, a3);
  return sub_18108(a1);
}
