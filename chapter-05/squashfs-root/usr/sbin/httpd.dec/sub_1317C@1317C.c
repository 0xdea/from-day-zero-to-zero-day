int __fastcall sub_1317C(const char *a1, int a2, int a3, unsigned int a4)
{
  FILE *v8; // r0
  unsigned int v9; // r6
  unsigned __int8 *v10; // r5
  unsigned __int8 *v11; // r4
  int v12; // r2
  bool v13; // zf
  char *v14; // r0
  char *v15; // r7
  const char *v16; // r1
  char *v17; // r5
  int v18; // r0
  const char *v19; // r2
  const char *v20; // r3
  void *v21; // r8
  _BOOL4 v22; // r3
  unsigned int v24; // [sp+14h] [bp-784h]
  int v25; // [sp+18h] [bp-780h]
  FILE *stream; // [sp+1Ch] [bp-77Ch]
  char v27[1024]; // [sp+20h] [bp-778h] BYREF
  char v28[508]; // [sp+424h] [bp-374h] BYREF
  char v29[252]; // [sp+624h] [bp-174h] BYREF
  char v30[60]; // [sp+724h] [bp-74h] BYREF
  unsigned __int8 *v31; // [sp+764h] [bp-34h] BYREF
  unsigned int v32; // [sp+768h] [bp-30h] BYREF
  int v33; // [sp+76Ch] [bp-2Ch] BYREF

  sub_13970(0, "\nwm_%s = [", a1);
  if ( a2 )
  {
    snprintf(v28, 0x200u, "/proc/webmon_recent_%s", a1);
    v8 = fopen(v28, "r");
    stream = v8;
    if ( v8 )
    {
      v9 = sub_13078(v8, &v31, &v32);
      if ( !v9 )
      {
        v10 = &v31[v32];
        v11 = &v31[v32];
        v25 = 32;
        while ( v11 >= v31 )
        {
          v12 = *v11;
          v13 = v12 == 10;
          if ( v12 != 10 )
            v13 = v12 == 13;
          if ( v13 || v11 == v31 )
          {
            v24 = (unsigned int)v31;
            v14 = (char *)malloc(v10 - v11 + 1);
            v15 = v14;
            v16 = (const char *)((unsigned int)v11 <= v24 ? v11 : v11 + 1);
            strncpy(v14, v16, v10 - v11);
            v15[v10 - v11] = 0;
            if ( sscanf(v15, "%lu\t%s\t%s", &v33, v30, v29) == 3 ) // XXX
            {
              if ( a3 )
              {
                if ( sub_10644(v30, v27) )
                  v17 = 0;
                else
                  v17 = sub_E6BC(v27);
              }
              else
              {
                v17 = 0;
              }
              ++v9;
              v18 = sub_17C28(v29);
              v19 = &s;
              v20 = &s;
              if ( v18 )
                v19 = (const char *)v18;
              if ( v17 )
                v20 = v17;
              v21 = (void *)v18;
              sub_13970(0, "%c['%lu','%s','%s', '%s']", v25, v33, v30, v19, v20);
              free(v21);
              free(v17);
              free(v15);
              v22 = v9 >= a4;
              if ( !a4 )
                v22 = 0;
              if ( v22 )
                break;
              v10 = v11;
              v25 = 44;
            }
          }
          --v11;
        }
      }
      fclose(stream);
    }
  }
  return sub_13954("];\n");
}
