__int64 __fastcall sub_43AB60(__int64 a1)
{
  __int64 result; // x0

  result = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, __int64, _QWORD, __int64, __int64))loc_4463A4)(
             *(_QWORD *)a1,
             *(unsigned int *)(a1 + 8),
             *(_QWORD *)(a1 + 16),
             -2,
             (unsigned int)dword_496848,
             qword_496850,
             qword_4966D8);
  *(_QWORD *)(a1 + 24) = result;
  return result;
}
