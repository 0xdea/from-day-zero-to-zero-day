__int64 __fastcall sub_43E5D0(__int64 result, __int64 a2)
{
  unsigned __int64 v2; // x2
  unsigned __int64 v3; // x3

  v2 = *(_QWORD *)(a2 + 40);
  v3 = *(_QWORD *)(a2 + 48);
  *(_QWORD *)(result + 24) = 0;
  *(_DWORD *)(result + 32) = 4;
  *(_QWORD *)(result + 40) = a2;
  if ( v2 >= v3 )
  {
    v2 = result + 48;
    v3 = result + 176;
  }
  *(_QWORD *)result = v2;
  *(_QWORD *)(result + 8) = v2;
  *(_QWORD *)(result + 16) = v3;
  return result;
}
