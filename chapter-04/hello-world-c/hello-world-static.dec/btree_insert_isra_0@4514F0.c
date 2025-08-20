__int64 __fastcall btree_insert_isra_0(__int64 result, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  __int64 *v4; // x22
  unsigned __int64 *v5; // x19
  __int64 v9; // x2
  __int64 v10; // x3
  void *v11; // x4
  void *v12; // x5
  void *v13; // x6
  double v14; // d0
  double v15; // d1
  double v16; // d2
  double v17; // d3
  double v18; // d4
  double v19; // d5
  double v20; // d6
  double v21; // d7
  __int64 node; // x21
  __int64 v23; // x3
  void *v24; // x4
  void *v25; // x5
  void *v26; // x6
  double v27; // d0
  double v28; // d1
  double v29; // d2
  double v30; // d3
  double v31; // d4
  double v32; // d5
  double v33; // d6
  double v34; // d7
  __int64 v35; // x26
  __int64 v36; // x21
  unsigned int i; // w19
  int v38; // w1
  unsigned __int64 *v39; // x4
  unsigned __int64 v40; // x5
  unsigned __int64 *v41; // x0
  unsigned __int64 v42; // x19
  unsigned __int64 *v43; // t2
  __int64 v44; // x2
  unsigned int v45; // w19
  __int64 *v46; // x0
  unsigned int v47; // w2
  __int64 v48; // x1
  __int64 v49; // x3
  __int64 v50; // x22
  _QWORD *v51; // x1
  __int64 v52; // x27
  __int64 v53; // x2
  unsigned __int64 v54; // x19
  __int64 v55; // x0
  unsigned int v56; // w4
  _QWORD *v57; // x1
  unsigned int v58; // w5
  unsigned int v59; // w2
  unsigned int v60; // w0
  __int64 v61; // x2
  __int64 v62; // x3
  unsigned __int64 *v63; // x1
  unsigned int v64; // w0
  unsigned __int64 v65; // x4
  unsigned int v66; // w28
  unsigned __int64 v67; // x2
  __int64 v68; // x25
  __int64 v69; // x27
  __int64 v70; // x4
  unsigned int v71; // w5
  unsigned int v72; // w0
  unsigned int v73; // w1
  __int64 v74; // x0
  _QWORD *v75; // x0
  __int64 v76; // x3
  __int64 v77; // x28
  unsigned __int64 *v78; // x1
  unsigned int v79; // w0
  unsigned int v80; // w22
  unsigned __int64 v81; // x28
  unsigned __int64 v82; // x2
  unsigned int v83; // w19
  unsigned int v84; // w25
  int v85; // w2
  unsigned int v86; // w19
  unsigned int v87; // w21
  int v88; // w2
  unsigned __int64 v89; // [xsp+68h] [xbp-18h]
  __int64 v90; // [xsp+70h] [xbp-10h] BYREF
  __int64 v91; // [xsp+78h] [xbp-8h] BYREF

  if ( a3 )
  {
    v4 = (__int64 *)result;
    v5 = (unsigned __int64 *)(result + 16);
    v91 = 0;
    version_lock_lock_exclusive((unsigned __int64 *)(result + 16));
    node = *v4;
    v90 = node;
    if ( node )
    {
      version_lock_lock_exclusive((unsigned __int64 *)node);
    }
    else
    {
      node = btree_allocate_node((__int64)v4, 0, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21);
      *v4 = node;
      v90 = node;
    }
    version_lock_unlock_exclusive(v5);
    if ( !*(_DWORD *)(node + 12) )
    {
      v35 = 0;
      while ( 1 )
      {
        if ( *(_DWORD *)(node + 8) == 15 )
        {
          if ( !v35 )
          {
            v27 = btree_handle_root_split_part_0(
                    (__int64)v4,
                    (__int64)&v90,
                    &v91,
                    v23,
                    v24,
                    v25,
                    v26,
                    v27,
                    v28,
                    v29,
                    v30,
                    v31,
                    v32,
                    v33,
                    v34);
            v35 = v91;
          }
          v52 = v90;
          v53 = v90 + 16LL * (unsigned int)(*(_DWORD *)(v90 + 8) - 1);
          v54 = *(_QWORD *)(v53 + 16);
          v55 = btree_allocate_node((__int64)v4, 1, v53, v23, v24, v25, v26, v27, v28, v29, v30, v31, v32, v33, v34);
          v56 = *(_DWORD *)(v52 + 8);
          v36 = v55;
          v57 = (_QWORD *)(v55 + 16);
          v58 = v56 >> 1;
          v59 = v56 - (v56 >> 1);
          *(_DWORD *)(v55 + 8) = v59;
          v60 = v56 >> 1;
          if ( v59 )
          {
            do
            {
              v61 = v52 + 16LL * v60++;
              v62 = *(_QWORD *)(v61 + 24);
              *v57 = *(_QWORD *)(v61 + 16);
              v57[1] = v62;
              v57 += 2;
            }
            while ( v56 != v60 );
          }
          v63 = (unsigned __int64 *)(v35 + 16);
          v64 = 0;
          v65 = *(_QWORD *)(v52 + 16LL * (v58 - 1) + 16);
          *(_DWORD *)(v52 + 8) = v58;
          v66 = *(_DWORD *)(v35 + 8);
          if ( v66 )
          {
            while ( 1 )
            {
              v67 = *v63;
              v84 = v64;
              v63 += 2;
              ++v64;
              if ( v54 <= v67 )
                break;
              if ( v66 == v64 )
              {
                v85 = v66 + 1;
                v84 = *(_DWORD *)(v35 + 8);
                v83 = v66 + 1;
                goto LABEL_35;
              }
            }
            v83 = v64;
            v85 = v66 + 1;
            if ( v66 > v84 )
            {
              v89 = v65;
              j_memmove(
                v35 + 16LL * v66 + 16 - 16LL * (v66 - v84 - 1),
                v35 + -16LL * (v66 - v84 - 1) + 16LL * v66,
                16LL * (v66 - v84));
              v65 = v89;
              v85 = v66 + 1;
            }
          }
          else
          {
            v83 = 1;
            v84 = 0;
            v85 = 1;
          }
LABEL_35:
          *(_QWORD *)(v35 + 16LL * v84 + 16) = v65;
          *(_QWORD *)(v35 + 16LL * v83 + 24) = v36;
          *(_DWORD *)(v35 + 8) = v85;
          if ( a2 > v65 )
          {
            version_lock_unlock_exclusive((unsigned __int64 *)v52);
            v38 = *(_DWORD *)(v36 + 8);
            if ( !v38 )
            {
              i = 0;
              goto LABEL_12;
            }
          }
          else
          {
            version_lock_unlock_exclusive((unsigned __int64 *)v36);
            v38 = *(_DWORD *)(v52 + 8);
            v36 = v52;
            if ( !v38 )
            {
              i = 0;
              goto LABEL_12;
            }
          }
        }
        else
        {
          v36 = v90;
          i = 0;
          v38 = *(_DWORD *)(v90 + 8);
          if ( !v38 )
            goto LABEL_11;
        }
        v39 = (unsigned __int64 *)(v36 + 16);
        for ( i = 0; i != v38; ++i )
        {
          v40 = *v39;
          v39 += 2;
          if ( a2 <= v40 )
            break;
        }
LABEL_11:
        if ( !v35 )
        {
          v35 = v36;
          goto LABEL_13;
        }
LABEL_12:
        v41 = (unsigned __int64 *)v35;
        v35 = v36;
        version_lock_unlock_exclusive(v41);
LABEL_13:
        v91 = v36;
        v43 = (unsigned __int64 *)(v36 + 16LL * i + 16);
        v42 = *v43;
        node = v43[1];
        v90 = node;
        version_lock_lock_exclusive((unsigned __int64 *)node);
        if ( *(_DWORD *)(node + 12) )
        {
          if ( *(_DWORD *)(node + 8) != 10 )
            goto LABEL_15;
          goto LABEL_44;
        }
      }
    }
    v45 = *(_DWORD *)(node + 8);
    if ( v45 == 10 )
    {
      v27 = btree_handle_root_split_part_0(
              (__int64)v4,
              (__int64)&v90,
              &v91,
              v23,
              v24,
              v25,
              v26,
              v27,
              v28,
              v29,
              v30,
              v31,
              v32,
              v33,
              v34);
      v35 = v91;
      v42 = -1;
LABEL_44:
      v68 = v90;
      v69 = btree_allocate_node((__int64)v4, 0, v44, v23, v24, v25, v26, v27, v28, v29, v30, v31, v32, v33, v34);
      v70 = v69 + 16;
      v71 = *(_DWORD *)(v68 + 8);
      v72 = v71 - (v71 >> 1);
      *(_DWORD *)(v69 + 8) = v72;
      v73 = v71 >> 1;
      if ( v72 )
      {
        do
        {
          v70 += 24;
          v74 = 3LL * v73++;
          v75 = (_QWORD *)(v68 + 8 * v74);
          v76 = v75[3];
          *(_QWORD *)(v70 - 24) = v75[2];
          *(_QWORD *)(v70 - 16) = v76;
          *(_QWORD *)(v70 - 8) = v75[4];
        }
        while ( v71 != v73 );
      }
      v77 = *(_QWORD *)(v69 + 16);
      *(_DWORD *)(v68 + 8) = v71 >> 1;
      v78 = (unsigned __int64 *)(v35 + 16);
      v79 = 0;
      v80 = *(_DWORD *)(v35 + 8);
      v81 = v77 - 1;
      if ( v80 )
      {
        while ( 1 )
        {
          v82 = *v78;
          v87 = v79;
          v78 += 2;
          ++v79;
          if ( v82 >= v42 )
            break;
          if ( v80 == v79 )
          {
            v88 = v80 + 1;
            v87 = *(_DWORD *)(v35 + 8);
            v86 = v80 + 1;
            goto LABEL_53;
          }
        }
        v86 = v79;
        if ( v80 > v87 )
          j_memmove(
            v35 + 16LL * v80 + 16 - 16LL * (v80 - v87 - 1),
            v35 + -16LL * (v80 - v87 - 1) + 16LL * v80,
            16LL * (v80 - v87));
        v88 = v80 + 1;
      }
      else
      {
        v86 = 1;
        v87 = 0;
        v88 = 1;
      }
LABEL_53:
      *(_QWORD *)(v35 + 16LL * v87 + 16) = v81;
      *(_QWORD *)(v35 + 16LL * v86 + 24) = v69;
      *(_DWORD *)(v35 + 8) = v88;
      if ( a2 > v81 )
      {
        v90 = v69;
        version_lock_unlock_exclusive((unsigned __int64 *)v68);
      }
      else
      {
        version_lock_unlock_exclusive((unsigned __int64 *)v69);
      }
LABEL_15:
      version_lock_unlock_exclusive((unsigned __int64 *)v35);
      node = v90;
      v45 = *(_DWORD *)(v90 + 8);
    }
    if ( v45 )
    {
      v46 = (__int64 *)(node + 16);
      v47 = 0;
      while ( 1 )
      {
        v48 = *v46;
        v49 = v46[1];
        v46 += 3;
        if ( a2 < v48 + v49 )
          break;
        if ( ++v47 == v45 )
        {
          v50 = v45;
          goto LABEL_23;
        }
      }
      v50 = v47;
      if ( v47 >= v45 )
        goto LABEL_23;
      if ( a2 != *(_QWORD *)(node + 24LL * v47 + 16) )
      {
        j_memmove(
          node + 24LL * v45 + 16 - 24LL * (v45 - v47 - 1),
          node + 24LL * (v45 - 1) + 16 - 24LL * (v45 - v47 - 1),
          24LL * (v45 - v47));
        goto LABEL_23;
      }
      return version_lock_unlock_exclusive((unsigned __int64 *)node);
    }
    else
    {
      v50 = 0;
LABEL_23:
      v51 = (_QWORD *)(node + 24 * v50);
      v51[2] = a2;
      v51[3] = a3;
      v51[4] = a4;
      *(_DWORD *)(node + 8) = v45 + 1;
      return version_lock_unlock_exclusive((unsigned __int64 *)node);
    }
  }
  return result;
}
