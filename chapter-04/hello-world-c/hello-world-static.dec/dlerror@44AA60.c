const char *__fastcall dlerror(double a1, double a2, double a3, double a4, double a5, double a6, double a7, double a8)
{
  unsigned __int64 StatusReg; // x20
  __int64 v9; // x19
  __int64 v10; // x1
  const char *v11; // x21
  const char *v12; // x22
  const char *v13; // x0
  int v14; // w0
  double v15; // d0
  double v16; // d1
  double v17; // d2
  double v18; // d3
  double v19; // d4
  double v20; // d5
  double v21; // d6
  double v22; // d7
  const char *result; // x0
  const char *v24; // x20
  const char *v25; // x0
  int v26; // w0
  int v27; // w0
  int v28; // w0
  const char *v29; // [xsp+0h] [xbp-10h] BYREF

  StatusReg = _ReadStatusReg(TPIDR_EL0);
  v9 = *(_QWORD *)(StatusReg + 96);
  if ( !v9 )
    return 0;
  if ( v9 == -1 )
  {
    result = "out of memory";
    *(_QWORD *)(StatusReg + 96) = 0;
    return result;
  }
  v10 = *(_QWORD *)(v9 + 16);
  if ( !v10 )
    return 0;
  if ( (*(_BYTE *)(v9 + 5) & 1) != 0 )
  {
    *(_QWORD *)(StatusReg + 96) = 0;
    v28 = *(unsigned __int8 *)(v9 + 4);
    if ( v28 == 1 )
    {
      dl_error_free(v10, a1, a2, a3, a4, a5, a6, a7, a8);
    }
    else if ( v28 == 2 )
    {
      free(v10, a1, a2, a3, a4, a5, a6, a7, a8);
    }
    free(v9, a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
  }
  v11 = *(const char **)(v9 + 8);
  if ( *(_DWORD *)v9 )
  {
    v12 = ": ";
    *(_DWORD *)(StatusReg + 40) = *(_DWORD *)v9;
    if ( !*v11 )
      v12 = (const char *)&qword_456B08;
    v13 = (const char *)dcgettext((__int64)"libc", v10, 5u);
    v14 = asprintf(&v29, "%s%s%s: %m", v11, v12, v13);
    *(_DWORD *)(StatusReg + 40) = *(_DWORD *)v9;
    *(_BYTE *)(v9 + 5) = 1;
    if ( v14 < 0 )
      return *(const char **)(v9 + 16);
  }
  else
  {
    v24 = ": ";
    if ( !*v11 )
      v24 = (const char *)&qword_456B08;
    v25 = (const char *)dcgettext((__int64)"libc", v10, 5u);
    v26 = asprintf(&v29, "%s%s%s", v11, v24, v25);
    *(_BYTE *)(v9 + 5) = 1;
    if ( v26 < 0 )
      return *(const char **)(v9 + 16);
  }
  v27 = *(unsigned __int8 *)(v9 + 4);
  if ( v27 == 1 )
  {
    dl_error_free(*(_QWORD *)(v9 + 16), v15, v16, v17, v18, v19, v20, v21, v22);
  }
  else if ( v27 == 2 )
  {
    free(*(_QWORD *)(v9 + 16), v15, v16, v17, v18, v19, v20, v21, v22);
  }
  result = v29;
  *(_BYTE *)(v9 + 4) = 2;
  *(_QWORD *)(v9 + 16) = result;
  return result;
}
