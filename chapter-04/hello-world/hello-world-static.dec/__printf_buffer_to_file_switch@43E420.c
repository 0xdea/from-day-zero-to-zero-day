_QWORD *__fastcall _printf_buffer_to_file_switch(_QWORD *result)
{
  __int64 v1; // x2
  _QWORD *v2; // x1
  _QWORD *v3; // x2

  v1 = result[5];
  v2 = *(_QWORD **)(v1 + 40);
  v3 = *(_QWORD **)(v1 + 48);
  if ( v2 >= v3 )
  {
    v2 = result + 6;
    v3 = result + 22;
  }
  *result = v2;
  result[1] = v2;
  result[2] = v3;
  return result;
}
