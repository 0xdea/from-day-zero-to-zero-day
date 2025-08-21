_BYTE *__fastcall expand_dynamic_string_token(__int64 a1, unsigned __int8 *a2, __int64 a3)
{
  __int64 v5; // x0
  _BYTE *result; // x0
  __int64 v7; // x20
  __int64 v8; // x3
  __int64 v9; // x4
  __int64 v10; // x5
  __int64 v11; // x22
  __int64 v12; // x1
  __int64 origin; // x0
  unsigned __int64 v14; // x0
  __int64 v15; // x22
  unsigned __int64 v16; // x1

  v5 = dl_dst_count((__int64)a2, (__int64)a2, a3);
  if ( !v5 )
    return (_BYTE *)strdup(a2);
  v7 = v5;
  v11 = strlen(a2);
  v12 = *(_QWORD *)(a1 + 912);
  if ( !v12 )
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
    v14 = 0;
    goto LABEL_7;
  }
  if ( v12 == -1 )
    goto LABEL_15;
  origin = *(_QWORD *)(a1 + 912);
LABEL_6:
  v14 = strlen(origin);
LABEL_7:
  v15 = v11 + 1;
  v16 = dl_platformlen;
  if ( (unsigned __int64)dl_platformlen < 0x15 )
    v16 = 21;
  if ( v16 < v14 )
    v16 = v14;
  result = (_BYTE *)malloc(v15 + (v16 - 4) * v7, v16 - 4, (__int16 *)0x15, v8, v9, v10);
  if ( result )
    return dl_dst_substitute(a1, a2, result);
  return result;
}
