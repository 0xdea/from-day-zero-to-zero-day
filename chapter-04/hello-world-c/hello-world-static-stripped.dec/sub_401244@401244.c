__int64 __fastcall sub_401244(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  _QWORD *v8; // x0
  __int64 v10; // x0
  __int64 v11; // x1
  __int64 v12; // x2

  if ( a1 )
  {
    if ( _aarch64_cas4_acq(0, 1u, (atomic_uint *)&unk_492210) )
      sub_406F40(&unk_492210);
    v8 = sub_401130(a4);
    if ( v8 )
    {
      v8[2] = a2;
      v8[3] = a3;
      *v8 = 4;
      v8[1] = a1 ^ qword_48DD68;
      if ( (int)_aarch64_swp4_rel(0, (atomic_uint *)&unk_492210) > 1 )
        sub_407040(&unk_492210);
      return 0;
    }
    else
    {
      if ( (int)_aarch64_swp4_rel(0, (atomic_uint *)&unk_492210) > 1 )
        sub_407040(&unk_492210);
      return 0xFFFFFFFFLL;
    }
  }
  else
  {
    v10 = sub_41F250("func != NULL", "cxa_atexit.c", 41, "__internal_atexit");
    return sub_401350(v10, v11, v12);
  }
}
