__int64 *__fastcall sub_406DC0(__int64 a1)
{
  __int64 v2; // x0

  v2 = *(_QWORD *)(a1 + 56);
  if ( v2 && (*(_DWORD *)a1 & 1) == 0 )
  {
    sub_40C1A0(v2);
    *(_QWORD *)(a1 + 56) = 0;
    return sub_405410((unsigned int *)a1);
  }
  else
  {
    *(_QWORD *)(a1 + 56) = 0;
    return sub_405410((unsigned int *)a1);
  }
}
