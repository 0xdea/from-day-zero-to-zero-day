__int64 get_nprocs_conf()
{
  __int64 result; // x0

  result = read_sysfs_file("/sys/devices/system/cpu/possible");
  if ( !(_DWORD)result )
  {
    result = get_nproc_stat();
    if ( !(_DWORD)result )
    {
      LODWORD(result) = _get_nprocs_sched();
      if ( (_DWORD)result )
        return (unsigned int)result;
      else
        return 2;
    }
  }
  return result;
}
