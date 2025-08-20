_QWORD *__fastcall sub_408480(unsigned __int64 a1, __int64 a2)
{
  _QWORD *result; // x0

  if ( !qword_490600 )
    return sub_408220(a1, a2, qword_490F10, 0);
  result = sub_408220(a1, a2, qword_490600, dword_490608);
  if ( !result )
    return sub_408220(a1, a2, qword_490F10, 0);
  return result;
}
