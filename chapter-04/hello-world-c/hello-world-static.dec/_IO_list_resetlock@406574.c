__int64 *IO_list_resetlock()
{
  __int64 *result; // x0

  result = &run_fp;
  list_all_lock = 0;
  qword_492640 = 0;
  return result;
}
