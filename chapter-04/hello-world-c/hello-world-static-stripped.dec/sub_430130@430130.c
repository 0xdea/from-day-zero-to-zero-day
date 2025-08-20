__int64 __fastcall sub_430130(const char *a1)
{
  int v1; // w19
  __int64 v2; // x2
  __int64 v3; // x3
  void *v4; // x4
  void *v5; // x5
  void *v6; // x6
  double v7; // d0
  double v8; // d1
  double v9; // d2
  double v10; // d3
  double v11; // d4
  double v12; // d5
  double v13; // d6
  double v14; // d7
  __int64 st_blksize_low; // x20
  unsigned __int64 v16; // x0
  __int64 result; // x0
  __int64 v18; // x0
  _BYTE *v19; // x1
  __syscall_slong_t *v20; // x19
  __int64 v21; // x20
  int v22; // w0
  __syscall_slong_t *v23; // x29
  __int64 v24; // x30
  struct stat v25; // [xsp+18h] [xbp-98h] BYREF
  __int64 v26; // [xsp+A8h] [xbp-8h]
  __syscall_slong_t *vars0; // [xsp+B0h] [xbp+0h]
  __int64 vars8; // [xsp+B8h] [xbp+8h]

  if ( *a1 )
  {
    v22 = sub_410EE0(a1, 542720);
    v23 = vars0;
    v24 = vars8;
    while ( 1 )
    {
      v25.__unused[2] = (__syscall_slong_t)v23;
      v26 = v24;
      v25.__unused[1] = qword_48DD60;
      if ( (v22 & 0x80000000) == 0 )
      {
        vars0 = v20;
        vars8 = v21;
        v1 = v22;
        if ( (sub_410930(v22, &v25) & 0x80000000) == 0 )
        {
          if ( (v25.st_nlink & 0xF000) == 0x4000 )
          {
            if ( LODWORD(v25.st_blksize) <= 0xFFFFF )
            {
              if ( LODWORD(v25.st_blksize) <= 0x8000 )
              {
                v16 = 32816;
                st_blksize_low = 0x8000;
              }
              else
              {
                st_blksize_low = SLODWORD(v25.st_blksize);
                v16 = SLODWORD(v25.st_blksize) + 48LL;
              }
            }
            else
            {
              st_blksize_low = 0x100000;
              v16 = 1048624;
            }
            result = sub_40B890(v16, v7, v8, v9, v10, v11, v12, v13, v14, 0xFFFFF, v2, v3, v4, v5, v6);
            if ( result )
            {
              *(_DWORD *)result = v1;
              *(_DWORD *)(result + 4) = 0;
              *(_QWORD *)(result + 8) = st_blksize_low;
              *(_QWORD *)(result + 16) = 0;
              v20 = vars0;
              v21 = vars8;
              *(_QWORD *)(result + 24) = 0;
              *(_QWORD *)(result + 32) = 0;
              *(_DWORD *)(result + 40) = 0;
              goto LABEL_11;
            }
          }
          else
          {
            *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40) = 20;
          }
        }
        sub_410CD0(v1);
        v20 = vars0;
        v21 = vars8;
      }
      result = 0;
LABEL_11:
      if ( v25.__unused[1] == qword_48DD60 )
        return result;
      vars0 = v20;
      vars8 = v21;
      v18 = sub_412340();
      if ( !*v19 )
        break;
      v22 = sub_430EB0(v18);
      v23 = &v25.__unused[2];
    }
  }
  result = 0;
  *(_DWORD *)(_ReadStatusReg(TPIDR_EL0) + 40) = 2;
  return result;
}
