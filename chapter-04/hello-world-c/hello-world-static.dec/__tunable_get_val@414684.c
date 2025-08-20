unsigned __int64 __fastcall _tunable_get_val(unsigned int a1, char **a2, __int64 (__fastcall *a3)(char *))
{
  unsigned __int64 v3; // x4
  unsigned int v4; // w6
  char *v5; // x4
  unsigned __int64 result; // x0

  v3 = (unsigned __int64)a1 << 7;
  v4 = *(_DWORD *)&tunable_list[v3 + 48];
  if ( v4 > 2 )
  {
    v5 = &tunable_list[v3 + 88];
LABEL_3:
    result = (unsigned __int64)a1 << 7;
    *a2 = v5;
    if ( ((a3 != 0) & (unsigned __int8)tunable_list[result + 104]) == 0 )
      return result;
    return a3(&tunable_list[result + 88]);
  }
  v5 = *(char **)&tunable_list[v3 + 88];
  if ( v4 )
    goto LABEL_3;
  result = (unsigned __int64)a1 << 7;
  *(_DWORD *)a2 = (_DWORD)v5;
  if ( ((a3 != 0) & (unsigned __int8)tunable_list[result + 104]) != 0 )
    return a3(&tunable_list[result + 88]);
  return result;
}
