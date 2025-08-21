__int64 sub_41F1D0()
{
  __int64 result; // x0
  char **v1; // x1
  _QWORD *StatusReg; // x4
  char ***v3; // x5
  char *v4; // x2
  char *v5; // x3
  void *v6; // x1
  __int16 *v7; // x3
  int *v8; // x2

  result = (__int64)off_491820;
  v1 = off_491820[0];
  StatusReg = (_QWORD *)_ReadStatusReg(TPIDR_EL0);
  v3 = (char ***)StatusReg[3];
  v5 = v1[7];
  v4 = v1[8];
  v6 = v1[10] + 512;
  v7 = (__int16 *)(v5 + 256);
  v8 = (int *)(v4 + 512);
  off_491888 = (__int16 (*)[25394])v7;
  off_491890 = v6;
  off_491898 = (int (*)[256])v8;
  if ( v3 == off_491820 )
  {
    result = 88;
    StatusReg[9] = v7;
    StatusReg[10] = v8;
    StatusReg[11] = v6;
  }
  return result;
}
