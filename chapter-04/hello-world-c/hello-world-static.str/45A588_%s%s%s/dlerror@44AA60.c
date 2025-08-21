const char *dlerror()
{
  unsigned __int64 StatusReg; // x20
  __int64 v1; // x19
  char *v2; // x1
  const char *v3; // x21
  const char *v4; // x22
  const char *v5; // x0
  int v6; // w0
  const char *result; // x0
  const char *v8; // x20
  const char *v9; // x0
  int v10; // w0
  int v11; // w0
  int v12; // w0
  const char *v13; // [xsp+0h] [xbp-10h] BYREF

  StatusReg = _ReadStatusReg(TPIDR_EL0);
  v1 = *(_QWORD *)(StatusReg + 96);
  if ( !v1 )
    return 0;
  if ( v1 == -1 )
  {
    result = "out of memory";
    *(_QWORD *)(StatusReg + 96) = 0;
    return result;
  }
  v2 = *(char **)(v1 + 16);
  if ( !v2 )
    return 0;
  if ( (*(_BYTE *)(v1 + 5) & 1) != 0 )
  {
    *(_QWORD *)(StatusReg + 96) = 0;
    v12 = *(unsigned __int8 *)(v1 + 4);
    if ( v12 == 1 )
    {
      dl_error_free(v2);
    }
    else if ( v12 == 2 )
    {
      free(v2);
    }
    free(v1);
    return 0;
  }
  v3 = *(const char **)(v1 + 8);
  if ( *(_DWORD *)v1 )
  {
    v4 = ": ";
    *(_DWORD *)(StatusReg + 40) = *(_DWORD *)v1;
    if ( !*v3 )
      v4 = (const char *)&qword_456B08;
    v5 = (const char *)dcgettext("libc", v2, 5);
    v6 = asprintf(&v13, "%s%s%s: %m", v3, v4, v5);
    *(_DWORD *)(StatusReg + 40) = *(_DWORD *)v1;
    *(_BYTE *)(v1 + 5) = 1;
    if ( v6 < 0 )
      return *(const char **)(v1 + 16);
  }
  else
  {
    v8 = ": ";
    if ( !*v3 )
      v8 = (const char *)&qword_456B08;
    v9 = (const char *)dcgettext("libc", v2, 5);
    v10 = asprintf(&v13, "%s%s%s", v3, v8, v9);
    *(_BYTE *)(v1 + 5) = 1;
    if ( v10 < 0 )
      return *(const char **)(v1 + 16);
  }
  v11 = *(unsigned __int8 *)(v1 + 4);
  if ( v11 == 1 )
  {
    dl_error_free(*(char **)(v1 + 16));
  }
  else if ( v11 == 2 )
  {
    free(*(_QWORD *)(v1 + 16));
  }
  result = v13;
  *(_BYTE *)(v1 + 4) = 2;
  *(_QWORD *)(v1 + 16) = result;
  return result;
}
