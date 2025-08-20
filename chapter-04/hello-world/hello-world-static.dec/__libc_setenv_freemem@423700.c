__int64 _libc_setenv_freemem()
{
  __int64 result; // x0

  clearenv();
  result = tdestroy(known_values, free);
  known_values = 0;
  return result;
}
