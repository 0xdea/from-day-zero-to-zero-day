__int64 *__fastcall _malloc_hugepage_config(unsigned __int64 a1, unsigned __int64 *a2, unsigned int *a3)
{
  unsigned __int64 v4; // x21
  unsigned int v6; // w23
  __int64 v7; // x0
  _BYTE *v8; // x19
  _BYTE *v9; // x27
  _BYTE *v10; // x26
  _BYTE *v11; // x0
  int v12; // w1
  int v13; // w4
  unsigned __int8 *v14; // x0
  __int64 v15; // x3
  int v16; // t1
  __int64 v17; // x2
  __int64 v19; // x23
  unsigned int v20; // w19
  __int64 v21; // x2
  __int64 v22; // x0
  __int64 v23; // x0
  int v24; // w2
  unsigned __int8 *v25; // x0
  int v26; // w1
  bool v28; // zf
  int v29; // t1
  __int64 v30; // x3
  unsigned __int64 v32; // x21
  _BYTE v33[1016]; // [xsp+8h] [xbp-408h] BYREF
  __int64 v34; // [xsp+400h] [xbp-10h]

  v34 = 0;
  v4 = a1;
  *a2 = 0;
  *a3 = 0;
  if ( !a1 )
  {
    v19 = 0;
    v20 = _open_nocancel("/proc/meminfo", 0, a3);
    if ( v20 != -1 )
    {
      v21 = _pread64_nocancel(v20, v33, 511, 0);
      if ( (v21 & 0x8000000000000000LL) == 0 )
      {
        while ( 1 )
        {
          v33[v21] = 0;
          v22 = strstr(v33, "Hugepagesize:");
          if ( v22 )
            break;
          v23 = strrchr(v33, 10);
          if ( v23 )
          {
            v19 += v23 + 1 - (_QWORD)v33;
            v21 = _pread64_nocancel(v20, v33, 511, v19);
            if ( (v21 & 0x8000000000000000LL) == 0 )
              continue;
          }
          goto LABEL_20;
        }
        v24 = *(unsigned __int8 *)(v22 + 14);
        v25 = (unsigned __int8 *)(v22 + 15);
        v26 = v24 - 48;
        if ( v24 == 32 || (unsigned __int8)(v24 - 48) <= 9u )
        {
          do
          {
            v28 = v24 == 32;
            v29 = *v25++;
            v24 = v29;
            v30 = v26 + 10 * v4;
            v26 = v29 - 48;
            if ( !v28 )
              v4 = v30;
          }
          while ( v24 == 32 || (unsigned __int8)v26 <= 9u );
          v32 = v4 << 10;
          _close_nocancel(v20);
          *a2 = v32;
          if ( v32 )
            *a3 = ((unsigned int)__clz(__rbit64(v32)) << 26) | 0x40000;
          return &_stack_chk_guard;
        }
      }
LABEL_20:
      _close_nocancel(v20);
    }
    *a2 = 0;
    return &_stack_chk_guard;
  }
  v6 = _open_nocancel("/sys/kernel/mm/hugepages", 0x4000, 0);
  if ( v6 != -1 )
  {
LABEL_3:
    v7 = getdents64(v6, v33, 1024);
    if ( (unsigned __int64)(v7 + 1) > 1 )
    {
      v8 = &v33[v7];
      v9 = v33;
      while ( 1 )
      {
        v10 = v9;
        v11 = v9 + 19;
        v9 += *((unsigned __int16 *)v9 + 8);
        if ( v10[19] != 46 && !(unsigned int)strncmp(v11, "hugepages-", 10) )
        {
          v12 = (unsigned __int8)v10[29];
          v13 = v12 - 48;
          if ( (unsigned __int8)(v12 - 48) <= 9u )
          {
            v14 = v10 + 30;
            v15 = 0;
            do
            {
              v16 = *v14++;
              v17 = v13;
              v13 = v16 - 48;
              v15 = v17 + 10 * v15;
            }
            while ( (unsigned __int8)(v16 - 48) <= 9u );
            if ( v4 == v15 << 10 )
              break;
          }
        }
        if ( v9 == v8 )
          goto LABEL_3;
      }
      *a2 = v4;
      *a3 = ((unsigned int)__clz(__rbit64(v4)) << 26) | 0x40000;
    }
    _close_nocancel(v6);
  }
  return &_stack_chk_guard;
}
