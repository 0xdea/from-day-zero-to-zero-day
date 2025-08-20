__int64 __fastcall sub_42A660(__int64 a1)
{
  int *v1; // x1
  __int64 *v2; // x2
  int v3; // w3
  __int64 v4; // x1
  __int64 v5; // x2

  v1 = *(int **)(a1 + 8);
  if ( !v1 )
    return 0xFFFFFFFFLL;
  v2 = (__int64 *)*((_QWORD *)v1 + 20);
  v3 = *v1;
  v4 = *v2;
  if ( (v3 & 0x100) != 0 )
    v5 = v2[1];
  else
    v5 = v2[2];
  return *(_DWORD *)(a1 + 16) - (unsigned int)((unsigned __int64)(v4 - v5) >> 2);
}
