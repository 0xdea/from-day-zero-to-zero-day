int __fastcall sub_18310(_DWORD *a1, int a2)
{
  if ( !a1 )
    return a2;
  a1[7] = sub_18310(a1[7]);
  return sub_18108(a1);
}
