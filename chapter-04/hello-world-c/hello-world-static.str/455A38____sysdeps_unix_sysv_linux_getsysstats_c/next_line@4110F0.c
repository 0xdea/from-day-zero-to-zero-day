__int64 __fastcall next_line(
        unsigned int a1,
        unsigned __int64 a2,
        unsigned __int64 *a3,
        unsigned __int64 *a4,
        __int64 a5)
{
  unsigned __int64 v6; // x20
  __int64 v8; // x21
  unsigned __int64 v10; // x26
  __int64 v13; // x0
  __int64 nocancel; // x0
  unsigned __int64 v16; // x28
  __int64 v17; // x20
  unsigned __int64 v18; // x25
  __int64 v19; // x0
  __int64 v20; // x21
  _BYTE *v21; // x28
  __int64 v22; // x0
  __int64 v23; // x0

  v6 = *a4;
  v8 = *a3;
  v10 = *a4 - *a3;
  v13 = memchr(*a3, 10, v10);
  if ( v13 )
  {
    v6 = v13 + 1;
  }
  else if ( v8 != a2 && v6 == a5 )
  {
    j_memmove(a2, v8, v10);
    *a4 = a2 + *a4 - *a3;
    *a3 = a2;
    nocancel = _read_nocancel(a1, *a4, a5 - *a4);
    if ( nocancel < 0 )
      return 0;
    v16 = *a4 + nocancel;
    *a4 = v16;
    v8 = *a3;
    v17 = memchr(*a3, 10, v16 - *a3);
    if ( !v17 )
    {
      v18 = a2 + (__int64)(3 * (a5 - a2)) / 4;
      do
      {
        if ( v16 != a5 )
        {
          v8 = *a3;
          v6 = v16;
          goto LABEL_3;
        }
        *a4 = v18;
        v19 = _read_nocancel(a1, v18, a5 - v18);
        v20 = v19;
        if ( v19 < 0 )
          return 0;
        v21 = (_BYTE *)*a4;
        v22 = memchr(*a4, 10, v19);
        *v21 = 10;
        v17 = v22;
        v16 = *a4 + v20;
        *a4 = v16;
      }
      while ( !v22 );
      v8 = *a3;
    }
    v6 = v17 + 1;
  }
LABEL_3:
  *a3 = v6;
  if ( *a4 >= v6 )
  {
    if ( *a4 != v8 )
      return v8;
    return 0;
  }
  v23 = _libc_assert_fail("*cp <= *re", "../sysdeps/unix/sysv/linux/getsysstats.c", 103, "next_line");
  return read_sysfs_file(v23);
}
