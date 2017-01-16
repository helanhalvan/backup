#!/bin/bash

#6515 2000
#1809 800
#1133 400
#850  0
#900  80
#echo $w;
for i in {10,20,40,80}
do
echo $i
echo "&"
#w==command
w="./main.enc.run $1 ${i}_scenario.xml 0"
<<COMENT
{ time $w ; } 2> temporaryfiletxt
l=`cat temporaryfiletxt | cut -d $' ' -f 2`
nr=0
for a in $l
do
if [ "$nr" == "1" ]; then
    echo $a
    echo "&"
fi
if [ "$nr" == "3" ]; then
    echo $a
    echo "&"
fi
if [ "$nr" == "5" ]; then
    echo $a
    echo "&"
fi
nr=$((nr + 1))
done

{ ./memusg.sh $w; } 2> temporaryfiletxt

l=`cat temporaryfiletxt`
echo $l
echo "&"
COMENT

{ perf stat -x -a -d -d $w ; } 2> temporaryfiletxt

l=`cat temporaryfiletxt | grep acycles`
echo $l
echo "&"
l=`cat temporaryfiletxt | grep task-clock`
echo $l
echo "&"
l=`cat temporaryfiletxt | grep LLC-load-misses` #cut -d $'\n' -f 2
echo $l
echo "&"
l=`cat temporaryfiletxt | grep L1-dcache-load-misses` #cut -d $'\n' -f 2
echo $l
echo "&"
l=`cat temporaryfiletxt | grep branch-misses` #cut -d $'\n' -f 2
echo $l
echo "&"
l=`cat temporaryfiletxt `
echo $l

echo "\\\\"

done
