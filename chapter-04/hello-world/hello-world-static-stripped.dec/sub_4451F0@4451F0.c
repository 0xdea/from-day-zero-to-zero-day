// write access to const memory has been detected, the output may be wrong!
__int64 sub_4451F0()
{
  __int64 *v0; // x7
  __int64 v1; // x8
  __int64 v2; // x10
  const char *v3; // x9
  __int64 result; // x0
  __int64 *v5; // x6
  int v6; // w0
  __int64 v7; // x1
  __int64 **v8; // x6
  _OWORD *v9; // x11
  _DWORD *v10; // x0
  _DWORD *v11; // x3
  __int64 v12; // x10
  char *v13; // x4
  __int128 v14; // q1
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // [xsp+10h] [xbp+10h] BYREF

  v0 = off_4914A8;
  if ( (*((_BYTE *)off_4914A8 + 870) & 8) != 0 )
  {
    v1 = qword_490F20;
    if ( !qword_490F20 )
    {
      v2 = 0;
      v3 = "glibc.malloc.mmap_max";
LABEL_4:
      result = v2;
      *((_QWORD *)v3 + 370) = v1;
      return result;
    }
    v5 = off_4914A8;
    v1 = 0;
    v3 = "glibc.malloc.mmap_max";
LABEL_6:
    v2 = 0;
    do
    {
      if ( v0 != v5 && (__int64 *)v5[5] == v5 )
      {
        v6 = *((_WORD *)v5 + 434) & 3;
        if ( v6 == 1 || (*((_BYTE *)v5 + 871) & 1) != 0 )
        {
          v7 = *((_QWORD *)v3 + 369);
          if ( v7 )
            sub_445160((__int64)v5, (_QWORD *)(v7 + 32 * v1));
          ++v1;
        }
        else if ( v6 == 2 )
        {
          ++v2;
          if ( qword_496C20 )
            sub_445160((__int64)v5, (_QWORD *)(qword_496C20 + 32 * v2));
        }
      }
      v5 = (__int64 *)v5[3];
    }
    while ( v5 );
    goto LABEL_4;
  }
  sub_445160((__int64)off_4914A8, &v17);
  v10 = (_DWORD *)v0[94];
  v11 = &v10[14 * *((unsigned __int16 *)v0 + 384)];
  if ( v10 >= v11 )
  {
    v1 = 0;
    v3 = "glibc.malloc.mmap_max";
  }
  else
  {
    v3 = "glibc.malloc.mmap_max";
    v1 = 0;
    do
    {
      while ( 1 )
      {
        if ( *v10 == 1 )
        {
          v12 = 32 * v1++;
          v13 = (char *)off_48FB88 + v12;
          if ( off_48FB88 )
            break;
        }
        v10 += 14;
        if ( v11 <= v10 )
          goto LABEL_24;
      }
      v14 = v9[1];
      v10 += 14;
      v15 = *v0;
      *(_OWORD *)v13 = *v9;
      *((_OWORD *)v13 + 1) = v14;
      v16 = *((_QWORD *)v10 - 5) + v15;
      *(_QWORD *)((char *)off_48FB88 + v12) = v16;
      *((_QWORD *)v13 + 1) = *((_QWORD *)v10 - 2) + v16;
    }
    while ( v11 > v10 );
  }
LABEL_24:
  v2 = qword_490F20;
  if ( !qword_490F20 )
    goto LABEL_4;
  v5 = *v8;
  if ( v5 )
    goto LABEL_6;
  result = 0;
  qword_48FB90 = v1;
  return result;
}
