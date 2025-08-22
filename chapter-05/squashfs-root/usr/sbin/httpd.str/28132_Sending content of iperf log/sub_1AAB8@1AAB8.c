FILE *sub_1AAB8()
{
  const char *v0; // r0
  const char *v1; // r0
  struct stat v3; // [sp+0h] [bp-60h] BYREF

  if ( access("/tmp/iperf_log", 0) != -1 )
  {
    stat("/tmp/iperf_log", &v3);
    printf("Size of iperflog: %jd\n", (intmax_t)v3.st_size);
    if ( v3.st_size > 0 )
    {
      puts("Sending content of iperf log");
      v0 = "/tmp/iperf_log";
      return sub_C3F0(v0);
    }
  }
  if ( pidof("iperf") >= 0 )
  {
    if ( access("/var/run/iperf.pid", 0) == -1 )
    {
      stat("/tmp/iperf_interval", &v3);
      if ( v3.st_size <= 0 )
      {
        v1 = "{ \"mode\": \"Client preparing\"}";
        return (FILE *)sub_13954(v1);
      }
    }
    else if ( access("/tmp/iperf_interval", 0) == -1 || (stat("/tmp/iperf_interval", &v3), v3.st_size <= 0) )
    {
      v1 = "{ \"mode\": \"Server waiting\"}";
      return (FILE *)sub_13954(v1);
    }
    v0 = "/tmp/iperf_interval";
    return sub_C3F0(v0);
  }
  v1 = "{ \"mode\": \"Stopped\" }";
  return (FILE *)sub_13954(v1);
}
