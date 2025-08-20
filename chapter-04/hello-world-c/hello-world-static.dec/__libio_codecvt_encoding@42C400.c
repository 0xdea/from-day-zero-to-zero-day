__int64 __fastcall _libio_codecvt_encoding(__int64 *a1)
{
  __int64 v1; // x1
  __int64 result; // x0

  v1 = *a1;
  if ( *(_DWORD *)(*a1 + 88) )
    return 0xFFFFFFFFLL;
  LODWORD(result) = *(_DWORD *)(v1 + 72);
  if ( (_DWORD)result == *(_DWORD *)(v1 + 76) )
    return (unsigned int)result;
  else
    return 0;
}
