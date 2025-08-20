__int64 __fastcall sub_450070(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // x30
  __int64 v7; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  char *v10; // x3
  __int64 v11; // x0
  __int64 result; // x0
  __int64 v13; // [xsp+48h] [xbp+48h] BYREF
  _BYTE v14[896]; // [xsp+50h] [xbp+50h] BYREF
  __int64 v15; // [xsp+3D0h] [xbp+3D0h]
  __int64 v16; // [xsp+3D8h] [xbp+3D8h]

  ifunc_40DE70(a1, 0, 960);
  *(_QWORD *)(a1 + 792) = v3;
  *(_QWORD *)(a1 + 832) = 0x4000000000000000LL;
  v7 = sub_44FA40((_QWORD *)a1, (unsigned __int64)v14);
  if ( (_DWORD)v7 )
    goto LABEL_9;
  v10 = byte_496C40;
  if ( !byte_496C40[0] )
  {
    memset(byte_496C40, 8, 32);
    byte_496C80 = 0;
    byte_496C6E = 8;
    byte_496C81 = 0;
    byte_496C82 = 0;
    byte_496C83 = 0;
    byte_496C84 = 0;
    byte_496C85 = 0;
    byte_496C86 = 0;
    byte_496C87 = 0;
    byte_496C88 = 8;
    byte_496C89 = 8;
    byte_496C8A = 8;
    byte_496C8B = 8;
    byte_496C8C = 8;
    byte_496C8D = 8;
    byte_496C8E = 8;
    byte_496C8F = 8;
    byte_496C90 = 0;
    byte_496C91 = 0;
    byte_496C92 = 0;
    byte_496C93 = 0;
    byte_496C94 = 0;
    byte_496C95 = 0;
    byte_496C96 = 0;
    byte_496C97 = 0;
    byte_496C98 = 0;
    byte_496C99 = 0;
    byte_496C9A = 0;
    byte_496C9B = 0;
    byte_496C9C = 0;
    byte_496C9D = 0;
    byte_496C9E = 0;
    byte_496C9F = 0;
    byte_496C70 = 0;
    byte_496C71 = 0;
    byte_496C72 = 0;
    byte_496C73 = 0;
    byte_496C74 = 0;
    byte_496C75 = 0;
    byte_496C76 = 0;
    byte_496C77 = 0;
    byte_496C78 = 0;
    byte_496C79 = 0;
    byte_496C7A = 0;
    byte_496C7B = 0;
    byte_496C7C = 0;
    byte_496C7D = 0;
    byte_496C7E = 0;
    byte_496C7F = 0;
    byte_496CA0 = 8;
  }
  v7 = (unsigned __int8)byte_496C5F;
  if ( byte_496C5F != 8 )
LABEL_9:
    sub_4002C0(v7, v8, v9, (__int64)v10);
  v11 = *(_QWORD *)(a1 + 832);
  v13 = a2;
  if ( (v11 & 0x4000000000000000LL) != 0 )
    *(_BYTE *)(a1 + 887) = 0;
  *(_QWORD *)(a1 + 248) = &v13;
  v14[882] = 1;
  v15 = 0;
  v16 = 31;
  result = ((__int64 (__fastcall *)(__int64, _BYTE *))loc_44E5A0)(a1, v14);
  *(_QWORD *)(a1 + 792) = a3;
  return result;
}
