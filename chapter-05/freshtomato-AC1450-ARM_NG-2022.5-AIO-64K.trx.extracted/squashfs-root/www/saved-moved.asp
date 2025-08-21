<!DOCTYPE html>
<html lang="en-GB">
<head>
<meta http-equiv="content-type" content="text/html;charset=utf-8">
<meta name="robots" content="noindex,nofollow">
<title>[<% ident(); %>] Restarting...</title>
<link rel="stylesheet" type="text/css" href="/tomato.css">
<% css(); %>
<style>
div.tomato-grid.container-div {
height: 90px;
}
#msg {
border-bottom: 1px solid #aaa;
margin-bottom: 10px;
padding-bottom: 10px;
font-weight: bold;
}
</style>
<script>
var n = 20;
function tick() {
var e = document.getElementById("continue");
e.value = n;
if (n == 10) {
e.style = "cursor:pointer";
e.disabled = false;
}
if (n == 0) {
e.value = "Continue";
}
else {
--n;
setTimeout(tick, 1000);
}
}
function go() {
window.location = window.location.protocol + '//<% nv("lan_ipaddr"); %>/';
}
</script>
</head>
<body onload="tick()">
<div class="tomato-grid container-div">
<div class="wrapper1">
<div class="wrapper2">
<div class="info-centered">
<form>
<div id="msg">
The router's new IP address is <% nv("lan_ipaddr"); %>. You may need to release then renew your computer's DHCP lease before continuing.
</div>
<div id="but" style="display:inline-block">
Please wait while the router restarts... &nbsp;
<input type="button" value="" id="continue" onclick="go()" disabled="disabled">
</div>
</form>
</div>
</div>
</div>
</div>
</body>
</html>
