int *__fastcall sub_412370(__int64 a1)
{
  int *result; // x0

  if ( a1 )
  {
    result = (int *)&(&off_4914A8)[21 * a1 + 15];
    if ( *((_QWORD *)result + 1) )
      return result;
LABEL_5:
    atomic_store((unsigned __int64)(&off_4914A8)[21 * a1], (unsigned __int64 *)result + 1);
    return result;
  }
  result = &dword_4966E8;
  if ( !qword_4966F0 )
    goto LABEL_5;
  return result;
}
