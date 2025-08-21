_QWORD *__fastcall _gconv_find_shlib(__int64 a1)
{
  _QWORD *v1; // x0
  _QWORD *v2; // x19
  int v3; // w0
  __int64 v4; // x1
  __int64 v5; // x0
  __int64 v6; // x0
  __int64 v7; // x1
  __int64 v8; // x0
  __int64 v9; // x0
  int8x16_t v10; // q1
  _QWORD *result; // x0
  bool v12; // vf
  int v13; // w0
  __int64 v14; // x24
  __int64 v15; // x0
  __int64 v16; // x25
  __int64 v17; // x1
  __int16 *v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  __int64 v21; // x5
  _QWORD *v22; // x0
  _QWORD *v23; // x23
  __int64 v24; // [xsp+58h] [xbp+58h] BYREF

  v24 = a1;
  v1 = (_QWORD *)tfind(&v24, &loaded, known_compare);
  if ( !v1 )
  {
    v14 = v24;
    v15 = strlen(v24);
    v16 = v15 + 1;
    v22 = (_QWORD *)malloc(v15 + 49, v17, v18, v19, v20, v21);
    v23 = v22;
    v2 = v22;
    if ( !v22 )
      return 0;
    *v22 = _memcpy_chk(v22 + 6, v14, v16);
    *((_DWORD *)v23 + 2) = -3;
    v23[2] = 0;
    if ( !tsearch(v23, &loaded, known_compare) )
    {
      v2 = 0;
      free(v23);
      return v2;
    }
LABEL_3:
    v3 = *((_DWORD *)v2 + 2);
    v4 = v2[2];
    if ( v3 >= -2 )
    {
      if ( v4 )
      {
        v12 = __OFADD__(v3, 1);
        v13 = v3 + 1;
        if ( (v13 < 0) ^ v12 | (v13 == 0) )
          v13 = 1;
        *((_DWORD *)v2 + 2) = v13;
      }
      return v2;
    }
    if ( !v4 )
    {
      v5 = _libc_dlopen_mode(*v2, 2147483650LL);
      v2[2] = v5;
      if ( v5 )
      {
        v6 = _libc_dlsym(v5, "gconv");
        v2[3] = v6;
        if ( v6 )
        {
          v7 = _libc_dlsym(v2[2], "gconv_init");
          v8 = v2[2];
          v2[4] = v7;
          v9 = _libc_dlsym(v8, "gconv_end");
          v10 = *(int8x16_t *)(v2 + 3);
          *((_DWORD *)v2 + 2) = 1;
          v2[5] = v9 ^ _pointer_chk_guard_local;
          result = v2;
          *(int8x16_t *)(v2 + 3) = veorq_s8(v10, vdupq_lane_s64(_pointer_chk_guard_local, 0));
          return result;
        }
        twalk_r(loaded, do_release_shlib, v2);
      }
      return 0;
    }
    _libc_assert_fail("found->handle == NULL", "gconv_dl.c", 113, "__gconv_find_shlib");
    return 0;
  }
  v2 = (_QWORD *)*v1;
  if ( *v1 )
    goto LABEL_3;
  return 0;
}
