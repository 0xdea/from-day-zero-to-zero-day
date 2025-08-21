void *__fastcall WebsGetVar(char *name)
{
  void *result; // r0
  int v2; // [sp+10h] [bp-10h]
  void **v3; // [sp+14h] [bp-Ch] BYREF

  if ( !dword_30C8C )
    return 0;
  ((void (__fastcall *)(char *, int, _DWORD, void ***, int *))hsearch_r)(name, v2, 0, &v3, &dword_30C8C);
  result = v3;
  if ( v3 )
    return v3[1];
  return result;
}
