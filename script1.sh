#!/bin/bash

test="$(cat $1)"
if [ -e $1 ]; then
	printf %s "$test" | while IFS= read -r -N 1 a; do

        	if [[ "$a" == $'\n' ]]; then
                	echo ""
        	fi

	printf %s "$a"
done
else
	echo "File not found"

fi
