__int64 __fastcall sub_4110F0(int a1, _BYTE *a2, _QWORD *a3, void **a4, char *a5)
{
  char *v6; // x20
  _BYTE *v8; // x21
  char *v10; // x26
  __int64 v13; // x0
  unsigned __int64 v15; // x0
  char *v16; // x28
  __int64 v17; // x20
  char *v18; // x25
  unsigned __int64 v19; // x0
  unsigned __int64 v20; // x21
  _BYTE *v21; // x28
  __int64 v22; // x0
  __int64 v23; // x0

  v6 = (char *)*a4;
  v8 = (_BYTE *)*a3;
  v10 = (char *)*a4 - *a3;
  v13 = ifunc_42EF50(*a3, 10, v10);
  if ( v13 )
  {
    v6 = (char *)(v13 + 1);
  }
  else if ( v8 != a2 && v6 == a5 )
  {
    j_ifunc_40DD80(a2, v8, v10);
    *a4 = (char *)*a4 + (_QWORD)a2 - *a3;
    *a3 = a2;
    v15 = sub_410FC0(a1, *a4, a5 - (_BYTE *)*a4);
    if ( (v15 & 0x8000000000000000LL) != 0 )
      return 0;
    v16 = (char *)*a4 + v15;
    *a4 = v16;
    v8 = (_BYTE *)*a3;
    v17 = ifunc_42EF50(*a3, 10, &v16[-*a3]);
    if ( !v17 )
    {
      v18 = &a2[3 * (a5 - a2) / 4];
      do
      {
        if ( v16 != a5 )
        {
          v8 = (_BYTE *)*a3;
          v6 = v16;
          goto LABEL_3;
        }
        *a4 = v18;
        v19 = sub_410FC0(a1, v18, a5 - v18);
        v20 = v19;
        if ( (v19 & 0x8000000000000000LL) != 0 )
          return 0;
        v21 = *a4;
        v22 = ifunc_42EF50(*a4, 10, v19);
        *v21 = 10;
        v17 = v22;
        v16 = (char *)*a4 + v20;
        *a4 = v16;
      }
      while ( !v22 );
      v8 = (_BYTE *)*a3;
    }
    v6 = (char *)(v17 + 1);
  }
LABEL_3:
  *a3 = v6;
  if ( *a4 >= v6 )
  {
    if ( *a4 != v8 )
      return (__int64)v8;
    return 0;
  }
  v23 = sub_41F250("*cp <= *re", "../sysdeps/unix/sysv/linux/getsysstats.c", 103, "next_line");
  return sub_4112C4(v23);
}
