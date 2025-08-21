void __fastcall sub_B2CC(int a1)
{
  int v2; // r5
  int v3; // r0
  int v4; // r0
  const char *v5; // r1
  int v6; // r0
  int v7; // r0
  int v8; // r0
  int v9; // r6
  int v10; // r6
  _BOOL4 v11; // r6
  int v12; // r7
  _BOOL4 v13; // r7
  int v14; // r4
  bool v15; // zf
  int v16; // r0
  int wan6face; // r0
  const char *v18; // r0
  const char *v19; // r4
  int v20; // r0
  int v21; // [sp+40h] [bp-1F8h]
  int v22; // [sp+44h] [bp-1F4h]
  int v23; // [sp+48h] [bp-1F0h]
  int v24; // [sp+4Ch] [bp-1ECh]
  int v25; // [sp+50h] [bp-1E8h]
  int v26; // [sp+54h] [bp-1E4h]
  int v27; // [sp+58h] [bp-1E0h]
  int v28; // [sp+5Ch] [bp-1DCh]
  int v29; // [sp+60h] [bp-1D8h]
  int v30; // [sp+64h] [bp-1D4h]
  int v31; // [sp+68h] [bp-1D0h]
  int v32; // [sp+6Ch] [bp-1CCh]
  int v33; // [sp+70h] [bp-1C8h]
  int v34; // [sp+74h] [bp-1C4h]
  int v35; // [sp+78h] [bp-1C0h]
  int v36; // [sp+7Ch] [bp-1BCh]
  int v37; // [sp+80h] [bp-1B8h]
  int v38; // [sp+84h] [bp-1B4h]
  int v39; // [sp+88h] [bp-1B0h]
  int v40; // [sp+8Ch] [bp-1ACh]
  int v41; // [sp+90h] [bp-1A8h]
  int v42; // [sp+94h] [bp-1A4h]
  int v43; // [sp+98h] [bp-1A0h]
  int v44; // [sp+9Ch] [bp-19Ch]
  int v45; // [sp+A0h] [bp-198h]
  int v46; // [sp+A4h] [bp-194h]
  int v47; // [sp+A8h] [bp-190h]
  int v48; // [sp+ACh] [bp-18Ch]
  int v49; // [sp+B0h] [bp-188h]
  int v50; // [sp+B4h] [bp-184h]
  int v51; // [sp+B8h] [bp-180h]
  int v52; // [sp+BCh] [bp-17Ch]
  int v53; // [sp+C0h] [bp-178h]
  int v54; // [sp+C4h] [bp-174h]
  int v55; // [sp+C8h] [bp-170h]
  int v56; // [sp+CCh] [bp-16Ch]
  int v57; // [sp+D0h] [bp-168h]
  int v58; // [sp+D4h] [bp-164h]
  int v59; // [sp+D8h] [bp-160h]
  int v60; // [sp+DCh] [bp-15Ch]
  int v61; // [sp+E0h] [bp-158h]
  int v62; // [sp+E4h] [bp-154h]
  int v63; // [sp+E8h] [bp-150h]
  int v64; // [sp+ECh] [bp-14Ch]
  int v65; // [sp+F0h] [bp-148h]
  int v66; // [sp+F4h] [bp-144h]
  int v67; // [sp+F8h] [bp-140h]
  int v68; // [sp+FCh] [bp-13Ch]
  int v69; // [sp+100h] [bp-138h]
  int v70; // [sp+104h] [bp-134h]
  int v71; // [sp+108h] [bp-130h]
  int v72; // [sp+10Ch] [bp-12Ch]
  int v73; // [sp+110h] [bp-128h]
  int v74; // [sp+114h] [bp-124h]
  int v75; // [sp+118h] [bp-120h]
  int v76; // [sp+11Ch] [bp-11Ch]
  int v77; // [sp+120h] [bp-118h]
  int v78; // [sp+124h] [bp-114h]
  int v79; // [sp+128h] [bp-110h]
  int v80; // [sp+12Ch] [bp-10Ch]
  int v81; // [sp+130h] [bp-108h]
  int v82; // [sp+134h] [bp-104h]
  int v83; // [sp+138h] [bp-100h]
  int v84; // [sp+13Ch] [bp-FCh]
  int v85; // [sp+140h] [bp-F8h]
  int v86; // [sp+144h] [bp-F4h]
  int v87; // [sp+148h] [bp-F0h]
  int v88; // [sp+14Ch] [bp-ECh]
  int v89; // [sp+150h] [bp-E8h]
  int v90; // [sp+154h] [bp-E4h]
  int v91; // [sp+158h] [bp-E0h]
  int v92; // [sp+15Ch] [bp-DCh]
  char v93[48]; // [sp+160h] [bp-D8h] BYREF
  char v94[48]; // [sp+190h] [bp-A8h] BYREF
  char v95[48]; // [sp+1C0h] [bp-78h] BYREF
  char s2[72]; // [sp+1F0h] [bp-48h] BYREF

  v2 = nvram_get_int("http_wanport");
  if ( a1 )
  {
    v3 = sub_B1C8("lan_ifname");
    v4 = getifaddr(v3, 10, 0);
    v5 = &s;
    if ( v4 )
      v5 = (const char *)v4;
  }
  else
  {
    v5 = (const char *)sub_B1C8("lan_ipaddr");
  }
  strlcpy(s2, v5, 46);
  v6 = sub_B1C8("lan1_ipaddr");
  strlcpy(v95, v6, 46);
  v7 = sub_B1C8("lan2_ipaddr");
  strlcpy(v94, v7, 46);
  v8 = sub_B1C8("lan3_ipaddr");
  strlcpy(v93, v8, 46);
  if ( nvram_get_int("http_enable") )
  {
    v10 = nvram_get_int("http_lanport");
    sub_AF6C(s2, v10, a1, 0);
    if ( v95[0] )
      sub_AF6C(v95, v10, a1, 0);
    if ( v94[0] )
      sub_AF6C(v94, v10, a1, 0);
    if ( v93[0] )
      sub_AF6C(v93, v10, a1, 0);
    v11 = v2 == v10;
    if ( !a1 )
      v11 = 0;
    if ( v11 )
      v9 = 0;
    else
      v9 = v2;
  }
  else
  {
    v9 = v2;
  }
  if ( nvram_get_int("https_enable") )
  {
    dword_30CE8 = 1;
    v12 = nvram_get_int("https_lanport");
    sub_AF6C(s2, v12, a1, 1);
    if ( v95[0] )
      sub_AF6C(v95, v12, a1, 1);
    if ( v94[0] )
      sub_AF6C(v94, v12, a1, 1);
    if ( v93[0] )
      sub_AF6C(v93, v12, a1, 1);
    v13 = v2 == v12;
    if ( !a1 )
      v13 = 0;
    if ( v13 )
      v9 = 0;
  }
  if ( v2 && nvram_get_int("remote_management") )
  {
    if ( nvram_get_int("remote_mgt_https") )
      dword_30CE8 = 1;
    if ( a1 )
    {
      v14 = v9;
      if ( v9 )
        v14 = 1;
      v15 = s2[0] == 0;
      if ( s2[0] )
        v15 = v9 == 0;
      if ( !v15 )
      {
        v16 = nvram_get_int("remote_mgt_https");
        sub_AF6C(s2, v9, 1, v16);
      }
      if ( s2[0] )
        v14 |= 1u;
      if ( v14 )
      {
        wan6face = get_wan6face();
        v18 = (const char *)getifaddr(wan6face, 10, 0);
        v19 = v18;
        if ( v18 )
        {
          if ( *v18 )
          {
            if ( strcmp(v18, s2) )
            {
              v20 = nvram_get_int("remote_mgt_https");
              sub_AF6C(v19, v2, 1, v20);
            }
          }
        }
      }
    }
    else
    {
      sub_B214((int)"wan", v75, v76, v77, v78, v79, v80, v81, v82, v83, v84, v85, v86, v87, v88, v89, v90, v91, v92, v2);
      sub_B214(
        (int)"wan2",
        v57,
        v58,
        v59,
        v60,
        v61,
        v62,
        v63,
        v64,
        v65,
        v66,
        v67,
        v68,
        v69,
        v70,
        v71,
        v72,
        v73,
        v74,
        v2);
      sub_B214(
        (int)"wan3",
        v39,
        v40,
        v41,
        v42,
        v43,
        v44,
        v45,
        v46,
        v47,
        v48,
        v49,
        v50,
        v51,
        v52,
        v53,
        v54,
        v55,
        v56,
        v2);
      sub_B214(
        (int)"wan4",
        v21,
        v22,
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
        v34,
        v35,
        v36,
        v37,
        v38,
        v2);
    }
  }
}
