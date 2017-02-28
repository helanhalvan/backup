#!/bin/bash

#6515 2000
#1809 800
#1133 400
#850  0
#900  80
#echo $w;
# {2,3,4,5,6,7,8,9,10} #

#rm temporaryfiletxt_${i}
#rm temptimes_${i}
#w="./main.enc.run $i ${1}_scenario.xml 0"
w="./main.enc.run ${1}_scenario.xml 0 --ponythreads ${2}"
{ { perf stat -x -all-cpus -d -d $w ; } 2> temporaryfiletxt ; } > temptimes

#l=`cat temporaryfiletxt`
#echo $l

cat temptimes
cat temporaryfiletxt
