#!/usr/bin/tail +3
tail +3 $0; exit
Content-type: text/html
Connection: close

<html>
<head>
<title>upload</title>
<style>
input { font-size: 60pt; }
</style>
</head>
<body>

<form method="post" enctype="multipart/form-data" action="getfile.cgi">

<p>
<input type="file" name="filename">
</p>

<p>
<input type=submit>
<input type=reset>
</p>

</form>

</body>
</html>
