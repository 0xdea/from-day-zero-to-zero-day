__int64 *__fastcall dl_find_object_freeres(
        double a1,
        double a2,
        double a3,
        double a4,
        double a5,
        double a6,
        double a7,
        double a8)
{
  _QWORD *v8; // x19
  __int64 v9; // x0
  __int64 *result; // x0
  _QWORD *v11; // x19
  __int64 v12; // x0

  v8 = (_QWORD *)dlfo_loaded_mappings[0];
  if ( dlfo_loaded_mappings[0] )
  {
    do
    {
      v9 = v8[1];
      v8 = (_QWORD *)*v8;
      free(v9, a1, a2, a3, a4, a5, a6, a7, a8);
    }
    while ( v8 );
  }
  result = dlfo_loaded_mappings;
  dlfo_loaded_mappings[0] = 0;
  v11 = (_QWORD *)qword_496C28;
  if ( qword_496C28 )
  {
    do
    {
      v12 = v11[1];
      v11 = (_QWORD *)*v11;
      result = (__int64 *)free(v12, a1, a2, a3, a4, a5, a6, a7, a8);
    }
    while ( v11 );
  }
  qword_496C28 = 0;
  return result;
}
