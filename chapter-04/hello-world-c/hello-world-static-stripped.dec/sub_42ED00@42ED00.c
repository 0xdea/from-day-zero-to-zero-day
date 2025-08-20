__int64 __fastcall sub_42ED00(int a1, __int64 a2, __int64 a3)
{
  __int64 v6; // x0
  const char *v8; // x0

  v6 = sub_441E10();
  if ( v6 )
    return sub_43CBF0("libc", v6, 5);
  v8 = (const char *)sub_43CBF0("libc", "Unknown error ", 5);
  sub_441B60(a2, a3, "%s%d", v8, a1);
  return a2;
}
