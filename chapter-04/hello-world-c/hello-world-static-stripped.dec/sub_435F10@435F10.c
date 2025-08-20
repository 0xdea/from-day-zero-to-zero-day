unsigned int *__fastcall sub_435F10(
        unsigned __int64 a1,
        unsigned int *a2,
        __int64 a3,
        char a4,
        unsigned __int8 a5,
        unsigned int *a6,
        unsigned int a7,
        __int64 a8,
        __int64 a9,
        unsigned int **a10,
        _DWORD *a11)
{
  __int64 v11; // x8
  int v16; // w2
  int v17; // w5
  __int64 v18; // x0
  __int16 v19; // w22
  __int64 v20; // x1
  int v21; // w21
  __int64 v25; // x0

  v11 = *((_QWORD *)a6 + 1);
  v16 = a6[1] & 0xF;
  v17 = *((unsigned __int16 *)a6 + 3);
  if ( !v11 && v16 != 6 && v17 != 65521 )
    return 0;
  if ( (v17 == 0) & a5 | (-1128 >> v16) & 1 || a6 != a2 && (unsigned int)sub_42F240((unsigned __int64 *)(a8 + *a6), a1) )
    return 0;
  v18 = *(_QWORD *)(a9 + 904);
  if ( !a3 )
  {
    if ( !v18 || (*(_WORD *)(v18 + 2LL * a7) & 0x7FFF) < ((a4 & 2) == 0) + 2 )
      return a6;
    if ( (*(_WORD *)(v18 + 2LL * a7) & 0x8000) == 0 && !(*a11)++ )
      *a10 = a6;
    return 0;
  }
  if ( !v18 )
  {
    v25 = *(_QWORD *)(a3 + 16);
    if ( v25 && (unsigned int)sub_437560(v25, a9) )
      sub_41F250(
        "version->filename == NULL || ! _dl_name_match_p (version->filename, map)",
        (__int64)"dl-lookup.c",
        0x6Au,
        (__int64)"check_match");
    return a6;
  }
  v19 = *(_WORD *)(v18 + 2LL * a7);
  v20 = *(_QWORD *)(a9 + 816);
  v21 = *(_DWORD *)(v20 + 24LL * (v19 & 0x7FFF) + 8);
  if ( (v21 != *(_DWORD *)(a3 + 8)
     || (unsigned int)sub_42F240(*(unsigned __int64 **)(v20 + 24LL * (v19 & 0x7FFF)), *(_QWORD *)a3))
    && (v21 | *(_DWORD *)(a3 + 12) || v19 < 0) )
  {
    return 0;
  }
  return a6;
}
