unsigned __int64 __fastcall sub_4427D4(unsigned __int64 result, unsigned __int64 *a2)
{
  unsigned __int64 v2; // x3

  qword_4967C0 = result | 1;
  __dmb(0xBu);
  v2 = *a2;
  *(_QWORD *)result = *a2;
  *(_QWORD *)(result + 8) = a2;
  *(_QWORD *)(v2 + 8) = result;
  __dmb(0xBu);
  *a2 = result;
  __dmb(0xBu);
  qword_4967C0 = 0;
  return result;
}
