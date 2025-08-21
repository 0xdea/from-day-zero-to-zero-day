__int64 __fastcall sub_445420(unsigned __int64 a1, __int64 a2)
{
  char *v5; // x0
  unsigned __int64 v6; // x6
  unsigned __int64 *v7; // x2
  unsigned __int64 *v8; // x4
  unsigned __int64 v9; // x3
  unsigned __int64 v10; // x0
  __int64 result; // x0
  unsigned __int64 *v12; // x9
  unsigned __int64 v13; // x0
  unsigned __int64 *v14; // x2
  _QWORD *v15; // x0
  unsigned __int64 v16; // x0
  __int128 v17; // q0
  __int128 v18; // q1
  bool v19; // cf
  unsigned __int64 v20; // x0
  unsigned __int64 i; // x1
  char *v22; // x3
  __int128 v23; // q0
  __int128 v24; // q0
  __int64 *v25; // x20
  __int128 v26; // q0
  bool v27; // cf
  __int128 v28; // [xsp+40h] [xbp+30h] BYREF
  __int128 v29; // [xsp+50h] [xbp+40h]

  if ( *((_QWORD *)&xmmword_48FB98 + 1) )
  {
    if ( (unsigned __int64)xmmword_48FB98 > a1 || *((_QWORD *)&xmmword_48FB98 + 1) <= a1 )
    {
      v5 = (char *)off_48FB88;
      if ( *(_QWORD *)off_48FB88 > a1 || qword_48FBB8 <= a1 )
        goto LABEL_7;
      for ( i = qword_48FB90; i; i >>= 1 )
      {
        while ( 1 )
        {
          v22 = &v5[32 * (i >> 1)];
          if ( a1 <= *(_QWORD *)v22 )
            break;
          v5 = v22 + 32;
          i = i - 1 - (i >> 1);
          if ( !i )
            goto LABEL_37;
        }
      }
LABEL_37:
      if ( (char *)off_48FB88 + 32 * qword_48FB90 == v5 || a1 != *(_QWORD *)v5 )
      {
        if ( a1 >= *((_QWORD *)v5 - 3) )
          goto LABEL_7;
        v5 -= 32;
        goto LABEL_41;
      }
      if ( v5 )
        v27 = a1 >= *((_QWORD *)v5 + 1);
      else
        v27 = 1;
      if ( !v27 )
      {
LABEL_41:
        v23 = *(_OWORD *)v5;
        *(_QWORD *)a2 = 0;
        *(_OWORD *)(a2 + 8) = v23;
        v24 = *((_OWORD *)v5 + 1);
        result = 0;
        *(_OWORD *)(a2 + 24) = v24;
        return result;
      }
LABEL_7:
      while ( 2 )
      {
        while ( 2 )
        {
          while ( 1 )
          {
            v6 = atomic_load((unsigned __int64 *)&qword_496C30);
            v7 = (unsigned __int64 *)qword_496C20[v6 & 1];
            if ( v7 )
              break;
LABEL_12:
            __dmb(9u);
            v10 = atomic_load((unsigned __int64 *)&qword_496C30);
            if ( v6 == v10 )
              return 0xFFFFFFFFLL;
          }
          while ( 1 )
          {
            v9 = v7[2];
            if ( !v9 )
              goto LABEL_12;
            v8 = v7 + 4;
            if ( a1 >= v7[4] )
              break;
            v7 = (unsigned __int64 *)atomic_load(v7);
            if ( !v7 )
              goto LABEL_12;
          }
          v12 = &v8[4 * v9];
          do
          {
            while ( 1 )
            {
              v13 = v9 >> 1;
              v14 = &v8[4 * (v9 >> 1)];
              if ( a1 <= *v14 )
                break;
              v8 = v14 + 4;
              v9 = v9 - 1 - v13;
              if ( !v9 )
                goto LABEL_17;
            }
            v9 >>= 1;
          }
          while ( v13 );
LABEL_17:
          if ( v8 == v12 || a1 != *v8 )
          {
            if ( a1 >= *(v8 - 3) )
              goto LABEL_12;
            v8 -= 4;
            v15 = v8 + 1;
            goto LABEL_21;
          }
          v15 = v8 + 1;
          if ( v8 )
            v19 = a1 >= v8[1];
          else
            v19 = 1;
          if ( !v19 )
          {
LABEL_21:
            *(_QWORD *)&v28 = *v8;
            *((_QWORD *)&v28 + 1) = *v15;
            v29 = *((_OWORD *)v8 + 1);
            __dmb(9u);
            v16 = atomic_load((unsigned __int64 *)&qword_496C30);
            if ( v6 != v16 )
              continue;
            v18 = v28;
            v17 = v29;
            result = 0;
            *(_QWORD *)a2 = 0;
            *(_OWORD *)(a2 + 8) = v18;
            *(_OWORD *)(a2 + 24) = v17;
            return result;
          }
          break;
        }
        __dmb(9u);
        v20 = atomic_load((unsigned __int64 *)&qword_496C30);
        if ( v6 != v20 )
          continue;
        return 0xFFFFFFFFLL;
      }
    }
    *(_QWORD *)a2 = 0;
    *(_OWORD *)(a2 + 8) = xmmword_48FB98;
    result = 0;
    *(_OWORD *)(a2 + 24) = xmmword_48FBA8;
  }
  else
  {
    if ( !qword_490F20 )
      return 0xFFFFFFFFLL;
    v25 = off_4914A8;
    if ( !off_4914A8 )
      return 0xFFFFFFFFLL;
    while ( a1 < v25[115] || a1 >= v25[116] || (*((_BYTE *)v25 + 870) & 8) == 0 && !(unsigned int)sub_448050(v25, a1) )
    {
      v25 = (__int64 *)v25[3];
      if ( !v25 )
        return 0xFFFFFFFFLL;
    }
    if ( v25[6] )
      sub_41F250("ns == l->l_ns", (__int64)"dl-find_object.c", 0x2Du, (__int64)"_dl_find_object_slow");
    sub_445160(v25, &v28);
    *(_QWORD *)a2 = 0;
    v26 = v29;
    result = 0;
    *(_OWORD *)(a2 + 8) = v28;
    *(_OWORD *)(a2 + 24) = v26;
  }
  return result;
}
