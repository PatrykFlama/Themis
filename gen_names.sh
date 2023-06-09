#!/bin/bash

NUM=0;
while read p;
do
    NUM=$(((NUM+1)%2));
    if [ $NUM == 1 ]; then
        echo "${p/$'\r'/}";     # remove carriage return
    fi;
done < names.txt > temp.txt

rm names.txt
mv temp.txt names.txt

# further processing required
# while read p; do 
#     mkdir $p;
#     touch $p/main.cpp;
#     touch $p/README.md;
#     echo "* [$p](XXX/$p)";
# done < names.txt
