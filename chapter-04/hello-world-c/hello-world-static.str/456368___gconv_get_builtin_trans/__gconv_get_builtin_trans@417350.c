__int64 __fastcall _gconv_get_builtin_trans(__int64 a1, __int64 a2)
{
  __int64 v3; // x19
  __int64 v5; // x21
  __int128 v6; // q1
  int v7; // w2
  int v8; // w1
  __int64 result; // x0

  v3 = 0;
  while ( 1 )
  {
    v5 = 4 * v3;
    if ( !(unsigned int)strcmp(a1, (&map)[4 * v3]) )
      break;
    if ( ++v3 == 12 )
    {
      _libc_assert_fail("cnt < sizeof (map) / sizeof (map[0])", "gconv_builtin.c", 69, "__gconv_get_builtin_trans");
      break;
    }
  }
  v6 = *(_OWORD *)&(&map)[v5 + 1];
  *(_DWORD *)(a2 + 88) = 0;
  v7 = *((char *)&map + 8 * v5 + 25);
  v8 = *((char *)&map + 8 * v5 + 26);
  result = (unsigned int)*((char *)&map + 8 * v5 + 27);
  *(_DWORD *)(a2 + 72) = SLOBYTE((&map)[v5 + 3]);
  *(_DWORD *)(a2 + 76) = v7;
  *(_DWORD *)(a2 + 80) = v8;
  *(_DWORD *)(a2 + 84) = result;
  *(_OWORD *)a2 = 0u;
  *(_OWORD *)(a2 + 40) = v6;
  *(_OWORD *)(a2 + 56) = 0u;
  return result;
}
