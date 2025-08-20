__int64 release_registered_frames()
{
  __int64 result; // x0

  btree_destroy((__int64)&registered_frames);
  btree_destroy((__int64)&registered_objects);
  result = 1;
  in_shutdown = 1;
  return result;
}
