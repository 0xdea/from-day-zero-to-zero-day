void __cdecl init_have_lse_atomics()
{
  _aarch64_have_lse_atomics = ((unsigned __int16)getauxval(16) >> 8) & 1;
}
