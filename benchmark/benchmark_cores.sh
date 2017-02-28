#!/bin/bash



#echo $w;
rm cores.txt
for i in {1,2,3,4} # {10,20,40,80,400,800,2000,4000}

do
echo $i

l="$(./benchmark_encore.sh 2000 ${i})"
#echo $l
{ echo $l | egrep -o '[0-9]+[[:space:]]seconds' | egrep -o '[0-9]+' ; } >> "cores.txt"
echo $l
echo $l | egrep -o '[0-9]+[[:space:]]seconds'
echo $l | egrep -o '[0-9]+[[:space:]]seconds' | egrep -o '[0-9]+' #[[:space:]]?seconds
done
