int __fastcall sub_18210(_DWORD *a1)
{
  _DWORD *v1; // r4

  v1 = (_DWORD *)a1[6];
  a1[6] = v1[7];
  v1[7] = sub_18108(a1);
  return sub_18108(v1);
}
