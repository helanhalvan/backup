#!/bin/bash

#6515 2000
#1809 800
#1133 400
#850  0
#900  80
#echo $w;
# {2,3,4,5,6,7,8,9,10} #
for i in 3
do
#rm temporaryfiletxt_${i}
#rm temptimes_${i}
#w="./main.enc.run $i ${1}_scenario.xml 0"
w="./main.enc.run ${1}_scenario.xml 0 --ponythreads 8"
{ { perf stat -x -a -d -d $w ; } 2> temporaryfiletxt_${i} ; } > temptimes_${i}
done

w="./demo ${1}_scenario.xml --timing-mode --implementation=parallel --collision --heatmap=disabled"
{ { perf stat -x -a -d -d $w ; } 2> temporaryfiletxt_4 ; } > temptimes_4

#./demo 4000_scenario.xml --timing-mode --implementation=parallel --collision

#echo "SETUP DONE"

for i in {3,4} # {2,3,4,5,6,7,8,9,10}
do
l=`cat temptimes_${i}`
echo $l
if [ "$i" != 4 ]; then
echo "&"
fi
done

echo "\\\\"

for i in {3,4}
do
l=`cat temporaryfiletxt_${i} | grep acycles`
echo $l
if [ "$i" != 4 ]; then
echo "&"
fi
done

echo "\\\\"

for i in {3,4}
do
l=`cat temporaryfiletxt_${i} | grep task-clock`
echo $l
if [ "$i" != 4 ]; then
echo "&"
fi
done

echo "\\\\"

for i in {3,4}
do
l=`cat temporaryfiletxt_${i} | grep LLC-load-misses` #cut -d $'\n' -f 2
echo $l
if [ "$i" != 4 ]; then
echo "&"
fi
done

echo "\\\\"

for i in {3,4}
do
l=`cat temporaryfiletxt_${i} | grep L1-dcache-load-misses` #cut -d $'\n' -f 2
echo $l
if [ "$i" != 4 ]; then
echo "&"
fi
done

echo "\\\\"

for i in {3,4}
do
l=`cat temporaryfiletxt_${i} | grep branch-misses` #cut -d $'\n' -f 2
echo $l
if [ "$i" != 4 ]; then
echo "&"
fi
done

echo "\\\\"

for i in {3,4}
do
l=`cat temporaryfiletxt_${i} `
echo $l
if [ "$i" != 4 ]; then
echo "&"
fi
done
