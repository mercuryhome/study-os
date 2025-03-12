#!/bin/bash

for ((i=0; i<10; i++)); do
    ../../book-code/intro/cpu $i >/dev/null &
done
