<!DOCTYPE html>
<html lang="en-GB">
<head>
<meta http-equiv="content-type" content="text/html;charset=utf-8">
<meta name="robots" content="noindex,nofollow">
<title>[<% ident(); %>] Admin: Buttons</title>
<link rel="stylesheet" type="text/css" href="tomato.css">
<% css(); %>
<script src="tomato.js"></script>
<script>
//	<% nvram("sesx_led,sesx_b0,sesx_b1,sesx_b2,sesx_b3,sesx_script,script_brau,t_model,t_features"); %>
var ses = features('ses');
var brau = features('brau');
var aoss = features('aoss');
var wham = features('wham');
function verifyFields(focused, quiet) {
return 1;
}
function save() {
var n;
var fom;
fom = E('t_fom');
n = 0;
if (fom._led0.checked) n |= 1;
if (fom._led1.checked) n |= 2;
if (fom._led2.checked) n |= 4;
if (fom._led3.checked) n |= 8;
fom.sesx_led.value = n;
form.submit(fom, 1);
}
function earlyInit() {
if ((!brau) && (!ses)) {
E('notice-msg').innerHTML = '<div id="notice">This feature is not supported on this router.<\/div>';
E('save-button').disabled = 1;
return;
}
else {
E('sesdiv').style.display = 'block';
if (brau) E('braudiv').style.display = 'block';
if ((wham) || (aoss) || (brau)) E('leddiv').style.display = 'block';
}
}
</script>
</head>
<body>
<form id="t_fom" method="post" action="tomato.cgi">
<table id="container">
<tr><td colspan="2" id="header">
<div class="title">FreshTomato</div>
<div class="version">Version <% version(); %> on <% nv("t_model_name"); %></div>
</td></tr>
<tr id="body"><td id="navi"><script>navi()</script></td>
<td id="content">
<div id="ident"><% ident(); %> | <script>wikiLink();</script></div>
<input type="hidden" name="_nextpage" value="admin-buttons.asp">
<input type="hidden" name="sesx_led" value="0">
<div id="notice-msg"></div>
<div id="sesdiv" style="display:none">
<div class="section-title">SES/WPS/AOSS Button</div>
<div class="section">
<script>
a = [[0,'Do Nothing'],[1,'Toggle Wireless'],[2,'Reboot'],[3,'Halt'],
[5,'Unmount all USB Drives'],
[4,'Run Custom Script']];
createFieldTable('', [
{ title: "When Pushed For..." },
{ title: '1-2 Seconds', indent: 2, name: 'sesx_b0', type: 'select', options: a, value: nvram.sesx_b0 || 0 },
{ title: '4-6 Seconds', indent: 2, name: 'sesx_b1', type: 'select', options: a, value: nvram.sesx_b1 || 0 },
{ title: '8-10 Seconds', indent: 2, name: 'sesx_b2', type: 'select', options: a, value: nvram.sesx_b2 || 0 },
{ title: '12+ Seconds', indent: 2, name: 'sesx_b3', type: 'select', options: a, value: nvram.sesx_b3 || 0 },
{ title: 'Custom Script', indent: 2, name: 'sesx_script', type: 'textarea', value: nvram.sesx_script }
]);
</script>
</div>
<div id="braudiv" style="display:none">
<div class="section-title">Bridge/Auto Switch</div>
<div class="section">
<script>
createFieldTable('', [
{ title: 'Custom Script', indent: 2, name: 'script_brau', type: 'textarea', value: nvram.script_brau }
]);
</script>
</div>
</div>
<div id="leddiv" style="display:none">
<div class="section-title">Startup LED</div>
<div class="section">
<script>
createFieldTable('', [
{ title: 'Amber SES', name: '_led0', type: 'checkbox', value: nvram.sesx_led & 1, hidden: !wham },
{ title: 'White SES', name: '_led1', type: 'checkbox', value: nvram.sesx_led & 2, hidden: !wham },
{ title: 'AOSS', name: '_led2', type: 'checkbox', value: nvram.sesx_led & 4, hidden: !aoss },
{ title: 'Bridge', name: '_led3', type: 'checkbox', value: nvram.sesx_led & 8, hidden: !brau }
]);
</script>
</div>
</div>
</div>
<div id="footer">
<span id="footer-msg"></span>
<input type="button" value="Save" id="save-button" onclick="save()">
<input type="button" value="Cancel" id="cancel-button" onclick="reloadPage();">
</div>
</td></tr>
</table>
</form>
<script>earlyInit()</script>
</body>
</html>
