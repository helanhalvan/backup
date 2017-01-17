#!/bin/bash

#6515 2000
#1809 800
#1133 400
#850  0
#900  80
#echo $w;
for i in {1,3,4,5}
do
#w==command
w="./main.enc.run $i ${1}_scenario.xml 0"

{ perf stat -x -a -d -d $w ; } 2> temporaryfiletxt_${i}
done

for i in {1,3,4,5}
do
l=`cat temporaryfiletxt_${i} | grep acycles`
echo $l
if [ "$i" != 5 ]; then
echo "&"
fi
done

echo "\\\\"

for i in {1,3,4,5}
do
l=`cat temporaryfiletxt_${i} | grep task-clock`
echo $l
if [ "$i" != 5 ]; then
echo "&"
fi
done

echo "\\\\"

for i in {1,3,4,5}
do
l=`cat temporaryfiletxt_${i} | grep LLC-load-misses` #cut -d $'\n' -f 2
echo $l
if [ "$i" != 5 ]; then
echo "&"
fi
done

echo "\\\\"

for i in {1,3,4,5}
do
l=`cat temporaryfiletxt_${i} | grep L1-dcache-load-misses` #cut -d $'\n' -f 2
echo $l
if [ "$i" != 5 ]; then
echo "&"
fi
done

for i in {1,3,4,5}
do
l=`cat temporaryfiletxt_${i} | grep branch-misses` #cut -d $'\n' -f 2
echo $l
if [ "$i" != 5 ]; then
echo "&"
fi
done

for i in {1,3,4,5}
do
l=`cat temporaryfiletxt_${i} `
echo $l
if [ "$i" != 5 ]; then
echo "&"
fi
done
