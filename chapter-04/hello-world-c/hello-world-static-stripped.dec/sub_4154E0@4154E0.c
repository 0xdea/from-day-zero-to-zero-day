__int64 __fastcall sub_4154E0(_QWORD *a1, _QWORD *a2)
{
  __int64 result; // x0

  result = sub_42F240(*a1, *a2);
  if ( !(_DWORD)result )
    return sub_42F240(a1[1], a2[1]);
  return result;
}
