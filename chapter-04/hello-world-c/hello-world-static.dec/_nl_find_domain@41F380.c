__int64 __fastcall nl_find_domain(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v8; // x0
  __int64 l10nflist; // x19
  __int64 v11; // x0
  _QWORD *v12; // x20
  __int64 v13; // t1
  __int64 v14; // x0
  __int64 v15; // x26
  unsigned __int64 v16; // x24
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  void *v20; // x4
  void *v21; // x5
  void *v22; // x6
  double v23; // d0
  double v24; // d1
  double v25; // d2
  double v26; // d3
  double v27; // d4
  double v28; // d5
  double v29; // d6
  double v30; // d7
  __int64 v31; // x0
  unsigned int v32; // w24
  __int64 v33; // x0
  double v34; // d0
  double v35; // d1
  double v36; // d2
  double v37; // d3
  double v38; // d4
  double v39; // d5
  double v40; // d6
  double v41; // d7
  __int64 v42; // x0
  _QWORD *v43; // x20
  __int64 v44; // t1
  __int64 v45; // [xsp+20h] [xbp-30h] BYREF
  __int64 v46; // [xsp+28h] [xbp-28h] BYREF
  __int64 v47; // [xsp+30h] [xbp-20h] BYREF
  __int64 v48; // [xsp+38h] [xbp-18h] BYREF
  __int64 v49; // [xsp+40h] [xbp-10h] BYREF

  pthread_rwlock_rdlock(&lock_0, 0);
  v8 = strlen(a1);
  l10nflist = nl_make_l10nflist(&nl_loaded_domains, a1, v8 + 1, 0, a2, 0, 0, 0, 0, a3, 0);
  pthread_rwlock_unlock(&lock_0);
  if ( l10nflist )
  {
    if ( *(int *)(l10nflist + 8) <= 0 )
      nl_load_domain(l10nflist, a4);
    if ( !*(_QWORD *)(l10nflist + 16) )
    {
      v11 = *(_QWORD *)(l10nflist + 32);
      if ( v11 )
      {
        v12 = (_QWORD *)(l10nflist + 32);
        do
        {
          if ( *(int *)(v11 + 8) <= 0 )
            nl_load_domain(v11, a4);
          if ( *(_QWORD *)(*v12 + 16LL) )
            break;
          v13 = v12[1];
          ++v12;
          v11 = v13;
        }
        while ( v13 );
      }
    }
  }
  else
  {
    v14 = nl_expand_alias(a2);
    v15 = v14;
    if ( v14 )
    {
      v16 = strlen(v14) + 1;
      v31 = malloc(v16, v23, v24, v25, v26, v27, v28, v29, v30, v17, v18, v19, v20, v21, v22);
      a2 = v31;
      if ( !v31 )
        return l10nflist;
      _memcpy_chk(v31, v15, v16, v16);
    }
    v32 = nl_explode_name(a2, &v45, &v46, &v47, &v48, &v49);
    if ( v32 != -1 )
    {
      pthread_rwlock_wrlock(&lock_0);
      v33 = strlen(a1);
      l10nflist = nl_make_l10nflist(&nl_loaded_domains, a1, v33 + 1, v32, v45, v47, v48, v49, v46, a3, 1);
      pthread_rwlock_unlock(&lock_0);
      if ( l10nflist )
      {
        if ( *(int *)(l10nflist + 8) <= 0 )
          nl_load_domain(l10nflist, a4);
        if ( !*(_QWORD *)(l10nflist + 16) )
        {
          v42 = *(_QWORD *)(l10nflist + 32);
          if ( v42 )
          {
            v43 = (_QWORD *)(l10nflist + 32);
            do
            {
              if ( *(int *)(v42 + 8) <= 0 )
                nl_load_domain(v42, a4);
              if ( *(_QWORD *)(*v43 + 16LL) )
                break;
              v44 = v43[1];
              ++v43;
              v42 = v44;
            }
            while ( v44 );
          }
        }
        if ( v15 )
          free(a2, v34, v35, v36, v37, v38, v39, v40, v41);
      }
      if ( (v32 & 1) != 0 )
        free(v49, v34, v35, v36, v37, v38, v39, v40, v41);
    }
  }
  return l10nflist;
}
