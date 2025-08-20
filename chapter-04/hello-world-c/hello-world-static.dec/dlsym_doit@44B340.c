__int64 __fastcall dlsym_doit(_QWORD *a1)
{
  __int64 result; // x0

  result = dl_sym(*a1, a1[1], a1[2]);
  a1[3] = result;
  return result;
}
