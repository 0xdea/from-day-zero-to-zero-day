__int64 __fastcall sub_4244D0(unsigned __int64 a1, __int64 a2, unsigned int a3, int a4)
{
  bool v4; // zf
  __int64 result; // x0
  const char *v7; // x1
  unsigned __int64 v8; // x5
  unsigned __int64 v9; // x6
  unsigned __int64 v10; // x4
  bool v11; // cc
  unsigned __int64 v12; // x3
  unsigned __int64 v13; // x4
  unsigned __int64 v14; // x4
  unsigned __int64 v15; // x3
  unsigned __int64 v16; // x4
  unsigned __int64 v17; // x5
  unsigned __int64 v18; // x4

  v4 = a4 == 0;
  result = a2;
  if ( v4 )
    v7 = "0123456789abcdefghijklmnopqrstuvwxyz";
  else
    v7 = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  switch ( a3 )
  {
    case 0xAu:
      do
      {
        v17 = a1;
        v18 = a1 % 0xA;
        a1 /= 0xAu;
        *(_BYTE *)--result = v7[v18];
      }
      while ( v17 > 9 );
      break;
    case 0x10u:
      do
      {
        v10 = a1 & 0xF;
        v11 = a1 > 0xF;
        v12 = a1 >> 4;
        *(_BYTE *)--result = v7[v10];
        if ( !v11 )
          break;
        v13 = v12 & 0xF;
        v11 = v12 > 0xF;
        a1 = v12 >> 4;
        *(_BYTE *)--result = v7[v13];
      }
      while ( v11 );
      break;
    case 8u:
      do
      {
        v14 = a1 & 7;
        v11 = a1 > 7;
        v15 = a1 >> 3;
        *(_BYTE *)--result = v7[v14];
        if ( !v11 )
          break;
        v16 = v15 & 7;
        v11 = v15 > 7;
        a1 = v15 >> 3;
        *(_BYTE *)--result = v7[v16];
      }
      while ( v11 );
      break;
    default:
      do
      {
        v8 = a1;
        v9 = a1 % a3;
        a1 /= a3;
        *(_BYTE *)--result = v7[v9];
      }
      while ( v8 >= a3 );
      break;
  }
  return result;
}
