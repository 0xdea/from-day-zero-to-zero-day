ssize_t __fastcall sub_446060(__int64 a1)
{
  __int64 v2; // x3
  __int64 v3; // x4
  __int64 v4; // x5
  __int64 v5; // x6
  __int64 v6; // x7
  int v7; // w20
  __int64 v8; // x4
  __int64 v9; // x5
  __int64 v10; // x6
  __int64 v11; // x7
  ssize_t result; // x0
  __int64 v13; // x20
  __int128 v14; // q0
  __int64 v15; // x3
  int v16; // w19
  __int64 v17; // [xsp+30h] [xbp+30h] BYREF
  __int64 v18; // [xsp+38h] [xbp+38h]
  __int128 v19; // [xsp+40h] [xbp+40h]

  *(_BYTE *)(a1 + 45) = 0;
  sub_42D0B0(dword_490F30);
  v7 = sub_4322A0(&v17, (void (__fastcall *)(__int64))sub_4466D0, a1, v2, v3, v4, v5, v6);
  sub_42DA40(dword_490F30);
  if ( v18 )
    sub_432204(v7, (__int64)&v17, 0);
  result = *(unsigned __int8 *)(a1 + 45);
  if ( (result & 1) != 0 )
  {
    v13 = *(_QWORD *)(a1 + 24);
    v14 = *(_OWORD *)(a1 + 56);
    v15 = *(unsigned int *)(a1 + 48);
    v16 = *(_DWORD *)(a1 + 8);
    v17 = v13;
    LODWORD(v18) = v15;
    v19 = v14;
    sub_4322A0(0, (void (__fastcall *)(__int64))sub_445ED0, (__int64)&v17, v15, v8, v9, v10, v11);
    if ( (v16 & 0x100) != 0 )
      sub_445EF0(v13);
    result = (unsigned int)dword_496770;
    if ( (dword_496770 & 0x40) != 0 )
      return sub_438334(
               "opening file=%s [%lu]; direct_opencount=%u\n\n",
               *(const char **)(v13 + 8),
               *(_QWORD *)(v13 + 48),
               *(_DWORD *)(v13 + 864));
  }
  return result;
}
