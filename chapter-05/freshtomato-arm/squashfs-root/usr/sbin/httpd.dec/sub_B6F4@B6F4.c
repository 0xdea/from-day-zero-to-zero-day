int sub_B6F4()
{
  unlink("/etc/cert.pem");
  unlink("/etc/key.pem");
  unlink("/etc/server.pem");
  nvram_unset((int)"https_crt_file");
  return nvram_unset((int)"https_crt_gen");
}
