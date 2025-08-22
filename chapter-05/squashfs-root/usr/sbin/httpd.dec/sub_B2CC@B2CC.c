void __fastcall sub_B2CC(int a1)
{
  int v2; // r5
  const char *v3; // r0
  int v4; // r0
  const char *v5; // r1
  const char *v6; // r0
  const char *v7; // r0
  const char *v8; // r0
  int v9; // r6
  int v10; // r6
  _BOOL4 v11; // r6
  int v12; // r7
  _BOOL4 v13; // r7
  int v14; // r0
  int v15; // r4
  bool v16; // zf
  int v17; // r0
  int wan6face; // r0
  const char *v19; // r0
  const char *v20; // r4
  int v21; // r0
  int v22; // [sp+40h] [bp-1F8h]
  int v23; // [sp+44h] [bp-1F4h]
  int v24; // [sp+48h] [bp-1F0h]
  int v25; // [sp+4Ch] [bp-1ECh]
  int v26; // [sp+50h] [bp-1E8h]
  int v27; // [sp+54h] [bp-1E4h]
  int v28; // [sp+58h] [bp-1E0h]
  int v29; // [sp+5Ch] [bp-1DCh]
  int v30; // [sp+60h] [bp-1D8h]
  int v31; // [sp+64h] [bp-1D4h]
  int v32; // [sp+68h] [bp-1D0h]
  int v33; // [sp+6Ch] [bp-1CCh]
  int v34; // [sp+70h] [bp-1C8h]
  int v35; // [sp+74h] [bp-1C4h]
  int v36; // [sp+78h] [bp-1C0h]
  int v37; // [sp+7Ch] [bp-1BCh]
  int v38; // [sp+80h] [bp-1B8h]
  int v39; // [sp+84h] [bp-1B4h]
  int v40; // [sp+88h] [bp-1B0h]
  int v41; // [sp+8Ch] [bp-1ACh]
  int v42; // [sp+90h] [bp-1A8h]
  int v43; // [sp+94h] [bp-1A4h]
  int v44; // [sp+98h] [bp-1A0h]
  int v45; // [sp+9Ch] [bp-19Ch]
  int v46; // [sp+A0h] [bp-198h]
  int v47; // [sp+A4h] [bp-194h]
  int v48; // [sp+A8h] [bp-190h]
  int v49; // [sp+ACh] [bp-18Ch]
  int v50; // [sp+B0h] [bp-188h]
  int v51; // [sp+B4h] [bp-184h]
  int v52; // [sp+B8h] [bp-180h]
  int v53; // [sp+BCh] [bp-17Ch]
  int v54; // [sp+C0h] [bp-178h]
  int v55; // [sp+C4h] [bp-174h]
  int v56; // [sp+C8h] [bp-170h]
  int v57; // [sp+CCh] [bp-16Ch]
  int v58; // [sp+D0h] [bp-168h]
  int v59; // [sp+D4h] [bp-164h]
  int v60; // [sp+D8h] [bp-160h]
  int v61; // [sp+DCh] [bp-15Ch]
  int v62; // [sp+E0h] [bp-158h]
  int v63; // [sp+E4h] [bp-154h]
  int v64; // [sp+E8h] [bp-150h]
  int v65; // [sp+ECh] [bp-14Ch]
  int v66; // [sp+F0h] [bp-148h]
  int v67; // [sp+F4h] [bp-144h]
  int v68; // [sp+F8h] [bp-140h]
  int v69; // [sp+FCh] [bp-13Ch]
  int v70; // [sp+100h] [bp-138h]
  int v71; // [sp+104h] [bp-134h]
  int v72; // [sp+108h] [bp-130h]
  int v73; // [sp+10Ch] [bp-12Ch]
  int v74; // [sp+110h] [bp-128h]
  int v75; // [sp+114h] [bp-124h]
  int v76; // [sp+118h] [bp-120h]
  int v77; // [sp+11Ch] [bp-11Ch]
  int v78; // [sp+120h] [bp-118h]
  int v79; // [sp+124h] [bp-114h]
  int v80; // [sp+128h] [bp-110h]
  int v81; // [sp+12Ch] [bp-10Ch]
  int v82; // [sp+130h] [bp-108h]
  int v83; // [sp+134h] [bp-104h]
  int v84; // [sp+138h] [bp-100h]
  int v85; // [sp+13Ch] [bp-FCh]
  int v86; // [sp+140h] [bp-F8h]
  int v87; // [sp+144h] [bp-F4h]
  int v88; // [sp+148h] [bp-F0h]
  int v89; // [sp+14Ch] [bp-ECh]
  int v90; // [sp+150h] [bp-E8h]
  int v91; // [sp+154h] [bp-E4h]
  int v92; // [sp+158h] [bp-E0h]
  int v93; // [sp+15Ch] [bp-DCh]
  char v94[48]; // [sp+160h] [bp-D8h] BYREF
  char v95[48]; // [sp+190h] [bp-A8h] BYREF
  char v96[48]; // [sp+1C0h] [bp-78h] BYREF
  char s2[72]; // [sp+1F0h] [bp-48h] BYREF

  v2 = nvram_get_int("http_wanport");
  if ( a1 )
  {
    v3 = sub_B1C8((int)"lan_ifname");
    v4 = getifaddr(v3, 10, 0);
    v5 = &s;
    if ( v4 )
      v5 = (const char *)v4;
  }
  else
  {
    v5 = sub_B1C8((int)"lan_ipaddr");
  }
  strlcpy((int)s2, (int)v5, 46);
  v6 = sub_B1C8((int)"lan1_ipaddr");
  strlcpy((int)v96, (int)v6, 46);
  v7 = sub_B1C8((int)"lan2_ipaddr");
  strlcpy((int)v95, (int)v7, 46);
  v8 = sub_B1C8((int)"lan3_ipaddr");
  strlcpy((int)v94, (int)v8, 46);
  if ( nvram_get_int("http_enable") )
  {
    v10 = nvram_get_int("http_lanport");
    sub_AF6C(s2, v10, a1, 0);
    if ( v96[0] )
      sub_AF6C(v96, v10, a1, 0);
    if ( v95[0] )
      sub_AF6C(v95, v10, a1, 0);
    if ( v94[0] )
      sub_AF6C(v94, v10, a1, 0);
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
    if ( v96[0] )
      sub_AF6C(v96, v12, a1, 1);
    if ( v95[0] )
      sub_AF6C(v95, v12, a1, 1);
    if ( v94[0] )
      sub_AF6C(v94, v12, a1, 1);
    v13 = v2 == v12;
    if ( !a1 )
      v13 = 0;
    if ( v13 )
      v9 = 0;
  }
  if ( v2 && nvram_get_int("remote_management") )
  {
    v14 = nvram_get_int("remote_mgt_https");
    if ( v14 )
      dword_30CE8 = 1;
    if ( a1 )
    {
      v15 = v9;
      if ( v9 )
        v15 = 1;
      v16 = s2[0] == 0;
      if ( s2[0] )
        v16 = v9 == 0;
      if ( !v16 )
      {
        v17 = nvram_get_int("remote_mgt_https");
        sub_AF6C(s2, v9, 1, v17);
      }
      if ( s2[0] )
        v15 |= 1u;
      if ( v15 )
      {
        wan6face = get_wan6face(v14);
        v19 = (const char *)getifaddr(wan6face, 10, 0);
        v20 = v19;
        if ( v19 )
        {
          if ( *v19 )
          {
            if ( strcmp(v19, s2) )
            {
              v21 = nvram_get_int("remote_mgt_https");
              sub_AF6C(v20, v2, 1, v21);
            }
          }
        }
      }
    }
    else
    {
      sub_B214((int)"wan", v76, v77, v78, v79, v80, v81, v82, v83, v84, v85, v86, v87, v88, v89, v90, v91, v92, v93, v2);
      sub_B214(
        (int)"wan2",
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
        v75,
        v2);
      sub_B214(
        (int)"wan3",
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
        v57,
        v2);
      sub_B214(
        (int)"wan4",
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
        v39,
        v2);
    }
  }
}
