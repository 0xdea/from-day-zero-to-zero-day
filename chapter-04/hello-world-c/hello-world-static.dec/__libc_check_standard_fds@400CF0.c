__int64 _libc_check_standard_fds()
{
  check_one_fd(0, 0x8001u);
  check_one_fd(1, 0x8000u);
  return check_one_fd(2, 0x8000u);
}
