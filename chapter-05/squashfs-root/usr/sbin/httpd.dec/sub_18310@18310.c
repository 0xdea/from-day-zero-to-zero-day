_DWORD *__fastcall sub_18310(_DWORD *a1, int a2)
{
  if ( !a1 )
    return (_DWORD *)a2;
  a1[7] = sub_18310((_DWORD *)a1[7], a2);
  return sub_18108(a1);
}
