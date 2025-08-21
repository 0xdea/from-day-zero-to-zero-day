__int64 *__fastcall dl_call_libc_early_init(__int64 *result, unsigned __int8 a2)
{
  unsigned int v2; // w20
  __int64 *v3; // x19
  __int64 v4; // x0
  __int64 v5; // x1

  if ( result )
  {
    v2 = a2;
    v3 = result;
    v4 = dl_lookup_direct(result, "__libc_early_init", 110527148, "GLIBC_PRIVATE", 157536133);
    if ( !v4 )
      _libc_assert_fail("sym != NULL", (__int64)"dl-call-libc-early-init.c", 0x25u, (__int64)"_dl_call_libc_early_init");
    if ( *(unsigned __int16 *)(v4 + 6) == 65521 )
      v5 = 0;
    else
      v5 = *v3;
    return (__int64 *)((__int64 (__fastcall *)(_QWORD))(v5 + *(_QWORD *)(v4 + 8)))(v2);
  }
  return result;
}
