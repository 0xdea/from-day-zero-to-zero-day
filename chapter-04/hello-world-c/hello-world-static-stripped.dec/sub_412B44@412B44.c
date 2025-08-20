void *__fastcall sub_412B44(
        void **a1,
        char a2,
        double a3,
        double a4,
        double a5,
        double a6,
        double a7,
        double a8,
        double a9,
        double a10)
{
  _QWORD *v10; // x20
  unsigned __int64 v13; // x19
  void *result; // x0

  v10 = *a1;
  if ( *((_QWORD *)*a1 - 2) )
  {
    v13 = 0;
    do
    {
      ++v13;
      sub_40C1A0(v10[2 * v13 + 1], a3, a4, a5, a6, a7, a8, a9, a10);
    }
    while ( v13 < *(v10 - 2) );
  }
  result = &unk_4919A0;
  if ( v10 != (_QWORD *)&unk_4919A0 )
    result = (void *)sub_40C1A0((unsigned __int64)(v10 - 2), a3, a4, a5, a6, a7, a8, a9, a10);
  if ( (a2 & 1) != 0 )
    return (void *)sub_40C1A0((unsigned __int64)*(a1 - 233), a3, a4, a5, a6, a7, a8, a9, a10);
  return result;
}
