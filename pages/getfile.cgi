#!/bin/sh

cat <<!
Content-type: text/html
Connection: close

<pre>
!

hexdump -C

cat <<!
Ok

!

