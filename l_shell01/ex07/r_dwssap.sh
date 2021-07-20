#!/bin/sh
cat /etc/passwd | grep -v "^#" | sed "n;d" | awk -F : '{print $1}' | rev | sort -r |awk "NR >= $FT_LINE1 && NR <= $FT_LINE2" | tr "\n" ', '
