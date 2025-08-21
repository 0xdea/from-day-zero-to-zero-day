__int64 __fastcall sub_446060(__int64 a1)
{
  unsigned int v2; // w20
  __int64 result; // x0
  __int64 v4; // x20
  __int128 v5; // q0
  int v6; // w3
  int v7; // w19
  __int64 v8; // [xsp+30h] [xbp+30h] BYREF
  __int64 v9; // [xsp+38h] [xbp+38h]
  __int128 v10; // [xsp+40h] [xbp+40h]

  *(_BYTE *)(a1 + 45) = 0;
  sub_42D0B0((atomic_uint *)&unk_490F30);
  v2 = sub_4322A0(&v8, sub_4466D0, a1);
  sub_42DA40((__int64)&unk_490F30);
  if ( v9 )
    sub_432204(v2, &v8, 0);
  result = *(unsigned __int8 *)(a1 + 45);
  if ( (result & 1) != 0 )
  {
    v4 = *(_QWORD *)(a1 + 24);
    v5 = *(_OWORD *)(a1 + 56);
    v6 = *(_DWORD *)(a1 + 48);
    v7 = *(_DWORD *)(a1 + 8);
    v8 = v4;
    LODWORD(v9) = v6;
    v10 = v5;
    sub_4322A0(0, sub_445ED0, &v8);
    if ( (v7 & 0x100) != 0 )
      sub_445EF0(v4);
    result = (unsigned int)dword_496770;
    if ( (dword_496770 & 0x40) != 0 )
      return sub_438334(
               "opening file=%s [%lu]; direct_opencount=%u\n\n",
               *(const char **)(v4 + 8),
               *(_QWORD *)(v4 + 48),
               *(_DWORD *)(v4 + 864));
  }
  return result;
}
