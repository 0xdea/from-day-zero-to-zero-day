__int64 __fastcall sub_403720(__int64 a1)
{
  __int64 v1; // x0
  __int64 v2; // t2

  v2 = a1 + 112;
  v1 = *(unsigned int *)(a1 + 112);
  if ( (*(_DWORD *)(v2 + 4) & 2) != 0 )
    return sub_410FC0(v1);
  else
    return sub_410B30(v1);
}
