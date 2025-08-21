unsigned __int64 __fastcall sub_43E450(__int64 a1)
{
  __int64 v1; // x2
  unsigned __int64 v3; // x21
  __int64 v4; // x3
  unsigned __int64 result; // x0
  __int64 v6; // x1
  __int64 v7; // x1
  unsigned __int64 v8; // x1
  unsigned __int64 v9; // x22
  __int64 v10; // x20
  __int64 v11; // x23
  __int64 v12; // x1
  unsigned __int64 v13; // x1

  v1 = *(_QWORD *)(a1 + 8);
  v3 = a1 + 176;
  v4 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(a1 + 24) += v1 - *(_QWORD *)a1;
  if ( v4 != a1 + 176 )
  {
    result = a1 + 49;
    if ( v4 != a1 + 49 )
    {
      v6 = *(_QWORD *)(a1 + 40);
      if ( v4 != *(_QWORD *)(v6 + 48) )
        sub_41F250(
          "buf->base.write_end == buf->fp->_IO_write_end",
          (__int64)"printf_buffer_to_file.c",
          0x56u,
          (__int64)"__printf_buffer_flush_to_file");
      *(_QWORD *)(v6 + 40) = v1;
      if ( v1 == v4 )
      {
        v1 = a1 + 48;
        *(_QWORD *)(a1 + 8) = a1 + 48;
        *(_QWORD *)(a1 + 16) = result;
      }
      *(_QWORD *)a1 = v1;
      return result;
    }
    if ( v1 != v4 )
      return result;
    result = sub_4048E0(*(_QWORD *)(a1 + 40), *(unsigned __int8 *)(a1 + 48));
    if ( (_DWORD)result != -1 )
    {
      v7 = *(_QWORD *)(a1 + 40);
      result = *(_QWORD *)(v7 + 40);
      v8 = *(_QWORD *)(v7 + 48);
      if ( result >= v8 )
      {
        v8 = v3;
        result = a1 + 48;
      }
      *(_QWORD *)a1 = result;
      *(_QWORD *)(a1 + 8) = result;
      *(_QWORD *)(a1 + 16) = v8;
      return result;
    }
LABEL_16:
    *(_DWORD *)(a1 + 32) = 0;
    return result;
  }
  v9 = a1 + 48;
  v10 = v1 - (a1 + 48);
  v11 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 216LL);
  if ( (unsigned __int64)(v11 - (_QWORD)&unk_48DD70) > 0x92F )
    sub_401A50();
  result = (*(__int64 (**)(void))(v11 + 56))();
  if ( result != v10 )
    goto LABEL_16;
  v12 = *(_QWORD *)(a1 + 40);
  result = *(_QWORD *)(v12 + 40);
  v13 = *(_QWORD *)(v12 + 48);
  if ( result < v13 )
  {
    v3 = v13;
    v9 = result;
  }
  *(_QWORD *)a1 = v9;
  *(_QWORD *)(a1 + 8) = v9;
  *(_QWORD *)(a1 + 16) = v3;
  return result;
}
