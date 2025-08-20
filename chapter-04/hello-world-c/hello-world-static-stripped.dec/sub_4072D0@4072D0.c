unsigned __int64 __fastcall sub_4072D0(unsigned __int64 *a1)
{
  unsigned __int64 result; // x0
  unsigned __int64 v2; // x2

  result = *a1;
  if ( result <= 0x408 )
  {
    v2 = result + 23;
    qword_490640 = result;
    result = ((((result + 23) & 0xFFFFFFFFFFFFFFF0LL) - 17) >> 4) + 1;
    if ( v2 <= 0x1F )
      result = 1;
    qword_490638 = result;
  }
  return result;
}
