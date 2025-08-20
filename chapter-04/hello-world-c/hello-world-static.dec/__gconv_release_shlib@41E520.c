__int64 __fastcall _gconv_release_shlib(__int64 a1)
{
  return twalk_r(loaded, do_release_shlib, a1);
}
