void __fastcall physx::Sc::ParticleSystemCore::~ParticleSystemCore(
        physx::Sc::ParticleSystemCore *this,
        double a2,
        double a3,
        double a4,
        double a5,
        double a6,
        double a7,
        double a8,
        double a9)
{
  if ( *((_QWORD *)this + 2) )
    a2 = _libc_dlclose();
  free((__int64)this, a2, a3, a4, a5, a6, a7, a8, a9);
}
