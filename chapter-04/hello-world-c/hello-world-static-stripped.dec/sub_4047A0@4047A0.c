__int64 __fastcall sub_4047A0(__int64 result)
{
  __int64 v1; // x2
  __int64 v2; // x3
  __int64 v3; // x1

  *(_DWORD *)result |= 0x100u;
  v1 = *(_QWORD *)(result + 16);
  v2 = *(_QWORD *)(result + 24);
  *(_QWORD *)(result + 24) = *(_QWORD *)(result + 72);
  v3 = *(_QWORD *)(result + 88);
  *(_QWORD *)(result + 8) = v3;
  *(_QWORD *)(result + 16) = v3;
  *(_QWORD *)(result + 72) = v2;
  *(_QWORD *)(result + 88) = v1;
  return result;
}
