char *__fastcall sub_414634(unsigned int a1, char **a2)
{
  unsigned __int64 v2; // x0
  unsigned int v3; // w4
  char *result; // x0

  v2 = (unsigned __int64)a1 << 7;
  v3 = *(_DWORD *)&aGlibcRtldNns[v2 + 48];
  if ( v3 > 2 )
  {
    result = &aGlibcRtldNns[v2 + 72];
    goto LABEL_3;
  }
  result = *(char **)&aGlibcRtldNns[v2 + 72];
  if ( v3 )
  {
LABEL_3:
    *a2 = result;
    return result;
  }
  *(_DWORD *)a2 = (_DWORD)result;
  return result;
}
