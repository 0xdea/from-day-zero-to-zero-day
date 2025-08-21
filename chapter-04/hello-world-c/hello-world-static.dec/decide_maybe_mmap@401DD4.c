__int64 *__fastcall decide_maybe_mmap(
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
  __int64 v10; // x20
  __int64 v11; // x3
  void *v12; // x1
  __int64 v14; // x0
  bool v15; // zf
  __int64 v16; // x20
  __int64 v17; // x0
  __int64 v18; // x0
  __int64 v19; // x4
  __int64 v20; // x5
  __int64 v21; // x0
  int v22; // w3
  void *v23; // x2
  _BYTE v24[16]; // [xsp+8h] [xbp-88h] BYREF
  int v25; // [xsp+18h] [xbp-78h]
  __int64 v26; // [xsp+38h] [xbp-58h]

  v10 = *(_QWORD *)(a1 + 216);
  if ( (unsigned __int64)(v10 - (_QWORD)&_io_vtables) > 0x92F )
    IO_vtable_check(a2, a3, a4, a5, a6, a7, a8, a9);
  if ( (*(unsigned int (__fastcall **)(__int64, _BYTE *))(v10 + 144))(a1, v24) || (v25 & 0xF000) != 0x8000 || !v26 )
    goto LABEL_5;
  v14 = *(_QWORD *)(a1 + 144);
  v15 = v26 >= v14 || v14 == -1;
  if ( !v15 )
    goto LABEL_5;
  v16 = mmap64(0, v26, 1, 1, *(unsigned int *)(a1 + 112), 0);
  if ( v16 == -1 )
    goto LABEL_5;
  v17 = lseek64(*(unsigned int *)(a1 + 112), v26, 0);
  if ( v26 != v17 )
  {
    munmap(v16, v26);
    *(_QWORD *)(a1 + 144) = -1;
LABEL_5:
    v11 = *(_QWORD *)(a1 + 160);
    v12 = &IO_wfile_jumps;
    if ( *(int *)(a1 + 192) <= 0 )
      v12 = &IO_file_jumps;
    *(_QWORD *)(a1 + 216) = v12;
    *(_QWORD *)(v11 + 224) = &IO_wfile_jumps;
    return &_stack_chk_guard;
  }
  IO_setb(a1, v16, v16 + v26, 0);
  *(_QWORD *)(a1 + 24) = v16;
  v18 = *(_QWORD *)(a1 + 144);
  v19 = v26;
  v15 = v18 == -1;
  v20 = *(_QWORD *)(a1 + 160);
  v21 = v16 + v18;
  v22 = *(_DWORD *)(a1 + 192);
  v23 = &unk_48E160;
  if ( v15 )
    v21 = v16;
  *(_QWORD *)(a1 + 8) = v21;
  *(_QWORD *)(a1 + 16) = v16 + v19;
  if ( v22 <= 0 )
    v23 = &unk_48DF68;
  *(_QWORD *)(a1 + 144) = v19;
  *(_QWORD *)(a1 + 216) = v23;
  *(_QWORD *)(v20 + 224) = &unk_48E160;
  return &_stack_chk_guard;
}
