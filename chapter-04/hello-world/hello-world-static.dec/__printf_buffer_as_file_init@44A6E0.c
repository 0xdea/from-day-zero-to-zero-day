__int64 __fastcall _printf_buffer_as_file_init(_QWORD *a1, __int64 *a2)
{
  __int64 result; // x0
  __int64 v5; // x3
  __int64 v6; // x2

  a1[17] = 0;
  IO_no_init((__int64)a1, 0x8000, -1, 0, 0);
  result = *a2;
  v5 = a2[1];
  v6 = a2[2];
  a1[1] = *a2;
  a1[2] = result;
  a1[3] = result;
  a1[4] = result;
  a1[5] = v5;
  a1[6] = v6;
  a1[27] = &unk_48E550;
  a1[28] = a2;
  return result;
}
