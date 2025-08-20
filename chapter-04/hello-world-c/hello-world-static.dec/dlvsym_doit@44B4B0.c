__int64 __fastcall dlvsym_doit(_QWORD *a1)
{
  __int64 result; // x0

  result = dl_vsym(*a1, a1[1], a1[2], a1[3]);
  a1[4] = result;
  return result;
}
