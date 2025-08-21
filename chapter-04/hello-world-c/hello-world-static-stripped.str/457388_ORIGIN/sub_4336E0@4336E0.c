_BYTE *__fastcall sub_4336E0(__int64 a1, unsigned __int8 *a2, _BYTE *a3)
{
  _BYTE *v3; // x20
  _BOOL4 v7; // w26
  unsigned __int8 *v8; // x27
  int v9; // w19
  __int64 v10; // x21
  const char *v11; // x1
  int v13; // w0
  bool v14; // zf

  v3 = a3;
  v7 = 0;
  v8 = a2;
  v9 = *a2;
  do
  {
    while ( 1 )
    {
      ++v8;
      if ( v9 != 36 )
        goto LABEL_2;
      v10 = sub_432880(v8, "ORIGIN");
      if ( v10 )
      {
        if ( dword_491570 )
        {
          if ( v8 != a2 + 1 || ((v13 = v8[v10], v13 != 47) ? (v14 = v13 == 0) : (v14 = 1), !v14) )
          {
LABEL_8:
            *a3 = 0;
            return a3;
          }
          v11 = *(const char **)(a1 + 912);
          v7 = (*(_WORD *)(a1 + 868) & 3LL) == 0;
        }
        else
        {
          v11 = *(const char **)(a1 + 912);
          v7 = 0;
        }
        goto LABEL_7;
      }
      v10 = sub_432880(v8, "PLATFORM");
      if ( v10 )
        break;
      v10 = sub_432880(v8, "LIB");
      if ( v10 )
      {
        v11 = "lib/aarch64-linux-gnu";
        goto LABEL_12;
      }
LABEL_2:
      *v3 = v9;
      v9 = *v8;
      ++v3;
      if ( !*v8 )
        goto LABEL_13;
    }
    v11 = (const char *)xmmword_496728;
LABEL_7:
    if ( (unsigned __int64)(v11 - 1) > 0xFFFFFFFFFFFFFFFDLL )
      goto LABEL_8;
LABEL_12:
    v8 += v10;
    v3 = (_BYTE *)sub_42EFC0(v3, v11);
    v9 = *v8;
  }
  while ( *v8 );
LABEL_13:
  if ( !v7 || (sub_432980(a3, v3 - a3) & 1) != 0 )
    *v3 = 0;
  else
    *a3 = 0;
  return a3;
}
