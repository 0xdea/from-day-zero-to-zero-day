__int64 __fastcall mmap_remap_check(
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
  unsigned int v11; // w20
  __int64 v12; // x3
  void *v13; // x1
  __int64 v15; // x21
  int v16; // w0
  __int64 v17; // x4
  __int64 v18; // x1
  unsigned __int64 v19; // x2
  unsigned __int64 v20; // x1
  __int64 v21; // x5
  __int64 v22; // x0
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x0
  __int64 v27; // x0
  __int64 v28; // x1
  __int64 v29; // x0
  _BYTE v30[16]; // [xsp+8h] [xbp-88h] BYREF
  int v31; // [xsp+18h] [xbp-78h]
  __int64 v32; // [xsp+38h] [xbp-58h]

  v10 = *(_QWORD *)(a1 + 216);
  if ( (unsigned __int64)(v10 - (_QWORD)&_io_vtables) > 0x92F )
    IO_vtable_check(a2, a3, a4, a5, a6, a7, a8, a9);
  v11 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(v10 + 144))(a1, v30);
  if ( !v11 && (v31 & 0xF000) == 0x8000 )
  {
    v15 = v32;
    if ( v32 )
    {
      v16 = getpagesize();
      v17 = *(_QWORD *)(a1 + 56);
      v18 = -(__int64)v16;
      v19 = (v15 - 1 + v16) & v18;
      v20 = (*(_QWORD *)(a1 + 64) - v17 - 1 + v16) & v18;
      if ( v19 < v20 )
      {
        munmap(v17 + v19, v20 - v19);
        v17 = *(_QWORD *)(a1 + 56);
        v15 = v32;
        v21 = v17 + v32;
LABEL_12:
        v23 = *(_QWORD *)(a1 + 8);
        v22 = *(_QWORD *)(a1 + 16);
        *(_QWORD *)(a1 + 24) = v17;
        v24 = *(_QWORD *)(a1 + 144);
        *(_QWORD *)(a1 + 64) = v21;
        v25 = v24 - (v22 - v23);
        *(_QWORD *)(a1 + 144) = v25;
        if ( v25 >= v15 )
        {
          *(_QWORD *)(a1 + 8) = v21;
          *(_QWORD *)(a1 + 16) = v21;
        }
        else
        {
          v26 = *(unsigned int *)(a1 + 112);
          *(_QWORD *)(a1 + 8) = v17 + v25;
          *(_QWORD *)(a1 + 16) = v21;
          v27 = lseek64(v26, v15, 0);
          v28 = *(_QWORD *)(a1 + 64) - *(_QWORD *)(a1 + 56);
          if ( v28 == v27 )
            *(_QWORD *)(a1 + 144) = v28;
          else
            *(_DWORD *)a1 |= 0x20u;
        }
        return v11;
      }
      v21 = v17 + v15;
      if ( v19 <= v20 )
        goto LABEL_12;
      v29 = mremap(*(_QWORD *)(a1 + 56));
      v17 = v29;
      if ( v29 != -1 )
      {
        v15 = v32;
        *(_QWORD *)(a1 + 56) = v29;
        v21 = v29 + v15;
        goto LABEL_12;
      }
    }
  }
  munmap(*(_QWORD *)(a1 + 56), *(_QWORD *)(a1 + 64) - *(_QWORD *)(a1 + 56));
  v12 = *(_QWORD *)(a1 + 160);
  v13 = &IO_wfile_jumps;
  if ( *(int *)(a1 + 192) <= 0 )
    v13 = &IO_file_jumps;
  *(_OWORD *)(a1 + 8) = 0u;
  *(_QWORD *)(a1 + 24) = 0;
  v11 = 1;
  *(_OWORD *)(a1 + 56) = 0u;
  *(_QWORD *)(a1 + 216) = v13;
  *(_QWORD *)(v12 + 224) = &IO_wfile_jumps;
  return v11;
}
