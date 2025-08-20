__int64 _chk_fail()
{
  __int64 v0; // x0

  v0 = _fortify_fail("buffer overflow detected");
  return _fortify_fail(v0);
}
