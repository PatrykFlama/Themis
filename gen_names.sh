#!/bin/bash

NUM=0;
while read p;
do
    NUM=$(((NUM+1)%2));
    if [ $NUM == 1 ]; then
        echo "${p/$'\r'/}";     # remove carriage return
    fi;
done