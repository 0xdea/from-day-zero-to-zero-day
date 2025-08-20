__int64 __fastcall derivation_compare(_QWORD *a1, _QWORD *a2)
{
  __int64 result; // x0

  result = strcmp(*a1, *a2);
  if ( !(_DWORD)result )
    return strcmp(a1[1], a2[1]);
  return result;
}
