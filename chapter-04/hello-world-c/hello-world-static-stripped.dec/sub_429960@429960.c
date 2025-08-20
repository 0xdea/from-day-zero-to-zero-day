__int64 __fastcall sub_429960(__int64 a1)
{
  _QWORD *v1; // x1
  __int64 v2; // x3
  __int64 v3; // x4
  __int64 result; // x0

  v1 = *(_QWORD **)(a1 + 160);
  v2 = v1[1];
  v3 = v1[2];
  *(_DWORD *)a1 |= 0x100u;
  v1[2] = v1[8];
  result = v1[10];
  *v1 = result;
  v1[1] = result;
  v1[8] = v3;
  v1[10] = v2;
  return result;
}
