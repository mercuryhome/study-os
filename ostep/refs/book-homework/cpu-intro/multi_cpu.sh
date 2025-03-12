#!/bin/bash

if [ $# -lt 2 ]
then
    echo "Usage: $0 <num>"
    echo "<num> , num is the number of running processes."
    exit 1
fi

for ((i=0; i<$1; i++)); do
    ../../book-code/intro/cpu $i >/dev/null &
done
