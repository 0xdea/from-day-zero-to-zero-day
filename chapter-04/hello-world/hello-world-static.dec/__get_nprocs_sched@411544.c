__int64 _get_nprocs_sched()
{
  int v0; // w0
  cpu_set_t v2[7]; // [xsp+8h] [xbp-1008h] BYREF
  __int64 v3; // [xsp+400h] [xbp-C10h]

  v3 = 0;
  v0 = linux_eabi_syscall(__NR_sched_getaffinity, 0, 0x1000u, v2);
  if ( v0 > 0 )
    return _sched_cpucount(v0, v2);
  else
    return (unsigned __int8)(v0 == -22) << 15;
}
