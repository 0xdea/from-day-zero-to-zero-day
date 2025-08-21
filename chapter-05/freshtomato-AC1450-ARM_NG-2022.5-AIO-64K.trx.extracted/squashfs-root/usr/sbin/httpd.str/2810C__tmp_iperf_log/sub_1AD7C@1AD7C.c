int sub_1AD7C()
{
  killall("iperf", 15);
  unlink("/tmp/iperf_interval");
  return unlink("/tmp/iperf_log");
}
