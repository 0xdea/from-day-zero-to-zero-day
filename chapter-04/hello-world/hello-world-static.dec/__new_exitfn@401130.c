_QWORD *__fastcall _new_exitfn(_QWORD *a1)
{
  _QWORD *v2; // x20
  _QWORD *v3; // x6
  _QWORD *v4; // x5
  __int64 v5; // x1
  __int64 v6; // x2
  _QWORD *v7; // x1
  _QWORD *result; // x0
  _QWORD *v9; // x0

  if ( (_exit_funcs_done & 1) != 0 )
    return 0;
  v2 = (_QWORD *)*a1;
  v3 = 0;
  v4 = (_QWORD *)*a1;
  if ( !*a1 )
  {
    _libc_assert_fail("l != NULL", "cxa_atexit.c", 110, "__new_exitfn");
LABEL_17:
    v4 = v3;
    goto LABEL_14;
  }
  while ( 1 )
  {
    v5 = v4[1];
    if ( v5 )
      break;
LABEL_6:
    v7 = (_QWORD *)*v4;
    v4[1] = 0;
    v3 = v4;
    if ( !v7 )
      goto LABEL_14;
    v4 = v7;
  }
  while ( 1 )
  {
    v6 = v5 - 1;
    if ( v4[4 * v5 - 2] )
      break;
    --v5;
    if ( !v6 )
      goto LABEL_6;
  }
  if ( v5 != 32 )
  {
    result = &v4[4 * v5 + 2];
    v4[1] = v5 + 1;
LABEL_10:
    *result = 1;
    ++_new_exitfn_called;
    return result;
  }
  if ( v3 )
    goto LABEL_17;
  v9 = (_QWORD *)calloc(1, 1040);
  v4 = v9;
  if ( v9 )
  {
    *v9 = v2;
    *a1 = v9;
LABEL_14:
    result = v4 + 2;
    v4[1] = 1;
    goto LABEL_10;
  }
  return 0;
}
