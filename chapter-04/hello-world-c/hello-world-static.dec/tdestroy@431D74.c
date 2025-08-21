_QWORD *__fastcall tdestroy(_QWORD *a1, void (__fastcall *a2)(_QWORD))
{
  if ( a1 )
    return (_QWORD *)tdestroy_recurse(a1, a2);
  return a1;
}
