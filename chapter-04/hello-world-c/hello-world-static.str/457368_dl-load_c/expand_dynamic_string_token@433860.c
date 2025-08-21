__int64 __fastcall expand_dynamic_string_token(__int64 a1, __int64 a2)
{
  __int64 v4; // x0
  __int64 result; // x0
  __int64 v6; // x20
  __int64 v7; // x3
  __int64 v8; // x4
  __int64 v9; // x5
  __int64 v10; // x22
  __int64 v11; // x1
  __int64 origin; // x0
  unsigned __int64 v13; // x0
  __int64 v14; // x22
  unsigned __int64 v15; // x1

  v4 = dl_dst_count(a2);
  if ( !v4 )
    return strdup(a2);
  v6 = v4;
  v10 = strlen(a2);
  v11 = *(_QWORD *)(a1 + 912);
  if ( !v11 )
  {
    if ( **(_BYTE **)(a1 + 8) )
      _libc_assert_fail(
        "(l)->l_name[0] == '\\0' || IS_RTLD (l)",
        (__int64)"dl-load.c",
        0x192u,
        (__int64)"expand_dynamic_string_token");
    origin = dl_get_origin(**(unsigned __int8 **)(a1 + 8));
    *(_QWORD *)(a1 + 912) = origin;
    if ( (unsigned __int64)(origin - 1) <= 0xFFFFFFFFFFFFFFFDLL )
      goto LABEL_6;
LABEL_15:
    v13 = 0;
    goto LABEL_7;
  }
  if ( v11 == -1 )
    goto LABEL_15;
  origin = *(_QWORD *)(a1 + 912);
LABEL_6:
  v13 = strlen(origin);
LABEL_7:
  v14 = v10 + 1;
  v15 = dl_platformlen;
  if ( (unsigned __int64)dl_platformlen < 0x15 )
    v15 = 21;
  if ( v15 < v13 )
    v15 = v13;
  result = malloc(v14 + (v15 - 4) * v6, v15 - 4, (__int16 *)0x15, v7, v8, v9);
  if ( result )
    return dl_dst_substitute(a1, a2, result);
  return result;
}
