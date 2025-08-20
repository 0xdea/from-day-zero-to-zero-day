__int64 __fastcall sub_44A4F0(_QWORD *a1)
{
  _QWORD *v1; // x1
  unsigned __int64 v2; // x2
  unsigned __int64 v3; // x3
  __int64 result; // x0

  v1 = (_QWORD *)a1[28];
  v2 = a1[5];
  if ( v2 < v1[1] )
    sub_41F250(
      "file->stream._IO_write_ptr >= file->next->write_ptr",
      (__int64)"printf_buffer_as_file.c",
      0x1Eu,
      (__int64)"__printf_buffer_as_file_commit");
  v3 = v1[2];
  if ( v2 > v3 )
    sub_41F250(
      "file->stream._IO_write_ptr <= file->next->write_end",
      (__int64)"printf_buffer_as_file.c",
      0x1Fu,
      (__int64)"__printf_buffer_as_file_commit");
  if ( a1[4] != *v1 )
    sub_41F250(
      "file->stream._IO_write_base == file->next->write_base",
      (__int64)"printf_buffer_as_file.c",
      0x20u,
      (__int64)"__printf_buffer_as_file_commit");
  result = a1[6];
  if ( v3 != result )
    sub_41F250(
      "file->stream._IO_write_end == file->next->write_end",
      (__int64)"printf_buffer_as_file.c",
      0x21u,
      (__int64)"__printf_buffer_as_file_commit");
  v1[1] = v2;
  return result;
}
