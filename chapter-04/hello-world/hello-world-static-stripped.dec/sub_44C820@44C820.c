unsigned int *__fastcall sub_44C820(__int64 *a1, unsigned __int64 a2, unsigned __int64 a3, int a4, unsigned int a5)
{
  __int64 v8; // x4
  __int64 v9; // x2
  unsigned int *v11; // x19
  int v12; // w5
  __int64 v13; // x1

  v8 = 0;
  v9 = *(_QWORD *)(a1[14] + 8);
  if ( (*((_BYTE *)a1 + 870) & 0x20) != 0 )
  {
    v8 = *a1;
    v9 += *a1;
  }
  v11 = (unsigned int *)(v9 + 24LL * a5);
  v12 = v11[1] & 0xF;
  if ( *((_QWORD *)v11 + 1) || *((unsigned __int16 *)v11 + 3) == 65521 )
  {
    if ( ((-1128 >> v12) & 1) != 0 )
      return 0;
  }
  else if ( v12 != 6 )
  {
    return 0;
  }
  if ( (unsigned int)sub_42F240((unsigned __int64 *)(v8 + *(_QWORD *)(a1[13] + 8) + *v11), a2) )
    return 0;
  v13 = a1[102];
  if ( *(_DWORD *)(v13 + 24LL * (*(_WORD *)(a1[113] + 2LL * a5) & 0x7FFF) + 8) != a4 )
    return 0;
  if ( (unsigned int)sub_42F240(*(unsigned __int64 **)(v13 + 24LL * (*(_WORD *)(a1[113] + 2LL * a5) & 0x7FFF)), a3) )
    return 0;
  return v11;
}
