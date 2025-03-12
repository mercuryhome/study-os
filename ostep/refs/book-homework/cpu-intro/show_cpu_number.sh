#!/bin/bash

if []
ps -u | grep "cpu" | grep -v grep | awk '{print  "ps -o pid,psr,cmd -p " $2}' | sh | grep -v PID 
