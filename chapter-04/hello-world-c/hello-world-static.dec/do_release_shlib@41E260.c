void __fastcall do_release_shlib(__int64 *a1, int a2, __int64 a3)
{
  bool v3; // zf
  __int64 v4; // x19
  int v5; // w0
  int v6; // w0
  physx::Sc::ParticleSystemCore *v7; // x0

  if ( a2 )
    v3 = a2 == 3;
  else
    v3 = 1;
  v4 = *a1;
  if ( v3 )
  {
    v5 = *(_DWORD *)(v4 + 8);
    if ( a3 == v4 )
    {
      if ( v5 <= 0 )
      {
        v7 = (physx::Sc::ParticleSystemCore *)_libc_assert_fail(
                                                "obj->counter > 0",
                                                "gconv_dl.c",
                                                162,
                                                "do_release_shlib");
        physx::Sc::ParticleSystemCore::~ParticleSystemCore(v7);
      }
      else
      {
        *(_DWORD *)(a3 + 8) = v5 - 1;
      }
    }
    else if ( v5 == 0 || (unsigned int)v5 >= 0xFFFFFFFE )
    {
      v6 = v5 - 1;
      *(_DWORD *)(v4 + 8) = v6;
      if ( v6 == -3 )
      {
        if ( *(_QWORD *)(v4 + 16) )
        {
          _libc_dlclose();
          *(_QWORD *)(v4 + 16) = 0;
        }
      }
    }
  }
}
