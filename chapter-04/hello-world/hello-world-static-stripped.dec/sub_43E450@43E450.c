unsigned __int64 __fastcall sub_43E450(
        __int64 a1,
        double a2,
        double a3,
        double a4,
        double a5,
        double a6,
        double a7,
        double a8,
        double a9)
{
  __int64 v9; // x2
  unsigned __int64 v11; // x21
  __int64 v12; // x3
  unsigned __int64 result; // x0
  __int64 v14; // x1
  __int64 v15; // x1
  unsigned __int64 v16; // x1
  unsigned __int64 v17; // x22
  __int64 v18; // x20
  __int64 v19; // x23
  __int64 v20; // x1
  unsigned __int64 v21; // x1

  v9 = *(_QWORD *)(a1 + 8);
  v11 = a1 + 176;
  v12 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(a1 + 24) += v9 - *(_QWORD *)a1;
  if ( v12 != a1 + 176 )
  {
    result = a1 + 49;
    if ( v12 != a1 + 49 )
    {
      v14 = *(_QWORD *)(a1 + 40);
      if ( v12 != *(_QWORD *)(v14 + 48) )
        sub_41F250(
          "buf->base.write_end == buf->fp->_IO_write_end",
          (__int64)"printf_buffer_to_file.c",
          0x56u,
          (__int64)"__printf_buffer_flush_to_file");
      *(_QWORD *)(v14 + 40) = v9;
      if ( v9 == v12 )
      {
        v9 = a1 + 48;
        *(_QWORD *)(a1 + 8) = a1 + 48;
        *(_QWORD *)(a1 + 16) = result;
      }
      *(_QWORD *)a1 = v9;
      return result;
    }
    if ( v9 != v12 )
      return result;
    result = sub_4048E0(*(_QWORD *)(a1 + 40), *(unsigned __int8 *)(a1 + 48), a2, a3, a4, a5, a6, a7, a8, a9);
    if ( (_DWORD)result != -1 )
    {
      v15 = *(_QWORD *)(a1 + 40);
      result = *(_QWORD *)(v15 + 40);
      v16 = *(_QWORD *)(v15 + 48);
      if ( result >= v16 )
      {
        v16 = v11;
        result = a1 + 48;
      }
      *(_QWORD *)a1 = result;
      *(_QWORD *)(a1 + 8) = result;
      *(_QWORD *)(a1 + 16) = v16;
      return result;
    }
LABEL_16:
    *(_DWORD *)(a1 + 32) = 0;
    return result;
  }
  v17 = a1 + 48;
  v18 = v9 - (a1 + 48);
  v19 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 216LL);
  if ( (unsigned __int64)(v19 - (_QWORD)&unk_48DD70) > 0x92F )
    sub_401A50(a2, a3, a4, a5, a6, a7, a8, a9);
  result = (*(__int64 (**)(void))(v19 + 56))();
  if ( result != v18 )
    goto LABEL_16;
  v20 = *(_QWORD *)(a1 + 40);
  result = *(_QWORD *)(v20 + 40);
  v21 = *(_QWORD *)(v20 + 48);
  if ( result < v21 )
  {
    v11 = v21;
    v17 = result;
  }
  *(_QWORD *)a1 = v17;
  *(_QWORD *)(a1 + 8) = v17;
  *(_QWORD *)(a1 + 16) = v11;
  return result;
}
