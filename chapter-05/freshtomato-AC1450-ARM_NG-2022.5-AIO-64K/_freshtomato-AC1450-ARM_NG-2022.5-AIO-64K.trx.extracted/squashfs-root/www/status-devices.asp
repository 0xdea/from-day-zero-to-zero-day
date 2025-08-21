<!DOCTYPE html>
<html lang="en-GB">
<head>
<meta http-equiv="content-type" content="text/html;charset=utf-8">
<meta name="robots" content="noindex,nofollow">
<title>[<% ident(); %>] Status: Device List</title>
<link rel="stylesheet" type="text/css" href="tomato.css">
<% css(); %>
<script src="tomato.js"></script>
<script src="wireless.jsx?_http_id=<% nv(http_id); %>"></script>
<script>
//	<% devlist(); %>
//	<% lanip(1); %>
var list = [];
var list_last = [];
var xob = null;
var cmd = null;
var cmdresult = '';
var cprefix = 'status_devices';
var discovery_mode = cookie.get(cprefix+'_discovery') || 'off';
var wait = gc_time;
var time_o;
var ref = new TomatoRefresh('update.cgi', 'exec=devlist', 5, 'status_devices_refresh');
ref.refresh = function(text) {
try {
eval(text);
}
catch (ex) {
}
dg.removeAllData();
dg.populate();
dg.resort();
for (var uidx = 0; uidx < wl_ifaces.length; ++uidx) {
if (wl_sunit(uidx) < 0 && E('noise'+uidx) != null) {
elem.setInnerHTML(E('noise'+uidx), wlnoise[uidx]);
setNoiseBar(uidx, wlnoise[uidx]);
}
}
}
var discovery = new TomatoRefresh('update.cgi', 'exec=discovery&arg0='+discovery_mode, gc_time, '', 1);
discovery.refresh = function() { }
var dg = new TomatoGrid();
dg.setup = function() {
this.init('dev-grid', 'sort');
this.headerSet(['Interface','Media','MAC Address','IP Address','Hostname','RSSI','Quality &nbsp;','TX/RX<br>Rate','Lease&nbsp;']);
this.populate();
this.sort(3);
}
dg.populate = function() {
var i, j, k, l;
var a, b, c, e, f;
var mode = '', wan_gw, found_last, is_wds = 0;
var i2, e2;
list = [];
wl_info = [];
for (i = 0; i < list.length; ++i) {
list[i].ip = '';
list[i].ifname = '';
list[i].ifstatus = '';
list[i].bridge = '';
list[i].freq = '';
list[i].ssid = '';
list[i].mode = '';
list[i].unit = 0;
list[i].name = '';
list[i].rssi = '';
list[i].txrx = '';
list[i].lease = '';
list[i].lan = '';
list[i].wan = '';
list[i].proto = '';
list[i].media = '';
}
for (i = 0; i < wl_ifaces.length; ++i) {
a = wl_ifaces[i];
c = wl_display_ifname(i);
if (a[6] != 1)
b = 'Down';
else {
for (j = 0; j < xifs[0].length ; ++j) {
if ((nvram[xifs[0][j]+'_ifnames']).indexOf(a[0]) >= 0) {
b = xifs[1][j];
break;
}
}
}
wl_info.push([a[0], c.substr(c.indexOf('/') + 2), a[4], a[8], b, i]);
}
for (i = wldev.length - 1; i >= 0; --i) {
a = wldev[i];
if (a[0].indexOf('wds') == 0)
e = get(a[1], '-');
else
e = get(a[1], null);
e.ifname = a[0];
e.unit = a[6] * 1;
e.rssi = a[2];
for (j = wl_info.length -1 ; j >= 0; --j) {
is_wds = (e.ip == '-' && ((nvram['wl'+wl_info[j][5]+'_mode'] == 'wds') || (nvram['wl'+wl_info[j][5]+'_mode'] == 'ap' && nvram['wl'+wl_info[j][5]+'_wds_enable'] == 1)));
if ((wl_info[j][0] == e.ifname) || (is_wds)) {
e.freq = wl_info[j][1];
e.ssid = wl_info[j][2];
e.mode = (is_wds ? 'wds' : wl_info[j][3]);
if (!is_wds)
e.ifstatus = wl_info[j][4];
if (e.mode == 'wet')
mode = e.mode;
}
}
if ((a[3] >= 1000) || (a[4] >= 1000))
e.txrx = ((a[3] >= 1000) ? Math.round(a[3] / 1000) : '-')+' / '+((a[4] >= 1000) ? Math.round(a[4] / 1000) : '-');
}
for (i = MAX_PORT_ID; i >= 1; --i) {
k = (i == 1) ? '' : i.toString();
var proto = nvram['wan'+k+'_proto'];
if ((proto == 'pppoe' || proto == 'pptp' || proto == 'l2tp') && nvram['wan'+k+'_hwaddr']) {
e = get(nvram['wan'+k+'_hwaddr'], null);
e.ifname = (nvram['wan'+k+'_iface'] ? nvram['wan'+k+'_iface'] : (nvram['wan'+k+'_ifname'] ? nvram['wan'+k+'_ifname'] : 'ppp+'));
var face = (nvram['wan'+k+'_ifname'] ? nvram['wan'+k+'_ifname'] : (nvram['wan'+k+'_ifnameX'] ? nvram['wan'+k+'_ifnameX'] : ''));
var ip = nvram['wan'+k+'_ppp_get_ip'];
var gw = nvram['wan'+k+'_gateway_get'];
if ((!gw) || (gw == '0.0.0.0'))
gw = nvram['wan'+k+'_gateway'];
e.ip = 'r:&nbsp;'+gw+(ip && ip != '0.0.0.0' ? '<br>l:&nbsp;'+ip : '');
var ip2 = nvram['wan'+k+'_ipaddr'];
var gw2 = nvram['wan'+k+'_gateway'];
if (nvram['wan'+k+'_pptp_dhcp'] == '1') {
if (gw2 && gw2 != '0.0.0.0' && gw2 != gw && ip2 && ip2 != '0.0.0.0' && ip2 != ip) {
e.ip = 'r:&nbsp;'+gw+'<br>l:&nbsp;'+ip;
e.name = 'r:&nbsp;'+gw2+(face ? '&nbsp;<small>('+face+')<\/small>' : '')+'<br>l:&nbsp;'+ip2+(face ? '&nbsp;<small>('+face+')<\/small>' : '');
}
}
else {
if (proto == 'pptp') 
e.ip = 'r:&nbsp;'+nvram['wan'+k+'_pptp_server_ip']+'<br>l:&nbsp;'+ip;
}
}
}
for (i = dhcpd_lease.length - 1; i >= 0; --i) {
a = dhcpd_lease[i];
e = get(a[2], a[1]);
b = a[3].indexOf(',') + 1;
c = a[3].slice(0, b)+'<br>'+a[3].slice(b);
e.lease = '<small><a href="javascript:deleteLease(\'L'+i+'\',\''+a[1]+'\',\''+a[2]+'\',\''+e.ifname+'\')" title="Delete Lease'+(e.ifname ? ' and Deauth' : '')+'" id="L'+i+'">'+c+'<\/a><\/small>';
e.name = a[0];
}
for (i = list.length - 1; i >= 0; --i) {
e = list[i];
for (i2 = list.length - 1; i2 >= 0; --i2) {
e2 = list[i2];
if ((e.mac == e2.mac) && (e.ip != e2.ip) && (e.mode != 'wds') && (e2.mode != 'wds')) { 
if ((e.mode != '') && (e2.mode == ''))
e2.mode = e.mode;
else if ((e2.mode != '') && (e.mode == ''))
e.mode = e2.mode;
if ((e.ifname != '') && (e2.ifname == ''))
e2.ifname = e.ifname;
else if ((e2.ifname != '') && (e.ifname == ''))
e.ifname = e2.ifname;
if ((e.ifstatus != '') && (e2.ifstatus == ''))
e2.ifstatus = e.ifstatus;
else if ((e2.ifstatus != '') && (e.ifstatus == ''))
e.ifstatus = e2.ifstatus;
if ((e.unit != '') && (e2.unit == ''))
e2.unit = e.unit;
else if ((e2.unit != '') && (e.unit == ''))
e.unit = e2.unit;
if ((e.name != '') && (e2.name == ''))
e2.name = e.name;
else if ((e2.name != '') && (e.name == ''))
e.name = e2.name;
if ((e.freq != '') && (e2.freq == ''))
e2.freq = e.freq;
else if ((e2.freq != '') && (e.freq == ''))
e.freq = e2.freq;
if ((e.ssid != '') && (e2.ssid == ''))
e2.ssid = e.ssid;
else if ((e2.ssid != '') && (e.ssid == ''))
e.ssid = e2.ssid;
if ((e.rssi != '') && (e2.rssi == ''))
e2.rssi = e.rssi;
else if ((e2.rssi != '') && (e.rssi == ''))
e.rssi = e2.rssi;
if ((e.txrx != '') && (e2.txrx == ''))
e2.txrx = e.txrx;
else if ((e2.txrx != '') && (e.txrx == ''))
e.txrx = e2.txrx;
}
}
}
for (i = arplist.length - 1; i >= 0; --i) {
a = arplist[i];
if ((e = get(a[1], a[0])) != null) {
if (e.ifname == '')
e.ifname = a[2];
e.bridge = a[2];
if (e.name == '')
e.name = a[3];
}
}
var dhcpd_static = nvram.dhcpd_static.split('>');
for (i = dhcpd_static.length - 1; i >= 0; --i) {
a = dhcpd_static[i].split('<');
if (a.length < 4)
continue;
c = a[0].split(',');
loop1:
for (j = c.length - 1; j >= 0; --j) {
if ((e = find(c[j], a[1])) == null) {
for (l = 1; l <= MAX_PORT_ID; l++) {
k = (l == 1) ? '' : l.toString();
wan_gw = nvram['wan'+k+'_gateway'];
if (wan_gw != '' && wan_gw != '0.0.0.0' && (e = find(c[j], null)) != null && e.ip != '' && lanip.indexOf(e.ip.substr(0, e.ip.lastIndexOf('.'))) == -1) {
e.ip = nvram['wan'+k+'_gateway'];
break loop1;
}
}
}
else
break;
}
if (j < 0)
continue;
if (e.ip == '')
e.ip = a[1];
if (e.name == '')
e.name = a[2];
else {
b = e.name.toLowerCase();
c = a[2].toLowerCase();
if ((b.indexOf(c) == -1) && (c.indexOf(b) == -1))
e.name += ', '+a[2];
}
}
for (i = list.length - 1; i >= 0; --i) {
e = list[i];
var ifidx = wl_uidx(e.unit);
if ((e.rssi !== '') && (ifidx >= 0) && (wlnoise[ifidx] < 0)) {
if (e.rssi >= -50)
e.qual = 100;
else if (e.rssi >= -80) 
e.qual = Math.round(24 + ((e.rssi + 80) * 26)/10);
else if (e.rssi >= -90) 
e.qual = Math.round(24 + ((e.rssi + 90) * 26)/10);
else
e.qual = 0;
}
else
e.qual = -1;
if (e.bridge == '' && e.mode != 'wds') {
for (j = 0; j <= MAX_BRIDGE_ID; j++) {
k = (j == 0) ? '' : j.toString();
if (nvram['lan'+k+'_ipaddr'] && (nvram['lan'+k+'_ipaddr'].substr(0, nvram['lan'+k+'_ipaddr'].lastIndexOf('.'))) == (e.ip.substr(0, e.ip.lastIndexOf('.')))) {
e.bridge = 'br'+j;
break;
}
}
}
for (j = 0; j <= MAX_BRIDGE_ID; j++) {
k = (j == 0) ? '' : j.toString();
if (nvram['lan'+k+'_ifname'] == e.bridge && e.bridge != '') {
e.lan = 'LAN'+j+' ';
break;
}
}
for (j = 1; j <= MAX_PORT_ID; j++) {
k = (j == 1) ? '' : j.toString();
if (((nvram['wan'+k+'_ifname'] == e.ifname) || (nvram['wan'+k+'_ifnameX'] == e.ifname) || (nvram['wan'+k+'_iface'] == e.ifname)) && e.ifname != '' && nvram['wan'+k+'_hwaddr'] != '') {
e.wan = 'WAN'+(j ? (j - 1) : '0')+' ';
e.proto = nvram['wan'+k+'_proto'];
break;
}
}
}
for (i = list.length - 1; i >= 0; --i) {
e = list[i];
for (i2 = list.length - 1; i2 >= 0; --i2) {
e2 = list[i2];
if ((e.mac == e2.mac) && (e.ip != e2.ip) && (e.mode != 'wds') && (e2.mode != 'wds')) { 
if ((e.ifname != '') && (e2.ifname == ''))
e2.ifname = e.ifname;
else if ((e2.ifname != '') && (e.ifname == ''))
e.ifname = e2.ifname;
if ((e.name != '') && (e2.name == ''))
e2.name = e.name;
else if ((e2.name != '') && (e.name == ''))
e.name = e2.name;
if ((e.bridge != '') && (e2.bridge == ''))
e2.bridge = e.bridge;
else if ((e2.bridge != '') && (e.bridge == ''))
e.bridge = e2.bridge;
if ((e.lan != '') && (e2.lan == ''))
e2.lan = e.lan;
else if ((e2.lan != '') && (e.lan == ''))
e.lan = e2.lan;
}
}
}
for (i = list.length - 1; i >= 0; --i) {
e = list[i];
if ((e.mac.match(/^(..):(..):(..)/)) && e.proto != 'pppoe' && e.proto != 'pptp' && e.proto != 'l2tp') {
b = '<a href="javascript:searchOUI(\''+RegExp.$1+'-'+RegExp.$2+'-'+RegExp.$3+'\','+i+')" title="OUI Search">'+e.mac+'<\/a><div style="display:none" id="gW_'+i+'">&nbsp; <img src="spin.gif" alt="" style="vertical-align:middle"><\/div>'+
'<br><small class="pics">'+
'<a href="javascript:addStatic('+i+')" title="DHCP Reservation">[DR]<\/a> '+
'<a href="javascript:addbwlimit('+i+')" title="BW Limiter">[BWL]<\/a> '+
'<a href="javascript:addRestrict('+i+')" title="Access Restriction">[AR]<\/a>';
if (e.rssi != '')
b += ' <a href="javascript:addWF('+i+')" title="Wireless Filter">[WLF]<\/a>';
b += '<\/small>';
}
else
b = '&nbsp;<br>&nbsp;';
if (e.ssid != '')
c = '<br><small>'+e.ssid+'<\/small>';
else {
if (e.proto == 'dhcp')
a = 'DHCP'
else if (e.proto == 'pppoe')
a = 'PPPoE'
else if (e.proto == 'static')
a = 'Static'
else if (e.proto == 'pptp')
a = 'PPTP'
else if (e.proto == 'l2tp')
a = 'L2TP'
else
a = '';
c = (a ? '<br><small>'+a+'<\/small>' : '');
}
found_last = 0;
for (j = list_last.length - 1; j >= 0; --j) {
if (e.mac == list_last[j][0] && e.ip == list_last[j][1]) {
found_last = 1;
break;
}
}
if (found_last == 0 && e.freq != '') 
list_last.push([e.mac, e.ip]);
a = '';
if (e.freq != '') 
a = e.ifstatus+' '+(e.ifname.indexOf('.') == -1 ? e.ifname+' (wl'+e.unit+')' : '('+e.ifname+')')+c;
else if (e.ifname != '' && found_last == 0)
a = e.lan+e.wan+'('+e.ifname+')'+c;
else
e.rssi = 1; 
f = '';
if (e.freq != '') {
f = '<img src="wl'+(e.freq == '5 GHz' ? '50' : '24')+'.gif"'+((e.mode == 'wet' || e.mode == 'sta' || e.mode == 'psta' || (e.mode == 'wds' && e.proto == 'disabled')) ? 'style="filter:invert(1)"' : '')+' alt="" title="'+e.freq+'">';
e.media = (e.freq == '5 GHz' ? 1 : 2);
}
else if (e.ifname != '' && mode != 'wet') {
c = (e.wan != '' ? 'style="filter:invert(1)"' : '');
if ((e.proto == 'lte') || (e.proto == 'ppp3g')) {
f = '<img src="cell.gif"'+c+' alt="" title="LTE / 3G">';
e.media = 3;
}
else
if (e.rssi != 1) {
f = '<img src="eth.gif"'+c+' alt="" title="Ethernet">';
e.media = 4;
}
}
if (e.rssi == 1) {
f = '<img src="dis.gif"'+c+' alt="" title="Disconnected">';
e.media = 5;
}
this.insert(-1, e, [ a, '<div id="media_'+i+'">'+f+'<\/div>', b, (e.mode == 'wds' ? '' : e.ip), e.name, (e.rssi < 0 ? e.rssi+' <small>dBm<\/small>' : ''),
(e.qual < 0 ? '' : '<small>'+e.qual+'<\/small> <img src="bar'+MIN(MAX(Math.floor(e.qual / 12), 1), 6)+'.gif" id="bar_'+i+'" alt="">'),
e.txrx, e.lease], false);
}
}
dg.sortCompare = function(a, b) {
var col = this.sortColumn;
var ra = a.getRowData();
var rb = b.getRowData();
var r;
switch (col) {
case 1:
r = cmpInt(ra.media, rb.media);
break;
case 3:
r = cmpIP(ra.ip, rb.ip);
break;
case 5:
r = cmpInt(ra.rssi, rb.rssi);
break;
case 6:
r = cmpInt(ra.qual, rb.qual);
break;
default:
r = cmpText(a.cells[col].innerHTML, b.cells[col].innerHTML);
}
if (r == 0) {
r = cmpIP(ra.ip, rb.ip);
if (r == 0)
r = cmpText(ra.ifname, rb.ifname);
}
return this.sortAscending ? r : -r;
}
function find(mac, ip) {
var e, i;
mac = mac.toUpperCase();
for (i = list.length - 1; i >= 0; --i) {
e = list[i];
if (((e.mac == mac) && ((e.ip == ip) || (e.ip == '') || (ip == null))) || ((e.mac == mac_null) && (e.ip == ip)))
return e;
}
return null;
}
function get(mac, ip) {
var e, i;
mac = mac.toUpperCase();
if ((e = find(mac, ip)) != null) {
if (ip)
e.ip = ip;
return e;
}
e = {
mac: mac,
ip: ip || '',
ifname: '',
ifstatus: '',
bridge: '',
freq: '',
ssid: '',
mode: '',
unit: 0,
name: '',
rssi: '',
txrx: '',
lease: '',
lan: '',
wan: '',
proto: '',
media: ''
};
list.push(e);
return e;
}
function _deleteLease(ip, mac, wl) {
form.submitHidden('dhcpd.cgi', { remove: ip, mac: mac, wl: wl });
}
function deleteLease(a, ip, mac, wl) {
if (!confirm("Delete lease?"))
return;
if (xob)
return;
if ((xob = new XmlHttp()) == null) {
_deleteLease(ip, mac, wl);
return;
}
a = E(a);
elem.setInnerHTML(a, 'deleting...');
xob.onCompleted = function(text, xml) {
elem.setInnerHTML(a, '...');
xob = null;
}
xob.onError = function() {
_deleteLease(ip, mac, wl);
}
xob.post('dhcpd.cgi', 'remove='+ip+'&mac='+mac+'&wl='+wl);
}
function addStatic(n) {
var e = list[n];
cookie.set('addstatic', [e.mac, e.ip, e.name.split(',')[0]].join(','), 1);
location.href = 'basic-static.asp';
}
function addWF(n) {
var e = list[n];
cookie.set('addmac', [e.mac, e.name.split(',')[0]].join(','), 1);
location.href = 'basic-wfilter.asp';
}
function addbwlimit(n) {
var e = list[n];
cookie.set('addbwlimit', [e.ip, e.name.split(',')[0]].join(','), 1);
location.href = 'bwlimit.asp';
}
function addRestrict(n) {
var e = list[n];
cookie.set('addrestrict', [e.mac, e.name.split(',')[0]].join(','), 1);
form.submitHidden('tomato.cgi', { _redirect: 'restrict-edit.asp', rruleN: -1 });
}
function onRefToggle() {
ref.toggle();
if (!ref.running) {
if (discovery.running)
discovery.stop();
}
else
discovery.toggle();
}
function tick() {
var clock = E('wait');
var spin = E('spin');
if (ref.running && discovery_mode != 'off' && E('refresh-button').value == 'Stop' && E('refresh-time').value != 0) {
elem.setInnerHTML(clock, wait+' sec');
clock.style.display = 'inline-block';
spin.style.display = 'inline';
if (wait-- <= 0) {
wait = gc_time;
clearTimeout(time_o);
}
time_o = setTimeout(tick, 1000);
}
else {
clock.style.display = 'none';
spin.style.display = 'none';
wait = gc_time;
clearTimeout(time_o);
}
}
function verifyFields(f, c) {
if (discovery.running)
discovery.stop();
discovery_mode = E('_discovery_mode').value;
cookie.set(cprefix+'_discovery', discovery_mode);
discovery = new TomatoRefresh('update.cgi', 'exec=discovery&arg0='+discovery_mode, gc_time, '', 1);
discovery.refresh = function() { }
if (ref.running)
discovery.initPage(0, gc_time);
if (discovery_mode != 'off') {
wait = gc_time;
clearTimeout(time_o);
tick();
}
return true;
}
function setNoiseBar(i, lvl) {
var num;
if (lvl >= -69)
num = 1;
else if (lvl >= -75)
num = 2;
else if (lvl >= -81)
num = 3;
else if (lvl >= -87)
num = 4;
else if (lvl >= -93)
num = 5;
else
num = 6;
elem.setInnerHTML(E('noiseimg_'+i), '<img src="bar'+num+'.gif" id="barnoise_'+i+'" alt="">');
}
function earlyInit() {
for (var uidx = 0; uidx < wl_ifaces.length; ++uidx) {
if (wl_sunit(uidx) < 0 && E('noise'+uidx) != null) {
setNoiseBar(uidx, wlnoise[uidx]);
}
}
dg.setup();
}
function init() {
dg.recolor();
ref.initPage(3000, 3);
if (ref.running) {
discovery.initPage(0, gc_time);
tick();
}
addEvent(E('refresh-button'), 'click', tick);
}
</script>
</head>
<body onload="init()">
<table id="container">
<tr><td colspan="2" id="header">
<div class="title">FreshTomato</div>
<div class="version">Version <% version(); %> on <% nv("t_model_name"); %></div>
</td></tr>
<tr id="body"><td id="navi"><script>navi()</script></td>
<td id="content">
<div id="ident"><% ident(); %> | <script>wikiLink();</script></div>
<div class="section-title">Device List</div>
<div class="section">
<div class="tomato-grid" id="dev-grid"></div>
<script>
var f = [];
for (var uidx = 0; uidx < wl_ifaces.length; ++uidx) {
var u = wl_unit(uidx);
if (nvram['wl'+u+'_radio'] == 1) {
if (wl_sunit(uidx) < 0) {
var a = wl_display_ifname(uidx);
f.push( { title: '<b>Noise Floor<\/b> '+a.substr(0, a.indexOf('/') - 1)+'&nbsp;<b>:<\/b>', prefix: '<span id="noiseimg_'+uidx+'"><\/span>&nbsp;<span id="noise'+uidx+'">', custom: wlnoise[uidx], suffix: '<\/span>&nbsp;<small>dBm<\/small>' } );
}
}
}
f.push(
null,
{ title: 'Network Discovery mode', name: 'discovery_mode', type: 'select', options: [['off','off'],['arping','arping (preferred)'],['traceroute','traceroute']], suffix: '&nbsp; <img src="spin.gif" alt="" id="spin"><div id="wait"><\/div>', value: discovery_mode }
);
createFieldTable('', f);
</script>
</div>
<div id="footer">
<script>genStdRefresh(1,0,'onRefToggle()');</script>
</div>
</td></tr>
</table>
<script>earlyInit();</script>
</body>
</html>
