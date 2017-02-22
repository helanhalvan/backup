#!/bin/bash



#echo $w;
rm cores.txt
for i in {1,2,3,4,5,6,7,8} # {10,20,40,80,400,800,2000,4000}

do
echo $i

{ ./benchmark_encore.sh 400 ${i} ; } > l

{ echo $l ; } >> "cores.txt"

done
