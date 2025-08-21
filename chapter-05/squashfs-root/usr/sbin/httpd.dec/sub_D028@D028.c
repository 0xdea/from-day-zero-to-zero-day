int __fastcall sub_D028(int a1, int a2)
{
  int result; // r0
  int v5; // [sp+10h] [bp-20h]
  _DWORD v6[7]; // [sp+14h] [bp-1Ch] BYREF

  if ( !dword_30C8C )
    hcreate_r(16);
  result = hsearch_r(a1, v5, 0, v6);
  if ( !v6[0] )
    return hsearch_r(a1, a2, 1, v6);
  *(_DWORD *)(v6[0] + 4) = a2;
  return result;
}
