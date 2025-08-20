__int64 __fastcall fde_radixsort(__int64 a1, void (__fastcall *a2)(__int64, char *, __int64), __int64 a3, __int64 a4)
{
  __int64 v4; // x23
  __int64 v5; // x24
  __int64 v6; // x19
  unsigned int v7; // w22
  int v9; // w28
  unsigned int v10; // w20
  unsigned __int64 v11; // x25
  int v12; // w19
  int v13; // w3
  __int64 v14; // x1
  char *v15; // x2
  unsigned __int64 v16; // x0
  __int64 *v17; // x0
  int v18; // w1
  int v19; // w2
  unsigned int v20; // w25
  unsigned int v21; // w19
  unsigned int v22; // w3
  unsigned __int64 *v23; // x7
  unsigned int v24; // w1
  unsigned __int64 v25; // t1
  __int64 v26; // x8
  __int64 v27; // x0
  unsigned int v28; // w2
  __int64 v29; // x0
  __int64 result; // x0
  unsigned int v31; // [xsp+64h] [xbp+64h]
  __int64 v34; // [xsp+88h] [xbp+88h]
  _DWORD v35[256]; // [xsp+98h] [xbp+98h] BYREF
  unsigned __int64 v36; // [xsp+498h] [xbp+498h] BYREF
  char v37; // [xsp+4A0h] [xbp+4A0h] BYREF

  v4 = a3 + 16;
  v5 = a3 + 16;
  v6 = *(_QWORD *)(a3 + 8);
  v7 = v6;
  v34 = a3 + 16;
  memset(v35, 0, sizeof(v35));
  if ( (_DWORD)v6 )
  {
    v5 = a4 + 16;
    v9 = 0;
    while ( 1 )
    {
      v10 = 0;
      v11 = 0;
      v12 = 0;
      do
      {
        v13 = v7 - v10;
        if ( v7 - v10 > 0x80 )
          v13 = 128;
        v31 = v13;
        a2(a1, &v37, v4 + 8LL * v10);
        v36 = v11;
        if ( v7 != v10 )
        {
          v14 = 0;
          do
          {
            v15 = (char *)&v36 + v14;
            v16 = v11;
            v14 += 8;
            v11 = *((_QWORD *)v15 + 1);
            if ( v11 < v16 )
              ++v12;
            ++v35[(unsigned __int8)(v11 >> v9)];
          }
          while ( v14 != 8LL * v31 );
        }
        v10 += v31;
        v11 = *(&v36 + v31);
      }
      while ( v7 > v10 );
      if ( !v12 )
        break;
      v17 = (__int64 *)v35;
      v18 = 0;
      do
      {
        v19 = *(_DWORD *)v17;
        *(_DWORD *)v17 = v18;
        v17 = (__int64 *)((char *)v17 + 4);
        v18 += v19;
      }
      while ( v17 != (__int64 *)&v36 );
      v20 = 0;
      do
      {
        v21 = v7 - v20;
        if ( v7 - v20 > 0x80 )
          v21 = 128;
        ((void (__fastcall *)(__int64, unsigned __int64 *, __int64, _QWORD))a2)(a1, &v36, v4 + 8LL * v20, v21);
        v22 = v21 + v20;
        v23 = &v36;
        v24 = v20;
        if ( v7 != v20 )
        {
          do
          {
            v25 = *v23++;
            v26 = *(_QWORD *)(v4 + 8LL * v24++);
            v27 = (unsigned __int8)(v25 >> v9);
            v28 = v35[v27];
            v35[v27] = v28 + 1;
            *(_QWORD *)(v5 + 8LL * v28) = v26;
          }
          while ( v24 != v22 );
        }
        v20 += v21;
      }
      while ( v7 > v22 );
      v9 += 8;
      if ( v9 == 64 )
        goto LABEL_23;
      memset(v35, 0, sizeof(v35));
      v29 = v4;
      v4 = v5;
      v5 = v29;
    }
    v5 = v4;
  }
LABEL_23:
  result = v34;
  if ( v34 != v5 )
    return j_memcpy(v34);
  return result;
}
