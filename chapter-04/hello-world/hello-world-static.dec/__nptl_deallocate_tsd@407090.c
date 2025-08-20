__int64 _nptl_deallocate_tsd()
{
  unsigned __int64 StatusReg; // x24
  unsigned __int64 v1; // x25
  __int64 result; // x0
  __int64 *v3; // x22
  void (**v4)(void); // x23
  __int64 v5; // x21
  __int64 v6; // x3
  _QWORD *v7; // x19
  _QWORD *v8; // x26
  void (**v9)(void); // x20
  __int64 v10; // x1
  __int64 *v11; // x19
  __int64 *v12; // x24
  __int64 v13; // [xsp+68h] [xbp+68h]

  StatusReg = _ReadStatusReg(TPIDR_EL0);
  v1 = StatusReg - 1856;
  result = *(unsigned __int8 *)(StatusReg - 1856 + 0x410);
  if ( (result & 1) != 0 )
  {
    v13 = 4;
    while ( 1 )
    {
      v3 = (__int64 *)(StatusReg - 1072);
      v4 = (void (**)(void))&unk_492690;
      v5 = 32;
      *(_BYTE *)(v1 + 0x410) = 0;
      do
      {
        v6 = *v3;
        if ( *v3 )
        {
          v7 = (_QWORD *)(v6 + 8);
          v8 = (_QWORD *)(v6 + 520);
          v9 = v4;
          do
          {
            if ( *v7 )
            {
              v10 = (__int64)*(v9 - 1);
              *v7 = 0;
              if ( *(v7 - 1) == v10 )
              {
                if ( *v9 )
                  (*v9)();
              }
            }
            v7 += 2;
            v9 += 2;
          }
          while ( v7 != v8 );
        }
        v5 += 32;
        ++v3;
        v4 += 64;
      }
      while ( v5 != 1056 );
      if ( (*(_BYTE *)(v1 + 0x410) & 1) == 0 )
        break;
      if ( !--v13 )
      {
        memset(StatusReg - 1584, 0, 512);
        break;
      }
    }
    v11 = (__int64 *)(StatusReg - 1064);
    v12 = (__int64 *)(StatusReg - 816);
    do
    {
      result = *v11;
      if ( *v11 )
      {
        result = free(result);
        *v11 = 0;
      }
      ++v11;
    }
    while ( v11 != v12 );
    *(_BYTE *)(v1 + 0x410) = 0;
  }
  return result;
}
