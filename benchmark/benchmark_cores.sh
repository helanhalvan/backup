#!/bin/bash



#echo $w;
rm cores.txt
for i in {1,2,3,4} # {10,20,40,80,400,800,2000,4000}

do
echo $i

#l="$(./benchmark_encore.sh 2000 ${i})"
#echo $l
a="$( ./benchmark_encore.sh 4000 ${i} | egrep -o '[0-9]+[[:space:]]seconds' | egrep -o '[0-9]+' ; )"


#echo $l | egrep -o '[0-9]+[[:space:]]seconds'
b="$( ./benchmark_openmp.sh 4000 ${i} | egrep -o '[0-9]+[[:space:]]seconds' | egrep -o '[0-9]+' ; )"

#echo $l | egrep -o '[0-9]+[[:space:]]seconds' | egrep -o '[0-9]+'

echo "$a $b" >> "cores.txt"

done
