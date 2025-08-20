void *__fastcall sub_415320(unsigned int a1, void **a2, __int64 a3)
{
  void **v5; // x1
  void *result; // x0
  void **v7; // x19
  void *v8; // x20
  __int64 v9; // x0

  dword_496848 = a1;
  qword_4966D8 = a3;
  qword_496850 = (__int64)a2;
  sub_414920();
  v5 = a2;
  result = (void *)a1;
  if ( a2 )
  {
    v7 = a2;
    v8 = *a2;
    if ( *v5 )
    {
      v9 = sub_42F700(*v5, 47);
      if ( v9 )
        v8 = (void *)(v9 + 1);
      off_491918 = v8;
      result = *v7;
      off_491920 = *v7;
    }
  }
  return result;
}
