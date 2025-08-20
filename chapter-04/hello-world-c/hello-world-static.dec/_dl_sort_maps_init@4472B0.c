int *dl_sort_maps_init()
{
  int *result; // x0
  int v1; // [xsp+1Ch] [xbp+1Ch] BYREF

  _tunable_get_val(0xBu, (char **)&v1, 0);
  result = &dl_dso_sort_algo;
  dl_dso_sort_algo = v1 != 1;
  return result;
}
