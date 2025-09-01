<!DOCTYPE html>
<html lang="en-GB">
<head>
<meta http-equiv="content-type" content="text/html;charset=utf-8">
<meta name="robots" content="noindex,nofollow">
<title>[<% ident(); %>] Advanced: Miscellaneous</title>
<link rel="stylesheet" type="text/css" href="tomato.css">
<% css(); %>
<script src="tomato.js"></script>
<script>
//	<% nvram("t_features,wait_time,wan_speed,jumbo_frame_enable,jumbo_frame_size,ctf_disable,bcmnat_disable"); %>
et1000 = features('1000et');
function verifyFields(focused, quiet) {
E('_jumbo_frame_size').disabled = !E('_f_jumbo_frame_enable').checked;
return 1;
}
function save() {
var fom = E('t_fom');
fom.jumbo_frame_enable.value = E('_f_jumbo_frame_enable').checked ? 1 : 0;
fom.ctf_disable.value = E('_f_ctf_disable').checked ? 0 : 1;
if ((fom.wan_speed.value != nvram.wan_speed) ||
(fom.ctf_disable.value != nvram.ctf_disable) ||
(fom.jumbo_frame_enable.value != nvram.jumbo_frame_enable) ||
(fom.jumbo_frame_size.value != nvram.jumbo_frame_size)) {
if (!confirm("Router must be rebooted to apply changes. Reboot now?"))
return;
fom._reboot.value = 1;
form.submit(fom, 0);
}
else { 
form.submit(fom, 1);
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
<input type="hidden" name="_nextpage" value="advanced-misc.asp">
<input type="hidden" name="_reboot" value="0">
<input type="hidden" name="jumbo_frame_enable">
<input type="hidden" name="ctf_disable">
<div class="section-title">Miscellaneous</div>
<div class="section">
<script>
a = [];
for (i = 3; i <= 20; ++i) a.push([i, i + ' seconds']);
createFieldTable('', [
{ title: 'Boot Wait Time *', name: 'wait_time', type: 'select', options: a, value: fixInt(nvram.wait_time, 3, 20, 3) },
{ title: 'WAN Port Speed *', name: 'wan_speed', type: 'select', options: [[0,'10Mbps Full'],[1,'10Mbps Half'],[2,'100Mbps Full'],[3,'100Mbps Half'],[4,'Autonegotiation']], value: nvram.wan_speed },
null,
{ title: 'CTF (Cut-Through Forwarding)<br>and HW acceleration', name: 'f_ctf_disable', type: 'checkbox', value: nvram.ctf_disable != '1', suffix: ' <small>disables QoS and BW Limiter!<\/small>' },
null,
{ title: 'Enable Jumbo Frames *', name: 'f_jumbo_frame_enable', type: 'checkbox', value: nvram.jumbo_frame_enable != '0', hidden: !et1000 },
{ title: 'Jumbo Frame Size *', name: 'jumbo_frame_size', type: 'text', maxlen: 4, size: 6, value: fixInt(nvram.jumbo_frame_size, 1, 9720, 2000),
suffix: ' <small>Bytes (range: 1 - 9720; default: 2000)<\/small>', hidden: !et1000 }
]);
</script>
<div class="note-spacer"><small>* Some router models might not support this option.</small></div>
</div>
<div id="footer">
<span id="footer-msg"></span>
<input type="button" value="Save" id="save-button" onclick="save()">
<input type="button" value="Cancel" id="cancel-button" onclick="reloadPage();">
</div>
</td></tr>
</table>
</form>
<script>verifyFields(null, true);</script>
</body>
</html>
