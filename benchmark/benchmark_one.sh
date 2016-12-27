#!/bin/bash



#echo $w;
for i in {10,20,40,80,400}
do
echo $i
echo "&"
#w==command
w="./main.enc.run $1 ${i}_scenario.xml 0"
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
    #echo "&"
fi
nr=$((nr + 1))
done

{ perf stat -a -d -d $w ; } 2> temporaryfiletxt
#l=`cat temporaryfiletxt`
l=`cat temporaryfiletxt | grep CPUs`
nr=0
for a in $l
do
if [ "$nr" == "7" ]; then
    echo $a
    echo "&"
fi
nr=$((nr + 1))
done
l=`cat temporaryfiletxt | cut -d $'\n' -f 2`
nr=0

for a in $l
do
#if [ "$nr" == "7" ]; then
    echo $a
    echo "&"
#fi
nr=$((nr + 1))
done

echo "\\\\"
done
