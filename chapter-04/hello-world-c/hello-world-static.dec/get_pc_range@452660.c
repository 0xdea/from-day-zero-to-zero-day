__int64 __fastcall get_pc_range(__int64 result, unsigned __int64 *a2)
{
  char **v2; // x19
  int v4; // w1
  char *v5; // x1
  __int64 v6; // x20
  char *v7; // t1
  unsigned __int64 *v8; // x2
  char *v9; // x1

  v2 = *(char ***)(result + 24);
  *a2 = 0;
  a2[1] = 0;
  v4 = *(_DWORD *)(result + 32);
  if ( (v4 & 1) != 0 )
  {
    v9 = *v2;
    v8 = a2;
    return classify_object_over_fdes(result, v9, v8);
  }
  if ( (v4 & 2) == 0 )
  {
    v8 = a2;
    v9 = (char *)v2;
    return classify_object_over_fdes(result, v9, v8);
  }
  v5 = *v2;
  v6 = result;
  if ( *v2 )
  {
    do
    {
      result = classify_object_over_fdes(v6, v5, a2);
      v7 = v2[1];
      ++v2;
      v5 = v7;
    }
    while ( v7 );
  }
  return result;
}
