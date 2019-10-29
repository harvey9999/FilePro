#!/bin/bash
keep=$(pwd)
for i in $keep/*;do
	if [ -f $i ]
       	then
        	echo "$i"
	fi
done
